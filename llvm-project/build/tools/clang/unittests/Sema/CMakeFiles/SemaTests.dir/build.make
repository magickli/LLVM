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
include tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/depend.make

# Include the progress variables for this target.
include tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/flags.make

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/flags.make
tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/unittests/Sema/ExternalSemaSourceTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/unittests/Sema/ExternalSemaSourceTest.cpp

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/unittests/Sema/ExternalSemaSourceTest.cpp > CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.i

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/unittests/Sema/ExternalSemaSourceTest.cpp -o CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.s

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.requires:

.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.requires

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.provides: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.requires
	$(MAKE) -f tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/build.make tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.provides.build
.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.provides

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.provides.build: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o


# Object files for target SemaTests
SemaTests_OBJECTS = \
"CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o"

# External object files for target SemaTests
SemaTests_EXTERNAL_OBJECTS =

tools/clang/unittests/Sema/SemaTests: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o
tools/clang/unittests/Sema/SemaTests: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/build.make
tools/clang/unittests/Sema/SemaTests: lib/libLLVMSupport.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMSupport.a
tools/clang/unittests/Sema/SemaTests: lib/libgtest_main.a
tools/clang/unittests/Sema/SemaTests: lib/libgtest.a
tools/clang/unittests/Sema/SemaTests: lib/libclangAST.a
tools/clang/unittests/Sema/SemaTests: lib/libclangBasic.a
tools/clang/unittests/Sema/SemaTests: lib/libclangFrontend.a
tools/clang/unittests/Sema/SemaTests: lib/libclangParse.a
tools/clang/unittests/Sema/SemaTests: lib/libclangSema.a
tools/clang/unittests/Sema/SemaTests: lib/libclangTooling.a
tools/clang/unittests/Sema/SemaTests: lib/libclangFrontend.a
tools/clang/unittests/Sema/SemaTests: lib/libclangParse.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMMCParser.a
tools/clang/unittests/Sema/SemaTests: lib/libclangSerialization.a
tools/clang/unittests/Sema/SemaTests: lib/libclangSema.a
tools/clang/unittests/Sema/SemaTests: lib/libclangEdit.a
tools/clang/unittests/Sema/SemaTests: lib/libclangAnalysis.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMBitReader.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMProfileData.a
tools/clang/unittests/Sema/SemaTests: lib/libclangDriver.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMOption.a
tools/clang/unittests/Sema/SemaTests: lib/libclangASTMatchers.a
tools/clang/unittests/Sema/SemaTests: lib/libclangFormat.a
tools/clang/unittests/Sema/SemaTests: lib/libclangToolingCore.a
tools/clang/unittests/Sema/SemaTests: lib/libclangAST.a
tools/clang/unittests/Sema/SemaTests: lib/libclangRewrite.a
tools/clang/unittests/Sema/SemaTests: lib/libclangLex.a
tools/clang/unittests/Sema/SemaTests: lib/libclangBasic.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMCore.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMBinaryFormat.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMMC.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMSupport.a
tools/clang/unittests/Sema/SemaTests: lib/libLLVMDemangle.a
tools/clang/unittests/Sema/SemaTests: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SemaTests"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SemaTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/build: tools/clang/unittests/Sema/SemaTests

.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/build

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/requires: tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/ExternalSemaSourceTest.cpp.o.requires

.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/requires

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema && $(CMAKE_COMMAND) -P CMakeFiles/SemaTests.dir/cmake_clean.cmake
.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/clean

tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/unittests/Sema /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/unittests/Sema/CMakeFiles/SemaTests.dir/depend

