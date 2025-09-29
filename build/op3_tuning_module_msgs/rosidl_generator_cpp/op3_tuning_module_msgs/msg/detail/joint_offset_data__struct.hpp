// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_tuning_module_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_tuning_module_msgs__msg__JointOffsetData __attribute__((deprecated))
#else
# define DEPRECATED__op3_tuning_module_msgs__msg__JointOffsetData __declspec(deprecated)
#endif

namespace op3_tuning_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointOffsetData_
{
  using Type = JointOffsetData_<ContainerAllocator>;

  explicit JointOffsetData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->goal_value = 0.0;
      this->offset_value = 0.0;
      this->p_gain = 0l;
      this->i_gain = 0l;
      this->d_gain = 0l;
    }
  }

  explicit JointOffsetData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->goal_value = 0.0;
      this->offset_value = 0.0;
      this->p_gain = 0l;
      this->i_gain = 0l;
      this->d_gain = 0l;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _goal_value_type =
    double;
  _goal_value_type goal_value;
  using _offset_value_type =
    double;
  _offset_value_type offset_value;
  using _p_gain_type =
    int32_t;
  _p_gain_type p_gain;
  using _i_gain_type =
    int32_t;
  _i_gain_type i_gain;
  using _d_gain_type =
    int32_t;
  _d_gain_type d_gain;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__goal_value(
    const double & _arg)
  {
    this->goal_value = _arg;
    return *this;
  }
  Type & set__offset_value(
    const double & _arg)
  {
    this->offset_value = _arg;
    return *this;
  }
  Type & set__p_gain(
    const int32_t & _arg)
  {
    this->p_gain = _arg;
    return *this;
  }
  Type & set__i_gain(
    const int32_t & _arg)
  {
    this->i_gain = _arg;
    return *this;
  }
  Type & set__d_gain(
    const int32_t & _arg)
  {
    this->d_gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_tuning_module_msgs__msg__JointOffsetData
    std::shared_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_tuning_module_msgs__msg__JointOffsetData
    std::shared_ptr<op3_tuning_module_msgs::msg::JointOffsetData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointOffsetData_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->goal_value != other.goal_value) {
      return false;
    }
    if (this->offset_value != other.offset_value) {
      return false;
    }
    if (this->p_gain != other.p_gain) {
      return false;
    }
    if (this->i_gain != other.i_gain) {
      return false;
    }
    if (this->d_gain != other.d_gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointOffsetData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointOffsetData_

// alias to use template instance with default allocator
using JointOffsetData =
  op3_tuning_module_msgs::msg::JointOffsetData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_tuning_module_msgs

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__STRUCT_HPP_
