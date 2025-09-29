// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__rosidl_typesupport_introspection_c.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__functions.h"
#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__struct.h"


// Include directives for member types
// Member `moving_foot`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "geometry_msgs/msg/pose2_d.h"
// Member `data`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_online_walking_module_msgs__msg__FootStepArray__init(message_memory);
}

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_fini_function(void * message_memory)
{
  op3_online_walking_module_msgs__msg__FootStepArray__fini(message_memory);
}

size_t op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__size_function__FootStepArray__moving_foot(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__moving_foot(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__moving_foot(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__fetch_function__FootStepArray__moving_foot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__moving_foot(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__assign_function__FootStepArray__moving_foot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__moving_foot(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__resize_function__FootStepArray__moving_foot(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__size_function__FootStepArray__data(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__data(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__data(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__fetch_function__FootStepArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__data(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__assign_function__FootStepArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__data(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__resize_function__FootStepArray__data(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_member_array[2] = {
  {
    "moving_foot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__FootStepArray, moving_foot),  // bytes offset in struct
    NULL,  // default value
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__size_function__FootStepArray__moving_foot,  // size() function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__moving_foot,  // get_const(index) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__moving_foot,  // get(index) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__fetch_function__FootStepArray__moving_foot,  // fetch(index, &value) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__assign_function__FootStepArray__moving_foot,  // assign(index, value) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__resize_function__FootStepArray__moving_foot  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__FootStepArray, data),  // bytes offset in struct
    NULL,  // default value
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__size_function__FootStepArray__data,  // size() function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_const_function__FootStepArray__data,  // get_const(index) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__get_function__FootStepArray__data,  // get(index) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__fetch_function__FootStepArray__data,  // fetch(index, &value) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__assign_function__FootStepArray__data,  // assign(index, value) function pointer
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__resize_function__FootStepArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_members = {
  "op3_online_walking_module_msgs__msg",  // message namespace
  "FootStepArray",  // message name
  2,  // number of fields
  sizeof(op3_online_walking_module_msgs__msg__FootStepArray),
  op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_member_array,  // message members
  op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_type_support_handle = {
  0,
  &op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_online_walking_module_msgs, msg, FootStepArray)() {
  op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_type_support_handle.typesupport_identifier) {
    op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_online_walking_module_msgs__msg__FootStepArray__rosidl_typesupport_introspection_c__FootStepArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
