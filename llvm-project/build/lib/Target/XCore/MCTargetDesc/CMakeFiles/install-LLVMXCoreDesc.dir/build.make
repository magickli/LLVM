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

# Utility rule file for install-LLVMXCoreDesc.

# Include the progress variables for this target.
include lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/progress.make

lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc: lib/libLLVMXCoreDesc.a
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/MCTargetDesc && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMXCoreDesc -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-LLVMXCoreDesc: lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc
install-LLVMXCoreDesc: lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/build.make

.PHONY : install-LLVMXCoreDesc

# Rule to build all files generated by this target.
lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/build: install-LLVMXCoreDesc

.PHONY : lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/build

lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMXCoreDesc.dir/cmake_clean.cmake
.PHONY : lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/clean

lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/MCTargetDesc /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/MCTargetDesc /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/XCore/MCTargetDesc/CMakeFiles/install-LLVMXCoreDesc.dir/depend
