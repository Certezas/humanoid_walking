// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__TRAITS_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: contrast
  {
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << ", ";
  }

  // member: saturation
  {
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << ", ";
  }

  // member: sharpness
  {
    out << "sharpness: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: focus_automatic_continuous
  {
    out << "focus_automatic_continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_automatic_continuous, out);
    out << ", ";
  }

  // member: focus_absolute
  {
    out << "focus_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute, out);
    out << ", ";
  }

  // member: auto_exposure
  {
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << ", ";
  }

  // member: exposure_time_absolute
  {
    out << "exposure_time_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_time_absolute, out);
    out << ", ";
  }

  // member: white_balance_automatic
  {
    out << "white_balance_automatic: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_automatic, out);
    out << ", ";
  }

  // member: white_balance_temperature
  {
    out << "white_balance_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: contrast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << "\n";
  }

  // member: saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << "\n";
  }

  // member: sharpness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sharpness: ";
    rosidl_generator_traits::value_to_yaml(msg.sharpness, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: focus_automatic_continuous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_automatic_continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_automatic_continuous, out);
    out << "\n";
  }

  // member: focus_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_absolute, out);
    out << "\n";
  }

  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << "\n";
  }

  // member: exposure_time_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_time_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_time_absolute, out);
    out << "\n";
  }

  // member: white_balance_automatic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_automatic: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_automatic, out);
    out << "\n";
  }

  // member: white_balance_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraParams & msg, bool use_flow_style = false)
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
  const op3_camera_setting_tool_msgs::msg::CameraParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_camera_setting_tool_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_camera_setting_tool_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_camera_setting_tool_msgs::msg::CameraParams & msg)
{
  return op3_camera_setting_tool_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::msg::CameraParams>()
{
  return "op3_camera_setting_tool_msgs::msg::CameraParams";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::msg::CameraParams>()
{
  return "op3_camera_setting_tool_msgs/msg/CameraParams";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::msg::CameraParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::msg::CameraParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_camera_setting_tool_msgs::msg::CameraParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__TRAITS_HPP_
