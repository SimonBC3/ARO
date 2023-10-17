// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice

#ifndef MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_HPP_
#define MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__minimal_interfaces__srv__StringService_Request __attribute__((deprecated))
#else
# define DEPRECATED__minimal_interfaces__srv__StringService_Request __declspec(deprecated)
#endif

namespace minimal_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StringService_Request_
{
  using Type = StringService_Request_<ContainerAllocator>;

  explicit StringService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->figura = "";
    }
  }

  explicit StringService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : figura(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->figura = "";
    }
  }

  // field types and members
  using _figura_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _figura_type figura;

  // setters for named parameter idiom
  Type & set__figura(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->figura = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    minimal_interfaces::srv::StringService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const minimal_interfaces::srv::StringService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      minimal_interfaces::srv::StringService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      minimal_interfaces::srv::StringService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__minimal_interfaces__srv__StringService_Request
    std::shared_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__minimal_interfaces__srv__StringService_Request
    std::shared_ptr<minimal_interfaces::srv::StringService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringService_Request_ & other) const
  {
    if (this->figura != other.figura) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringService_Request_

// alias to use template instance with default allocator
using StringService_Request =
  minimal_interfaces::srv::StringService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace minimal_interfaces


#ifndef _WIN32
# define DEPRECATED__minimal_interfaces__srv__StringService_Response __attribute__((deprecated))
#else
# define DEPRECATED__minimal_interfaces__srv__StringService_Response __declspec(deprecated)
#endif

namespace minimal_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StringService_Response_
{
  using Type = StringService_Response_<ContainerAllocator>;

  explicit StringService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respuesta = "";
    }
  }

  explicit StringService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : respuesta(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respuesta = "";
    }
  }

  // field types and members
  using _respuesta_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _respuesta_type respuesta;

  // setters for named parameter idiom
  Type & set__respuesta(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->respuesta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    minimal_interfaces::srv::StringService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const minimal_interfaces::srv::StringService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      minimal_interfaces::srv::StringService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      minimal_interfaces::srv::StringService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__minimal_interfaces__srv__StringService_Response
    std::shared_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__minimal_interfaces__srv__StringService_Response
    std::shared_ptr<minimal_interfaces::srv::StringService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringService_Response_ & other) const
  {
    if (this->respuesta != other.respuesta) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringService_Response_

// alias to use template instance with default allocator
using StringService_Response =
  minimal_interfaces::srv::StringService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace minimal_interfaces

namespace minimal_interfaces
{

namespace srv
{

struct StringService
{
  using Request = minimal_interfaces::srv::StringService_Request;
  using Response = minimal_interfaces::srv::StringService_Response;
};

}  // namespace srv

}  // namespace minimal_interfaces

#endif  // MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_HPP_
