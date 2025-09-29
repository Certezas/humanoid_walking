// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOff.idl
// generated code does not contain a copyright notice

#ifndef OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_H_
#define OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_H_

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

/// Struct defined in msg/JointTorqueOnOff in the package op3_offset_tuner_msgs.
typedef struct op3_offset_tuner_msgs__msg__JointTorqueOnOff
{
  rosidl_runtime_c__String joint_name;
  bool torque_enable;
} op3_offset_tuner_msgs__msg__JointTorqueOnOff;

// Struct for a sequence of op3_offset_tuner_msgs__msg__JointTorqueOnOff.
typedef struct op3_offset_tuner_msgs__msg__JointTorqueOnOff__Sequence
{
  op3_offset_tuner_msgs__msg__JointTorqueOnOff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_offset_tuner_msgs__msg__JointTorqueOnOff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_H_
