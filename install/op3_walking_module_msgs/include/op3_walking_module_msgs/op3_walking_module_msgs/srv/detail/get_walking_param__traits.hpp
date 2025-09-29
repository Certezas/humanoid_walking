// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_walking_module_msgs:srv/GetWalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__TRAITS_HPP_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_walking_module_msgs/srv/detail/get_walking_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWalkingParam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: get_param
  {
    out << "get_param: ";
    rosidl_generator_traits::value_to_yaml(msg.get_param, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWalkingParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: get_param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_param: ";
    rosidl_generator_traits::value_to_yaml(msg.get_param, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWalkingParam_Request & msg, bool use_flow_style = false)
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
  const op3_walking_module_msgs::srv::GetWalkingParam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_walking_module_msgs::srv::GetWalkingParam_Request & msg)
{
  return op3_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_walking_module_msgs::srv::GetWalkingParam_Request>()
{
  return "op3_walking_module_msgs::srv::GetWalkingParam_Request";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::GetWalkingParam_Request>()
{
  return "op3_walking_module_msgs/srv/GetWalkingParam_Request";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::GetWalkingParam_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::GetWalkingParam_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_walking_module_msgs::srv::GetWalkingParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'parameters'
#include "op3_walking_module_msgs/msg/detail/walking_param__traits.hpp"

namespace op3_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWalkingParam_Response & msg,
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
  const GetWalkingParam_Response & msg,
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

inline std::string to_yaml(const GetWalkingParam_Response & msg, bool use_flow_style = false)
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
  const op3_walking_module_msgs::srv::GetWalkingParam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_walking_module_msgs::srv::GetWalkingParam_Response & msg)
{
  return op3_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_walking_module_msgs::srv::GetWalkingParam_Response>()
{
  return "op3_walking_module_msgs::srv::GetWalkingParam_Response";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::GetWalkingParam_Response>()
{
  return "op3_walking_module_msgs/srv/GetWalkingParam_Response";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::GetWalkingParam_Response>
  : std::integral_constant<bool, has_fixed_size<op3_walking_module_msgs::msg::WalkingParam>::value> {};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::GetWalkingParam_Response>
  : std::integral_constant<bool, has_bounded_size<op3_walking_module_msgs::msg::WalkingParam>::value> {};

template<>
struct is_message<op3_walking_module_msgs::srv::GetWalkingParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_walking_module_msgs::srv::GetWalkingParam>()
{
  return "op3_walking_module_msgs::srv::GetWalkingParam";
}

template<>
inline const char * name<op3_walking_module_msgs::srv::GetWalkingParam>()
{
  return "op3_walking_module_msgs/srv/GetWalkingParam";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::srv::GetWalkingParam>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_walking_module_msgs::srv::GetWalkingParam_Request>::value &&
    has_fixed_size<op3_walking_module_msgs::srv::GetWalkingParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_walking_module_msgs::srv::GetWalkingParam>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_walking_module_msgs::srv::GetWalkingParam_Request>::value &&
    has_bounded_size<op3_walking_module_msgs::srv::GetWalkingParam_Response>::value
  >
{
};

template<>
struct is_service<op3_walking_module_msgs::srv::GetWalkingParam>
  : std::true_type
{
};

template<>
struct is_service_request<op3_walking_module_msgs::srv::GetWalkingParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_walking_module_msgs::srv::GetWalkingParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__TRAITS_HPP_
