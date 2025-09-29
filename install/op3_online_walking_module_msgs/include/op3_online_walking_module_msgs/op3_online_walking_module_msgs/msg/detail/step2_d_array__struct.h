// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'footsteps_2d'
#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.h"

/// Struct defined in msg/Step2DArray in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__Step2DArray
{
  double step_time;
  op3_online_walking_module_msgs__msg__Step2D__Sequence footsteps_2d;
} op3_online_walking_module_msgs__msg__Step2DArray;

// Struct for a sequence of op3_online_walking_module_msgs__msg__Step2DArray.
typedef struct op3_online_walking_module_msgs__msg__Step2DArray__Sequence
{
  op3_online_walking_module_msgs__msg__Step2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__Step2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_H_
