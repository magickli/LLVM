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

# Utility rule file for install-llvm-mc.

# Include the progress variables for this target.
include tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/progress.make

tools/llvm-mc/CMakeFiles/install-llvm-mc: bin/llvm-mc
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-mc && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=llvm-mc -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-llvm-mc: tools/llvm-mc/CMakeFiles/install-llvm-mc
install-llvm-mc: tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/build.make

.PHONY : install-llvm-mc

# Rule to build all files generated by this target.
tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/build: install-llvm-mc

.PHONY : tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/build

tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-mc && $(CMAKE_COMMAND) -P CMakeFiles/install-llvm-mc.dir/cmake_clean.cmake
.PHONY : tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/clean

tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-mc /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-mc /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-mc/CMakeFiles/install-llvm-mc.dir/depend

