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
include examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/depend.make

# Include the progress variables for this target.
include examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/progress.make

# Include the compile flags for this target's objects.
include examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/flags.make

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/flags.make
examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/examples/Kaleidoscope/Chapter5/toy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/examples/Kaleidoscope/Chapter5/toy.cpp

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/examples/Kaleidoscope/Chapter5/toy.cpp > CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.i

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/examples/Kaleidoscope/Chapter5/toy.cpp -o CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.s

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.requires:

.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.requires

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.provides: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.requires
	$(MAKE) -f examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/build.make examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.provides.build
.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.provides

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.provides.build: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o


# Object files for target Kaleidoscope-Ch5
Kaleidoscope__Ch5_OBJECTS = \
"CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o"

# External object files for target Kaleidoscope-Ch5
Kaleidoscope__Ch5_EXTERNAL_OBJECTS =

bin/Kaleidoscope-Ch5: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o
bin/Kaleidoscope-Ch5: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/build.make
bin/Kaleidoscope-Ch5: lib/libLLVMAnalysis.a
bin/Kaleidoscope-Ch5: lib/libLLVMCore.a
bin/Kaleidoscope-Ch5: lib/libLLVMExecutionEngine.a
bin/Kaleidoscope-Ch5: lib/libLLVMInstCombine.a
bin/Kaleidoscope-Ch5: lib/libLLVMObject.a
bin/Kaleidoscope-Ch5: lib/libLLVMRuntimeDyld.a
bin/Kaleidoscope-Ch5: lib/libLLVMScalarOpts.a
bin/Kaleidoscope-Ch5: lib/libLLVMSupport.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86CodeGen.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86AsmParser.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86AsmPrinter.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86Desc.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86Disassembler.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86Info.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86Utils.a
bin/Kaleidoscope-Ch5: lib/libLLVMAsmPrinter.a
bin/Kaleidoscope-Ch5: lib/libLLVMDebugInfoCodeView.a
bin/Kaleidoscope-Ch5: lib/libLLVMDebugInfoMSF.a
bin/Kaleidoscope-Ch5: lib/libLLVMGlobalISel.a
bin/Kaleidoscope-Ch5: lib/libLLVMSelectionDAG.a
bin/Kaleidoscope-Ch5: lib/libLLVMCodeGen.a
bin/Kaleidoscope-Ch5: lib/libLLVMScalarOpts.a
bin/Kaleidoscope-Ch5: lib/libLLVMInstCombine.a
bin/Kaleidoscope-Ch5: lib/libLLVMTarget.a
bin/Kaleidoscope-Ch5: lib/libLLVMTransformUtils.a
bin/Kaleidoscope-Ch5: lib/libLLVMBitWriter.a
bin/Kaleidoscope-Ch5: lib/libLLVMAnalysis.a
bin/Kaleidoscope-Ch5: lib/libLLVMProfileData.a
bin/Kaleidoscope-Ch5: lib/libLLVMObject.a
bin/Kaleidoscope-Ch5: lib/libLLVMBitReader.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86AsmPrinter.a
bin/Kaleidoscope-Ch5: lib/libLLVMX86Utils.a
bin/Kaleidoscope-Ch5: lib/libLLVMCore.a
bin/Kaleidoscope-Ch5: lib/libLLVMBinaryFormat.a
bin/Kaleidoscope-Ch5: lib/libLLVMMCParser.a
bin/Kaleidoscope-Ch5: lib/libLLVMMCDisassembler.a
bin/Kaleidoscope-Ch5: lib/libLLVMMC.a
bin/Kaleidoscope-Ch5: lib/libLLVMSupport.a
bin/Kaleidoscope-Ch5: lib/libLLVMDemangle.a
bin/Kaleidoscope-Ch5: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/Kaleidoscope-Ch5"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kaleidoscope-Ch5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/build: bin/Kaleidoscope-Ch5

.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/build

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/requires: examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/toy.cpp.o.requires

.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/requires

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 && $(CMAKE_COMMAND) -P CMakeFiles/Kaleidoscope-Ch5.dir/cmake_clean.cmake
.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/clean

examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/examples/Kaleidoscope/Chapter5 /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5 /Users/magickli/Documents/github/LLVM/llvm-project/build/examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/Kaleidoscope/Chapter5/CMakeFiles/Kaleidoscope-Ch5.dir/depend

