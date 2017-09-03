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

# Utility rule file for OptsTestTableGen.

# Include the progress variables for this target.
include unittests/Option/CMakeFiles/OptsTestTableGen.dir/progress.make

unittests/Option/CMakeFiles/OptsTestTableGen: unittests/Option/Opts.inc


unittests/Option/Opts.inc: unittests/Option/Opts.inc.tmp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Updating Opts.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option && /Applications/CMake.app/Contents/bin/cmake -E copy_if_different /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option/Opts.inc.tmp /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option/Opts.inc

unittests/Option/Opts.inc.tmp: bin/llvm-tblgen
unittests/Option/Opts.inc.tmp: bin/llvm-tblgen
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/Option/Opts.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/CodeGen/ValueTypes.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Attributes.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Intrinsics.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAArch64.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsARM.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsBPF.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagon.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsMips.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsNVVM.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsPowerPC.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsSystemZ.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsX86.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsXCore.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Option/OptParser.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/TableGen/SearchableTable.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GenericOpcodes.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/Target.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/Target.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetCallingConv.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetItinerary.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSchedule.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSelectionDAG.td
unittests/Option/Opts.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/Option/Opts.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building Opts.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option && ../../bin/llvm-tblgen -gen-opt-parser-defs -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/Option -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/include /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/Option/Opts.td -o /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option/Opts.inc.tmp

OptsTestTableGen: unittests/Option/CMakeFiles/OptsTestTableGen
OptsTestTableGen: unittests/Option/Opts.inc
OptsTestTableGen: unittests/Option/Opts.inc.tmp
OptsTestTableGen: unittests/Option/CMakeFiles/OptsTestTableGen.dir/build.make

.PHONY : OptsTestTableGen

# Rule to build all files generated by this target.
unittests/Option/CMakeFiles/OptsTestTableGen.dir/build: OptsTestTableGen

.PHONY : unittests/Option/CMakeFiles/OptsTestTableGen.dir/build

unittests/Option/CMakeFiles/OptsTestTableGen.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option && $(CMAKE_COMMAND) -P CMakeFiles/OptsTestTableGen.dir/cmake_clean.cmake
.PHONY : unittests/Option/CMakeFiles/OptsTestTableGen.dir/clean

unittests/Option/CMakeFiles/OptsTestTableGen.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/unittests/Option /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option /Users/magickli/Documents/github/LLVM/llvm-project/build/unittests/Option/CMakeFiles/OptsTestTableGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Option/CMakeFiles/OptsTestTableGen.dir/depend

