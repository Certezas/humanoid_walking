// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_H_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'video_parameter'
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__struct.h"

/// Struct defined in msg/V4lParameters in the package op3_camera_setting_tool_msgs.
typedef struct op3_camera_setting_tool_msgs__msg__V4lParameters
{
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence video_parameter;
} op3_camera_setting_tool_msgs__msg__V4lParameters;

// Struct for a sequence of op3_camera_setting_tool_msgs__msg__V4lParameters.
typedef struct op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence
{
  op3_camera_setting_tool_msgs__msg__V4lParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_H_
