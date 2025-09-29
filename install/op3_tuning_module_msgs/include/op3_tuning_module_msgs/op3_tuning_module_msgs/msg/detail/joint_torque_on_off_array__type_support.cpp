// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace op3_tuning_module_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointTorqueOnOffArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) op3_tuning_module_msgs::msg::JointTorqueOnOffArray(_init);
}

void JointTorqueOnOffArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<op3_tuning_module_msgs::msg::JointTorqueOnOffArray *>(message_memory);
  typed_message->~JointTorqueOnOffArray();
}

size_t size_function__JointTorqueOnOffArray__torque_enable_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<op3_tuning_module_msgs::msg::JointTorqueOnOff> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointTorqueOnOffArray__torque_enable_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<op3_tuning_module_msgs::msg::JointTorqueOnOff> *>(untyped_member);
  return &member[index];
}

void * get_function__JointTorqueOnOffArray__torque_enable_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<op3_tuning_module_msgs::msg::JointTorqueOnOff> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointTorqueOnOffArray__torque_enable_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const op3_tuning_module_msgs::msg::JointTorqueOnOff *>(
    get_const_function__JointTorqueOnOffArray__torque_enable_data(untyped_member, index));
  auto & value = *reinterpret_cast<op3_tuning_module_msgs::msg::JointTorqueOnOff *>(untyped_value);
  value = item;
}

void assign_function__JointTorqueOnOffArray__torque_enable_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<op3_tuning_module_msgs::msg::JointTorqueOnOff *>(
    get_function__JointTorqueOnOffArray__torque_enable_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const op3_tuning_module_msgs::msg::JointTorqueOnOff *>(untyped_value);
  item = value;
}

void resize_function__JointTorqueOnOffArray__torque_enable_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<op3_tuning_module_msgs::msg::JointTorqueOnOff> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointTorqueOnOffArray_message_member_array[1] = {
  {
    "torque_enable_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<op3_tuning_module_msgs::msg::JointTorqueOnOff>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs::msg::JointTorqueOnOffArray, torque_enable_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointTorqueOnOffArray__torque_enable_data,  // size() function pointer
    get_const_function__JointTorqueOnOffArray__torque_enable_data,  // get_const(index) function pointer
    get_function__JointTorqueOnOffArray__torque_enable_data,  // get(index) function pointer
    fetch_function__JointTorqueOnOffArray__torque_enable_data,  // fetch(index, &value) function pointer
    assign_function__JointTorqueOnOffArray__torque_enable_data,  // assign(index, value) function pointer
    resize_function__JointTorqueOnOffArray__torque_enable_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointTorqueOnOffArray_message_members = {
  "op3_tuning_module_msgs::msg",  // message namespace
  "JointTorqueOnOffArray",  // message name
  1,  // number of fields
  sizeof(op3_tuning_module_msgs::msg::JointTorqueOnOffArray),
  JointTorqueOnOffArray_message_member_array,  // message members
  JointTorqueOnOffArray_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTorqueOnOffArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointTorqueOnOffArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointTorqueOnOffArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace op3_tuning_module_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>()
{
  return &::op3_tuning_module_msgs::msg::rosidl_typesupport_introspection_cpp::JointTorqueOnOffArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, op3_tuning_module_msgs, msg, JointTorqueOnOffArray)() {
  return &::op3_tuning_module_msgs::msg::rosidl_typesupport_introspection_cpp::JointTorqueOnOffArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
