// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `id`
#include "std_msgs/msg/detail/int32__functions.h"

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!std_msgs__msg__Int32__init(&msg->id)) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(msg);
    return false;
  }
  return true;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
  std_msgs__msg__Int32__fini(&msg->id);
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!std_msgs__msg__Int32__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)allocator.allocate(sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request));
  bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * data = NULL;

  if (size) {
    data = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)allocator.zero_allocate(size, sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *)allocator.allocate(sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request);
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * data =
      (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)allocator.allocate(sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response));
  bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * data = NULL;

  if (size) {
    data = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)allocator.zero_allocate(size, sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array = (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *)allocator.allocate(sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response);
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * data =
      (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}