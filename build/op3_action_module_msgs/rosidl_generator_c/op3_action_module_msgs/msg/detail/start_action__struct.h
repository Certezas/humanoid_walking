// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_H_
#define OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name_array'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StartAction in the package op3_action_module_msgs.
typedef struct op3_action_module_msgs__msg__StartAction
{
  int32_t page_num;
  rosidl_runtime_c__String__Sequence joint_name_array;
} op3_action_module_msgs__msg__StartAction;

// Struct for a sequence of op3_action_module_msgs__msg__StartAction.
typedef struct op3_action_module_msgs__msg__StartAction__Sequence
{
  op3_action_module_msgs__msg__StartAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_action_module_msgs__msg__StartAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_H_
