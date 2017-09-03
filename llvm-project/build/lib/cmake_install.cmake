# Install script for directory: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib

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
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/IR/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/IRReader/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/CodeGen/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Bitcode/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Transforms/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Linker/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Analysis/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/LTO/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/MC/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Object/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ObjectYAML/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Option/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/DebugInfo/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ExecutionEngine/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/AsmParser/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/LineEditor/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ProfileData/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Passes/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ToolDrivers/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/XRay/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Testing/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/WindowsManifest/cmake_install.cmake")

endif()

