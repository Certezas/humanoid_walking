// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'start_leg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FootStepCommand in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__FootStepCommand
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String start_leg;
  int32_t step_num;
  double step_time;
  double step_length;
  double side_length;
  double step_angle;
} op3_online_walking_module_msgs__msg__FootStepCommand;

// Struct for a sequence of op3_online_walking_module_msgs__msg__FootStepCommand.
typedef struct op3_online_walking_module_msgs__msg__FootStepCommand__Sequence
{
  op3_online_walking_module_msgs__msg__FootStepCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__FootStepCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_H_
