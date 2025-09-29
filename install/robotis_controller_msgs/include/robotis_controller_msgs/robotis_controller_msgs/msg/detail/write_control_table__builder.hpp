// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/msg/detail/write_control_table__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_WriteControlTable_data
{
public:
  explicit Init_WriteControlTable_data(::robotis_controller_msgs::msg::WriteControlTable & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::msg::WriteControlTable data(::robotis_controller_msgs::msg::WriteControlTable::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::msg::WriteControlTable msg_;
};

class Init_WriteControlTable_data_length
{
public:
  explicit Init_WriteControlTable_data_length(::robotis_controller_msgs::msg::WriteControlTable & msg)
  : msg_(msg)
  {}
  Init_WriteControlTable_data data_length(::robotis_controller_msgs::msg::WriteControlTable::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_WriteControlTable_data(msg_);
  }

private:
  ::robotis_controller_msgs::msg::WriteControlTable msg_;
};

class Init_WriteControlTable_start_item_name
{
public:
  explicit Init_WriteControlTable_start_item_name(::robotis_controller_msgs::msg::WriteControlTable & msg)
  : msg_(msg)
  {}
  Init_WriteControlTable_data_length start_item_name(::robotis_controller_msgs::msg::WriteControlTable::_start_item_name_type arg)
  {
    msg_.start_item_name = std::move(arg);
    return Init_WriteControlTable_data_length(msg_);
  }

private:
  ::robotis_controller_msgs::msg::WriteControlTable msg_;
};

class Init_WriteControlTable_joint_name
{
public:
  Init_WriteControlTable_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteControlTable_start_item_name joint_name(::robotis_controller_msgs::msg::WriteControlTable::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_WriteControlTable_start_item_name(msg_);
  }

private:
  ::robotis_controller_msgs::msg::WriteControlTable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::msg::WriteControlTable>()
{
  return robotis_controller_msgs::msg::builder::Init_WriteControlTable_joint_name();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__BUILDER_HPP_
