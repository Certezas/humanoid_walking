// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_
#define OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WalkingParam in the package op3_walking_module_msgs.
/**
  * walking init pose #######
 */
typedef struct op3_walking_module_msgs__msg__WalkingParam
{
  float init_x_offset;
  float init_y_offset;
  float init_z_offset;
  float init_roll_offset;
  float init_pitch_offset;
  float init_yaw_offset;
  /// time parameter #####
  float period_time;
  float dsp_ratio;
  float step_fb_ratio;
  /// walking parameter ########
  float x_move_amplitude;
  float y_move_amplitude;
  float z_move_amplitude;
  float angle_move_amplitude;
  bool move_aim_on;
  /// balance parameter ##########
  bool balance_enable;
  float balance_hip_roll_gain;
  float balance_knee_gain;
  float balance_ankle_roll_gain;
  float balance_ankle_pitch_gain;
  float y_swap_amplitude;
  float z_swap_amplitude;
  float arm_swing_gain;
  float pelvis_offset;
  float hip_pitch_offset;
  /// gain parameter ##########
  int32_t p_gain;
  int32_t i_gain;
  int32_t d_gain;
} op3_walking_module_msgs__msg__WalkingParam;

// Struct for a sequence of op3_walking_module_msgs__msg__WalkingParam.
typedef struct op3_walking_module_msgs__msg__WalkingParam__Sequence
{
  op3_walking_module_msgs__msg__WalkingParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__msg__WalkingParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_H_
