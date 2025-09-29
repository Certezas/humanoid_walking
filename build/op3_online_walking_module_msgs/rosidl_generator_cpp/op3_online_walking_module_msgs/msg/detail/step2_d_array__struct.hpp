// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'footsteps_2d'
#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__msg__Step2DArray __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__msg__Step2DArray __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Step2DArray_
{
  using Type = Step2DArray_<ContainerAllocator>;

  explicit Step2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_time = 0.0;
    }
  }

  explicit Step2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_time = 0.0;
    }
  }

  // field types and members
  using _step_time_type =
    double;
  _step_time_type step_time;
  using _footsteps_2d_type =
    std::vector<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>>;
  _footsteps_2d_type footsteps_2d;

  // setters for named parameter idiom
  Type & set__step_time(
    const double & _arg)
  {
    this->step_time = _arg;
    return *this;
  }
  Type & set__footsteps_2d(
    const std::vector<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::msg::Step2D_<ContainerAllocator>>> & _arg)
  {
    this->footsteps_2d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__Step2DArray
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__msg__Step2DArray
    std::shared_ptr<op3_online_walking_module_msgs::msg::Step2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Step2DArray_ & other) const
  {
    if (this->step_time != other.step_time) {
      return false;
    }
    if (this->footsteps_2d != other.footsteps_2d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Step2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Step2DArray_

// alias to use template instance with default allocator
using Step2DArray =
  op3_online_walking_module_msgs::msg::Step2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__STRUCT_HPP_
