// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:srv/LoadOffset.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Request __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadOffset_Request_
{
  using Type = LoadOffset_Request_<ContainerAllocator>;

  explicit LoadOffset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  explicit LoadOffset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Request
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Request
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadOffset_Request_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadOffset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadOffset_Request_

// alias to use template instance with default allocator
using LoadOffset_Request =
  robotis_controller_msgs::srv::LoadOffset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Response __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadOffset_Response_
{
  using Type = LoadOffset_Response_<ContainerAllocator>;

  explicit LoadOffset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit LoadOffset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Response
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__LoadOffset_Response
    std::shared_ptr<robotis_controller_msgs::srv::LoadOffset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadOffset_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadOffset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadOffset_Response_

// alias to use template instance with default allocator
using LoadOffset_Response =
  robotis_controller_msgs::srv::LoadOffset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace robotis_controller_msgs
{

namespace srv
{

struct LoadOffset
{
  using Request = robotis_controller_msgs::srv::LoadOffset_Request;
  using Response = robotis_controller_msgs::srv::LoadOffset_Response;
};

}  // namespace srv

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__STRUCT_HPP_
