# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_diseno_ntarobot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED diseno_ntarobot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(diseno_ntarobot_FOUND FALSE)
  elseif(NOT diseno_ntarobot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(diseno_ntarobot_FOUND FALSE)
  endif()
  return()
endif()
set(_diseno_ntarobot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT diseno_ntarobot_FIND_QUIETLY)
  message(STATUS "Found diseno_ntarobot: 0.1.0 (${diseno_ntarobot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'diseno_ntarobot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${diseno_ntarobot_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(diseno_ntarobot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${diseno_ntarobot_DIR}/${_extra}")
endforeach()
