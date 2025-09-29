// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'footsteps_2d'
#include "op3_online_walking_module_msgs/msg/detail/step2_d__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Step2DArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: step_time
  {
    out << "step_time: ";
    rosidl_generator_traits::value_to_yaml(msg.step_time, out);
    out << ", ";
  }

  // member: footsteps_2d
  {
    if (msg.footsteps_2d.size() == 0) {
      out << "footsteps_2d: []";
    } else {
      out << "footsteps_2d: [";
      size_t pending_items = msg.footsteps_2d.size();
      for (auto item : msg.footsteps_2d) {
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
  const Step2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: step_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_time: ";
    rosidl_generator_traits::value_to_yaml(msg.step_time, out);
    out << "\n";
  }

  // member: footsteps_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.footsteps_2d.size() == 0) {
      out << "footsteps_2d: []\n";
    } else {
      out << "footsteps_2d:\n";
      for (auto item : msg.footsteps_2d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Step2DArray & msg, bool use_flow_style = false)
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
  const op3_online_walking_module_msgs::msg::Step2DArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::Step2DArray & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::Step2DArray>()
{
  return "op3_online_walking_module_msgs::msg::Step2DArray";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::Step2DArray>()
{
  return "op3_online_walking_module_msgs/msg/Step2DArray";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::Step2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::Step2DArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::Step2DArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__TRAITS_HPP_
