# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amvui/AMV/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amvui/AMV/build

# Utility rule file for whatever_generate_messages_cpp.

# Include the progress variables for this target.
include whatever/CMakeFiles/whatever_generate_messages_cpp.dir/progress.make

whatever/CMakeFiles/whatever_generate_messages_cpp: /home/amvui/AMV/devel/include/whatever/node_master.h
whatever/CMakeFiles/whatever_generate_messages_cpp: /home/amvui/AMV/devel/include/whatever/override_motor.h


/home/amvui/AMV/devel/include/whatever/node_master.h: /opt/ros/kinetic/lib/gencpp/gen_cpp.py
/home/amvui/AMV/devel/include/whatever/node_master.h: /home/amvui/AMV/src/whatever/msg/node_master.msg
/home/amvui/AMV/devel/include/whatever/node_master.h: /opt/ros/kinetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/amvui/AMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C++ code from whatever/node_master.msg"
	cd /home/amvui/AMV/src/whatever && /home/amvui/AMV/build/catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/amvui/AMV/src/whatever/msg/node_master.msg -Iwhatever:/home/amvui/AMV/src/whatever/msg -Imavros_msgs:/opt/ros/kinetic/share/mavros_msgs/cmake/../msg -Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg -Igeographic_msgs:/opt/ros/kinetic/share/geographic_msgs/cmake/../msg -Iuuid_msgs:/opt/ros/kinetic/share/uuid_msgs/cmake/../msg -p whatever -o /home/amvui/AMV/devel/include/whatever -e /opt/ros/kinetic/share/gencpp/cmake/..

/home/amvui/AMV/devel/include/whatever/override_motor.h: /opt/ros/kinetic/lib/gencpp/gen_cpp.py
/home/amvui/AMV/devel/include/whatever/override_motor.h: /home/amvui/AMV/src/whatever/msg/override_motor.msg
/home/amvui/AMV/devel/include/whatever/override_motor.h: /opt/ros/kinetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/amvui/AMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating C++ code from whatever/override_motor.msg"
	cd /home/amvui/AMV/src/whatever && /home/amvui/AMV/build/catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/amvui/AMV/src/whatever/msg/override_motor.msg -Iwhatever:/home/amvui/AMV/src/whatever/msg -Imavros_msgs:/opt/ros/kinetic/share/mavros_msgs/cmake/../msg -Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg -Igeographic_msgs:/opt/ros/kinetic/share/geographic_msgs/cmake/../msg -Iuuid_msgs:/opt/ros/kinetic/share/uuid_msgs/cmake/../msg -p whatever -o /home/amvui/AMV/devel/include/whatever -e /opt/ros/kinetic/share/gencpp/cmake/..

whatever_generate_messages_cpp: whatever/CMakeFiles/whatever_generate_messages_cpp
whatever_generate_messages_cpp: /home/amvui/AMV/devel/include/whatever/node_master.h
whatever_generate_messages_cpp: /home/amvui/AMV/devel/include/whatever/override_motor.h
whatever_generate_messages_cpp: whatever/CMakeFiles/whatever_generate_messages_cpp.dir/build.make

.PHONY : whatever_generate_messages_cpp

# Rule to build all files generated by this target.
whatever/CMakeFiles/whatever_generate_messages_cpp.dir/build: whatever_generate_messages_cpp

.PHONY : whatever/CMakeFiles/whatever_generate_messages_cpp.dir/build

whatever/CMakeFiles/whatever_generate_messages_cpp.dir/clean:
	cd /home/amvui/AMV/build/whatever && $(CMAKE_COMMAND) -P CMakeFiles/whatever_generate_messages_cpp.dir/cmake_clean.cmake
.PHONY : whatever/CMakeFiles/whatever_generate_messages_cpp.dir/clean

whatever/CMakeFiles/whatever_generate_messages_cpp.dir/depend:
	cd /home/amvui/AMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amvui/AMV/src /home/amvui/AMV/src/whatever /home/amvui/AMV/build /home/amvui/AMV/build/whatever /home/amvui/AMV/build/whatever/CMakeFiles/whatever_generate_messages_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : whatever/CMakeFiles/whatever_generate_messages_cpp.dir/depend
