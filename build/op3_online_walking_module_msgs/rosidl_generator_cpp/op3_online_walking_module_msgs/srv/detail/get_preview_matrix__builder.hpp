// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/srv/detail/get_preview_matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPreviewMatrix_Request_req
{
public:
  Init_GetPreviewMatrix_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request req(::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetPreviewMatrix_Request_req();
}

}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPreviewMatrix_Response_res
{
public:
  Init_GetPreviewMatrix_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response res(::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetPreviewMatrix_Response_res();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__BUILDER_HPP_
