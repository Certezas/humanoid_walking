// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'video_parameter'
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameters __attribute__((deprecated))
#else
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameters __declspec(deprecated)
#endif

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct V4lParameters_
{
  using Type = V4lParameters_<ContainerAllocator>;

  explicit V4lParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit V4lParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _video_parameter_type =
    std::vector<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>>;
  _video_parameter_type video_parameter;

  // setters for named parameter idiom
  Type & set__video_parameter(
    const std::vector<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_camera_setting_tool_msgs::msg::V4lParameter_<ContainerAllocator>>> & _arg)
  {
    this->video_parameter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameters
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__V4lParameters
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::V4lParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const V4lParameters_ & other) const
  {
    if (this->video_parameter != other.video_parameter) {
      return false;
    }
    return true;
  }
  bool operator!=(const V4lParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct V4lParameters_

// alias to use template instance with default allocator
using V4lParameters =
  op3_camera_setting_tool_msgs::msg::V4lParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__STRUCT_HPP_
