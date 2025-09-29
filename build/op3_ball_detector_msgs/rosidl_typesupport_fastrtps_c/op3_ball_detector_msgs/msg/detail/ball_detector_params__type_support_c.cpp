// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "op3_ball_detector_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.h"
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BallDetectorParams__ros_msg_type = op3_ball_detector_msgs__msg__BallDetectorParams;

static bool _BallDetectorParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BallDetectorParams__ros_msg_type * ros_message = static_cast<const _BallDetectorParams__ros_msg_type *>(untyped_ros_message);
  // Field name: gaussian_blur_size
  {
    cdr << ros_message->gaussian_blur_size;
  }

  // Field name: gaussian_blur_sigma
  {
    cdr << ros_message->gaussian_blur_sigma;
  }

  // Field name: canny_edge_th
  {
    cdr << ros_message->canny_edge_th;
  }

  // Field name: hough_accum_resolution
  {
    cdr << ros_message->hough_accum_resolution;
  }

  // Field name: hough_accum_th
  {
    cdr << ros_message->hough_accum_th;
  }

  // Field name: min_circle_dist
  {
    cdr << ros_message->min_circle_dist;
  }

  // Field name: min_radius
  {
    cdr << ros_message->min_radius;
  }

  // Field name: max_radius
  {
    cdr << ros_message->max_radius;
  }

  // Field name: filter_h_min
  {
    cdr << ros_message->filter_h_min;
  }

  // Field name: filter_h_max
  {
    cdr << ros_message->filter_h_max;
  }

  // Field name: filter_s_min
  {
    cdr << ros_message->filter_s_min;
  }

  // Field name: filter_s_max
  {
    cdr << ros_message->filter_s_max;
  }

  // Field name: filter_v_min
  {
    cdr << ros_message->filter_v_min;
  }

  // Field name: filter_v_max
  {
    cdr << ros_message->filter_v_max;
  }

  // Field name: ellipse_size
  {
    cdr << ros_message->ellipse_size;
  }

  return true;
}

static bool _BallDetectorParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BallDetectorParams__ros_msg_type * ros_message = static_cast<_BallDetectorParams__ros_msg_type *>(untyped_ros_message);
  // Field name: gaussian_blur_size
  {
    cdr >> ros_message->gaussian_blur_size;
  }

  // Field name: gaussian_blur_sigma
  {
    cdr >> ros_message->gaussian_blur_sigma;
  }

  // Field name: canny_edge_th
  {
    cdr >> ros_message->canny_edge_th;
  }

  // Field name: hough_accum_resolution
  {
    cdr >> ros_message->hough_accum_resolution;
  }

  // Field name: hough_accum_th
  {
    cdr >> ros_message->hough_accum_th;
  }

  // Field name: min_circle_dist
  {
    cdr >> ros_message->min_circle_dist;
  }

  // Field name: min_radius
  {
    cdr >> ros_message->min_radius;
  }

  // Field name: max_radius
  {
    cdr >> ros_message->max_radius;
  }

  // Field name: filter_h_min
  {
    cdr >> ros_message->filter_h_min;
  }

  // Field name: filter_h_max
  {
    cdr >> ros_message->filter_h_max;
  }

  // Field name: filter_s_min
  {
    cdr >> ros_message->filter_s_min;
  }

  // Field name: filter_s_max
  {
    cdr >> ros_message->filter_s_max;
  }

  // Field name: filter_v_min
  {
    cdr >> ros_message->filter_v_min;
  }

  // Field name: filter_v_max
  {
    cdr >> ros_message->filter_v_max;
  }

  // Field name: ellipse_size
  {
    cdr >> ros_message->ellipse_size;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_ball_detector_msgs
size_t get_serialized_size_op3_ball_detector_msgs__msg__BallDetectorParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BallDetectorParams__ros_msg_type * ros_message = static_cast<const _BallDetectorParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gaussian_blur_size
  {
    size_t item_size = sizeof(ros_message->gaussian_blur_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gaussian_blur_sigma
  {
    size_t item_size = sizeof(ros_message->gaussian_blur_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name canny_edge_th
  {
    size_t item_size = sizeof(ros_message->canny_edge_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hough_accum_resolution
  {
    size_t item_size = sizeof(ros_message->hough_accum_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hough_accum_th
  {
    size_t item_size = sizeof(ros_message->hough_accum_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_circle_dist
  {
    size_t item_size = sizeof(ros_message->min_circle_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_radius
  {
    size_t item_size = sizeof(ros_message->min_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_radius
  {
    size_t item_size = sizeof(ros_message->max_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_h_min
  {
    size_t item_size = sizeof(ros_message->filter_h_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_h_max
  {
    size_t item_size = sizeof(ros_message->filter_h_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_s_min
  {
    size_t item_size = sizeof(ros_message->filter_s_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_s_max
  {
    size_t item_size = sizeof(ros_message->filter_s_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_v_min
  {
    size_t item_size = sizeof(ros_message->filter_v_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_v_max
  {
    size_t item_size = sizeof(ros_message->filter_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ellipse_size
  {
    size_t item_size = sizeof(ros_message->ellipse_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BallDetectorParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_op3_ball_detector_msgs__msg__BallDetectorParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_ball_detector_msgs
size_t max_serialized_size_op3_ball_detector_msgs__msg__BallDetectorParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: gaussian_blur_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gaussian_blur_sigma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: canny_edge_th
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hough_accum_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hough_accum_th
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_circle_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_h_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_h_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_s_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_s_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_v_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_v_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ellipse_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_ball_detector_msgs__msg__BallDetectorParams;
    is_plain =
      (
      offsetof(DataType, ellipse_size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BallDetectorParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_op3_ball_detector_msgs__msg__BallDetectorParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BallDetectorParams = {
  "op3_ball_detector_msgs::msg",
  "BallDetectorParams",
  _BallDetectorParams__cdr_serialize,
  _BallDetectorParams__cdr_deserialize,
  _BallDetectorParams__get_serialized_size,
  _BallDetectorParams__max_serialized_size
};

static rosidl_message_type_support_t _BallDetectorParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BallDetectorParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_ball_detector_msgs, msg, BallDetectorParams)() {
  return &_BallDetectorParams__type_support;
}

#if defined(__cplusplus)
}
#endif
