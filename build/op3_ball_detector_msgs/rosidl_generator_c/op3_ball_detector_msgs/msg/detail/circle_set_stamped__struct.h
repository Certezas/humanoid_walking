// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_H_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'circles'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/CircleSetStamped in the package op3_ball_detector_msgs.
/**
  * This represents the set of detected circles
 */
typedef struct op3_ball_detector_msgs__msg__CircleSetStamped
{
  /// timestamp and frame id of the image frame
  std_msgs__msg__Header header;
  /// set of detected circles:
  ///       (circles[i].x, circles[i].y) is the center point in image coordinates
  ///       circles[i].z is the circle radius
  geometry_msgs__msg__Point__Sequence circles;
} op3_ball_detector_msgs__msg__CircleSetStamped;

// Struct for a sequence of op3_ball_detector_msgs__msg__CircleSetStamped.
typedef struct op3_ball_detector_msgs__msg__CircleSetStamped__Sequence
{
  op3_ball_detector_msgs__msg__CircleSetStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__msg__CircleSetStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_H_
