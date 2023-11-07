// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:action/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__TRAITS_HPP_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/action/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: linear_vel
  {
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_Goal & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_Goal>()
{
  return "tutorial_interfaces::action::Circle_Goal";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_Goal>()
{
  return "tutorial_interfaces/action/Circle_Goal";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: drawn_rad
  {
    out << "drawn_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.drawn_rad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drawn_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drawn_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.drawn_rad, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_Result & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_Result>()
{
  return "tutorial_interfaces::action::Circle_Result";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_Result>()
{
  return "tutorial_interfaces/action/Circle_Result";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_point'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_point
  {
    out << "current_point: ";
    to_flow_style_yaml(msg.current_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_point:\n";
    to_block_style_yaml(msg.current_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_Feedback & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_Feedback>()
{
  return "tutorial_interfaces::action::Circle_Feedback";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_Feedback>()
{
  return "tutorial_interfaces/action/Circle_Feedback";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tutorial_interfaces/action/detail/circle__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_SendGoal_Request & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_SendGoal_Request>()
{
  return "tutorial_interfaces::action::Circle_SendGoal_Request";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_SendGoal_Request>()
{
  return "tutorial_interfaces/action/Circle_SendGoal_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::Circle_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::Circle_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_SendGoal_Response & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_SendGoal_Response>()
{
  return "tutorial_interfaces::action::Circle_SendGoal_Response";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_SendGoal_Response>()
{
  return "tutorial_interfaces/action/Circle_SendGoal_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_SendGoal>()
{
  return "tutorial_interfaces::action::Circle_SendGoal";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_SendGoal>()
{
  return "tutorial_interfaces/action/Circle_SendGoal";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::action::Circle_SendGoal_Request>::value &&
    has_fixed_size<tutorial_interfaces::action::Circle_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::action::Circle_SendGoal_Request>::value &&
    has_bounded_size<tutorial_interfaces::action::Circle_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::action::Circle_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::action::Circle_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::action::Circle_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_GetResult_Request & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_GetResult_Request>()
{
  return "tutorial_interfaces::action::Circle_GetResult_Request";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_GetResult_Request>()
{
  return "tutorial_interfaces/action/Circle_GetResult_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/detail/circle__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_GetResult_Response & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_GetResult_Response>()
{
  return "tutorial_interfaces::action::Circle_GetResult_Response";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_GetResult_Response>()
{
  return "tutorial_interfaces/action/Circle_GetResult_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::Circle_Result>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::Circle_Result>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_GetResult>()
{
  return "tutorial_interfaces::action::Circle_GetResult";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_GetResult>()
{
  return "tutorial_interfaces/action/Circle_GetResult";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::action::Circle_GetResult_Request>::value &&
    has_fixed_size<tutorial_interfaces::action::Circle_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::action::Circle_GetResult_Request>::value &&
    has_bounded_size<tutorial_interfaces::action::Circle_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::action::Circle_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::action::Circle_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::action::Circle_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/detail/circle__traits.hpp"

namespace tutorial_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Circle_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Circle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Circle_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::action::Circle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::action::Circle_FeedbackMessage & msg)
{
  return tutorial_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::action::Circle_FeedbackMessage>()
{
  return "tutorial_interfaces::action::Circle_FeedbackMessage";
}

template<>
inline const char * name<tutorial_interfaces::action::Circle_FeedbackMessage>()
{
  return "tutorial_interfaces/action/Circle_FeedbackMessage";
}

template<>
struct has_fixed_size<tutorial_interfaces::action::Circle_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::action::Circle_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::action::Circle_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::action::Circle_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tutorial_interfaces::action::Circle_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tutorial_interfaces::action::Circle>
  : std::true_type
{
};

template<>
struct is_action_goal<tutorial_interfaces::action::Circle_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tutorial_interfaces::action::Circle_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tutorial_interfaces::action::Circle_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__TRAITS_HPP_
