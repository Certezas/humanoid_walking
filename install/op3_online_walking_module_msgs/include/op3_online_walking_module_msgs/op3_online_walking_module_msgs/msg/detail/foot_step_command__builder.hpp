// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_FootStepCommand_step_angle
{
public:
  explicit Init_FootStepCommand_step_angle(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::FootStepCommand step_angle(::op3_online_walking_module_msgs::msg::FootStepCommand::_step_angle_type arg)
  {
    msg_.step_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_side_length
{
public:
  explicit Init_FootStepCommand_side_length(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  Init_FootStepCommand_step_angle side_length(::op3_online_walking_module_msgs::msg::FootStepCommand::_side_length_type arg)
  {
    msg_.side_length = std::move(arg);
    return Init_FootStepCommand_step_angle(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_step_length
{
public:
  explicit Init_FootStepCommand_step_length(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  Init_FootStepCommand_side_length step_length(::op3_online_walking_module_msgs::msg::FootStepCommand::_step_length_type arg)
  {
    msg_.step_length = std::move(arg);
    return Init_FootStepCommand_side_length(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_step_time
{
public:
  explicit Init_FootStepCommand_step_time(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  Init_FootStepCommand_step_length step_time(::op3_online_walking_module_msgs::msg::FootStepCommand::_step_time_type arg)
  {
    msg_.step_time = std::move(arg);
    return Init_FootStepCommand_step_length(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_step_num
{
public:
  explicit Init_FootStepCommand_step_num(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  Init_FootStepCommand_step_time step_num(::op3_online_walking_module_msgs::msg::FootStepCommand::_step_num_type arg)
  {
    msg_.step_num = std::move(arg);
    return Init_FootStepCommand_step_time(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_start_leg
{
public:
  explicit Init_FootStepCommand_start_leg(::op3_online_walking_module_msgs::msg::FootStepCommand & msg)
  : msg_(msg)
  {}
  Init_FootStepCommand_step_num start_leg(::op3_online_walking_module_msgs::msg::FootStepCommand::_start_leg_type arg)
  {
    msg_.start_leg = std::move(arg);
    return Init_FootStepCommand_step_num(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

class Init_FootStepCommand_command
{
public:
  Init_FootStepCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootStepCommand_start_leg command(::op3_online_walking_module_msgs::msg::FootStepCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_FootStepCommand_start_leg(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::FootStepCommand>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_FootStepCommand_command();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__BUILDER_HPP_
