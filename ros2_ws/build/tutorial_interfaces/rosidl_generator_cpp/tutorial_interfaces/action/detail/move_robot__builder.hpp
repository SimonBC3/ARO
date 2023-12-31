// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/action/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Goal_objective_point
{
public:
  explicit Init_MoveRobot_Goal_objective_point(::tutorial_interfaces::action::MoveRobot_Goal & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::MoveRobot_Goal objective_point(::tutorial_interfaces::action::MoveRobot_Goal::_objective_point_type arg)
  {
    msg_.objective_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_Goal msg_;
};

class Init_MoveRobot_Goal_command
{
public:
  Init_MoveRobot_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Goal_objective_point command(::tutorial_interfaces::action::MoveRobot_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MoveRobot_Goal_objective_point(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_Goal>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_Goal_command();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Result_answer
{
public:
  Init_MoveRobot_Result_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::MoveRobot_Result answer(::tutorial_interfaces::action::MoveRobot_Result::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_Result>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_Result_answer();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Feedback_current_point
{
public:
  Init_MoveRobot_Feedback_current_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::MoveRobot_Feedback current_point(::tutorial_interfaces::action::MoveRobot_Feedback::_current_point_type arg)
  {
    msg_.current_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_Feedback>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_Feedback_current_point();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Request_goal
{
public:
  explicit Init_MoveRobot_SendGoal_Request_goal(::tutorial_interfaces::action::MoveRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Request goal(::tutorial_interfaces::action::MoveRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Request msg_;
};

class Init_MoveRobot_SendGoal_Request_goal_id
{
public:
  Init_MoveRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Request_goal goal_id(::tutorial_interfaces::action::MoveRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_SendGoal_Request>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_SendGoal_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRobot_SendGoal_Response_stamp(::tutorial_interfaces::action::MoveRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Response stamp(::tutorial_interfaces::action::MoveRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Response msg_;
};

class Init_MoveRobot_SendGoal_Response_accepted
{
public:
  Init_MoveRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Response_stamp accepted(::tutorial_interfaces::action::MoveRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_SendGoal_Response>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_SendGoal_Response_accepted();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Request_goal_id
{
public:
  Init_MoveRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::MoveRobot_GetResult_Request goal_id(::tutorial_interfaces::action::MoveRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_GetResult_Request>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_GetResult_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Response_result
{
public:
  explicit Init_MoveRobot_GetResult_Response_result(::tutorial_interfaces::action::MoveRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::MoveRobot_GetResult_Response result(::tutorial_interfaces::action::MoveRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_GetResult_Response msg_;
};

class Init_MoveRobot_GetResult_Response_status
{
public:
  Init_MoveRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_GetResult_Response_result status(::tutorial_interfaces::action::MoveRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRobot_GetResult_Response_result(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_GetResult_Response>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_GetResult_Response_status();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRobot_FeedbackMessage_feedback(::tutorial_interfaces::action::MoveRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::MoveRobot_FeedbackMessage feedback(::tutorial_interfaces::action::MoveRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_FeedbackMessage msg_;
};

class Init_MoveRobot_FeedbackMessage_goal_id
{
public:
  Init_MoveRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_FeedbackMessage_feedback goal_id(::tutorial_interfaces::action::MoveRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::tutorial_interfaces::action::MoveRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::MoveRobot_FeedbackMessage>()
{
  return tutorial_interfaces::action::builder::Init_MoveRobot_FeedbackMessage_goal_id();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
