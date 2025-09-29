// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'req'
#include "op3_online_walking_module_msgs/msg/detail/preview_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPreviewMatrix_Request_
{
  using Type = GetPreviewMatrix_Request_<ContainerAllocator>;

  explicit GetPreviewMatrix_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req(_init)
  {
    (void)_init;
  }

  explicit GetPreviewMatrix_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _req_type =
    op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator>;
  _req_type req;

  // setters for named parameter idiom
  Type & set__req(
    const op3_online_walking_module_msgs::msg::PreviewRequest_<ContainerAllocator> & _arg)
  {
    this->req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPreviewMatrix_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPreviewMatrix_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPreviewMatrix_Request_

// alias to use template instance with default allocator
using GetPreviewMatrix_Request =
  op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_online_walking_module_msgs


// Include directives for member types
// Member 'res'
#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPreviewMatrix_Response_
{
  using Type = GetPreviewMatrix_Response_<ContainerAllocator>;

  explicit GetPreviewMatrix_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : res(_init)
  {
    (void)_init;
  }

  explicit GetPreviewMatrix_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : res(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _res_type =
    op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator>;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const op3_online_walking_module_msgs::msg::PreviewResponse_<ContainerAllocator> & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPreviewMatrix_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPreviewMatrix_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPreviewMatrix_Response_

// alias to use template instance with default allocator
using GetPreviewMatrix_Response =
  op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

namespace op3_online_walking_module_msgs
{

namespace srv
{

struct GetPreviewMatrix
{
  using Request = op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request;
  using Response = op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response;
};

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_HPP_
