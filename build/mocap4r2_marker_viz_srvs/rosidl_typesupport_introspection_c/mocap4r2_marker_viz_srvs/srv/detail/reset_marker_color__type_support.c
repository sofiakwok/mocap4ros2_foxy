// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"


// Include directives for member types
// Member `id`
#include "std_msgs/msg/int32.h"
// Member `id`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(message_memory);
}

void ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_fini_function(void * message_memory)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_members = {
  "mocap4r2_marker_viz_srvs__srv",  // message namespace
  "ResetMarkerColor_Request",  // message name
  1,  // number of fields
  sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request),
  ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array,  // message members
  ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle = {
  0,
  &ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)() {
  ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  if (!ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle.typesupport_identifier) {
    ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(message_memory);
}

void ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_fini_function(void * message_memory)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_members = {
  "mocap4r2_marker_viz_srvs__srv",  // message namespace
  "ResetMarkerColor_Response",  // message name
  1,  // number of fields
  sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response),
  ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_member_array,  // message members
  ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle = {
  0,
  &ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)() {
  if (!ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle.typesupport_identifier) {
    ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_members = {
  "mocap4r2_marker_viz_srvs__srv",  // service namespace
  "ResetMarkerColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle,
  NULL  // response message
  // mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle = {
  0,
  &mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor)() {
  if (!mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.typesupport_identifier) {
    mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)()->data;
  }

  return &mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle;
}
