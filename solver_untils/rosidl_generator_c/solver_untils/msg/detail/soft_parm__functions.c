// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from solver_untils:msg/SoftParm.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/soft_parm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
solver_untils__msg__SoftParm__init(solver_untils__msg__SoftParm * msg)
{
  if (!msg) {
    return false;
  }
  // version
  // mode
  // acceleration
  return true;
}

void
solver_untils__msg__SoftParm__fini(solver_untils__msg__SoftParm * msg)
{
  if (!msg) {
    return;
  }
  // version
  // mode
  // acceleration
}

bool
solver_untils__msg__SoftParm__are_equal(const solver_untils__msg__SoftParm * lhs, const solver_untils__msg__SoftParm * rhs)
{
  if (!lhs || !rhs) {
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
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  return true;
}

bool
solver_untils__msg__SoftParm__copy(
  const solver_untils__msg__SoftParm * input,
  solver_untils__msg__SoftParm * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  output->version = input->version;
  // mode
  output->mode = input->mode;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

solver_untils__msg__SoftParm *
solver_untils__msg__SoftParm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SoftParm * msg = (solver_untils__msg__SoftParm *)allocator.allocate(sizeof(solver_untils__msg__SoftParm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(solver_untils__msg__SoftParm));
  bool success = solver_untils__msg__SoftParm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
solver_untils__msg__SoftParm__destroy(solver_untils__msg__SoftParm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    solver_untils__msg__SoftParm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
solver_untils__msg__SoftParm__Sequence__init(solver_untils__msg__SoftParm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SoftParm * data = NULL;

  if (size) {
    data = (solver_untils__msg__SoftParm *)allocator.zero_allocate(size, sizeof(solver_untils__msg__SoftParm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = solver_untils__msg__SoftParm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        solver_untils__msg__SoftParm__fini(&data[i - 1]);
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
solver_untils__msg__SoftParm__Sequence__fini(solver_untils__msg__SoftParm__Sequence * array)
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
      solver_untils__msg__SoftParm__fini(&array->data[i]);
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

solver_untils__msg__SoftParm__Sequence *
solver_untils__msg__SoftParm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__SoftParm__Sequence * array = (solver_untils__msg__SoftParm__Sequence *)allocator.allocate(sizeof(solver_untils__msg__SoftParm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = solver_untils__msg__SoftParm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
solver_untils__msg__SoftParm__Sequence__destroy(solver_untils__msg__SoftParm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    solver_untils__msg__SoftParm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
solver_untils__msg__SoftParm__Sequence__are_equal(const solver_untils__msg__SoftParm__Sequence * lhs, const solver_untils__msg__SoftParm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!solver_untils__msg__SoftParm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
solver_untils__msg__SoftParm__Sequence__copy(
  const solver_untils__msg__SoftParm__Sequence * input,
  solver_untils__msg__SoftParm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(solver_untils__msg__SoftParm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    solver_untils__msg__SoftParm * data =
      (solver_untils__msg__SoftParm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!solver_untils__msg__SoftParm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          solver_untils__msg__SoftParm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!solver_untils__msg__SoftParm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
