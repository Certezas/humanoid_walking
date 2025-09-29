// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:msg/JointCtrlModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__msg__JointCtrlModule __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__msg__JointCtrlModule __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCtrlModule_
{
  using Type = JointCtrlModule_<ContainerAllocator>;

  explicit JointCtrlModule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointCtrlModule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _module_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _module_name_type module_name;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__module_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__msg__JointCtrlModule
    std::shared_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__msg__JointCtrlModule
    std::shared_ptr<robotis_controller_msgs::msg::JointCtrlModule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCtrlModule_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->module_name != other.module_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCtrlModule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCtrlModule_

// alias to use template instance with default allocator
using JointCtrlModule =
  robotis_controller_msgs::msg::JointCtrlModule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__STRUCT_HPP_
