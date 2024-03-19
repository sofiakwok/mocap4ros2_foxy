// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_msgs:msg/RigidBodies.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_msgs/msg/detail/rigid_bodies__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_msgs/msg/detail/rigid_bodies__functions.h"
#include "mocap4r2_msgs/msg/detail/rigid_bodies__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rigidbodies`
#include "mocap4r2_msgs/msg/rigid_body.h"
// Member `rigidbodies`
#include "mocap4r2_msgs/msg/detail/rigid_body__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_msgs__msg__RigidBodies__init(message_memory);
}

void RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_fini_function(void * message_memory)
{
  mocap4r2_msgs__msg__RigidBodies__fini(message_memory);
}

size_t RigidBodies__rosidl_typesupport_introspection_c__size_function__RigidBody__rigidbodies(
  const void * untyped_member)
{
  const mocap4r2_msgs__msg__RigidBody__Sequence * member =
    (const mocap4r2_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return member->size;
}

const void * RigidBodies__rosidl_typesupport_introspection_c__get_const_function__RigidBody__rigidbodies(
  const void * untyped_member, size_t index)
{
  const mocap4r2_msgs__msg__RigidBody__Sequence * member =
    (const mocap4r2_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RigidBodies__rosidl_typesupport_introspection_c__get_function__RigidBody__rigidbodies(
  void * untyped_member, size_t index)
{
  mocap4r2_msgs__msg__RigidBody__Sequence * member =
    (mocap4r2_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RigidBodies__rosidl_typesupport_introspection_c__resize_function__RigidBody__rigidbodies(
  void * untyped_member, size_t size)
{
  mocap4r2_msgs__msg__RigidBody__Sequence * member =
    (mocap4r2_msgs__msg__RigidBody__Sequence *)(untyped_member);
  mocap4r2_msgs__msg__RigidBody__Sequence__fini(member);
  return mocap4r2_msgs__msg__RigidBody__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__RigidBodies, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__RigidBodies, frame_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rigidbodies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__RigidBodies, rigidbodies),  // bytes offset in struct
    NULL,  // default value
    RigidBodies__rosidl_typesupport_introspection_c__size_function__RigidBody__rigidbodies,  // size() function pointer
    RigidBodies__rosidl_typesupport_introspection_c__get_const_function__RigidBody__rigidbodies,  // get_const(index) function pointer
    RigidBodies__rosidl_typesupport_introspection_c__get_function__RigidBody__rigidbodies,  // get(index) function pointer
    RigidBodies__rosidl_typesupport_introspection_c__resize_function__RigidBody__rigidbodies  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_members = {
  "mocap4r2_msgs__msg",  // message namespace
  "RigidBodies",  // message name
  3,  // number of fields
  sizeof(mocap4r2_msgs__msg__RigidBodies),
  RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_member_array,  // message members
  RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_init_function,  // function to initialize message memory (memory has to be allocated)
  RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_type_support_handle = {
  0,
  &RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_msgs, msg, RigidBodies)() {
  RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_msgs, msg, RigidBody)();
  if (!RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_type_support_handle.typesupport_identifier) {
    RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RigidBodies__rosidl_typesupport_introspection_c__RigidBodies_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
