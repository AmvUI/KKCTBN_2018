// Generated by gencpp from file whatever/override_motor.msg
// DO NOT EDIT!


#ifndef WHATEVER_MESSAGE_OVERRIDE_MOTOR_H
#define WHATEVER_MESSAGE_OVERRIDE_MOTOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace whatever
{
template <class ContainerAllocator>
struct override_motor_
{
  typedef override_motor_<ContainerAllocator> Type;

  override_motor_()
    : state(0)
    , setpoint(0)
    , steering(0)
    , throttle(0)  {
    }
  override_motor_(const ContainerAllocator& _alloc)
    : state(0)
    , setpoint(0)
    , steering(0)
    , throttle(0)  {
  (void)_alloc;
    }



   typedef int16_t _state_type;
  _state_type state;

   typedef int16_t _setpoint_type;
  _setpoint_type setpoint;

   typedef int16_t _steering_type;
  _steering_type steering;

   typedef int16_t _throttle_type;
  _throttle_type throttle;





  typedef boost::shared_ptr< ::whatever::override_motor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::whatever::override_motor_<ContainerAllocator> const> ConstPtr;

}; // struct override_motor_

typedef ::whatever::override_motor_<std::allocator<void> > override_motor;

typedef boost::shared_ptr< ::whatever::override_motor > override_motorPtr;
typedef boost::shared_ptr< ::whatever::override_motor const> override_motorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::whatever::override_motor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::whatever::override_motor_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace whatever

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'whatever': ['/home/amvui/AMV/src/whatever/msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::whatever::override_motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whatever::override_motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::override_motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::override_motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::override_motor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::override_motor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::whatever::override_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a869452c0c09cdbbd8802ed4974ea464";
  }

  static const char* value(const ::whatever::override_motor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa869452c0c09cdbbULL;
  static const uint64_t static_value2 = 0xd8802ed4974ea464ULL;
};

template<class ContainerAllocator>
struct DataType< ::whatever::override_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "whatever/override_motor";
  }

  static const char* value(const ::whatever::override_motor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::whatever::override_motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 state\n\
int16 setpoint\n\
int16 steering\n\
int16 throttle\n\
";
  }

  static const char* value(const ::whatever::override_motor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::whatever::override_motor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.setpoint);
      stream.next(m.steering);
      stream.next(m.throttle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct override_motor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::whatever::override_motor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::whatever::override_motor_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<int16_t>::stream(s, indent + "  ", v.state);
    s << indent << "setpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.setpoint);
    s << indent << "steering: ";
    Printer<int16_t>::stream(s, indent + "  ", v.steering);
    s << indent << "throttle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.throttle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHATEVER_MESSAGE_OVERRIDE_MOTOR_H
