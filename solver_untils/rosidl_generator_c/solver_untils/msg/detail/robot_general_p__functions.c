// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/robot_general_p__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `statedata`
// Member `regulatorstate`
#include "rosidl_runtime_c/string_functions.h"

bool
solver_untils__msg__RobotGeneralP__init(solver_untils__msg__RobotGeneralP * msg)
{
  if (!msg) {
    return false;
  }
  // statedata
  if (!rosidl_runtime_c__String__init(&msg->statedata)) {
    solver_untils__msg__RobotGeneralP__fini(msg);
    return false;
  }
  // version
  // mode
  // aceleration
  // regulatorstate
  if (!rosidl_runtime_c__String__init(&msg->regulatorstate)) {
    solver_untils__msg__RobotGeneralP__fini(msg);
    return false;
  }
  // voltage
  return true;
}

void
solver_untils__msg__RobotGeneralP__fini(solver_untils__msg__RobotGeneralP * msg)
{
  if (!msg) {
    return;
  }
  // statedata
  rosidl_runtime_c__String__fini(&msg->statedata);
  // version
  // mode
  // aceleration
  // regulatorstate
  rosidl_runtime_c__String__fini(&msg->regulatorstate);
  // voltage
}

bool
solver_untils__msg__RobotGeneralP__are_equal(const solver_untils__msg__RobotGeneralP * lhs, const solver_untils__msg__RobotGeneralP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // statedata
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->statedata), &(rhs->statedata)))
  {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // aceleration
  if (lhs->aceleration != rhs->aceleration) {
    return false;
  }
  // regulatorstate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->regulatorstate), &(rhs->regulatorstate)))
  {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  return true;
}

bool
solver_untils__msg__RobotGeneralP__copy(
  const solver_untils__msg__RobotGeneralP * input,
  solver_untils__msg__RobotGeneralP * output)
{
  if (!input || !output) {
    return false;
  }
  // statedata
  if (!rosidl_runtime_c__String__copy(
      &(input->statedata), &(output->statedata)))
  {
    return false;
  }
  // version
  output->version = input->version;
  // mode
  output->mode = input->mode;
  // aceleration
  output->aceleration = input->aceleration;
  // regulatorstate
  if (!rosidl_runtime_c__String__copy(
      &(input->regulatorstate), &(output->regulatorstate)))
  {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  return true;
}

solver_untils__msg__RobotGeneralP *
solver_untils__msg__RobotGeneralP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__RobotGeneralP * msg = (solver_untils__msg__RobotGeneralP *)allocator.allocate(sizeof(solver_untils__msg__RobotGeneralP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(solver_untils__msg__RobotGeneralP));
  bool success = solver_untils__msg__RobotGeneralP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
solver_untils__msg__RobotGeneralP__destroy(solver_untils__msg__RobotGeneralP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    solver_untils__msg__RobotGeneralP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
solver_untils__msg__RobotGeneralP__Sequence__init(solver_untils__msg__RobotGeneralP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__RobotGeneralP * data = NULL;

  if (size) {
    data = (solver_untils__msg__RobotGeneralP *)allocator.zero_allocate(size, sizeof(solver_untils__msg__RobotGeneralP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = solver_untils__msg__RobotGeneralP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        solver_untils__msg__RobotGeneralP__fini(&data[i - 1]);
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
solver_untils__msg__RobotGeneralP__Sequence__fini(solver_untils__msg__RobotGeneralP__Sequence * array)
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
      solver_untils__msg__RobotGeneralP__fini(&array->data[i]);
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

solver_untils__msg__RobotGeneralP__Sequence *
solver_untils__msg__RobotGeneralP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__RobotGeneralP__Sequence * array = (solver_untils__msg__RobotGeneralP__Sequence *)allocator.allocate(sizeof(solver_untils__msg__RobotGeneralP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = solver_untils__msg__RobotGeneralP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
solver_untils__msg__RobotGeneralP__Sequence__destroy(solver_untils__msg__RobotGeneralP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    solver_untils__msg__RobotGeneralP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
solver_untils__msg__RobotGeneralP__Sequence__are_equal(const solver_untils__msg__RobotGeneralP__Sequence * lhs, const solver_untils__msg__RobotGeneralP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!solver_untils__msg__RobotGeneralP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
solver_untils__msg__RobotGeneralP__Sequence__copy(
  const solver_untils__msg__RobotGeneralP__Sequence * input,
  solver_untils__msg__RobotGeneralP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(solver_untils__msg__RobotGeneralP);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    solver_untils__msg__RobotGeneralP * data =
      (solver_untils__msg__RobotGeneralP *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!solver_untils__msg__RobotGeneralP__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          solver_untils__msg__RobotGeneralP__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!solver_untils__msg__RobotGeneralP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
