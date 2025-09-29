// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'k'
// Member 'p'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PreviewResponse in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__msg__PreviewResponse
{
  int32_t k_row;
  int32_t k_col;
  rosidl_runtime_c__double__Sequence k;
  int32_t p_row;
  int32_t p_col;
  rosidl_runtime_c__double__Sequence p;
} op3_online_walking_module_msgs__msg__PreviewResponse;

// Struct for a sequence of op3_online_walking_module_msgs__msg__PreviewResponse.
typedef struct op3_online_walking_module_msgs__msg__PreviewResponse__Sequence
{
  op3_online_walking_module_msgs__msg__PreviewResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__msg__PreviewResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_H_
