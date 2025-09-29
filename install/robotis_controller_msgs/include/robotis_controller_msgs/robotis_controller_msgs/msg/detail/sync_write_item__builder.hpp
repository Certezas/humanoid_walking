// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/msg/detail/sync_write_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncWriteItem_value
{
public:
  explicit Init_SyncWriteItem_value(::robotis_controller_msgs::msg::SyncWriteItem & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::msg::SyncWriteItem value(::robotis_controller_msgs::msg::SyncWriteItem::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::msg::SyncWriteItem msg_;
};

class Init_SyncWriteItem_joint_name
{
public:
  explicit Init_SyncWriteItem_joint_name(::robotis_controller_msgs::msg::SyncWriteItem & msg)
  : msg_(msg)
  {}
  Init_SyncWriteItem_value joint_name(::robotis_controller_msgs::msg::SyncWriteItem::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SyncWriteItem_value(msg_);
  }

private:
  ::robotis_controller_msgs::msg::SyncWriteItem msg_;
};

class Init_SyncWriteItem_item_name
{
public:
  Init_SyncWriteItem_item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncWriteItem_joint_name item_name(::robotis_controller_msgs::msg::SyncWriteItem::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return Init_SyncWriteItem_joint_name(msg_);
  }

private:
  ::robotis_controller_msgs::msg::SyncWriteItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::msg::SyncWriteItem>()
{
  return robotis_controller_msgs::msg::builder::Init_SyncWriteItem_item_name();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__BUILDER_HPP_
