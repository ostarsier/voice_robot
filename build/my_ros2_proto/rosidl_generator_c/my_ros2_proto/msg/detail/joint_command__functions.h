// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_ros2_proto:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__FUNCTIONS_H_
#define MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_ros2_proto/msg/rosidl_generator_c__visibility_control.h"

#include "my_ros2_proto/msg/detail/joint_command__struct.h"

/// Initialize msg/JointCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_ros2_proto__msg__JointCommand
 * )) before or use
 * my_ros2_proto__msg__JointCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__init(my_ros2_proto__msg__JointCommand * msg);

/// Finalize msg/JointCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
void
my_ros2_proto__msg__JointCommand__fini(my_ros2_proto__msg__JointCommand * msg);

/// Create msg/JointCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_ros2_proto__msg__JointCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
my_ros2_proto__msg__JointCommand *
my_ros2_proto__msg__JointCommand__create();

/// Destroy msg/JointCommand message.
/**
 * It calls
 * my_ros2_proto__msg__JointCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
void
my_ros2_proto__msg__JointCommand__destroy(my_ros2_proto__msg__JointCommand * msg);

/// Check for msg/JointCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__are_equal(const my_ros2_proto__msg__JointCommand * lhs, const my_ros2_proto__msg__JointCommand * rhs);

/// Copy a msg/JointCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__copy(
  const my_ros2_proto__msg__JointCommand * input,
  my_ros2_proto__msg__JointCommand * output);

/// Initialize array of msg/JointCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_ros2_proto__msg__JointCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__Sequence__init(my_ros2_proto__msg__JointCommand__Sequence * array, size_t size);

/// Finalize array of msg/JointCommand messages.
/**
 * It calls
 * my_ros2_proto__msg__JointCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
void
my_ros2_proto__msg__JointCommand__Sequence__fini(my_ros2_proto__msg__JointCommand__Sequence * array);

/// Create array of msg/JointCommand messages.
/**
 * It allocates the memory for the array and calls
 * my_ros2_proto__msg__JointCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
my_ros2_proto__msg__JointCommand__Sequence *
my_ros2_proto__msg__JointCommand__Sequence__create(size_t size);

/// Destroy array of msg/JointCommand messages.
/**
 * It calls
 * my_ros2_proto__msg__JointCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
void
my_ros2_proto__msg__JointCommand__Sequence__destroy(my_ros2_proto__msg__JointCommand__Sequence * array);

/// Check for msg/JointCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__Sequence__are_equal(const my_ros2_proto__msg__JointCommand__Sequence * lhs, const my_ros2_proto__msg__JointCommand__Sequence * rhs);

/// Copy an array of msg/JointCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_ros2_proto
bool
my_ros2_proto__msg__JointCommand__Sequence__copy(
  const my_ros2_proto__msg__JointCommand__Sequence * input,
  my_ros2_proto__msg__JointCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PROTO__MSG__DETAIL__JOINT_COMMAND__FUNCTIONS_H_
