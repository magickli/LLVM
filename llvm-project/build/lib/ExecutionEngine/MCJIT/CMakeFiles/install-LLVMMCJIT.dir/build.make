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

# Utility rule file for install-LLVMMCJIT.

# Include the progress variables for this target.
include lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/progress.make

lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT: lib/libLLVMMCJIT.a
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ExecutionEngine/MCJIT && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMMCJIT -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-LLVMMCJIT: lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT
install-LLVMMCJIT: lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/build.make

.PHONY : install-LLVMMCJIT

# Rule to build all files generated by this target.
lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/build: install-LLVMMCJIT

.PHONY : lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/build

lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ExecutionEngine/MCJIT && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMMCJIT.dir/cmake_clean.cmake
.PHONY : lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/clean

lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/ExecutionEngine/MCJIT /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ExecutionEngine/MCJIT /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ExecutionEngine/MCJIT/CMakeFiles/install-LLVMMCJIT.dir/depend

