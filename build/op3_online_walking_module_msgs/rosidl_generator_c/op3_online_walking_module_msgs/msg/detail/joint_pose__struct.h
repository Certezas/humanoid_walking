// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in msg/JointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__JointPose
{
  double mov_time;
  sensor_msgs__msg__JointState pose;
} op3_online_walking_module_msgs__msg__JointPose;

// Struct for a sequence of op3_online_walking_module_msgs__msg__JointPose.
typedef struct op3_online_walking_module_msgs__msg__JointPose__Sequence
{
  op3_online_walking_module_msgs__msg__JointPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__JointPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__STRUCT_H_
