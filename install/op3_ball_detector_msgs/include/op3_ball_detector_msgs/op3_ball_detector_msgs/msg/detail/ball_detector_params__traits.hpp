// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__TRAITS_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_ball_detector_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BallDetectorParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: gaussian_blur_size
  {
    out << "gaussian_blur_size: ";
    rosidl_generator_traits::value_to_yaml(msg.gaussian_blur_size, out);
    out << ", ";
  }

  // member: gaussian_blur_sigma
  {
    out << "gaussian_blur_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.gaussian_blur_sigma, out);
    out << ", ";
  }

  // member: canny_edge_th
  {
    out << "canny_edge_th: ";
    rosidl_generator_traits::value_to_yaml(msg.canny_edge_th, out);
    out << ", ";
  }

  // member: hough_accum_resolution
  {
    out << "hough_accum_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.hough_accum_resolution, out);
    out << ", ";
  }

  // member: hough_accum_th
  {
    out << "hough_accum_th: ";
    rosidl_generator_traits::value_to_yaml(msg.hough_accum_th, out);
    out << ", ";
  }

  // member: min_circle_dist
  {
    out << "min_circle_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.min_circle_dist, out);
    out << ", ";
  }

  // member: min_radius
  {
    out << "min_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.min_radius, out);
    out << ", ";
  }

  // member: max_radius
  {
    out << "max_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.max_radius, out);
    out << ", ";
  }

  // member: filter_h_min
  {
    out << "filter_h_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_h_min, out);
    out << ", ";
  }

  // member: filter_h_max
  {
    out << "filter_h_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_h_max, out);
    out << ", ";
  }

  // member: filter_s_min
  {
    out << "filter_s_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_s_min, out);
    out << ", ";
  }

  // member: filter_s_max
  {
    out << "filter_s_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_s_max, out);
    out << ", ";
  }

  // member: filter_v_min
  {
    out << "filter_v_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_v_min, out);
    out << ", ";
  }

  // member: filter_v_max
  {
    out << "filter_v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_v_max, out);
    out << ", ";
  }

  // member: ellipse_size
  {
    out << "ellipse_size: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BallDetectorParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gaussian_blur_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gaussian_blur_size: ";
    rosidl_generator_traits::value_to_yaml(msg.gaussian_blur_size, out);
    out << "\n";
  }

  // member: gaussian_blur_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gaussian_blur_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.gaussian_blur_sigma, out);
    out << "\n";
  }

  // member: canny_edge_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canny_edge_th: ";
    rosidl_generator_traits::value_to_yaml(msg.canny_edge_th, out);
    out << "\n";
  }

  // member: hough_accum_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hough_accum_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.hough_accum_resolution, out);
    out << "\n";
  }

  // member: hough_accum_th
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hough_accum_th: ";
    rosidl_generator_traits::value_to_yaml(msg.hough_accum_th, out);
    out << "\n";
  }

  // member: min_circle_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_circle_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.min_circle_dist, out);
    out << "\n";
  }

  // member: min_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.min_radius, out);
    out << "\n";
  }

  // member: max_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.max_radius, out);
    out << "\n";
  }

  // member: filter_h_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_h_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_h_min, out);
    out << "\n";
  }

  // member: filter_h_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_h_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_h_max, out);
    out << "\n";
  }

  // member: filter_s_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_s_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_s_min, out);
    out << "\n";
  }

  // member: filter_s_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_s_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_s_max, out);
    out << "\n";
  }

  // member: filter_v_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_v_min: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_v_min, out);
    out << "\n";
  }

  // member: filter_v_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_v_max, out);
    out << "\n";
  }

  // member: ellipse_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ellipse_size: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BallDetectorParams & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace op3_ball_detector_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_ball_detector_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_ball_detector_msgs::msg::BallDetectorParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_ball_detector_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_ball_detector_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_ball_detector_msgs::msg::BallDetectorParams & msg)
{
  return op3_ball_detector_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_ball_detector_msgs::msg::BallDetectorParams>()
{
  return "op3_ball_detector_msgs::msg::BallDetectorParams";
}

template<>
inline const char * name<op3_ball_detector_msgs::msg::BallDetectorParams>()
{
  return "op3_ball_detector_msgs/msg/BallDetectorParams";
}

template<>
struct has_fixed_size<op3_ball_detector_msgs::msg::BallDetectorParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_ball_detector_msgs::msg::BallDetectorParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_ball_detector_msgs::msg::BallDetectorParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__TRAITS_HPP_
