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
include tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/depend.make

# Include the progress variables for this target.
include tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/flags.make

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/flags.make
tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/tools/clang-offload-bundler/ClangOffloadBundler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/tools/clang-offload-bundler/ClangOffloadBundler.cpp

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/tools/clang-offload-bundler/ClangOffloadBundler.cpp > CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.i

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/tools/clang-offload-bundler/ClangOffloadBundler.cpp -o CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.s

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.requires:

.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.requires

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.provides: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.requires
	$(MAKE) -f tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/build.make tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.provides.build
.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.provides

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.provides.build: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o


# Object files for target clang-offload-bundler
clang__offload__bundler_OBJECTS = \
"CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o"

# External object files for target clang-offload-bundler
clang__offload__bundler_EXTERNAL_OBJECTS =

bin/clang-offload-bundler: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o
bin/clang-offload-bundler: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/build.make
bin/clang-offload-bundler: lib/libLLVMBitWriter.a
bin/clang-offload-bundler: lib/libLLVMCore.a
bin/clang-offload-bundler: lib/libLLVMObject.a
bin/clang-offload-bundler: lib/libLLVMSupport.a
bin/clang-offload-bundler: lib/libclangBasic.a
bin/clang-offload-bundler: lib/libLLVMAnalysis.a
bin/clang-offload-bundler: lib/libLLVMObject.a
bin/clang-offload-bundler: lib/libLLVMBitReader.a
bin/clang-offload-bundler: lib/libLLVMMCParser.a
bin/clang-offload-bundler: lib/libLLVMProfileData.a
bin/clang-offload-bundler: lib/libLLVMCore.a
bin/clang-offload-bundler: lib/libLLVMBinaryFormat.a
bin/clang-offload-bundler: lib/libLLVMMC.a
bin/clang-offload-bundler: lib/libLLVMSupport.a
bin/clang-offload-bundler: lib/libLLVMDemangle.a
bin/clang-offload-bundler: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../bin/clang-offload-bundler"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clang-offload-bundler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/build: bin/clang-offload-bundler

.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/build

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/requires: tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/ClangOffloadBundler.cpp.o.requires

.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/requires

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler && $(CMAKE_COMMAND) -P CMakeFiles/clang-offload-bundler.dir/cmake_clean.cmake
.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/clean

tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/tools/clang-offload-bundler /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/tools/clang-offload-bundler/CMakeFiles/clang-offload-bundler.dir/depend

