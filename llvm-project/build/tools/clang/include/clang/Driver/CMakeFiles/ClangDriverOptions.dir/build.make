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

# Utility rule file for ClangDriverOptions.

# Include the progress variables for this target.
include tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/progress.make

tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions: tools/clang/include/clang/Driver/Options.inc


tools/clang/include/clang/Driver/Options.inc: tools/clang/include/clang/Driver/Options.inc.tmp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Updating Options.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver && /Applications/CMake.app/Contents/bin/cmake -E copy_if_different /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver/Options.inc.tmp /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver/Options.inc

tools/clang/include/clang/Driver/Options.inc.tmp: bin/llvm-tblgen
tools/clang/include/clang/Driver/Options.inc.tmp: bin/llvm-tblgen
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/CC1Options.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/CLCompatOptions.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/ClangOptionDocs.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/Options.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/CodeGen/ValueTypes.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Attributes.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Intrinsics.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAArch64.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsARM.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsBPF.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagon.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsMips.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsNVVM.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsPowerPC.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsSystemZ.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsX86.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsXCore.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Option/OptParser.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/TableGen/SearchableTable.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GenericOpcodes.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/Target.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/Target.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetCallingConv.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetItinerary.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSchedule.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSelectionDAG.td
tools/clang/include/clang/Driver/Options.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/Options.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building Options.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver && ../../../../../bin/llvm-tblgen -gen-opt-parser-defs -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/include /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver/Options.td -o /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver/Options.inc.tmp

ClangDriverOptions: tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions
ClangDriverOptions: tools/clang/include/clang/Driver/Options.inc
ClangDriverOptions: tools/clang/include/clang/Driver/Options.inc.tmp
ClangDriverOptions: tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/build.make

.PHONY : ClangDriverOptions

# Rule to build all files generated by this target.
tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/build: ClangDriverOptions

.PHONY : tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/build

tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver && $(CMAKE_COMMAND) -P CMakeFiles/ClangDriverOptions.dir/cmake_clean.cmake
.PHONY : tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/clean

tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Driver /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/include/clang/Driver/CMakeFiles/ClangDriverOptions.dir/depend
