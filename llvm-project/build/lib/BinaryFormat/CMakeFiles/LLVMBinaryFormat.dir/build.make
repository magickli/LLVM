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
include lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/depend.make

# Include the progress variables for this target.
include lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/progress.make

# Include the compile flags for this target's objects.
include lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/flags.make

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/flags.make
lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Dwarf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Dwarf.cpp

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Dwarf.cpp > CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.i

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Dwarf.cpp -o CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.s

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.requires:

.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.requires

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.provides: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.requires
	$(MAKE) -f lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/build.make lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.provides.build
.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.provides

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.provides.build: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o


lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/flags.make
lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Magic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Magic.cpp

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Magic.cpp > CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.i

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat/Magic.cpp -o CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.s

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.requires:

.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.requires

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.provides: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.requires
	$(MAKE) -f lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/build.make lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.provides.build
.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.provides

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.provides.build: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o


# Object files for target LLVMBinaryFormat
LLVMBinaryFormat_OBJECTS = \
"CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o" \
"CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o"

# External object files for target LLVMBinaryFormat
LLVMBinaryFormat_EXTERNAL_OBJECTS =

lib/libLLVMBinaryFormat.a: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o
lib/libLLVMBinaryFormat.a: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o
lib/libLLVMBinaryFormat.a: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/build.make
lib/libLLVMBinaryFormat.a: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../libLLVMBinaryFormat.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && $(CMAKE_COMMAND) -P CMakeFiles/LLVMBinaryFormat.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMBinaryFormat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/build: lib/libLLVMBinaryFormat.a

.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/build

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/requires: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Dwarf.cpp.o.requires
lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/requires: lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/Magic.cpp.o.requires

.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/requires

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat && $(CMAKE_COMMAND) -P CMakeFiles/LLVMBinaryFormat.dir/cmake_clean.cmake
.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/clean

lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/BinaryFormat /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/BinaryFormat/CMakeFiles/LLVMBinaryFormat.dir/depend
