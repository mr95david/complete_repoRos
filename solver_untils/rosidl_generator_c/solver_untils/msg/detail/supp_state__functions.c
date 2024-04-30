// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from solver_untils:msg/SuppState.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/supp_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
solver_untils__msg__SuppState__init(solver_untils__msg__SuppState * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    solver_untils__msg__SuppState__fini(msg);
    return false;
  }
  // voltage
  // currentmr
  // currentml
  return true;
}

void
solver_untils__msg__SuppState__fini(solver_untils__msg__SuppState * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // voltage
  // currentmr
  // currentml
}

bool
solver_untils__msg__SuppState__are_equal(const solver_untils__msg__SuppState * lhs, const solver_untils__msg__SuppState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // currentmr
  if (lhs->currentmr != rhs->currentmr) {
    return false;
  }
  // currentml
  if (lhs->currentml != rhs->currentml) {
    return false;
  }
  return true;
}

bool
solver_untils__msg__SuppState__copy(
  const solver_untils__msg__SuppState * input,
  solver_untils__msg__SuppState * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // currentmr
  output->currentmr = input->currentmr;
  // currentml
  output->currentml = input->currentml;
  return true;
}

solver_untils__msg__SuppState *
solver_untils__msg__SuppState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SuppState * msg = (solver_untils__msg__SuppState *)allocator.allocate(sizeof(solver_untils__msg__SuppState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(solver_untils__msg__SuppState));
  bool success = solver_untils__msg__SuppState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
solver_untils__msg__SuppState__destroy(solver_untils__msg__SuppState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    solver_untils__msg__SuppState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
solver_untils__msg__SuppState__Sequence__init(solver_untils__msg__SuppState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SuppState * data = NULL;

  if (size) {
    data = (solver_untils__msg__SuppState *)allocator.zero_allocate(size, sizeof(solver_untils__msg__SuppState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = solver_untils__msg__SuppState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        solver_untils__msg__SuppState__fini(&data[i - 1]);
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
solver_untils__msg__SuppState__Sequence__fini(solver_untils__msg__SuppState__Sequence * array)
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
      solver_untils__msg__SuppState__fini(&array->data[i]);
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

solver_untils__msg__SuppState__Sequence *
solver_untils__msg__SuppState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SuppState__Sequence * array = (solver_untils__msg__SuppState__Sequence *)allocator.allocate(sizeof(solver_untils__msg__SuppState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = solver_untils__msg__SuppState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
solver_untils__msg__SuppState__Sequence__destroy(solver_untils__msg__SuppState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    solver_untils__msg__SuppState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
solver_untils__msg__SuppState__Sequence__are_equal(const solver_untils__msg__SuppState__Sequence * lhs, const solver_untils__msg__SuppState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!solver_untils__msg__SuppState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
solver_untils__msg__SuppState__Sequence__copy(
  const solver_untils__msg__SuppState__Sequence * input,
  solver_untils__msg__SuppState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(solver_untils__msg__SuppState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    solver_untils__msg__SuppState * data =
      (solver_untils__msg__SuppState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!solver_untils__msg__SuppState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          solver_untils__msg__SuppState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!solver_untils__msg__SuppState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
