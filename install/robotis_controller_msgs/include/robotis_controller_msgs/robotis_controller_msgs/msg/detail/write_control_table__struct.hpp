// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__msg__WriteControlTable __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__msg__WriteControlTable __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WriteControlTable_
{
  using Type = WriteControlTable_<ContainerAllocator>;

  explicit WriteControlTable_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->start_item_name = "";
      this->data_length = 0;
    }
  }

  explicit WriteControlTable_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc),
    start_item_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->start_item_name = "";
      this->data_length = 0;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _start_item_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_item_name_type start_item_name;
  using _data_length_type =
    uint16_t;
  _data_length_type data_length;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__start_item_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_item_name = _arg;
    return *this;
  }
  Type & set__data_length(
    const uint16_t & _arg)
  {
    this->data_length = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__msg__WriteControlTable
    std::shared_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__msg__WriteControlTable
    std::shared_ptr<robotis_controller_msgs::msg::WriteControlTable_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteControlTable_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->start_item_name != other.start_item_name) {
      return false;
    }
    if (this->data_length != other.data_length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteControlTable_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteControlTable_

// alias to use template instance with default allocator
using WriteControlTable =
  robotis_controller_msgs::msg::WriteControlTable_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_HPP_
