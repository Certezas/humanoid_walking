// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__msg__SyncWriteItem __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__msg__SyncWriteItem __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncWriteItem_
{
  using Type = SyncWriteItem_<ContainerAllocator>;

  explicit SyncWriteItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_name = "";
    }
  }

  explicit SyncWriteItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_name = "";
    }
  }

  // field types and members
  using _item_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_name_type item_name;
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _value_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__item_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_name = _arg;
    return *this;
  }
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__value(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__msg__SyncWriteItem
    std::shared_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__msg__SyncWriteItem
    std::shared_ptr<robotis_controller_msgs::msg::SyncWriteItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncWriteItem_ & other) const
  {
    if (this->item_name != other.item_name) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncWriteItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncWriteItem_

// alias to use template instance with default allocator
using SyncWriteItem =
  robotis_controller_msgs::msg::SyncWriteItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_HPP_
