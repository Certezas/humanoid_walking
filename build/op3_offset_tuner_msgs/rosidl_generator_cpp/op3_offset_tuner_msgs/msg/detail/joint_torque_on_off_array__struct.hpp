// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_HPP_
#define OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'torque_enable_data'
#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_offset_tuner_msgs__msg__JointTorqueOnOffArray __attribute__((deprecated))
#else
# define DEPRECATED__op3_offset_tuner_msgs__msg__JointTorqueOnOffArray __declspec(deprecated)
#endif

namespace op3_offset_tuner_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTorqueOnOffArray_
{
  using Type = JointTorqueOnOffArray_<ContainerAllocator>;

  explicit JointTorqueOnOffArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointTorqueOnOffArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _torque_enable_data_type =
    std::vector<op3_offset_tuner_msgs::msg::JointTorqueOnOff_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_offset_tuner_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>>;
  _torque_enable_data_type torque_enable_data;

  // setters for named parameter idiom
  Type & set__torque_enable_data(
    const std::vector<op3_offset_tuner_msgs::msg::JointTorqueOnOff_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_offset_tuner_msgs::msg::JointTorqueOnOff_<ContainerAllocator>>> & _arg)
  {
    this->torque_enable_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_offset_tuner_msgs__msg__JointTorqueOnOffArray
    std::shared_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_offset_tuner_msgs__msg__JointTorqueOnOffArray
    std::shared_ptr<op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTorqueOnOffArray_ & other) const
  {
    if (this->torque_enable_data != other.torque_enable_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTorqueOnOffArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTorqueOnOffArray_

// alias to use template instance with default allocator
using JointTorqueOnOffArray =
  op3_offset_tuner_msgs::msg::JointTorqueOnOffArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_offset_tuner_msgs

#endif  // OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__STRUCT_HPP_
