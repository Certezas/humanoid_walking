// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:srv/SetModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/srv/detail/set_module__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModule_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: module_name
  {
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetModule_Request & msg, bool use_flow_style = false)
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

}  // namespace robotis_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotis_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotis_controller_msgs::srv::SetModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::SetModule_Request & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetModule_Request>()
{
  return "robotis_controller_msgs::srv::SetModule_Request";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetModule_Request>()
{
  return "robotis_controller_msgs/srv/SetModule_Request";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetModule_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetModule_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::srv::SetModule_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModule_Response & msg,
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
  const SetModule_Response & msg,
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

inline std::string to_yaml(const SetModule_Response & msg, bool use_flow_style = false)
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

}  // namespace robotis_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotis_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotis_controller_msgs::srv::SetModule_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::SetModule_Response & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetModule_Response>()
{
  return "robotis_controller_msgs::srv::SetModule_Response";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetModule_Response>()
{
  return "robotis_controller_msgs/srv/SetModule_Response";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotis_controller_msgs::srv::SetModule_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetModule>()
{
  return "robotis_controller_msgs::srv::SetModule";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetModule>()
{
  return "robotis_controller_msgs/srv/SetModule";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetModule>
  : std::integral_constant<
    bool,
    has_fixed_size<robotis_controller_msgs::srv::SetModule_Request>::value &&
    has_fixed_size<robotis_controller_msgs::srv::SetModule_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetModule>
  : std::integral_constant<
    bool,
    has_bounded_size<robotis_controller_msgs::srv::SetModule_Request>::value &&
    has_bounded_size<robotis_controller_msgs::srv::SetModule_Response>::value
  >
{
};

template<>
struct is_service<robotis_controller_msgs::srv::SetModule>
  : std::true_type
{
};

template<>
struct is_service_request<robotis_controller_msgs::srv::SetModule_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotis_controller_msgs::srv::SetModule_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__TRAITS_HPP_
