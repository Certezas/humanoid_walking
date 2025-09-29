// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/KinematicsPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__KinematicsPose
{
  rosidl_runtime_c__String name;
  double mov_time;
  geometry_msgs__msg__Pose pose;
} op3_online_walking_module_msgs__msg__KinematicsPose;

// Struct for a sequence of op3_online_walking_module_msgs__msg__KinematicsPose.
typedef struct op3_online_walking_module_msgs__msg__KinematicsPose__Sequence
{
  op3_online_walking_module_msgs__msg__KinematicsPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__KinematicsPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__STRUCT_H_
