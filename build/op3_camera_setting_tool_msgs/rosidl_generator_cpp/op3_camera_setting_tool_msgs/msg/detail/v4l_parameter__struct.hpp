// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameter.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__STRUCT_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameter __attribute__((deprecated))
#else
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameter __declspec(deprecated)
#endif

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct V4lParameter_
{
  using Type = V4lParameter_<ContainerAllocator>;

  explicit V4lParameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0l;
    }
  }

  explicit V4lParameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameter
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameter
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const V4lParameter_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const V4lParameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct V4lParameter_

// alias to use template instance with default allocator
using V4lParameter =
  op3_camera_setting_tool_msgs::msg::V4lParameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__STRUCT_HPP_
