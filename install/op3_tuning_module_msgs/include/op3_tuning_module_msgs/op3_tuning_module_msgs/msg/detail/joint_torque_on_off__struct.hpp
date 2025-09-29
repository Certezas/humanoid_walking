// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOff.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_tuning_module_msgs__msg__JointTorqueOnOff __attribute__((deprecated))
#else
# define DEPRECATED__op3_tuning_module_msgs__msg__JointTorqueOnOff __declspec(deprecated)
#endif

namespace op3_tuning_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTorqueOnOff_
{
  using Type = JointTorqueOnOff_<ContainerAllocator>;

  explicit JointTorqueOnOff_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->torque_enable = false;
    }
  }

  explicit JointTorqueOnOff_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->torque_enable = false;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _torque_enable_type =
    bool;
  _torque_enable_type torque_enable;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__torque_enable(
    const bool & _arg)
  {
    this->torque_enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_tuning_module_msgs__msg__JointTorqueOnOff
    std::shared_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_tuning_module_msgs__msg__JointTorqueOnOff
    std::shared_ptr<op3_tuning_module_msgs::msg::JointTorqueOnOff_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTorqueOnOff_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->torque_enable != other.torque_enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTorqueOnOff_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTorqueOnOff_

// alias to use template instance with default allocator
using JointTorqueOnOff =
  op3_tuning_module_msgs::msg::JointTorqueOnOff_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_tuning_module_msgs

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__STRUCT_HPP_
