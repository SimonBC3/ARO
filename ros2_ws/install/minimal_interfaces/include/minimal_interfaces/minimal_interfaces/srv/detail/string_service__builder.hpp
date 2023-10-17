// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice

#ifndef MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__BUILDER_HPP_
#define MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "minimal_interfaces/srv/detail/string_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace minimal_interfaces
{

namespace srv
{

namespace builder
{

class Init_StringService_Request_figura
{
public:
  Init_StringService_Request_figura()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::minimal_interfaces::srv::StringService_Request figura(::minimal_interfaces::srv::StringService_Request::_figura_type arg)
  {
    msg_.figura = std::move(arg);
    return std::move(msg_);
  }

private:
  ::minimal_interfaces::srv::StringService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::minimal_interfaces::srv::StringService_Request>()
{
  return minimal_interfaces::srv::builder::Init_StringService_Request_figura();
}

}  // namespace minimal_interfaces


namespace minimal_interfaces
{

namespace srv
{

namespace builder
{

class Init_StringService_Response_respuesta
{
public:
  Init_StringService_Response_respuesta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::minimal_interfaces::srv::StringService_Response respuesta(::minimal_interfaces::srv::StringService_Response::_respuesta_type arg)
  {
    msg_.respuesta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::minimal_interfaces::srv::StringService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::minimal_interfaces::srv::StringService_Response>()
{
  return minimal_interfaces::srv::builder::Init_StringService_Response_respuesta();
}

}  // namespace minimal_interfaces

#endif  // MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__BUILDER_HPP_
