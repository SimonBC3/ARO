// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Request_objective_point
{
public:
  explicit Init_MoveRobot_Request_objective_point(::tutorial_interfaces::srv::MoveRobot_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::MoveRobot_Request objective_point(::tutorial_interfaces::srv::MoveRobot_Request::_objective_point_type arg)
  {
    msg_.objective_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::MoveRobot_Request msg_;
};

class Init_MoveRobot_Request_command
{
public:
  Init_MoveRobot_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Request_objective_point command(::tutorial_interfaces::srv::MoveRobot_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MoveRobot_Request_objective_point(msg_);
  }

private:
  ::tutorial_interfaces::srv::MoveRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::MoveRobot_Request>()
{
  return tutorial_interfaces::srv::builder::Init_MoveRobot_Request_command();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Response_answer
{
public:
  Init_MoveRobot_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::MoveRobot_Response answer(::tutorial_interfaces::srv::MoveRobot_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::MoveRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::MoveRobot_Response>()
{
  return tutorial_interfaces::srv::builder::Init_MoveRobot_Response_answer();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
