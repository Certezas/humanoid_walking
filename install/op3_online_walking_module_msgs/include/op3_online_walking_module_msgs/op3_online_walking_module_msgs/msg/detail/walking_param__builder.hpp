// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_WalkingParam_zmp_offset_y
{
public:
  explicit Init_WalkingParam_zmp_offset_y(::op3_online_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::WalkingParam zmp_offset_y(::op3_online_walking_module_msgs::msg::WalkingParam::_zmp_offset_y_type arg)
  {
    msg_.zmp_offset_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_zmp_offset_x
{
public:
  explicit Init_WalkingParam_zmp_offset_x(::op3_online_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_zmp_offset_y zmp_offset_x(::op3_online_walking_module_msgs::msg::WalkingParam::_zmp_offset_x_type arg)
  {
    msg_.zmp_offset_x = std::move(arg);
    return Init_WalkingParam_zmp_offset_y(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_foot_height_max
{
public:
  explicit Init_WalkingParam_foot_height_max(::op3_online_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_zmp_offset_x foot_height_max(::op3_online_walking_module_msgs::msg::WalkingParam::_foot_height_max_type arg)
  {
    msg_.foot_height_max = std::move(arg);
    return Init_WalkingParam_zmp_offset_x(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_lipm_height
{
public:
  explicit Init_WalkingParam_lipm_height(::op3_online_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_foot_height_max lipm_height(::op3_online_walking_module_msgs::msg::WalkingParam::_lipm_height_type arg)
  {
    msg_.lipm_height = std::move(arg);
    return Init_WalkingParam_foot_height_max(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_dsp_ratio
{
public:
  Init_WalkingParam_dsp_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkingParam_lipm_height dsp_ratio(::op3_online_walking_module_msgs::msg::WalkingParam::_dsp_ratio_type arg)
  {
    msg_.dsp_ratio = std::move(arg);
    return Init_WalkingParam_lipm_height(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::WalkingParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::WalkingParam>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_WalkingParam_dsp_ratio();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_
