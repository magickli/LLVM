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
include projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/depend.make

# Include the progress variables for this target.
include projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/progress.make

# Include the compile flags for this target's objects.
include projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/flags.make

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/flags.make
projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_diag_standalone.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_diag_standalone.cc

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_diag_standalone.cc > CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.i

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_diag_standalone.cc -o CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.s

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.requires:

.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.requires

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.provides: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.requires
	$(MAKE) -f projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/build.make projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.provides.build
.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.provides

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.provides.build: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o


projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/flags.make
projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_init_standalone.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_init_standalone.cc

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_init_standalone.cc > CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.i

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan/ubsan_init_standalone.cc -o CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.s

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.requires:

.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.requires

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.provides: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.requires
	$(MAKE) -f projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/build.make projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.provides.build
.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.provides

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.provides.build: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o


RTUbsan_standalone.osx: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o
RTUbsan_standalone.osx: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o
RTUbsan_standalone.osx: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/build.make

.PHONY : RTUbsan_standalone.osx

# Rule to build all files generated by this target.
projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/build: RTUbsan_standalone.osx

.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/build

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/requires: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_diag_standalone.cc.o.requires
projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/requires: projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/ubsan_init_standalone.cc.o.requires

.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/requires

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan && $(CMAKE_COMMAND) -P CMakeFiles/RTUbsan_standalone.osx.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/clean

projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/ubsan /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/ubsan/CMakeFiles/RTUbsan_standalone.osx.dir/depend

