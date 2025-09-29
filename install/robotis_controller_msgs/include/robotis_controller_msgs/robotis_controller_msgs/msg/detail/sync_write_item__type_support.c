// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotis_controller_msgs/msg/detail/sync_write_item__rosidl_typesupport_introspection_c.h"
#include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotis_controller_msgs/msg/detail/sync_write_item__functions.h"
#include "robotis_controller_msgs/msg/detail/sync_write_item__struct.h"


// Include directives for member types
// Member `item_name`
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__msg__SyncWriteItem__init(message_memory);
}

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_fini_function(void * message_memory)
{
  robotis_controller_msgs__msg__SyncWriteItem__fini(message_memory);
}

size_t robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__size_function__SyncWriteItem__joint_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__joint_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__joint_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__fetch_function__SyncWriteItem__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__joint_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__assign_function__SyncWriteItem__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__joint_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__resize_function__SyncWriteItem__joint_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__size_function__SyncWriteItem__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__fetch_function__SyncWriteItem__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__value(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__assign_function__SyncWriteItem__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__value(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__resize_function__SyncWriteItem__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_member_array[3] = {
  {
    "item_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__msg__SyncWriteItem, item_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__msg__SyncWriteItem, joint_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__size_function__SyncWriteItem__joint_name,  // size() function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__joint_name,  // get_const(index) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__joint_name,  // get(index) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__fetch_function__SyncWriteItem__joint_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__assign_function__SyncWriteItem__joint_name,  // assign(index, value) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__resize_function__SyncWriteItem__joint_name  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__msg__SyncWriteItem, value),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__size_function__SyncWriteItem__value,  // size() function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_const_function__SyncWriteItem__value,  // get_const(index) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__get_function__SyncWriteItem__value,  // get(index) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__fetch_function__SyncWriteItem__value,  // fetch(index, &value) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__assign_function__SyncWriteItem__value,  // assign(index, value) function pointer
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__resize_function__SyncWriteItem__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_members = {
  "robotis_controller_msgs__msg",  // message namespace
  "SyncWriteItem",  // message name
  3,  // number of fields
  sizeof(robotis_controller_msgs__msg__SyncWriteItem),
  robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_member_array,  // message members
  robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_type_support_handle = {
  0,
  &robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, msg, SyncWriteItem)() {
  if (!robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__msg__SyncWriteItem__rosidl_typesupport_introspection_c__SyncWriteItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
