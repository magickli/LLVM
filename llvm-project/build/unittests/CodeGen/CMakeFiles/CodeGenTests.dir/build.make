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
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend.make

# Include the progress variables for this target.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/DIEHashTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/DIEHashTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/DIEHashTest.cpp > CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/DIEHashTest.cpp -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.requires:

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.provides: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.requires
	$(MAKE) -f unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.provides.build
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.provides

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.provides.build: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o


unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/LowLevelTypeTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/LowLevelTypeTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/LowLevelTypeTest.cpp > CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/LowLevelTypeTest.cpp -o CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.requires:

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.provides: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.requires
	$(MAKE) -f unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.provides.build
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.provides

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.provides.build: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o


unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp > CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp -o CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.requires:

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.provides: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.requires
	$(MAKE) -f unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.provides.build
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.provides

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.provides.build: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o


unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineOperandTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineOperandTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineOperandTest.cpp > CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/MachineOperandTest.cpp -o CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.requires:

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.provides: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.requires
	$(MAKE) -f unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.provides.build
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.provides

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.provides.build: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o


unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp > CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp -o CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.requires:

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.provides: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.requires
	$(MAKE) -f unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.provides.build
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.provides

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.provides.build: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o


# Object files for target CodeGenTests
CodeGenTests_OBJECTS = \
"CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o"

# External object files for target CodeGenTests
CodeGenTests_EXTERNAL_OBJECTS =

unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make
unittests/CodeGen/CodeGenTests: lib/libLLVMAsmPrinter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCore.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libgtest_main.a
unittests/CodeGen/CodeGenTests: lib/libgtest.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitWriter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMScalarOpts.a
unittests/CodeGen/CodeGenTests: lib/libLLVMInstCombine.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTransformUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoCodeView.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoMSF.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTarget.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAnalysis.a
unittests/CodeGen/CodeGenTests: lib/libLLVMProfileData.a
unittests/CodeGen/CodeGenTests: lib/libLLVMObject.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMCParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitReader.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCore.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBinaryFormat.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMC.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDemangle.a
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable CodeGenTests"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeGenTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build: unittests/CodeGen/CodeGenTests

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o.requires
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o.requires
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o.requires
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o.requires
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o.requires

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/requires

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen && $(CMAKE_COMMAND) -P CMakeFiles/CodeGenTests.dir/cmake_clean.cmake
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/CodeGen /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend

