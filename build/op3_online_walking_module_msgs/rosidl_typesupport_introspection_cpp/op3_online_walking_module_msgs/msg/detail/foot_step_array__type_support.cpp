// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__struct.hpp"
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

void FootStepArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) op3_online_walking_module_msgs::msg::FootStepArray(_init);
}

void FootStepArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<op3_online_walking_module_msgs::msg::FootStepArray *>(message_memory);
  typed_message->~FootStepArray();
}

size_t size_function__FootStepArray__moving_foot(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FootStepArray__moving_foot(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FootStepArray__moving_foot(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FootStepArray__moving_foot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FootStepArray__moving_foot(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FootStepArray__moving_foot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FootStepArray__moving_foot(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FootStepArray__moving_foot(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FootStepArray__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FootStepArray__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void * get_function__FootStepArray__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__FootStepArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(
    get_const_function__FootStepArray__data(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(untyped_value);
  value = item;
}

void assign_function__FootStepArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(
    get_function__FootStepArray__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(untyped_value);
  item = value;
}

void resize_function__FootStepArray__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FootStepArray_message_member_array[2] = {
  {
    "moving_foot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::FootStepArray, moving_foot),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootStepArray__moving_foot,  // size() function pointer
    get_const_function__FootStepArray__moving_foot,  // get_const(index) function pointer
    get_function__FootStepArray__moving_foot,  // get(index) function pointer
    fetch_function__FootStepArray__moving_foot,  // fetch(index, &value) function pointer
    assign_function__FootStepArray__moving_foot,  // assign(index, value) function pointer
    resize_function__FootStepArray__moving_foot  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::FootStepArray, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootStepArray__data,  // size() function pointer
    get_const_function__FootStepArray__data,  // get_const(index) function pointer
    get_function__FootStepArray__data,  // get(index) function pointer
    fetch_function__FootStepArray__data,  // fetch(index, &value) function pointer
    assign_function__FootStepArray__data,  // assign(index, value) function pointer
    resize_function__FootStepArray__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FootStepArray_message_members = {
  "op3_online_walking_module_msgs::msg",  // message namespace
  "FootStepArray",  // message name
  2,  // number of fields
  sizeof(op3_online_walking_module_msgs::msg::FootStepArray),
  FootStepArray_message_member_array,  // message members
  FootStepArray_init_function,  // function to initialize message memory (memory has to be allocated)
  FootStepArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FootStepArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FootStepArray_message_members,
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
get_message_type_support_handle<op3_online_walking_module_msgs::msg::FootStepArray>()
{
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::FootStepArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, op3_online_walking_module_msgs, msg, FootStepArray)() {
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::FootStepArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
