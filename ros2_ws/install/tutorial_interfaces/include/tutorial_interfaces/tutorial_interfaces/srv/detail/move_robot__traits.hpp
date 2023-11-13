// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objective_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: objective_point
  {
    out << "objective_point: ";
    to_flow_style_yaml(msg.objective_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objective_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objective_point:\n";
    to_block_style_yaml(msg.objective_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::MoveRobot_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::MoveRobot_Request>()
{
  return "tutorial_interfaces::srv::MoveRobot_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::MoveRobot_Request>()
{
  return "tutorial_interfaces/srv/MoveRobot_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tutorial_interfaces::srv::MoveRobot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: proximity
  {
    out << "proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: proximity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::MoveRobot_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::MoveRobot_Response>()
{
  return "tutorial_interfaces::srv::MoveRobot_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::MoveRobot_Response>()
{
  return "tutorial_interfaces/srv/MoveRobot_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::MoveRobot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::MoveRobot>()
{
  return "tutorial_interfaces::srv::MoveRobot";
}

template<>
inline const char * name<tutorial_interfaces::srv::MoveRobot>()
{
  return "tutorial_interfaces/srv/MoveRobot";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::MoveRobot_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::MoveRobot_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::MoveRobot>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::MoveRobot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::MoveRobot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
