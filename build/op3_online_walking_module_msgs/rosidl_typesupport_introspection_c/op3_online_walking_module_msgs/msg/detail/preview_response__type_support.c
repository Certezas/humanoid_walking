// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_online_walking_module_msgs/msg/detail/preview_response__rosidl_typesupport_introspection_c.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_online_walking_module_msgs/msg/detail/preview_response__functions.h"
#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.h"


// Include directives for member types
// Member `k`
// Member `p`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_online_walking_module_msgs__msg__PreviewResponse__init(message_memory);
}

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_fini_function(void * message_memory)
{
  op3_online_walking_module_msgs__msg__PreviewResponse__fini(message_memory);
}

size_t op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__size_function__PreviewResponse__k(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__k(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__k(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__fetch_function__PreviewResponse__k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__k(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__assign_function__PreviewResponse__k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__k(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__resize_function__PreviewResponse__k(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__size_function__PreviewResponse__p(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__p(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__p(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__fetch_function__PreviewResponse__p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__p(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__assign_function__PreviewResponse__p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__p(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__resize_function__PreviewResponse__p(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_member_array[6] = {
  {
    "k_row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, k_row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k_col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, k_col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, k),  // bytes offset in struct
    NULL,  // default value
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__size_function__PreviewResponse__k,  // size() function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__k,  // get_const(index) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__k,  // get(index) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__fetch_function__PreviewResponse__k,  // fetch(index, &value) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__assign_function__PreviewResponse__k,  // assign(index, value) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__resize_function__PreviewResponse__k  // resize(index) function pointer
  },
  {
    "p_row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, p_row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p_col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, p_col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__PreviewResponse, p),  // bytes offset in struct
    NULL,  // default value
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__size_function__PreviewResponse__p,  // size() function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_const_function__PreviewResponse__p,  // get_const(index) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__get_function__PreviewResponse__p,  // get(index) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__fetch_function__PreviewResponse__p,  // fetch(index, &value) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__assign_function__PreviewResponse__p,  // assign(index, value) function pointer
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__resize_function__PreviewResponse__p  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_members = {
  "op3_online_walking_module_msgs__msg",  // message namespace
  "PreviewResponse",  // message name
  6,  // number of fields
  sizeof(op3_online_walking_module_msgs__msg__PreviewResponse),
  op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_member_array,  // message members
  op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_type_support_handle = {
  0,
  &op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_online_walking_module_msgs, msg, PreviewResponse)() {
  if (!op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_type_support_handle.typesupport_identifier) {
    op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_online_walking_module_msgs__msg__PreviewResponse__rosidl_typesupport_introspection_c__PreviewResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
