// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:action/ComputeSum.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__BUILDER_HPP_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/action/detail/compute_sum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_Goal_c
{
public:
  explicit Init_ComputeSum_Goal_c(::tutorial_interfaces::action::ComputeSum_Goal & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::ComputeSum_Goal c(::tutorial_interfaces::action::ComputeSum_Goal::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_Goal msg_;
};

class Init_ComputeSum_Goal_b
{
public:
  explicit Init_ComputeSum_Goal_b(::tutorial_interfaces::action::ComputeSum_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputeSum_Goal_c b(::tutorial_interfaces::action::ComputeSum_Goal::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_ComputeSum_Goal_c(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_Goal msg_;
};

class Init_ComputeSum_Goal_a
{
public:
  Init_ComputeSum_Goal_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSum_Goal_b a(::tutorial_interfaces::action::ComputeSum_Goal::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ComputeSum_Goal_b(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_Goal>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_Goal_a();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_Result_sum
{
public:
  Init_ComputeSum_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::ComputeSum_Result sum(::tutorial_interfaces::action::ComputeSum_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_Result>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_Result_sum();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_Feedback_percent_complete
{
public:
  Init_ComputeSum_Feedback_percent_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::ComputeSum_Feedback percent_complete(::tutorial_interfaces::action::ComputeSum_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_Feedback>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_Feedback_percent_complete();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_SendGoal_Request_goal
{
public:
  explicit Init_ComputeSum_SendGoal_Request_goal(::tutorial_interfaces::action::ComputeSum_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Request goal(::tutorial_interfaces::action::ComputeSum_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Request msg_;
};

class Init_ComputeSum_SendGoal_Request_goal_id
{
public:
  Init_ComputeSum_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSum_SendGoal_Request_goal goal_id(::tutorial_interfaces::action::ComputeSum_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputeSum_SendGoal_Request_goal(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_SendGoal_Request>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_SendGoal_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_SendGoal_Response_stamp
{
public:
  explicit Init_ComputeSum_SendGoal_Response_stamp(::tutorial_interfaces::action::ComputeSum_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Response stamp(::tutorial_interfaces::action::ComputeSum_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Response msg_;
};

class Init_ComputeSum_SendGoal_Response_accepted
{
public:
  Init_ComputeSum_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSum_SendGoal_Response_stamp accepted(::tutorial_interfaces::action::ComputeSum_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputeSum_SendGoal_Response_stamp(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_SendGoal_Response>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_SendGoal_Response_accepted();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_GetResult_Request_goal_id
{
public:
  Init_ComputeSum_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::action::ComputeSum_GetResult_Request goal_id(::tutorial_interfaces::action::ComputeSum_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_GetResult_Request>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_GetResult_Request_goal_id();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_GetResult_Response_result
{
public:
  explicit Init_ComputeSum_GetResult_Response_result(::tutorial_interfaces::action::ComputeSum_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::ComputeSum_GetResult_Response result(::tutorial_interfaces::action::ComputeSum_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_GetResult_Response msg_;
};

class Init_ComputeSum_GetResult_Response_status
{
public:
  Init_ComputeSum_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSum_GetResult_Response_result status(::tutorial_interfaces::action::ComputeSum_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputeSum_GetResult_Response_result(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_GetResult_Response>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_GetResult_Response_status();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputeSum_FeedbackMessage_feedback
{
public:
  explicit Init_ComputeSum_FeedbackMessage_feedback(::tutorial_interfaces::action::ComputeSum_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::action::ComputeSum_FeedbackMessage feedback(::tutorial_interfaces::action::ComputeSum_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_FeedbackMessage msg_;
};

class Init_ComputeSum_FeedbackMessage_goal_id
{
public:
  Init_ComputeSum_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSum_FeedbackMessage_feedback goal_id(::tutorial_interfaces::action::ComputeSum_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputeSum_FeedbackMessage_feedback(msg_);
  }

private:
  ::tutorial_interfaces::action::ComputeSum_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::action::ComputeSum_FeedbackMessage>()
{
  return tutorial_interfaces::action::builder::Init_ComputeSum_FeedbackMessage_goal_id();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__BUILDER_HPP_
