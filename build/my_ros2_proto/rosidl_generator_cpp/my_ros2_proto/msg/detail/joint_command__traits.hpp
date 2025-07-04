// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_proto:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
#define MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_proto/msg/detail/joint_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace my_ros2_proto
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: effort
  {
    if (msg.effort.size() == 0) {
      out << "effort: []";
    } else {
      out << "effort: [";
      size_t pending_items = msg.effort.size();
      for (auto item : msg.effort) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stiffness
  {
    if (msg.stiffness.size() == 0) {
      out << "stiffness: []";
    } else {
      out << "stiffness: [";
      size_t pending_items = msg.stiffness.size();
      for (auto item : msg.stiffness) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: damping
  {
    if (msg.damping.size() == 0) {
      out << "damping: []";
    } else {
      out << "damping: [";
      size_t pending_items = msg.damping.size();
      for (auto item : msg.damping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.effort.size() == 0) {
      out << "effort: []\n";
    } else {
      out << "effort:\n";
      for (auto item : msg.effort) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stiffness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stiffness.size() == 0) {
      out << "stiffness: []\n";
    } else {
      out << "stiffness:\n";
      for (auto item : msg.stiffness) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.damping.size() == 0) {
      out << "damping: []\n";
    } else {
      out << "damping:\n";
      for (auto item : msg.damping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_ros2_proto

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_proto::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_proto::msg::JointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_proto::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_proto::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_proto::msg::JointCommand & msg)
{
  return my_ros2_proto::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_proto::msg::JointCommand>()
{
  return "my_ros2_proto::msg::JointCommand";
}

template<>
inline const char * name<my_ros2_proto::msg::JointCommand>()
{
  return "my_ros2_proto/msg/JointCommand";
}

template<>
struct has_fixed_size<my_ros2_proto::msg::JointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_ros2_proto::msg::JointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_ros2_proto::msg::JointCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
