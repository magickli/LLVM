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

# Utility rule file for install-llvm-as.

# Include the progress variables for this target.
include tools/llvm-as/CMakeFiles/install-llvm-as.dir/progress.make

tools/llvm-as/CMakeFiles/install-llvm-as: bin/llvm-as
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-as && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=llvm-as -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-llvm-as: tools/llvm-as/CMakeFiles/install-llvm-as
install-llvm-as: tools/llvm-as/CMakeFiles/install-llvm-as.dir/build.make

.PHONY : install-llvm-as

# Rule to build all files generated by this target.
tools/llvm-as/CMakeFiles/install-llvm-as.dir/build: install-llvm-as

.PHONY : tools/llvm-as/CMakeFiles/install-llvm-as.dir/build

tools/llvm-as/CMakeFiles/install-llvm-as.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-as && $(CMAKE_COMMAND) -P CMakeFiles/install-llvm-as.dir/cmake_clean.cmake
.PHONY : tools/llvm-as/CMakeFiles/install-llvm-as.dir/clean

tools/llvm-as/CMakeFiles/install-llvm-as.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-as /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-as /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-as/CMakeFiles/install-llvm-as.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-as/CMakeFiles/install-llvm-as.dir/depend

