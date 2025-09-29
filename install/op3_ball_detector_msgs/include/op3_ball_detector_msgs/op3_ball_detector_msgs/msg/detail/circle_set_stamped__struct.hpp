// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'circles'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_ball_detector_msgs__msg__CircleSetStamped __attribute__((deprecated))
#else
# define DEPRECATED__op3_ball_detector_msgs__msg__CircleSetStamped __declspec(deprecated)
#endif

namespace op3_ball_detector_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CircleSetStamped_
{
  using Type = CircleSetStamped_<ContainerAllocator>;

  explicit CircleSetStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CircleSetStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _circles_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _circles_type circles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__circles(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->circles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_ball_detector_msgs__msg__CircleSetStamped
    std::shared_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_ball_detector_msgs__msg__CircleSetStamped
    std::shared_ptr<op3_ball_detector_msgs::msg::CircleSetStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CircleSetStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->circles != other.circles) {
      return false;
    }
    return true;
  }
  bool operator!=(const CircleSetStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CircleSetStamped_

// alias to use template instance with default allocator
using CircleSetStamped =
  op3_ball_detector_msgs::msg::CircleSetStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__STRUCT_HPP_
