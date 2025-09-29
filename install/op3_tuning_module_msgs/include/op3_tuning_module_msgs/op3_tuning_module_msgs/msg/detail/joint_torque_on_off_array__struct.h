// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_H_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'torque_enable_data'
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off__struct.h"

/// Struct defined in msg/JointTorqueOnOffArray in the package op3_tuning_module_msgs.
typedef struct op3_tuning_module_msgs__msg__JointTorqueOnOffArray
{
  op3_tuning_module_msgs__msg__JointTorqueOnOff__Sequence torque_enable_data;
} op3_tuning_module_msgs__msg__JointTorqueOnOffArray;

// Struct for a sequence of op3_tuning_module_msgs__msg__JointTorqueOnOffArray.
typedef struct op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence
{
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_H_
