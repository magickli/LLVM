# Install script for directory: /Users/magickli/Documents/github/llvm/llvm-project/llvm

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "llvm-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm"
    "/Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/license\\.txt$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "llvm-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/magickli/Documents/github/LLVM/llvm-project/build/include/llvm" FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/cmakefiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Demangle/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Support/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/TableGen/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/TableGen/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/include/llvm/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/FileCheck/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/PerfectShuffle/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/count/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/not/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/llvm-lit/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/yaml-bench/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/tools/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/runtimes/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/examples/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/lit/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/test/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/utils/unittest/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/docs/cmake_install.cmake")
  include("/Users/magickli/Documents/github/LLVM/llvm-project/build/cmake/modules/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/magickli/Documents/github/LLVM/llvm-project/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
