//===-- BuildVariables.inc.in - llvm-config build variables -*- C++ -*-----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is configured by the build system to define the variables
// llvm-config wants to report to the user, but which can only be determined at
// build time.
//
// The variant of this file not ending with .in has been autogenerated by the
// LLVM build. Do not edit!
//
//===----------------------------------------------------------------------===//

#define LLVM_SRC_ROOT "/Users/magickli/Documents/github/llvm/llvm-project/llvm"
#define LLVM_OBJ_ROOT "/Users/magickli/Documents/github/LLVM/llvm-project/build"
#define LLVM_CPPFLAGS "  -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_CFLAGS " -fPIC -Werror=date-time -Wall -W -Wno-unused-parameter -Wwrite-strings -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wdelete-non-virtual-dtor -Wstring-conversion -O3 -DNDEBUG -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_LDFLAGS "-Wl,-search_paths_first -Wl,-headerpad_max_install_names"
#define LLVM_CXXFLAGS " -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -Wstring-conversion -O3 -DNDEBUG  -fno-exceptions -fno-rtti -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_BUILDMODE "Release"
#define LLVM_LIBDIR_SUFFIX ""
#define LLVM_TARGETS_BUILT "AArch64 AMDGPU ARM BPF Hexagon Lanai Mips MSP430 NVPTX PowerPC Sparc SystemZ X86 XCore"
#define LLVM_SYSTEM_LIBS "-lcurses -lz -lm"
#define LLVM_BUILD_SYSTEM "cmake"
#define LLVM_HAS_RTTI 0
#define LLVM_ENABLE_DYLIB 0
#define LLVM_LINK_DYLIB 0
#define LLVM_ENABLE_SHARED 0
#define LLVM_DYLIB_COMPONENTS "all"
#define LLVM_DYLIB_VERSION "6.0svn"
#define LLVM_HAS_GLOBAL_ISEL 1
#define LLVM_TOOLS_INSTALL_DIR "bin"