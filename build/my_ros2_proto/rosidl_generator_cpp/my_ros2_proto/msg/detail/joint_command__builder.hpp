// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_proto:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
#define MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_proto/msg/detail/joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_proto
{

namespace msg
{

namespace builder
{

class Init_JointCommand_damping
{
public:
  explicit Init_JointCommand_damping(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  ::my_ros2_proto::msg::JointCommand damping(::my_ros2_proto::msg::JointCommand::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_stiffness
{
public:
  explicit Init_JointCommand_stiffness(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_damping stiffness(::my_ros2_proto::msg::JointCommand::_stiffness_type arg)
  {
    msg_.stiffness = std::move(arg);
    return Init_JointCommand_damping(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_effort
{
public:
  explicit Init_JointCommand_effort(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_stiffness effort(::my_ros2_proto::msg::JointCommand::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_JointCommand_stiffness(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_velocity
{
public:
  explicit Init_JointCommand_velocity(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_effort velocity(::my_ros2_proto::msg::JointCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointCommand_effort(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_position
{
public:
  explicit Init_JointCommand_position(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_velocity position(::my_ros2_proto::msg::JointCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointCommand_velocity(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_name
{
public:
  explicit Init_JointCommand_name(::my_ros2_proto::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_position name(::my_ros2_proto::msg::JointCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointCommand_position(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

class Init_JointCommand_header
{
public:
  Init_JointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCommand_name header(::my_ros2_proto::msg::JointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCommand_name(msg_);
  }

private:
  ::my_ros2_proto::msg::JointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_proto::msg::JointCommand>()
{
  return my_ros2_proto::msg::builder::Init_JointCommand_header();
}

}  // namespace my_ros2_proto

#endif  // MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
