// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotis_controller_msgs/msg/detail/sync_write_item__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotis_controller_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SyncWriteItem_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotis_controller_msgs::msg::SyncWriteItem(_init);
}

void SyncWriteItem_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotis_controller_msgs::msg::SyncWriteItem *>(message_memory);
  typed_message->~SyncWriteItem();
}

size_t size_function__SyncWriteItem__joint_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SyncWriteItem__joint_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SyncWriteItem__joint_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SyncWriteItem__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SyncWriteItem__joint_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SyncWriteItem__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SyncWriteItem__joint_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SyncWriteItem__joint_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SyncWriteItem__value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SyncWriteItem__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SyncWriteItem__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SyncWriteItem__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SyncWriteItem__value(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SyncWriteItem__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SyncWriteItem__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__SyncWriteItem__value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SyncWriteItem_message_member_array[3] = {
  {
    "item_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::msg::SyncWriteItem, item_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::msg::SyncWriteItem, joint_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__SyncWriteItem__joint_name,  // size() function pointer
    get_const_function__SyncWriteItem__joint_name,  // get_const(index) function pointer
    get_function__SyncWriteItem__joint_name,  // get(index) function pointer
    fetch_function__SyncWriteItem__joint_name,  // fetch(index, &value) function pointer
    assign_function__SyncWriteItem__joint_name,  // assign(index, value) function pointer
    resize_function__SyncWriteItem__joint_name  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::msg::SyncWriteItem, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__SyncWriteItem__value,  // size() function pointer
    get_const_function__SyncWriteItem__value,  // get_const(index) function pointer
    get_function__SyncWriteItem__value,  // get(index) function pointer
    fetch_function__SyncWriteItem__value,  // fetch(index, &value) function pointer
    assign_function__SyncWriteItem__value,  // assign(index, value) function pointer
    resize_function__SyncWriteItem__value  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SyncWriteItem_message_members = {
  "robotis_controller_msgs::msg",  // message namespace
  "SyncWriteItem",  // message name
  3,  // number of fields
  sizeof(robotis_controller_msgs::msg::SyncWriteItem),
  SyncWriteItem_message_member_array,  // message members
  SyncWriteItem_init_function,  // function to initialize message memory (memory has to be allocated)
  SyncWriteItem_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SyncWriteItem_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SyncWriteItem_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotis_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::msg::SyncWriteItem>()
{
  return &::robotis_controller_msgs::msg::rosidl_typesupport_introspection_cpp::SyncWriteItem_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, msg, SyncWriteItem)() {
  return &::robotis_controller_msgs::msg::rosidl_typesupport_introspection_cpp::SyncWriteItem_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
