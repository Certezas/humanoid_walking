// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_HPP_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_action_module_msgs__srv__IsRunning_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_action_module_msgs__srv__IsRunning_Request __declspec(deprecated)
#endif

namespace op3_action_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsRunning_Request_
{
  using Type = IsRunning_Request_<ContainerAllocator>;

  explicit IsRunning_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit IsRunning_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_action_module_msgs__srv__IsRunning_Request
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_action_module_msgs__srv__IsRunning_Request
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsRunning_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsRunning_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsRunning_Request_

// alias to use template instance with default allocator
using IsRunning_Request =
  op3_action_module_msgs::srv::IsRunning_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_action_module_msgs


#ifndef _WIN32
# define DEPRECATED__op3_action_module_msgs__srv__IsRunning_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_action_module_msgs__srv__IsRunning_Response __declspec(deprecated)
#endif

namespace op3_action_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsRunning_Response_
{
  using Type = IsRunning_Response_<ContainerAllocator>;

  explicit IsRunning_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_running = false;
    }
  }

  explicit IsRunning_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_running = false;
    }
  }

  // field types and members
  using _is_running_type =
    bool;
  _is_running_type is_running;

  // setters for named parameter idiom
  Type & set__is_running(
    const bool & _arg)
  {
    this->is_running = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_action_module_msgs__srv__IsRunning_Response
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_action_module_msgs__srv__IsRunning_Response
    std::shared_ptr<op3_action_module_msgs::srv::IsRunning_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsRunning_Response_ & other) const
  {
    if (this->is_running != other.is_running) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsRunning_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsRunning_Response_

// alias to use template instance with default allocator
using IsRunning_Response =
  op3_action_module_msgs::srv::IsRunning_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_action_module_msgs

namespace op3_action_module_msgs
{

namespace srv
{

struct IsRunning
{
  using Request = op3_action_module_msgs::srv::IsRunning_Request;
  using Response = op3_action_module_msgs::srv::IsRunning_Response;
};

}  // namespace srv

}  // namespace op3_action_module_msgs

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_HPP_
