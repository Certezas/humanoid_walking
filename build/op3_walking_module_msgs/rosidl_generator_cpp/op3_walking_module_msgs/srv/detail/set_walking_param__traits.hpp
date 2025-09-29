// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_walking_module_msgs:srv/SetWalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__TRAITS_HPP_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_walking_module_msgs/srv/detail/set_walking_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parameters'
#include "op3_walking_module_msgs/msg/detail/walking_param__traits.hpp"

namespace op3_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWalkingParam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: parameters
  {
    out << "parameters: ";
    to_flow_style_yaml(msg.parameters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetWalkingParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameters:\n";
    to_block_style_yaml(msg.parameters, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWalkingParam_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_walking_module_msgs::srv::SetWalkingParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_walking_module_msgs::srv::SetWalkingParam_Request & msg)
{
  return op3_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_walking_module_msgs::srv::SetWalkingParam_Request>()
{
  return "op3_walking_module_msgs::srv::SetWalkingParam_Request";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::SetWalkingParam_Request>()
{
  return "op3_walking_module_msgs/srv/SetWalkingParam_Request";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::SetWalkingParam_Request>
  : std::integral_constant<bool, has_fixed_size<op3_walking_module_msgs::msg::WalkingParam>::value> {};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::SetWalkingParam_Request>
  : std::integral_constant<bool, has_bounded_size<op3_walking_module_msgs::msg::WalkingParam>::value> {};

template<>
struct is_message<op3_walking_module_msgs::srv::SetWalkingParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace op3_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWalkingParam_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetWalkingParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWalkingParam_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_walking_module_msgs::srv::SetWalkingParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_walking_module_msgs::srv::SetWalkingParam_Response & msg)
{
  return op3_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_walking_module_msgs::srv::SetWalkingParam_Response>()
{
  return "op3_walking_module_msgs::srv::SetWalkingParam_Response";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::SetWalkingParam_Response>()
{
  return "op3_walking_module_msgs/srv/SetWalkingParam_Response";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::SetWalkingParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::SetWalkingParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_walking_module_msgs::srv::SetWalkingParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_walking_module_msgs::srv::SetWalkingParam>()
{
  return "op3_walking_module_msgs::srv::SetWalkingParam";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::SetWalkingParam>()
{
  return "op3_walking_module_msgs/srv/SetWalkingParam";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::SetWalkingParam>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_walking_module_msgs::srv::SetWalkingParam_Request>::value &&
    has_fixed_size<op3_walking_module_msgs::srv::SetWalkingParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::SetWalkingParam>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_walking_module_msgs::srv::SetWalkingParam_Request>::value &&
    has_bounded_size<op3_walking_module_msgs::srv::SetWalkingParam_Response>::value
  >
{
};

template<>
struct is_service<op3_walking_module_msgs::srv::SetWalkingParam>
  : std::true_type
{
};

template<>
struct is_service_request<op3_walking_module_msgs::srv::SetWalkingParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_walking_module_msgs::srv::SetWalkingParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__TRAITS_HPP_
