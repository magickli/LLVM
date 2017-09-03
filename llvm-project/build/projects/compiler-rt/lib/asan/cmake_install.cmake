# Install script for directory: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "clang_rt.asan_osx_dynamic" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/lib/darwin" TYPE SHARED_LIBRARY FILES "/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.dylib")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "asan" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/6.0.0" TYPE FILE FILES "/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/asan_blacklist.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/scripts/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests/cmake_install.cmake")

endif()
