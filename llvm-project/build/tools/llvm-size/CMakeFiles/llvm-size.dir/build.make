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
include tools/llvm-size/CMakeFiles/llvm-size.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-size/CMakeFiles/llvm-size.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-size/CMakeFiles/llvm-size.dir/flags.make

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o: tools/llvm-size/CMakeFiles/llvm-size.dir/flags.make
tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-size/llvm-size.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-size.dir/llvm-size.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-size/llvm-size.cpp

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-size.dir/llvm-size.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-size/llvm-size.cpp > CMakeFiles/llvm-size.dir/llvm-size.cpp.i

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-size.dir/llvm-size.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-size/llvm-size.cpp -o CMakeFiles/llvm-size.dir/llvm-size.cpp.s

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.requires:

.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.requires

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.provides: tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.requires
	$(MAKE) -f tools/llvm-size/CMakeFiles/llvm-size.dir/build.make tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.provides.build
.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.provides

tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.provides.build: tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o


# Object files for target llvm-size
llvm__size_OBJECTS = \
"CMakeFiles/llvm-size.dir/llvm-size.cpp.o"

# External object files for target llvm-size
llvm__size_EXTERNAL_OBJECTS =

bin/llvm-size: tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o
bin/llvm-size: tools/llvm-size/CMakeFiles/llvm-size.dir/build.make
bin/llvm-size: lib/libLLVMObject.a
bin/llvm-size: lib/libLLVMSupport.a
bin/llvm-size: lib/libLLVMBitReader.a
bin/llvm-size: lib/libLLVMCore.a
bin/llvm-size: lib/libLLVMBinaryFormat.a
bin/llvm-size: lib/libLLVMMCParser.a
bin/llvm-size: lib/libLLVMMC.a
bin/llvm-size: lib/libLLVMSupport.a
bin/llvm-size: lib/libLLVMDemangle.a
bin/llvm-size: tools/llvm-size/CMakeFiles/llvm-size.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-size"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-size.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-size/CMakeFiles/llvm-size.dir/build: bin/llvm-size

.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/build

tools/llvm-size/CMakeFiles/llvm-size.dir/requires: tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o.requires

.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/requires

tools/llvm-size/CMakeFiles/llvm-size.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size && $(CMAKE_COMMAND) -P CMakeFiles/llvm-size.dir/cmake_clean.cmake
.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/clean

tools/llvm-size/CMakeFiles/llvm-size.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-size /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-size/CMakeFiles/llvm-size.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-size/CMakeFiles/llvm-size.dir/depend

