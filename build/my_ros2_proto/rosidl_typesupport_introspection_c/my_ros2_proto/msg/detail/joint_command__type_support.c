// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_ros2_proto:msg/JointCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_ros2_proto/msg/detail/joint_command__rosidl_typesupport_introspection_c.h"
#include "my_ros2_proto/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_ros2_proto/msg/detail/joint_command__functions.h"
#include "my_ros2_proto/msg/detail/joint_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
// Member `stiffness`
// Member `damping`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_proto__msg__JointCommand__init(message_memory);
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function(void * message_memory)
{
  my_ros2_proto__msg__JointCommand__fini(message_memory);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__effort(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__effort(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__effort(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__effort(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__effort(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__effort(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__stiffness(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__stiffness(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__stiffness(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__stiffness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__stiffness(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__stiffness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__stiffness(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__stiffness(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__damping(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__damping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__damping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__damping(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__damping(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__damping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, name),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__name,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__name,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__name,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__name,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__name,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, position),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__position,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__position,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__position,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__position,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__position,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, velocity),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__velocity,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__velocity,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__velocity,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__velocity,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__velocity,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, effort),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__effort,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__effort,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__effort,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__effort,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__effort,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__effort  // resize(index) function pointer
  },
  {
    "stiffness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, stiffness),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__stiffness,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__stiffness,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__stiffness,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__stiffness,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__stiffness,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__stiffness  // resize(index) function pointer
  },
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_proto__msg__JointCommand, damping),  // bytes offset in struct
    NULL,  // default value
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__size_function__JointCommand__damping,  // size() function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_const_function__JointCommand__damping,  // get_const(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__get_function__JointCommand__damping,  // get(index) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__fetch_function__JointCommand__damping,  // fetch(index, &value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__assign_function__JointCommand__damping,  // assign(index, value) function pointer
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__resize_function__JointCommand__damping  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members = {
  "my_ros2_proto__msg",  // message namespace
  "JointCommand",  // message name
  7,  // number of fields
  sizeof(my_ros2_proto__msg__JointCommand),
  my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array,  // message members
  my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle = {
  0,
  &my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_proto
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_proto, msg, JointCommand)() {
  my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier) {
    my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_ros2_proto__msg__JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
