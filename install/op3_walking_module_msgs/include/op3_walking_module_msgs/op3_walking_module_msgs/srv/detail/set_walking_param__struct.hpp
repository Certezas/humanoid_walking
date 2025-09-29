// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_walking_module_msgs:srv/SetWalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_HPP_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parameters'
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Request __declspec(deprecated)
#endif

namespace op3_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWalkingParam_Request_
{
  using Type = SetWalkingParam_Request_<ContainerAllocator>;

  explicit SetWalkingParam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_init)
  {
    (void)_init;
  }

  explicit SetWalkingParam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _parameters_type =
    op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__parameters(
    const op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Request
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Request
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWalkingParam_Request_ & other) const
  {
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWalkingParam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWalkingParam_Request_

// alias to use template instance with default allocator
using SetWalkingParam_Request =
  op3_walking_module_msgs::srv::SetWalkingParam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_walking_module_msgs


#ifndef _WIN32
# define DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Response __declspec(deprecated)
#endif

namespace op3_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWalkingParam_Response_
{
  using Type = SetWalkingParam_Response_<ContainerAllocator>;

  explicit SetWalkingParam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetWalkingParam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Response
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_walking_module_msgs__srv__SetWalkingParam_Response
    std::shared_ptr<op3_walking_module_msgs::srv::SetWalkingParam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWalkingParam_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWalkingParam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWalkingParam_Response_

// alias to use template instance with default allocator
using SetWalkingParam_Response =
  op3_walking_module_msgs::srv::SetWalkingParam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_walking_module_msgs

namespace op3_walking_module_msgs
{

namespace srv
{

struct SetWalkingParam
{
  using Request = op3_walking_module_msgs::srv::SetWalkingParam_Request;
  using Response = op3_walking_module_msgs::srv::SetWalkingParam_Response;
};

}  // namespace srv

}  // namespace op3_walking_module_msgs

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_HPP_
