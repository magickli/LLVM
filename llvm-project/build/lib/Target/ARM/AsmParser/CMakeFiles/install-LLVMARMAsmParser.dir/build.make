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

# Utility rule file for install-LLVMARMAsmParser.

# Include the progress variables for this target.
include lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/progress.make

lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser: lib/libLLVMARMAsmParser.a
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/ARM/AsmParser && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMARMAsmParser -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-LLVMARMAsmParser: lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser
install-LLVMARMAsmParser: lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/build.make

.PHONY : install-LLVMARMAsmParser

# Rule to build all files generated by this target.
lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/build: install-LLVMARMAsmParser

.PHONY : lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/build

lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/ARM/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMARMAsmParser.dir/cmake_clean.cmake
.PHONY : lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/clean

lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/ARM/AsmParser /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/ARM/AsmParser /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/ARM/AsmParser/CMakeFiles/install-LLVMARMAsmParser.dir/depend
