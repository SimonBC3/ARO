// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Circle_Request_radius
{
public:
  explicit Init_Circle_Request_radius(::tutorial_interfaces::srv::Circle_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::Circle_Request radius(::tutorial_interfaces::srv::Circle_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Circle_Request msg_;
};

class Init_Circle_Request_linear_vel
{
public:
  explicit Init_Circle_Request_linear_vel(::tutorial_interfaces::srv::Circle_Request & msg)
  : msg_(msg)
  {}
  Init_Circle_Request_radius linear_vel(::tutorial_interfaces::srv::Circle_Request::_linear_vel_type arg)
  {
    msg_.linear_vel = std::move(arg);
    return Init_Circle_Request_radius(msg_);
  }

private:
  ::tutorial_interfaces::srv::Circle_Request msg_;
};

class Init_Circle_Request_point
{
public:
  Init_Circle_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_Request_linear_vel point(::tutorial_interfaces::srv::Circle_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Circle_Request_linear_vel(msg_);
  }

private:
  ::tutorial_interfaces::srv::Circle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Circle_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Circle_Request_point();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Circle_Response_drawn_rad
{
public:
  Init_Circle_Response_drawn_rad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Circle_Response drawn_rad(::tutorial_interfaces::srv::Circle_Response::_drawn_rad_type arg)
  {
    msg_.drawn_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Circle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Circle_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Circle_Response_drawn_rad();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__BUILDER_HPP_
