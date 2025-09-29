// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WalkingParam in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__WalkingParam
{
  double dsp_ratio;
  double lipm_height;
  double foot_height_max;
  double zmp_offset_x;
  double zmp_offset_y;
} op3_online_walking_module_msgs__msg__WalkingParam;

// Struct for a sequence of op3_online_walking_module_msgs__msg__WalkingParam.
typedef struct op3_online_walking_module_msgs__msg__WalkingParam__Sequence
{
  op3_online_walking_module_msgs__msg__WalkingParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__WalkingParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_
