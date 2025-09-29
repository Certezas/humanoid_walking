// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewRequest.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__PreviewRequest __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__PreviewRequest __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PreviewRequest_
{
  using Type = PreviewRequest_<ContainerAllocator>;

  explicit PreviewRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_cycle = 0.0;
      this->lipm_height = 0.0;
    }
  }

  explicit PreviewRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_cycle = 0.0;
      this->lipm_height = 0.0;
    }
  }

  // field types and members
  using _control_cycle_type =
    double;
  _control_cycle_type control_cycle;
  using _lipm_height_type =
    double;
  _lipm_height_type lipm_height;

  // setters for named parameter idiom
  Type & set__control_cycle(
    const double & _arg)
  {
    this->control_cycle = _arg;
    return *this;
  }
  Type & set__lipm_height(
    const double & _arg)
  {
    this->lipm_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__PreviewRequest
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__PreviewRequest
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PreviewRequest_ & other) const
  {
    if (this->control_cycle != other.control_cycle) {
      return false;
    }
    if (this->lipm_height != other.lipm_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const PreviewRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PreviewRequest_

// alias to use template instance with default allocator
using PreviewRequest =
  op3_online_walking_module_msgs::msg::PreviewRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__STRUCT_HPP_
