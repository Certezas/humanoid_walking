// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_HPP_
#define OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_action_module_msgs__msg__StartAction __attribute__((deprecated))
#else
# define DEPRECATED__op3_action_module_msgs__msg__StartAction __declspec(deprecated)
#endif

namespace op3_action_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartAction_
{
  using Type = StartAction_<ContainerAllocator>;

  explicit StartAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->page_num = 0l;
    }
  }

  explicit StartAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->page_num = 0l;
    }
  }

  // field types and members
  using _page_num_type =
    int32_t;
  _page_num_type page_num;
  using _joint_name_array_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_array_type joint_name_array;

  // setters for named parameter idiom
  Type & set__page_num(
    const int32_t & _arg)
  {
    this->page_num = _arg;
    return *this;
  }
  Type & set__joint_name_array(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_action_module_msgs::msg::StartAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_action_module_msgs::msg::StartAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::msg::StartAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::msg::StartAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_action_module_msgs__msg__StartAction
    std::shared_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_action_module_msgs__msg__StartAction
    std::shared_ptr<op3_action_module_msgs::msg::StartAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartAction_ & other) const
  {
    if (this->page_num != other.page_num) {
      return false;
    }
    if (this->joint_name_array != other.joint_name_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartAction_

// alias to use template instance with default allocator
using StartAction =
  op3_action_module_msgs::msg::StartAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_action_module_msgs

#endif  // OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__STRUCT_HPP_
