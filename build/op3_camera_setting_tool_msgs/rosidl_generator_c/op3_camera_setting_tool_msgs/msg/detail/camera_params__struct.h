// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_H_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraParams in the package op3_camera_setting_tool_msgs.
/**
  * This represents the parameters of usb camera
 */
typedef struct op3_camera_setting_tool_msgs__msg__CameraParams
{
  /// 0 - 255, step = 1, default: 128
  uint32_t brightness;
  /// 0 - 255, step = 1, default: 128
  uint32_t contrast;
  /// 0 - 255, step = 1, default: 128
  uint32_t saturation;
  /// 0 - 255, step = 1, default: 128
  uint32_t sharpness;
  /// 0 - 255, step = 1, default: 0
  uint32_t gain;
  /// default: true
  bool focus_automatic_continuous;
  /// 0 - 250, step = 5, default: 0
  int32_t focus_absolute;
  /// 0 - 3, default: 3
  uint32_t auto_exposure;
  /// 3 - 2047, step = 1, default: 250
  uint32_t exposure_time_absolute;
  /// default: true
  bool white_balance_automatic;
  /// 2000 - 6500, step = 1, default: 4000
  uint32_t white_balance_temperature;
} op3_camera_setting_tool_msgs__msg__CameraParams;

// Struct for a sequence of op3_camera_setting_tool_msgs__msg__CameraParams.
typedef struct op3_camera_setting_tool_msgs__msg__CameraParams__Sequence
{
  op3_camera_setting_tool_msgs__msg__CameraParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_camera_setting_tool_msgs__msg__CameraParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_H_
