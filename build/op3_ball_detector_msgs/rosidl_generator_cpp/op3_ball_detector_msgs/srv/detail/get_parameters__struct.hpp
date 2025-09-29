// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_ball_detector_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Request __declspec(deprecated)
#endif

namespace op3_ball_detector_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetParameters_Request_
{
  using Type = GetParameters_Request_<ContainerAllocator>;

  explicit GetParameters_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetParameters_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Request
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Request
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetParameters_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetParameters_Request_

// alias to use template instance with default allocator
using GetParameters_Request =
  op3_ball_detector_msgs::srv::GetParameters_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_ball_detector_msgs


// Include directives for member types
// Member 'returns'
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Response __declspec(deprecated)
#endif

namespace op3_ball_detector_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetParameters_Response_
{
  using Type = GetParameters_Response_<ContainerAllocator>;

  explicit GetParameters_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : returns(_init)
  {
    (void)_init;
  }

  explicit GetParameters_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : returns(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _returns_type =
    op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>;
  _returns_type returns;

  // setters for named parameter idiom
  Type & set__returns(
    const op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> & _arg)
  {
    this->returns = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Response
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_ball_detector_msgs__srv__GetParameters_Response
    std::shared_ptr<op3_ball_detector_msgs::srv::GetParameters_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetParameters_Response_ & other) const
  {
    if (this->returns != other.returns) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetParameters_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetParameters_Response_

// alias to use template instance with default allocator
using GetParameters_Response =
  op3_ball_detector_msgs::srv::GetParameters_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_ball_detector_msgs

namespace op3_ball_detector_msgs
{

namespace srv
{

struct GetParameters
{
  using Request = op3_ball_detector_msgs::srv::GetParameters_Request;
  using Response = op3_ball_detector_msgs::srv::GetParameters_Response;
};

}  // namespace srv

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_HPP_
