# Install script for directory: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/builtins/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/interception/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/stats/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/lsan/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/tsan/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/tsan/dd/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/profile/cmake_install.cmake")

endif()

