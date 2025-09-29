// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__WalkingParam __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__WalkingParam __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WalkingParam_
{
  using Type = WalkingParam_<ContainerAllocator>;

  explicit WalkingParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dsp_ratio = 0.0;
      this->lipm_height = 0.0;
      this->foot_height_max = 0.0;
      this->zmp_offset_x = 0.0;
      this->zmp_offset_y = 0.0;
    }
  }

  explicit WalkingParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dsp_ratio = 0.0;
      this->lipm_height = 0.0;
      this->foot_height_max = 0.0;
      this->zmp_offset_x = 0.0;
      this->zmp_offset_y = 0.0;
    }
  }

  // field types and members
  using _dsp_ratio_type =
    double;
  _dsp_ratio_type dsp_ratio;
  using _lipm_height_type =
    double;
  _lipm_height_type lipm_height;
  using _foot_height_max_type =
    double;
  _foot_height_max_type foot_height_max;
  using _zmp_offset_x_type =
    double;
  _zmp_offset_x_type zmp_offset_x;
  using _zmp_offset_y_type =
    double;
  _zmp_offset_y_type zmp_offset_y;

  // setters for named parameter idiom
  Type & set__dsp_ratio(
    const double & _arg)
  {
    this->dsp_ratio = _arg;
    return *this;
  }
  Type & set__lipm_height(
    const double & _arg)
  {
    this->lipm_height = _arg;
    return *this;
  }
  Type & set__foot_height_max(
    const double & _arg)
  {
    this->foot_height_max = _arg;
    return *this;
  }
  Type & set__zmp_offset_x(
    const double & _arg)
  {
    this->zmp_offset_x = _arg;
    return *this;
  }
  Type & set__zmp_offset_y(
    const double & _arg)
  {
    this->zmp_offset_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__WalkingParam
    std::shared_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__WalkingParam
    std::shared_ptr<op3_online_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkingParam_ & other) const
  {
    if (this->dsp_ratio != other.dsp_ratio) {
      return false;
    }
    if (this->lipm_height != other.lipm_height) {
      return false;
    }
    if (this->foot_height_max != other.foot_height_max) {
      return false;
    }
    if (this->zmp_offset_x != other.zmp_offset_x) {
      return false;
    }
    if (this->zmp_offset_y != other.zmp_offset_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkingParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkingParam_

// alias to use template instance with default allocator
using WalkingParam =
  op3_online_walking_module_msgs::msg::WalkingParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_
