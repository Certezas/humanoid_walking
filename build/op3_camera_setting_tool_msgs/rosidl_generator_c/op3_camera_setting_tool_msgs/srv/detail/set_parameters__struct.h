// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_camera_setting_tool_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
#define OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'params'
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.h"

/// Struct defined in srv/SetParameters in the package op3_camera_setting_tool_msgs.
typedef struct op3_camera_setting_tool_msgs__srv__SetParameters_Request
{
  op3_camera_setting_tool_msgs__msg__CameraParams params;
} op3_camera_setting_tool_msgs__srv__SetParameters_Request;

// Struct for a sequence of op3_camera_setting_tool_msgs__srv__SetParameters_Request.
typedef struct op3_camera_setting_tool_msgs__srv__SetParameters_Request__Sequence
{
  op3_camera_setting_tool_msgs__srv__SetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__srv__SetParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'returns'
// already included above
// #include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.h"

/// Struct defined in srv/SetParameters in the package op3_camera_setting_tool_msgs.
typedef struct op3_camera_setting_tool_msgs__srv__SetParameters_Response
{
  op3_camera_setting_tool_msgs__msg__CameraParams returns;
} op3_camera_setting_tool_msgs__srv__SetParameters_Response;

// Struct for a sequence of op3_camera_setting_tool_msgs__srv__SetParameters_Response.
typedef struct op3_camera_setting_tool_msgs__srv__SetParameters_Response__Sequence
{
  op3_camera_setting_tool_msgs__srv__SetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__srv__SetParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
