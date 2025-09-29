// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__FootStepCommand __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__FootStepCommand __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootStepCommand_
{
  using Type = FootStepCommand_<ContainerAllocator>;

  explicit FootStepCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->start_leg = "";
      this->step_num = 0l;
      this->step_time = 0.0;
      this->step_length = 0.0;
      this->side_length = 0.0;
      this->step_angle = 0.0;
    }
  }

  explicit FootStepCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    start_leg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->start_leg = "";
      this->step_num = 0l;
      this->step_time = 0.0;
      this->step_length = 0.0;
      this->side_length = 0.0;
      this->step_angle = 0.0;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _start_leg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_leg_type start_leg;
  using _step_num_type =
    int32_t;
  _step_num_type step_num;
  using _step_time_type =
    double;
  _step_time_type step_time;
  using _step_length_type =
    double;
  _step_length_type step_length;
  using _side_length_type =
    double;
  _side_length_type side_length;
  using _step_angle_type =
    double;
  _step_angle_type step_angle;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__start_leg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_leg = _arg;
    return *this;
  }
  Type & set__step_num(
    const int32_t & _arg)
  {
    this->step_num = _arg;
    return *this;
  }
  Type & set__step_time(
    const double & _arg)
  {
    this->step_time = _arg;
    return *this;
  }
  Type & set__step_length(
    const double & _arg)
  {
    this->step_length = _arg;
    return *this;
  }
  Type & set__side_length(
    const double & _arg)
  {
    this->side_length = _arg;
    return *this;
  }
  Type & set__step_angle(
    const double & _arg)
  {
    this->step_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__FootStepCommand
    std::shared_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__FootStepCommand
    std::shared_ptr<op3_online_walking_module_msgs::msg::FootStepCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootStepCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->start_leg != other.start_leg) {
      return false;
    }
    if (this->step_num != other.step_num) {
      return false;
    }
    if (this->step_time != other.step_time) {
      return false;
    }
    if (this->step_length != other.step_length) {
      return false;
    }
    if (this->side_length != other.side_length) {
      return false;
    }
    if (this->step_angle != other.step_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootStepCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootStepCommand_

// alias to use template instance with default allocator
using FootStepCommand =
  op3_online_walking_module_msgs::msg::FootStepCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__STRUCT_HPP_
