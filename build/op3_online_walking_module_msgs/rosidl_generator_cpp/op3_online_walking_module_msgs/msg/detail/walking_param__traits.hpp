// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WalkingParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: dsp_ratio
  {
    out << "dsp_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ratio, out);
    out << ", ";
  }

  // member: lipm_height
  {
    out << "lipm_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lipm_height, out);
    out << ", ";
  }

  // member: foot_height_max
  {
    out << "foot_height_max: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_height_max, out);
    out << ", ";
  }

  // member: zmp_offset_x
  {
    out << "zmp_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.zmp_offset_x, out);
    out << ", ";
  }

  // member: zmp_offset_y
  {
    out << "zmp_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.zmp_offset_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkingParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dsp_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ratio, out);
    out << "\n";
  }

  // member: lipm_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lipm_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lipm_height, out);
    out << "\n";
  }

  // member: foot_height_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot_height_max: ";
    rosidl_generator_traits::value_to_yaml(msg.foot_height_max, out);
    out << "\n";
  }

  // member: zmp_offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zmp_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.zmp_offset_x, out);
    out << "\n";
  }

  // member: zmp_offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zmp_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.zmp_offset_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkingParam & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::msg::WalkingParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::WalkingParam & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::WalkingParam>()
{
  return "op3_online_walking_module_msgs::msg::WalkingParam";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::WalkingParam>()
{
  return "op3_online_walking_module_msgs/msg/WalkingParam";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::WalkingParam>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::WalkingParam>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::WalkingParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_
