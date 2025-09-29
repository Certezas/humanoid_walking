// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__TRAITS_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'video_parameter'
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__traits.hpp"

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const V4lParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: video_parameter
  {
    if (msg.video_parameter.size() == 0) {
      out << "video_parameter: []";
    } else {
      out << "video_parameter: [";
      size_t pending_items = msg.video_parameter.size();
      for (auto item : msg.video_parameter) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const V4lParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: video_parameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.video_parameter.size() == 0) {
      out << "video_parameter: []\n";
    } else {
      out << "video_parameter:\n";
      for (auto item : msg.video_parameter) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const V4lParameters & msg, bool use_flow_style = false)
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

}  // namespace op3_camera_setting_tool_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_camera_setting_tool_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_camera_setting_tool_msgs::msg::V4lParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_camera_setting_tool_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_camera_setting_tool_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_camera_setting_tool_msgs::msg::V4lParameters & msg)
{
  return op3_camera_setting_tool_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::msg::V4lParameters>()
{
  return "op3_camera_setting_tool_msgs::msg::V4lParameters";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::msg::V4lParameters>()
{
  return "op3_camera_setting_tool_msgs/msg/V4lParameters";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::msg::V4lParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::msg::V4lParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_camera_setting_tool_msgs::msg::V4lParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__TRAITS_HPP_
