// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_H_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BallDetectorParams in the package op3_ball_detector_msgs.
/**
  * This represents the parameters of ball_detector
 */
typedef struct op3_ball_detector_msgs__msg__BallDetectorParams
{
  /// only odd number, 1 - 11
  uint32_t gaussian_blur_size;
  /// 1 - 5
  float gaussian_blur_sigma;
  /// 50 - 200
  float canny_edge_th;
  /// 1 - 8
  float hough_accum_resolution;
  /// 10 - 200
  float hough_accum_th;
  /// 10 - 200
  float min_circle_dist;
  /// 10 - 200
  uint32_t min_radius;
  /// 100 - 600
  uint32_t max_radius;
  /// 0 - 359
  uint32_t filter_h_min;
  uint32_t filter_h_max;
  /// 0 - 255
  uint32_t filter_s_min;
  uint32_t filter_s_max;
  /// 0 - 255
  uint32_t filter_v_min;
  uint32_t filter_v_max;
  /// 1 - 9
  uint32_t ellipse_size;
} op3_ball_detector_msgs__msg__BallDetectorParams;

// Struct for a sequence of op3_ball_detector_msgs__msg__BallDetectorParams.
typedef struct op3_ball_detector_msgs__msg__BallDetectorParams__Sequence
{
  op3_ball_detector_msgs__msg__BallDetectorParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__msg__BallDetectorParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_H_
