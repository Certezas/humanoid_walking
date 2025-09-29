// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace op3_ball_detector_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
cdr_serialize(
  const op3_ball_detector_msgs::msg::BallDetectorParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gaussian_blur_size
  cdr << ros_message.gaussian_blur_size;
  // Member: gaussian_blur_sigma
  cdr << ros_message.gaussian_blur_sigma;
  // Member: canny_edge_th
  cdr << ros_message.canny_edge_th;
  // Member: hough_accum_resolution
  cdr << ros_message.hough_accum_resolution;
  // Member: hough_accum_th
  cdr << ros_message.hough_accum_th;
  // Member: min_circle_dist
  cdr << ros_message.min_circle_dist;
  // Member: min_radius
  cdr << ros_message.min_radius;
  // Member: max_radius
  cdr << ros_message.max_radius;
  // Member: filter_h_min
  cdr << ros_message.filter_h_min;
  // Member: filter_h_max
  cdr << ros_message.filter_h_max;
  // Member: filter_s_min
  cdr << ros_message.filter_s_min;
  // Member: filter_s_max
  cdr << ros_message.filter_s_max;
  // Member: filter_v_min
  cdr << ros_message.filter_v_min;
  // Member: filter_v_max
  cdr << ros_message.filter_v_max;
  // Member: ellipse_size
  cdr << ros_message.ellipse_size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_ball_detector_msgs::msg::BallDetectorParams & ros_message)
{
  // Member: gaussian_blur_size
  cdr >> ros_message.gaussian_blur_size;

  // Member: gaussian_blur_sigma
  cdr >> ros_message.gaussian_blur_sigma;

  // Member: canny_edge_th
  cdr >> ros_message.canny_edge_th;

  // Member: hough_accum_resolution
  cdr >> ros_message.hough_accum_resolution;

  // Member: hough_accum_th
  cdr >> ros_message.hough_accum_th;

  // Member: min_circle_dist
  cdr >> ros_message.min_circle_dist;

  // Member: min_radius
  cdr >> ros_message.min_radius;

  // Member: max_radius
  cdr >> ros_message.max_radius;

  // Member: filter_h_min
  cdr >> ros_message.filter_h_min;

  // Member: filter_h_max
  cdr >> ros_message.filter_h_max;

  // Member: filter_s_min
  cdr >> ros_message.filter_s_min;

  // Member: filter_s_max
  cdr >> ros_message.filter_s_max;

  // Member: filter_v_min
  cdr >> ros_message.filter_v_min;

  // Member: filter_v_max
  cdr >> ros_message.filter_v_max;

  // Member: ellipse_size
  cdr >> ros_message.ellipse_size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
get_serialized_size(
  const op3_ball_detector_msgs::msg::BallDetectorParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gaussian_blur_size
  {
    size_t item_size = sizeof(ros_message.gaussian_blur_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gaussian_blur_sigma
  {
    size_t item_size = sizeof(ros_message.gaussian_blur_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: canny_edge_th
  {
    size_t item_size = sizeof(ros_message.canny_edge_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hough_accum_resolution
  {
    size_t item_size = sizeof(ros_message.hough_accum_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hough_accum_th
  {
    size_t item_size = sizeof(ros_message.hough_accum_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_circle_dist
  {
    size_t item_size = sizeof(ros_message.min_circle_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_radius
  {
    size_t item_size = sizeof(ros_message.min_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_radius
  {
    size_t item_size = sizeof(ros_message.max_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_h_min
  {
    size_t item_size = sizeof(ros_message.filter_h_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_h_max
  {
    size_t item_size = sizeof(ros_message.filter_h_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_s_min
  {
    size_t item_size = sizeof(ros_message.filter_s_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_s_max
  {
    size_t item_size = sizeof(ros_message.filter_s_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_v_min
  {
    size_t item_size = sizeof(ros_message.filter_v_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_v_max
  {
    size_t item_size = sizeof(ros_message.filter_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ellipse_size
  {
    size_t item_size = sizeof(ros_message.ellipse_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
max_serialized_size_BallDetectorParams(
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


  // Member: gaussian_blur_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gaussian_blur_sigma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: canny_edge_th
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hough_accum_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hough_accum_th
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_circle_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_h_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_h_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_s_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_s_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_v_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_v_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ellipse_size
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
    using DataType = op3_ball_detector_msgs::msg::BallDetectorParams;
    is_plain =
      (
      offsetof(DataType, ellipse_size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BallDetectorParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_ball_detector_msgs::msg::BallDetectorParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BallDetectorParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_ball_detector_msgs::msg::BallDetectorParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BallDetectorParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_ball_detector_msgs::msg::BallDetectorParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BallDetectorParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BallDetectorParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BallDetectorParams__callbacks = {
  "op3_ball_detector_msgs::msg",
  "BallDetectorParams",
  _BallDetectorParams__cdr_serialize,
  _BallDetectorParams__cdr_deserialize,
  _BallDetectorParams__get_serialized_size,
  _BallDetectorParams__max_serialized_size
};

static rosidl_message_type_support_t _BallDetectorParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BallDetectorParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace op3_ball_detector_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_ball_detector_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_ball_detector_msgs::msg::BallDetectorParams>()
{
  return &op3_ball_detector_msgs::msg::typesupport_fastrtps_cpp::_BallDetectorParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_ball_detector_msgs, msg, BallDetectorParams)() {
  return &op3_ball_detector_msgs::msg::typesupport_fastrtps_cpp::_BallDetectorParams__handle;
}

#ifdef __cplusplus
}
#endif
