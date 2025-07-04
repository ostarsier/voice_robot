// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_proto:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
#define MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'effort'
// Member 'stiffness'
// Member 'damping'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointCommand in the package my_ros2_proto.
typedef struct my_ros2_proto__msg__JointCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence effort;
  rosidl_runtime_c__double__Sequence stiffness;
  rosidl_runtime_c__double__Sequence damping;
} my_ros2_proto__msg__JointCommand;

// Struct for a sequence of my_ros2_proto__msg__JointCommand.
typedef struct my_ros2_proto__msg__JointCommand__Sequence
{
  my_ros2_proto__msg__JointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_proto__msg__JointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
