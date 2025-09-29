// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_tuning_module_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_H_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointOffsetData in the package op3_tuning_module_msgs.
typedef struct op3_tuning_module_msgs__msg__JointOffsetData
{
  rosidl_runtime_c__String joint_name;
  double goal_value;
  double offset_value;
  int32_t p_gain;
  int32_t i_gain;
  int32_t d_gain;
} op3_tuning_module_msgs__msg__JointOffsetData;

// Struct for a sequence of op3_tuning_module_msgs__msg__JointOffsetData.
typedef struct op3_tuning_module_msgs__msg__JointOffsetData__Sequence
{
  op3_tuning_module_msgs__msg__JointOffsetData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_tuning_module_msgs__msg__JointOffsetData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_H_
