// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_PreviewResponse_p
{
public:
  explicit Init_PreviewResponse_p(::op3_online_walking_module_msgs::msg::PreviewResponse & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::PreviewResponse p(::op3_online_walking_module_msgs::msg::PreviewResponse::_p_type arg)
  {
    msg_.p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

class Init_PreviewResponse_p_col
{
public:
  explicit Init_PreviewResponse_p_col(::op3_online_walking_module_msgs::msg::PreviewResponse & msg)
  : msg_(msg)
  {}
  Init_PreviewResponse_p p_col(::op3_online_walking_module_msgs::msg::PreviewResponse::_p_col_type arg)
  {
    msg_.p_col = std::move(arg);
    return Init_PreviewResponse_p(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

class Init_PreviewResponse_p_row
{
public:
  explicit Init_PreviewResponse_p_row(::op3_online_walking_module_msgs::msg::PreviewResponse & msg)
  : msg_(msg)
  {}
  Init_PreviewResponse_p_col p_row(::op3_online_walking_module_msgs::msg::PreviewResponse::_p_row_type arg)
  {
    msg_.p_row = std::move(arg);
    return Init_PreviewResponse_p_col(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

class Init_PreviewResponse_k
{
public:
  explicit Init_PreviewResponse_k(::op3_online_walking_module_msgs::msg::PreviewResponse & msg)
  : msg_(msg)
  {}
  Init_PreviewResponse_p_row k(::op3_online_walking_module_msgs::msg::PreviewResponse::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_PreviewResponse_p_row(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

class Init_PreviewResponse_k_col
{
public:
  explicit Init_PreviewResponse_k_col(::op3_online_walking_module_msgs::msg::PreviewResponse & msg)
  : msg_(msg)
  {}
  Init_PreviewResponse_k k_col(::op3_online_walking_module_msgs::msg::PreviewResponse::_k_col_type arg)
  {
    msg_.k_col = std::move(arg);
    return Init_PreviewResponse_k(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

class Init_PreviewResponse_k_row
{
public:
  Init_PreviewResponse_k_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PreviewResponse_k_col k_row(::op3_online_walking_module_msgs::msg::PreviewResponse::_k_row_type arg)
  {
    msg_.k_row = std::move(arg);
    return Init_PreviewResponse_k_col(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::PreviewResponse>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_PreviewResponse_k_row();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__BUILDER_HPP_
