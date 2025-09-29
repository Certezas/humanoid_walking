// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_tuning_module_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_
#define OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_tuning_module_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>()
{
  return ::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_tuning_module_msgs


namespace op3_tuning_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPresentJointOffsetData_Response_present_data_array
{
public:
  Init_GetPresentJointOffsetData_Response_present_data_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response present_data_array(::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response::_present_data_array_type arg)
  {
    msg_.present_data_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>()
{
  return op3_tuning_module_msgs::srv::builder::Init_GetPresentJointOffsetData_Response_present_data_array();
}

}  // namespace op3_tuning_module_msgs

#endif  // OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_
