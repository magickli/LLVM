# Install script for directory: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/include/sanitizer" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/allocator_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/asan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/common_interface_defs.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/coverage_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/dfsan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/esan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/linux_syscall_hooks.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/lsan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/msan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/tsan_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/sanitizer/tsan_interface_atomic.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/include/xray" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/xray/xray_interface.h"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include/xray/xray_log_interface.h"
    )
endif()

