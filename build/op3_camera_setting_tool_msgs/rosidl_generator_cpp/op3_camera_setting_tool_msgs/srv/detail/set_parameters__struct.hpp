// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_camera_setting_tool_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Request __declspec(deprecated)
#endif

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetParameters_Request_
{
  using Type = SetParameters_Request_<ContainerAllocator>;

  explicit SetParameters_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_init)
  {
    (void)_init;
  }

  explicit SetParameters_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _params_type =
    op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__params(
    const op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Request
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Request
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParameters_Request_ & other) const
  {
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetParameters_Request_

// alias to use template instance with default allocator
using SetParameters_Request =
  op3_camera_setting_tool_msgs::srv::SetParameters_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs


// Include directives for member types
// Member 'returns'
// already included above
// #include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Response __declspec(deprecated)
#endif

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetParameters_Response_
{
  using Type = SetParameters_Response_<ContainerAllocator>;

  explicit SetParameters_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : returns(_init)
  {
    (void)_init;
  }

  explicit SetParameters_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : returns(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _returns_type =
    op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>;
  _returns_type returns;

  // setters for named parameter idiom
  Type & set__returns(
    const op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> & _arg)
  {
    this->returns = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Response
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_camera_setting_tool_msgs__srv__SetParameters_Response
    std::shared_ptr<op3_camera_setting_tool_msgs::srv::SetParameters_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParameters_Response_ & other) const
  {
    if (this->returns != other.returns) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParameters_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetParameters_Response_

// alias to use template instance with default allocator
using SetParameters_Response =
  op3_camera_setting_tool_msgs::srv::SetParameters_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

struct SetParameters
{
  using Request = op3_camera_setting_tool_msgs::srv::SetParameters_Request;
  using Response = op3_camera_setting_tool_msgs::srv::SetParameters_Response;
};

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__STRUCT_HPP_
