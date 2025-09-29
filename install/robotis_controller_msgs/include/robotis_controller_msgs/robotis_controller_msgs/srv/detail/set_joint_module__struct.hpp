// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Request __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointModule_Request_
{
  using Type = SetJointModule_Request_<ContainerAllocator>;

  explicit SetJointModule_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetJointModule_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _module_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _module_name_type module_name;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__module_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Request
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Request
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointModule_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->module_name != other.module_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointModule_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointModule_Request_

// alias to use template instance with default allocator
using SetJointModule_Request =
  robotis_controller_msgs::srv::SetJointModule_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Response __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointModule_Response_
{
  using Type = SetJointModule_Response_<ContainerAllocator>;

  explicit SetJointModule_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetJointModule_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Response
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__SetJointModule_Response
    std::shared_ptr<robotis_controller_msgs::srv::SetJointModule_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointModule_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointModule_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointModule_Response_

// alias to use template instance with default allocator
using SetJointModule_Response =
  robotis_controller_msgs::srv::SetJointModule_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace robotis_controller_msgs
{

namespace srv
{

struct SetJointModule
{
  using Request = robotis_controller_msgs::srv::SetJointModule_Request;
  using Response = robotis_controller_msgs::srv::SetJointModule_Response;
};

}  // namespace srv

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_HPP_
