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
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/depend.make

# Include the progress variables for this target.
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/flags.make

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/flags.make
lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp > CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.i

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/Lanai/InstPrinter/LanaiInstPrinter.cpp -o CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.s

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.requires:

.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.requires

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.provides: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.requires
	$(MAKE) -f lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/build.make lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.provides.build
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.provides

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.provides.build: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o


# Object files for target LLVMLanaiAsmPrinter
LLVMLanaiAsmPrinter_OBJECTS = \
"CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o"

# External object files for target LLVMLanaiAsmPrinter
LLVMLanaiAsmPrinter_EXTERNAL_OBJECTS =

lib/libLLVMLanaiAsmPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o
lib/libLLVMLanaiAsmPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/build.make
lib/libLLVMLanaiAsmPrinter.a: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMLanaiAsmPrinter.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLanaiAsmPrinter.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMLanaiAsmPrinter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/build: lib/libLLVMLanaiAsmPrinter.a

.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/build

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/requires: lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/LanaiInstPrinter.cpp.o.requires

.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/requires

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLanaiAsmPrinter.dir/cmake_clean.cmake
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/clean

lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/Lanai/InstPrinter /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Lanai/InstPrinter/CMakeFiles/LLVMLanaiAsmPrinter.dir/depend

