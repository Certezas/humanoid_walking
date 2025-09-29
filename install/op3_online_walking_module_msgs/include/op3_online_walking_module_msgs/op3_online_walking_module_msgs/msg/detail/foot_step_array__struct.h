// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT_FOOT'.
/**
  * Left foot constant
 */
enum
{
  op3_online_walking_module_msgs__msg__FootStepArray__LEFT_FOOT = 0l
};

/// Constant 'RIGHT_FOOT'.
/**
  * Right foot constant
 */
enum
{
  op3_online_walking_module_msgs__msg__FootStepArray__RIGHT_FOOT = 1l
};

// Include directives for member types
// Member 'moving_foot'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'data'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/FootStepArray in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__FootStepArray
{
  rosidl_runtime_c__int32__Sequence moving_foot;
  geometry_msgs__msg__Pose2D__Sequence data;
} op3_online_walking_module_msgs__msg__FootStepArray;

// Struct for a sequence of op3_online_walking_module_msgs__msg__FootStepArray.
typedef struct op3_online_walking_module_msgs__msg__FootStepArray__Sequence
{
  op3_online_walking_module_msgs__msg__FootStepArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__FootStepArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__STRUCT_H_
