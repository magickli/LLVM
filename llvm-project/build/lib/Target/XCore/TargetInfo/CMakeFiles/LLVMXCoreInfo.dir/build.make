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
include lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/depend.make

# Include the progress variables for this target.
include lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/flags.make

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/flags.make
lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/TargetInfo/XCoreTargetInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/TargetInfo/XCoreTargetInfo.cpp

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/TargetInfo/XCoreTargetInfo.cpp > CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.i

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/TargetInfo/XCoreTargetInfo.cpp -o CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.s

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.requires:

.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.requires

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.provides: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.requires
	$(MAKE) -f lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/build.make lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.provides.build
.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.provides

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.provides.build: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o


# Object files for target LLVMXCoreInfo
LLVMXCoreInfo_OBJECTS = \
"CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o"

# External object files for target LLVMXCoreInfo
LLVMXCoreInfo_EXTERNAL_OBJECTS =

lib/libLLVMXCoreInfo.a: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o
lib/libLLVMXCoreInfo.a: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/build.make
lib/libLLVMXCoreInfo.a: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMXCoreInfo.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMXCoreInfo.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMXCoreInfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/build: lib/libLLVMXCoreInfo.a

.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/build

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/requires: lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/XCoreTargetInfo.cpp.o.requires

.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/requires

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMXCoreInfo.dir/cmake_clean.cmake
.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/clean

lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/XCore/TargetInfo /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/XCore/TargetInfo/CMakeFiles/LLVMXCoreInfo.dir/depend
