// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT_FOOT_SWING'.
/**
  * Left foot constant
 */
enum
{
  op3_online_walking_module_msgs__msg__Step2D__LEFT_FOOT_SWING = 1
};

/// Constant 'RIGHT_FOOT_SWING'.
/**
  * Right foot constant
 */
enum
{
  op3_online_walking_module_msgs__msg__Step2D__RIGHT_FOOT_SWING = 2
};

/// Constant 'STANDING'.
/**
  * Standing constant
 */
enum
{
  op3_online_walking_module_msgs__msg__Step2D__STANDING = 3
};

// Include directives for member types
// Member 'step2d'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Step2D in the package op3_online_walking_module_msgs.
/**
  * 2D StepData
 */
typedef struct op3_online_walking_module_msgs__msg__Step2D
{
  /// step pose as relative offset to last leg
  geometry_msgs__msg__Pose2D step2d;
  /// which leg to be used (left/right/no, see below)
  uint8_t moving_foot;
} op3_online_walking_module_msgs__msg__Step2D;

// Struct for a sequence of op3_online_walking_module_msgs__msg__Step2D.
typedef struct op3_online_walking_module_msgs__msg__Step2D__Sequence
{
  op3_online_walking_module_msgs__msg__Step2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__Step2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_H_
