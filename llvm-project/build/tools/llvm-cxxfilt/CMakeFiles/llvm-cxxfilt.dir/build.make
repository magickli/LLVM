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
include tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/flags.make

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/flags.make
tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-cxxfilt/llvm-cxxfilt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-cxxfilt/llvm-cxxfilt.cpp

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-cxxfilt/llvm-cxxfilt.cpp > CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.i

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-cxxfilt/llvm-cxxfilt.cpp -o CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.s

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.requires:

.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.requires

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.provides: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.requires
	$(MAKE) -f tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/build.make tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.provides.build
.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.provides

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.provides.build: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o


# Object files for target llvm-cxxfilt
llvm__cxxfilt_OBJECTS = \
"CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o"

# External object files for target llvm-cxxfilt
llvm__cxxfilt_EXTERNAL_OBJECTS =

bin/llvm-cxxfilt: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o
bin/llvm-cxxfilt: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/build.make
bin/llvm-cxxfilt: lib/libLLVMDemangle.a
bin/llvm-cxxfilt: lib/libLLVMSupport.a
bin/llvm-cxxfilt: lib/libLLVMDemangle.a
bin/llvm-cxxfilt: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-cxxfilt"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-cxxfilt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/build: bin/llvm-cxxfilt

.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/build

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/requires: tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/llvm-cxxfilt.cpp.o.requires

.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/requires

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt && $(CMAKE_COMMAND) -P CMakeFiles/llvm-cxxfilt.dir/cmake_clean.cmake
.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/clean

tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/llvm-cxxfilt /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-cxxfilt/CMakeFiles/llvm-cxxfilt.dir/depend

