// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Step2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) op3_online_walking_module_msgs::msg::Step2D(_init);
}

void Step2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<op3_online_walking_module_msgs::msg::Step2D *>(message_memory);
  typed_message->~Step2D();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Step2D_message_member_array[2] = {
  {
    "step2d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::Step2D, step2d),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moving_foot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::Step2D, moving_foot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Step2D_message_members = {
  "op3_online_walking_module_msgs::msg",  // message namespace
  "Step2D",  // message name
  2,  // number of fields
  sizeof(op3_online_walking_module_msgs::msg::Step2D),
  Step2D_message_member_array,  // message members
  Step2D_init_function,  // function to initialize message memory (memory has to be allocated)
  Step2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Step2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Step2D_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace op3_online_walking_module_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_online_walking_module_msgs::msg::Step2D>()
{
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::Step2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, op3_online_walking_module_msgs, msg, Step2D)() {
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::Step2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
