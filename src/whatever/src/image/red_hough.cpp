#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include <stdio.h>
#include "../../include/whatever/haha.hpp"
#include "whatever/override_motor.h"

using namespace std;
using namespace cv;

namespace patch{
    template<typename T> std::string to_string(const T& n){
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

Mat Original;
Mat imgOriginal, imgHSV, imgThresholded, imgErode, imgDilate;

int sum_x;
int sum_y;
int count_circle;
int state;

void imageProcessing();

whatever::override_motor image;
ros::Publisher pub_state_camera;

void imageCallback(const sensor_msgs::CompressedImageConstPtr& msg)
{
  try
  {
    Original = cv::imdecode(cv::Mat(msg->data),1);//convert compressed image data to cv::Mat
    waitKey(10);
    imageProcessing();
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert to image!");
  }
}

int main(int argc, char **argv){
	ros::init(argc, argv, "videoRec");
	ros::NodeHandle nh;
	cv::startWindowThread();
	
	image_transport::ImageTransport it(nh);
	
	pub_state_camera 	= nh.advertise<whatever::override_motor>("/kkctbn/override/motor", 1);
	ros::Subscriber sub = nh.subscribe("camera/image/compressed", 1, imageCallback);

	namedWindow("panel_red", CV_WINDOW_AUTOSIZE);
	
	createTrackbar("LowH", "panel_red", &LowH_red, 255);
	createTrackbar("HighH", "panel_red", &HighH_red, 255);
	createTrackbar("LowS", "panel_red", &LowS_red, 255); 
	createTrackbar("HighS", "panel_red", &HighS_red, 255);
	createTrackbar("LowV", "panel_red", &LowV_red, 255);
	createTrackbar("HighV", "panel_red", &HighV_red, 255);
	createTrackbar("MaxRadius", "panel_red", &max_radius_red, 1000);
	createTrackbar("MinRadius", "panel_red", &min_radius_red, 1000);
	createTrackbar("noise", "panel_red", &Noise_red, 255);
	
	while (ros::ok()) {
		ros::spinOnce();
	}
}

void imageProcessing(){
	sum_x = 0;
	sum_y = 0;
	count_circle = 0;
		
	imgOriginal = Original.clone();
	medianBlur(imgOriginal, imgOriginal, 5);
		
	cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV);
	inRange(imgHSV, Scalar(LowH_red, LowS_red, LowV_red), Scalar(HighH_red, HighS_red, HighV_red), imgThresholded);//range threshold
		
	erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(Noise_red, Noise_red)) );
	dilate( imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(Noise_red, Noise_red)) ); 
		
	dilate(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(Noise_red, Noise_red)) ); 
	erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(Noise_red, Noise_red)) ); 
		
	GaussianBlur(imgThresholded, imgThresholded, Size(9, 9), 2, 2);
		
	vector<Vec3f> circles;
	HoughCircles(imgThresholded, circles, HOUGH_GRADIENT, 1,
		imgThresholded.rows/16, 
		100, 30, min_radius_red, max_radius_red);
		
	for (size_t i = 0; i < circles.size(); i++ ){
		int x = round(circles[i][0]);
		int y = round(circles[i][1]);
		Point center(x, y);
		int radius = round(circles[i][2]);
		circle(Original, center, radius, Scalar(255,0,255), 3, LINE_AA);
		string strX = patch::to_string(x);
		string strY = patch::to_string(y);
		putText(Original, strX + " , " + strY, Point(x-radius/2, y), 
				FONT_HERSHEY_SIMPLEX, 0.3, Scalar(50, 255, 100), 1);
		sum_x = sum_x + x;
		sum_y = sum_y + y;
		count_circle++;
	}
	//cout<<count_circle<<endl;
	if(count_circle > 0){
		state = sum_x/count_circle;
	}
	else{
		state = 0;
	}
	image.state_red = state;
	image.count_red = count_circle;
	pub_state_camera.publish(image);
	
	imshow("Threshold_Red", imgThresholded);
	imshow("Original_Red", Original); 
}