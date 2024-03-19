// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mocap4r2_msgs:msg/ImusInfo.idl
// generated code does not contain a copyright notice
#include "mocap4r2_msgs/msg/detail/imus_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mocap4r2_msgs/msg/detail/imus_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mocap4r2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_msgs
cdr_serialize(
  const mocap4r2_msgs::msg::ImusInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sensor_ids
  {
    cdr << ros_message.sensor_ids;
  }
  // Member: battery_level
  cdr << ros_message.battery_level;
  // Member: temperature
  cdr << ros_message.temperature;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_msgs::msg::ImusInfo & ros_message)
{
  // Member: sensor_ids
  {
    cdr >> ros_message.sensor_ids;
  }

  // Member: battery_level
  cdr >> ros_message.battery_level;

  // Member: temperature
  cdr >> ros_message.temperature;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_msgs
get_serialized_size(
  const mocap4r2_msgs::msg::ImusInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sensor_ids
  {
    size_t array_size = ros_message.sensor_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.sensor_ids[index].size() + 1);
    }
  }
  // Member: battery_level
  {
    size_t item_size = sizeof(ros_message.battery_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap4r2_msgs
max_serialized_size_ImusInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sensor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: battery_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ImusInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mocap4r2_msgs::msg::ImusInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImusInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mocap4r2_msgs::msg::ImusInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImusInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mocap4r2_msgs::msg::ImusInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImusInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ImusInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _ImusInfo__callbacks = {
  "mocap4r2_msgs::msg",
  "ImusInfo",
  _ImusInfo__cdr_serialize,
  _ImusInfo__cdr_deserialize,
  _ImusInfo__get_serialized_size,
  _ImusInfo__max_serialized_size
};

static rosidl_message_type_support_t _ImusInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImusInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mocap4r2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mocap4r2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_msgs::msg::ImusInfo>()
{
  return &mocap4r2_msgs::msg::typesupport_fastrtps_cpp::_ImusInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_msgs, msg, ImusInfo)() {
  return &mocap4r2_msgs::msg::typesupport_fastrtps_cpp::_ImusInfo__handle;
}

#ifdef __cplusplus
}
#endif
