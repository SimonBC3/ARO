// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:action/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/action/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_Goal_radius
{
public:
  explicit Init_Circle_Goal_radius(::tutorial_interfaces::action::Circle_Goal & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::Circle_Goal radius(::tutorial_interfaces::action::Circle_Goal::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_Goal msg_;
};

class Init_Circle_Goal_linear_vel
{
public:
  explicit Init_Circle_Goal_linear_vel(::tutorial_interfaces::action::Circle_Goal & msg)
  : msg_(msg)
  {}
  Init_Circle_Goal_radius linear_vel(::tutorial_interfaces::action::Circle_Goal::_linear_vel_type arg)
  {
    msg_.linear_vel = std::move(arg);
    return Init_Circle_Goal_radius(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_Goal msg_;
};

class Init_Circle_Goal_point
{
public:
  Init_Circle_Goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_Goal_linear_vel point(::tutorial_interfaces::action::Circle_Goal::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Circle_Goal_linear_vel(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_Goal>()
{
  return tutorial_interfaces::action::builder::Init_Circle_Goal_point();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_Result_drawn_rad
{
public:
  Init_Circle_Result_drawn_rad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::Circle_Result drawn_rad(::tutorial_interfaces::action::Circle_Result::_drawn_rad_type arg)
  {
    msg_.drawn_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_Result>()
{
  return tutorial_interfaces::action::builder::Init_Circle_Result_drawn_rad();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_Feedback_current_point
{
public:
  Init_Circle_Feedback_current_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::Circle_Feedback current_point(::tutorial_interfaces::action::Circle_Feedback::_current_point_type arg)
  {
    msg_.current_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_Feedback>()
{
  return tutorial_interfaces::action::builder::Init_Circle_Feedback_current_point();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_SendGoal_Request_goal
{
public:
  explicit Init_Circle_SendGoal_Request_goal(::tutorial_interfaces::action::Circle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::Circle_SendGoal_Request goal(::tutorial_interfaces::action::Circle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_SendGoal_Request msg_;
};

class Init_Circle_SendGoal_Request_goal_id
{
public:
  Init_Circle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_SendGoal_Request_goal goal_id(::tutorial_interfaces::action::Circle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Circle_SendGoal_Request_goal(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_SendGoal_Request>()
{
  return tutorial_interfaces::action::builder::Init_Circle_SendGoal_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_SendGoal_Response_stamp
{
public:
  explicit Init_Circle_SendGoal_Response_stamp(::tutorial_interfaces::action::Circle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::Circle_SendGoal_Response stamp(::tutorial_interfaces::action::Circle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_SendGoal_Response msg_;
};

class Init_Circle_SendGoal_Response_accepted
{
public:
  Init_Circle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_SendGoal_Response_stamp accepted(::tutorial_interfaces::action::Circle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Circle_SendGoal_Response_stamp(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_SendGoal_Response>()
{
  return tutorial_interfaces::action::builder::Init_Circle_SendGoal_Response_accepted();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_GetResult_Request_goal_id
{
public:
  Init_Circle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::Circle_GetResult_Request goal_id(::tutorial_interfaces::action::Circle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_GetResult_Request>()
{
  return tutorial_interfaces::action::builder::Init_Circle_GetResult_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_GetResult_Response_result
{
public:
  explicit Init_Circle_GetResult_Response_result(::tutorial_interfaces::action::Circle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::Circle_GetResult_Response result(::tutorial_interfaces::action::Circle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_GetResult_Response msg_;
};

class Init_Circle_GetResult_Response_status
{
public:
  Init_Circle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_GetResult_Response_result status(::tutorial_interfaces::action::Circle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Circle_GetResult_Response_result(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_GetResult_Response>()
{
  return tutorial_interfaces::action::builder::Init_Circle_GetResult_Response_status();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_Circle_FeedbackMessage_feedback
{
public:
  explicit Init_Circle_FeedbackMessage_feedback(::tutorial_interfaces::action::Circle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::Circle_FeedbackMessage feedback(::tutorial_interfaces::action::Circle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_FeedbackMessage msg_;
};

class Init_Circle_FeedbackMessage_goal_id
{
public:
  Init_Circle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_FeedbackMessage_feedback goal_id(::tutorial_interfaces::action::Circle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Circle_FeedbackMessage_feedback(msg_);
  }

private:
  ::tutorial_interfaces::action::Circle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::Circle_FeedbackMessage>()
{
  return tutorial_interfaces::action::builder::Init_Circle_FeedbackMessage_goal_id();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__BUILDER_HPP_
