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
include tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/flags.make

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/flags.make
tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/lib/Tooling/ASTDiff/ASTDiff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/lib/Tooling/ASTDiff/ASTDiff.cpp

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/lib/Tooling/ASTDiff/ASTDiff.cpp > CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.i

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/lib/Tooling/ASTDiff/ASTDiff.cpp -o CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.s

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.requires:

.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.requires

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.provides: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.requires
	$(MAKE) -f tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/build.make tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.provides.build
.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.provides

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.provides.build: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o


# Object files for target clangToolingASTDiff
clangToolingASTDiff_OBJECTS = \
"CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o"

# External object files for target clangToolingASTDiff
clangToolingASTDiff_EXTERNAL_OBJECTS =

lib/libclangToolingASTDiff.a: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o
lib/libclangToolingASTDiff.a: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/build.make
lib/libclangToolingASTDiff.a: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../../../lib/libclangToolingASTDiff.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && $(CMAKE_COMMAND) -P CMakeFiles/clangToolingASTDiff.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangToolingASTDiff.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/build: lib/libclangToolingASTDiff.a

.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/build

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/requires: tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/ASTDiff.cpp.o.requires

.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/requires

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff && $(CMAKE_COMMAND) -P CMakeFiles/clangToolingASTDiff.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/clean

tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/lib/Tooling/ASTDiff /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Tooling/ASTDiff/CMakeFiles/clangToolingASTDiff.dir/depend
