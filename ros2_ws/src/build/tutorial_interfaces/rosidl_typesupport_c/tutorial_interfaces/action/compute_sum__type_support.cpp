// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:action/ComputeSum.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_interfaces/action/detail/compute_sum__struct.h"
#include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_Goal_type_support_ids_t;

static const _ComputeSum_Goal_type_support_ids_t _ComputeSum_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_Goal_type_support_symbol_names_t _ComputeSum_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_Goal)),
  }
};

typedef struct _ComputeSum_Goal_type_support_data_t
{
  void * data[2];
} _ComputeSum_Goal_type_support_data_t;

static _ComputeSum_Goal_type_support_data_t _ComputeSum_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_Goal_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_Goal)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_Result_type_support_ids_t;

static const _ComputeSum_Result_type_support_ids_t _ComputeSum_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_Result_type_support_symbol_names_t _ComputeSum_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_Result)),
  }
};

typedef struct _ComputeSum_Result_type_support_data_t
{
  void * data[2];
} _ComputeSum_Result_type_support_data_t;

static _ComputeSum_Result_type_support_data_t _ComputeSum_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_Result_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_Result)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_Feedback_type_support_ids_t;

static const _ComputeSum_Feedback_type_support_ids_t _ComputeSum_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_Feedback_type_support_symbol_names_t _ComputeSum_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_Feedback)),
  }
};

typedef struct _ComputeSum_Feedback_type_support_data_t
{
  void * data[2];
} _ComputeSum_Feedback_type_support_data_t;

static _ComputeSum_Feedback_type_support_data_t _ComputeSum_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_Feedback_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_Feedback)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_SendGoal_Request_type_support_ids_t;

static const _ComputeSum_SendGoal_Request_type_support_ids_t _ComputeSum_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_SendGoal_Request_type_support_symbol_names_t _ComputeSum_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_SendGoal_Request)),
  }
};

typedef struct _ComputeSum_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ComputeSum_SendGoal_Request_type_support_data_t;

static _ComputeSum_SendGoal_Request_type_support_data_t _ComputeSum_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_SendGoal_Request_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_SendGoal_Request)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_SendGoal_Response_type_support_ids_t;

static const _ComputeSum_SendGoal_Response_type_support_ids_t _ComputeSum_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_SendGoal_Response_type_support_symbol_names_t _ComputeSum_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_SendGoal_Response)),
  }
};

typedef struct _ComputeSum_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ComputeSum_SendGoal_Response_type_support_data_t;

static _ComputeSum_SendGoal_Response_type_support_data_t _ComputeSum_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_SendGoal_Response_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_SendGoal_Response)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_SendGoal_type_support_ids_t;

static const _ComputeSum_SendGoal_type_support_ids_t _ComputeSum_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_SendGoal_type_support_symbol_names_t _ComputeSum_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_SendGoal)),
  }
};

typedef struct _ComputeSum_SendGoal_type_support_data_t
{
  void * data[2];
} _ComputeSum_SendGoal_type_support_data_t;

static _ComputeSum_SendGoal_type_support_data_t _ComputeSum_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_SendGoal_service_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ComputeSum_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_SendGoal)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_GetResult_Request_type_support_ids_t;

static const _ComputeSum_GetResult_Request_type_support_ids_t _ComputeSum_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_GetResult_Request_type_support_symbol_names_t _ComputeSum_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_GetResult_Request)),
  }
};

typedef struct _ComputeSum_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ComputeSum_GetResult_Request_type_support_data_t;

static _ComputeSum_GetResult_Request_type_support_data_t _ComputeSum_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_GetResult_Request_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_GetResult_Request)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_GetResult_Response_type_support_ids_t;

static const _ComputeSum_GetResult_Response_type_support_ids_t _ComputeSum_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_GetResult_Response_type_support_symbol_names_t _ComputeSum_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_GetResult_Response)),
  }
};

typedef struct _ComputeSum_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ComputeSum_GetResult_Response_type_support_data_t;

static _ComputeSum_GetResult_Response_type_support_data_t _ComputeSum_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_GetResult_Response_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_GetResult_Response)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_GetResult_type_support_ids_t;

static const _ComputeSum_GetResult_type_support_ids_t _ComputeSum_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_GetResult_type_support_symbol_names_t _ComputeSum_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_GetResult)),
  }
};

typedef struct _ComputeSum_GetResult_type_support_data_t
{
  void * data[2];
} _ComputeSum_GetResult_type_support_data_t;

static _ComputeSum_GetResult_type_support_data_t _ComputeSum_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_GetResult_service_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ComputeSum_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_GetResult)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ComputeSum_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputeSum_FeedbackMessage_type_support_ids_t;

static const _ComputeSum_FeedbackMessage_type_support_ids_t _ComputeSum_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputeSum_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputeSum_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputeSum_FeedbackMessage_type_support_symbol_names_t _ComputeSum_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, ComputeSum_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, ComputeSum_FeedbackMessage)),
  }
};

typedef struct _ComputeSum_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ComputeSum_FeedbackMessage_type_support_data_t;

static _ComputeSum_FeedbackMessage_type_support_data_t _ComputeSum_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputeSum_FeedbackMessage_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_ComputeSum_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ComputeSum_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ComputeSum_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputeSum_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputeSum_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_FeedbackMessage)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::ComputeSum_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "tutorial_interfaces/action/compute_sum.h"
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__type_support.h"

static rosidl_action_type_support_t _tutorial_interfaces__action__ComputeSum__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum)()
{
  // Thread-safe by always writing the same values to the static struct
  _tutorial_interfaces__action__ComputeSum__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_SendGoal)();
  _tutorial_interfaces__action__ComputeSum__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_GetResult)();
  _tutorial_interfaces__action__ComputeSum__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _tutorial_interfaces__action__ComputeSum__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, ComputeSum_FeedbackMessage)();
  _tutorial_interfaces__action__ComputeSum__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_tutorial_interfaces__action__ComputeSum__typesupport_c;
}

#ifdef __cplusplus
}
#endif
