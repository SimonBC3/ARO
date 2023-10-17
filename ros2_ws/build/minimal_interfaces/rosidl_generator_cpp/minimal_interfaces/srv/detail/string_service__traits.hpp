// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice

#ifndef MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__TRAITS_HPP_
#define MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "minimal_interfaces/srv/detail/string_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace minimal_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StringService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: figura
  {
    out << "figura: ";
    rosidl_generator_traits::value_to_yaml(msg.figura, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: figura
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "figura: ";
    rosidl_generator_traits::value_to_yaml(msg.figura, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringService_Request & msg, bool use_flow_style = false)
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

}  // namespace minimal_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use minimal_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const minimal_interfaces::srv::StringService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  minimal_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use minimal_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const minimal_interfaces::srv::StringService_Request & msg)
{
  return minimal_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<minimal_interfaces::srv::StringService_Request>()
{
  return "minimal_interfaces::srv::StringService_Request";
}

template<>
inline const char * name<minimal_interfaces::srv::StringService_Request>()
{
  return "minimal_interfaces/srv/StringService_Request";
}

template<>
struct has_fixed_size<minimal_interfaces::srv::StringService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<minimal_interfaces::srv::StringService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<minimal_interfaces::srv::StringService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace minimal_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StringService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: respuesta
  {
    out << "respuesta: ";
    rosidl_generator_traits::value_to_yaml(msg.respuesta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: respuesta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respuesta: ";
    rosidl_generator_traits::value_to_yaml(msg.respuesta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringService_Response & msg, bool use_flow_style = false)
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

}  // namespace minimal_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use minimal_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const minimal_interfaces::srv::StringService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  minimal_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use minimal_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const minimal_interfaces::srv::StringService_Response & msg)
{
  return minimal_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<minimal_interfaces::srv::StringService_Response>()
{
  return "minimal_interfaces::srv::StringService_Response";
}

template<>
inline const char * name<minimal_interfaces::srv::StringService_Response>()
{
  return "minimal_interfaces/srv/StringService_Response";
}

template<>
struct has_fixed_size<minimal_interfaces::srv::StringService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<minimal_interfaces::srv::StringService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<minimal_interfaces::srv::StringService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<minimal_interfaces::srv::StringService>()
{
  return "minimal_interfaces::srv::StringService";
}

template<>
inline const char * name<minimal_interfaces::srv::StringService>()
{
  return "minimal_interfaces/srv/StringService";
}

template<>
struct has_fixed_size<minimal_interfaces::srv::StringService>
  : std::integral_constant<
    bool,
    has_fixed_size<minimal_interfaces::srv::StringService_Request>::value &&
    has_fixed_size<minimal_interfaces::srv::StringService_Response>::value
  >
{
};

template<>
struct has_bounded_size<minimal_interfaces::srv::StringService>
  : std::integral_constant<
    bool,
    has_bounded_size<minimal_interfaces::srv::StringService_Request>::value &&
    has_bounded_size<minimal_interfaces::srv::StringService_Response>::value
  >
{
};

template<>
struct is_service<minimal_interfaces::srv::StringService>
  : std::true_type
{
};

template<>
struct is_service_request<minimal_interfaces::srv::StringService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<minimal_interfaces::srv::StringService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__TRAITS_HPP_
