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

# Utility rule file for install-LLVMX86CodeGen.

# Include the progress variables for this target.
include lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/progress.make

lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen: lib/libLLVMX86CodeGen.a
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/X86 && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=LLVMX86CodeGen -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-LLVMX86CodeGen: lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen
install-LLVMX86CodeGen: lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/build.make

.PHONY : install-LLVMX86CodeGen

# Rule to build all files generated by this target.
lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/build: install-LLVMX86CodeGen

.PHONY : lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/build

lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/X86 && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMX86CodeGen.dir/cmake_clean.cmake
.PHONY : lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/clean

lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/X86 /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/X86 /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/X86/CMakeFiles/install-LLVMX86CodeGen.dir/depend

