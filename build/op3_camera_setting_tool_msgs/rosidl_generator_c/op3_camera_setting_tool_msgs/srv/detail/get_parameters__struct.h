// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_camera_setting_tool_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
#define OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetParameters in the package op3_camera_setting_tool_msgs.
typedef struct op3_camera_setting_tool_msgs__srv__GetParameters_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_camera_setting_tool_msgs__srv__GetParameters_Request;

// Struct for a sequence of op3_camera_setting_tool_msgs__srv__GetParameters_Request.
typedef struct op3_camera_setting_tool_msgs__srv__GetParameters_Request__Sequence
{
  op3_camera_setting_tool_msgs__srv__GetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__srv__GetParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'returns'
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.h"

/// Struct defined in srv/GetParameters in the package op3_camera_setting_tool_msgs.
typedef struct op3_camera_setting_tool_msgs__srv__GetParameters_Response
{
  op3_camera_setting_tool_msgs__msg__CameraParams returns;
} op3_camera_setting_tool_msgs__srv__GetParameters_Response;

// Struct for a sequence of op3_camera_setting_tool_msgs__srv__GetParameters_Response.
typedef struct op3_camera_setting_tool_msgs__srv__GetParameters_Response__Sequence
{
  op3_camera_setting_tool_msgs__srv__GetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__srv__GetParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
