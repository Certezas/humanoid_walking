// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'step2d'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__Step2D __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__Step2D __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Step2D_
{
  using Type = Step2D_<ContainerAllocator>;

  explicit Step2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : step2d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_foot = 0;
    }
  }

  explicit Step2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : step2d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_foot = 0;
    }
  }

  // field types and members
  using _step2d_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _step2d_type step2d;
  using _moving_foot_type =
    uint8_t;
  _moving_foot_type moving_foot;

  // setters for named parameter idiom
  Type & set__step2d(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->step2d = _arg;
    return *this;
  }
  Type & set__moving_foot(
    const uint8_t & _arg)
  {
    this->moving_foot = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT_FOOT_SWING =
    1u;
  static constexpr uint8_t RIGHT_FOOT_SWING =
    2u;
  static constexpr uint8_t STANDING =
    3u;

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__Step2D
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__Step2D
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Step2D_ & other) const
  {
    if (this->step2d != other.step2d) {
      return false;
    }
    if (this->moving_foot != other.moving_foot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Step2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Step2D_

// alias to use template instance with default allocator
using Step2D =
  op3_online_walking_module_msgs::msg::Step2D_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Step2D_<ContainerAllocator>::LEFT_FOOT_SWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Step2D_<ContainerAllocator>::RIGHT_FOOT_SWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Step2D_<ContainerAllocator>::STANDING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__STRUCT_HPP_
