// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_ball_detector_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_

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
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.h"

/// Struct defined in srv/SetParameters in the package op3_ball_detector_msgs.
typedef struct op3_ball_detector_msgs__srv__SetParameters_Request
{
  op3_ball_detector_msgs__msg__BallDetectorParams params;
} op3_ball_detector_msgs__srv__SetParameters_Request;

// Struct for a sequence of op3_ball_detector_msgs__srv__SetParameters_Request.
typedef struct op3_ball_detector_msgs__srv__SetParameters_Request__Sequence
{
  op3_ball_detector_msgs__srv__SetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__srv__SetParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'returns'
// already included above
// #include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.h"

/// Struct defined in srv/SetParameters in the package op3_ball_detector_msgs.
typedef struct op3_ball_detector_msgs__srv__SetParameters_Response
{
  op3_ball_detector_msgs__msg__BallDetectorParams returns;
} op3_ball_detector_msgs__srv__SetParameters_Response;

// Struct for a sequence of op3_ball_detector_msgs__srv__SetParameters_Response.
typedef struct op3_ball_detector_msgs__srv__SetParameters_Response__Sequence
{
  op3_ball_detector_msgs__srv__SetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__srv__SetParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
