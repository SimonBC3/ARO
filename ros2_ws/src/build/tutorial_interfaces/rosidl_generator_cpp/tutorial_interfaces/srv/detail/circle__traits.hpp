// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Circle_Request & msg,
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
  const Circle_Request & msg,
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

inline std::string to_yaml(const Circle_Request & msg, bool use_flow_style = false)
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
  const tutorial_interfaces::srv::Circle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::Circle_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Circle_Request>()
{
  return "tutorial_interfaces::srv::Circle_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::Circle_Request>()
{
  return "tutorial_interfaces/srv/Circle_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Circle_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Circle_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tutorial_interfaces::srv::Circle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Circle_Response & msg,
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
  const Circle_Response & msg,
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

inline std::string to_yaml(const Circle_Response & msg, bool use_flow_style = false)
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
  const tutorial_interfaces::srv::Circle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::Circle_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Circle_Response>()
{
  return "tutorial_interfaces::srv::Circle_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::Circle_Response>()
{
  return "tutorial_interfaces/srv/Circle_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Circle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Circle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::Circle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Circle>()
{
  return "tutorial_interfaces::srv::Circle";
}

template<>
inline const char * name<tutorial_interfaces::srv::Circle>()
{
  return "tutorial_interfaces/srv/Circle";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Circle>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::Circle_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::Circle_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Circle>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::Circle_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::Circle_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::Circle>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::Circle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::Circle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__TRAITS_HPP_
