// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/srv/detail/get_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetKinematicsPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetKinematicsPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetKinematicsPose_Request & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::srv::GetKinematicsPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::srv::GetKinematicsPose_Request & msg)
{
  return op3_online_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>()
{
  return "op3_online_walking_module_msgs::srv::GetKinematicsPose_Request";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>()
{
  return "op3_online_walking_module_msgs/srv/GetKinematicsPose_Request";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "op3_online_walking_module_msgs/msg/detail/kinematics_pose__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetKinematicsPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetKinematicsPose_Response & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::srv::GetKinematicsPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::srv::GetKinematicsPose_Response & msg)
{
  return op3_online_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>()
{
  return "op3_online_walking_module_msgs::srv::GetKinematicsPose_Response";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>()
{
  return "op3_online_walking_module_msgs/srv/GetKinematicsPose_Response";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>
  : std::integral_constant<bool, has_fixed_size<op3_online_walking_module_msgs::msg::KinematicsPose>::value> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>
  : std::integral_constant<bool, has_bounded_size<op3_online_walking_module_msgs::msg::KinematicsPose>::value> {};

template<>
struct is_message<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetKinematicsPose>()
{
  return "op3_online_walking_module_msgs::srv::GetKinematicsPose";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetKinematicsPose>()
{
  return "op3_online_walking_module_msgs/srv/GetKinematicsPose";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetKinematicsPose>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>::value &&
    has_fixed_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetKinematicsPose>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>::value &&
    has_bounded_size<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>::value
  >
{
};

template<>
struct is_service<op3_online_walking_module_msgs::srv::GetKinematicsPose>
  : std::true_type
{
};

template<>
struct is_service_request<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__TRAITS_HPP_
