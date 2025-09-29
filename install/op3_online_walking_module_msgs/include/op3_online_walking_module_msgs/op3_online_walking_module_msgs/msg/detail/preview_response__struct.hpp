// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__PreviewResponse __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__PreviewResponse __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PreviewResponse_
{
  using Type = PreviewResponse_<ContainerAllocator>;

  explicit PreviewResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->k_row = 0l;
      this->k_col = 0l;
      this->p_row = 0l;
      this->p_col = 0l;
    }
  }

  explicit PreviewResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->k_row = 0l;
      this->k_col = 0l;
      this->p_row = 0l;
      this->p_col = 0l;
    }
  }

  // field types and members
  using _k_row_type =
    int32_t;
  _k_row_type k_row;
  using _k_col_type =
    int32_t;
  _k_col_type k_col;
  using _k_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _k_type k;
  using _p_row_type =
    int32_t;
  _p_row_type p_row;
  using _p_col_type =
    int32_t;
  _p_col_type p_col;
  using _p_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _p_type p;

  // setters for named parameter idiom
  Type & set__k_row(
    const int32_t & _arg)
  {
    this->k_row = _arg;
    return *this;
  }
  Type & set__k_col(
    const int32_t & _arg)
  {
    this->k_col = _arg;
    return *this;
  }
  Type & set__k(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__p_row(
    const int32_t & _arg)
  {
    this->p_row = _arg;
    return *this;
  }
  Type & set__p_col(
    const int32_t & _arg)
  {
    this->p_col = _arg;
    return *this;
  }
  Type & set__p(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__PreviewResponse
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__PreviewResponse
    std::shared_ptr<op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PreviewResponse_ & other) const
  {
    if (this->k_row != other.k_row) {
      return false;
    }
    if (this->k_col != other.k_col) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->p_row != other.p_row) {
      return false;
    }
    if (this->p_col != other.p_col) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    return true;
  }
  bool operator!=(const PreviewResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PreviewResponse_

// alias to use template instance with default allocator
using PreviewResponse =
  op3_online_walking_module_msgs::msg::PreviewResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__STRUCT_HPP_
