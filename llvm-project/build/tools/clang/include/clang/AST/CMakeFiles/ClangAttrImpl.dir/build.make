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

# Utility rule file for ClangAttrImpl.

# Include the progress variables for this target.
include tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/progress.make

tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl: tools/clang/include/clang/AST/AttrImpl.inc


tools/clang/include/clang/AST/AttrImpl.inc: tools/clang/include/clang/AST/AttrImpl.inc.tmp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Updating AttrImpl.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST && /Applications/CMake.app/Contents/bin/cmake -E copy_if_different /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST/AttrImpl.inc.tmp /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST/AttrImpl.inc

tools/clang/include/clang/AST/AttrImpl.inc.tmp: bin/clang-tblgen
tools/clang/include/clang/AST/AttrImpl.inc.tmp: bin/clang-tblgen
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST/CommentCommands.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST/CommentHTMLNamedCharacterReferences.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST/CommentHTMLTags.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/CodeGen/ValueTypes.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Attributes.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/Intrinsics.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAArch64.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsARM.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsBPF.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagon.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsMips.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsNVVM.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsPowerPC.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsSystemZ.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsX86.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/IR/IntrinsicsXCore.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Option/OptParser.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/TableGen/SearchableTable.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GenericOpcodes.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/GlobalISel/Target.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/Target.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetCallingConv.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetItinerary.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSchedule.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/include/llvm/Target/TargetSelectionDAG.td
tools/clang/include/clang/AST/AttrImpl.inc.tmp: /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/Basic/Attr.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building AttrImpl.inc..."
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST && ../../../../../bin/clang-tblgen -gen-clang-attr-impl -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST/../../ -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST -I /Users/magickli/Documents/github/llvm/llvm-project/llvm/include /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST/../Basic/Attr.td -o /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST/AttrImpl.inc.tmp

ClangAttrImpl: tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl
ClangAttrImpl: tools/clang/include/clang/AST/AttrImpl.inc
ClangAttrImpl: tools/clang/include/clang/AST/AttrImpl.inc.tmp
ClangAttrImpl: tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/build.make

.PHONY : ClangAttrImpl

# Rule to build all files generated by this target.
tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/build: ClangAttrImpl

.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/build

tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST && $(CMAKE_COMMAND) -P CMakeFiles/ClangAttrImpl.dir/cmake_clean.cmake
.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/clean

tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include/clang/AST /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST /Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangAttrImpl.dir/depend

