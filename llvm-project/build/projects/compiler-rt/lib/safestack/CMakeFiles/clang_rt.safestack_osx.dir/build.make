# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/magickli/Documents/github/llvm/llvm-project/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/magickli/Documents/github/LLVM/llvm-project/build

# Include any dependencies generated for this target.
include projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/depend.make

# Include the progress variables for this target.
include projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/progress.make

# Include the compile flags for this target's objects.
include projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/flags.make

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/flags.make
projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/safestack/safestack.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/safestack/safestack.cc

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/safestack/safestack.cc > CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.i

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/safestack/safestack.cc -o CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.s

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.requires:

.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.requires

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.provides: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.requires
	$(MAKE) -f projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/build.make projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.provides.build
.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.provides

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.provides.build: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o


# Object files for target clang_rt.safestack_osx
clang_rt_safestack_osx_OBJECTS = \
"CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o"

# External object files for target clang_rt.safestack_osx
clang_rt_safestack_osx_EXTERNAL_OBJECTS = \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_linux.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_mac.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_win.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_type_test.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_allocator.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_common.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_deadlock_detector1.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_deadlock_detector2.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_errno.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_file.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_flags.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_flag_parser.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_fuchsia.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_libc.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_libignore.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_linux.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_linux_s390.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_mac.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_persistent_allocator.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_platform_limits_linux.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_platform_limits_posix.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_posix.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_printf.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_common.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_freebsd.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_linux.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_mac.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stackdepot.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stacktrace.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stacktrace_printer.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stoptheworld_mac.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_suppressions.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_fuchsia.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_libbacktrace.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_mac.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_win.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_tls_get_addr.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_thread_registry.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_win.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_termination.cc.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommonNoLibc.osx.dir/sanitizer_common_nolibc.cc.o"

lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_linux.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_mac.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_win.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/interception/CMakeFiles/RTInterception.osx.dir/interception_type_test.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_allocator.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_common.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_deadlock_detector1.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_deadlock_detector2.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_errno.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_file.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_flags.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_flag_parser.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_fuchsia.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_libc.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_libignore.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_linux.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_linux_s390.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_mac.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_persistent_allocator.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_platform_limits_linux.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_platform_limits_posix.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_posix.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_printf.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_common.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_freebsd.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_linux.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_procmaps_mac.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stackdepot.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stacktrace.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stacktrace_printer.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_stoptheworld_mac.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_suppressions.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_fuchsia.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_libbacktrace.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_mac.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_symbolizer_win.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_tls_get_addr.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_thread_registry.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_win.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommon.osx.dir/sanitizer_termination.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/sanitizer_common/CMakeFiles/RTSanitizerCommonNoLibc.osx.dir/sanitizer_common_nolibc.cc.o
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/build.make
lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../../lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && $(CMAKE_COMMAND) -P CMakeFiles/clang_rt.safestack_osx.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clang_rt.safestack_osx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/build: lib/clang/6.0.0/lib/darwin/libclang_rt.safestack_osx.a

.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/build

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/requires: projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/safestack.cc.o.requires

.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/requires

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack && $(CMAKE_COMMAND) -P CMakeFiles/clang_rt.safestack_osx.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/clean

projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/safestack /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/safestack/CMakeFiles/clang_rt.safestack_osx.dir/depend
