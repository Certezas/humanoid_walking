// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__rosidl_typesupport_introspection_c.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__functions.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.h"


// Include directives for member types
// Member `footsteps_2d`
#include "op3_online_walking_module_msgs/msg/step2_d.h"
// Member `footsteps_2d`
#include "op3_online_walking_module_msgs/msg/detail/step2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_online_walking_module_msgs__msg__Step2DArray__init(message_memory);
}

void op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_fini_function(void * message_memory)
{
  op3_online_walking_module_msgs__msg__Step2DArray__fini(message_memory);
}

size_t op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__size_function__Step2DArray__footsteps_2d(
  const void * untyped_member)
{
  const op3_online_walking_module_msgs__msg__Step2D__Sequence * member =
    (const op3_online_walking_module_msgs__msg__Step2D__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_const_function__Step2DArray__footsteps_2d(
  const void * untyped_member, size_t index)
{
  const op3_online_walking_module_msgs__msg__Step2D__Sequence * member =
    (const op3_online_walking_module_msgs__msg__Step2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_function__Step2DArray__footsteps_2d(
  void * untyped_member, size_t index)
{
  op3_online_walking_module_msgs__msg__Step2D__Sequence * member =
    (op3_online_walking_module_msgs__msg__Step2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__fetch_function__Step2DArray__footsteps_2d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const op3_online_walking_module_msgs__msg__Step2D * item =
    ((const op3_online_walking_module_msgs__msg__Step2D *)
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_const_function__Step2DArray__footsteps_2d(untyped_member, index));
  op3_online_walking_module_msgs__msg__Step2D * value =
    (op3_online_walking_module_msgs__msg__Step2D *)(untyped_value);
  *value = *item;
}

void op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__assign_function__Step2DArray__footsteps_2d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  op3_online_walking_module_msgs__msg__Step2D * item =
    ((op3_online_walking_module_msgs__msg__Step2D *)
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_function__Step2DArray__footsteps_2d(untyped_member, index));
  const op3_online_walking_module_msgs__msg__Step2D * value =
    (const op3_online_walking_module_msgs__msg__Step2D *)(untyped_value);
  *item = *value;
}

bool op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__resize_function__Step2DArray__footsteps_2d(
  void * untyped_member, size_t size)
{
  op3_online_walking_module_msgs__msg__Step2D__Sequence * member =
    (op3_online_walking_module_msgs__msg__Step2D__Sequence *)(untyped_member);
  op3_online_walking_module_msgs__msg__Step2D__Sequence__fini(member);
  return op3_online_walking_module_msgs__msg__Step2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_member_array[2] = {
  {
    "step_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__Step2DArray, step_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footsteps_2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__Step2DArray, footsteps_2d),  // bytes offset in struct
    NULL,  // default value
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__size_function__Step2DArray__footsteps_2d,  // size() function pointer
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_const_function__Step2DArray__footsteps_2d,  // get_const(index) function pointer
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__get_function__Step2DArray__footsteps_2d,  // get(index) function pointer
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__fetch_function__Step2DArray__footsteps_2d,  // fetch(index, &value) function pointer
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__assign_function__Step2DArray__footsteps_2d,  // assign(index, value) function pointer
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__resize_function__Step2DArray__footsteps_2d  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_members = {
  "op3_online_walking_module_msgs__msg",  // message namespace
  "Step2DArray",  // message name
  2,  // number of fields
  sizeof(op3_online_walking_module_msgs__msg__Step2DArray),
  op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_member_array,  // message members
  op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_type_support_handle = {
  0,
  &op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_online_walking_module_msgs, msg, Step2DArray)() {
  op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_online_walking_module_msgs, msg, Step2D)();
  if (!op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_type_support_handle.typesupport_identifier) {
    op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_online_walking_module_msgs__msg__Step2DArray__rosidl_typesupport_introspection_c__Step2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
