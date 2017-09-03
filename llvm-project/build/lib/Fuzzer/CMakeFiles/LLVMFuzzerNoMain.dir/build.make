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
include lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/depend.make

# Include the progress variables for this target.
include lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/flags.make

# Object files for target LLVMFuzzerNoMain
LLVMFuzzerNoMain_OBJECTS =

# External object files for target LLVMFuzzerNoMain
LLVMFuzzerNoMain_EXTERNAL_OBJECTS = \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerClangCounters.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerCrossOver.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerDriver.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsDlsym.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsDlsymWin.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsWeak.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtraCounters.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIO.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIOPosix.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIOWindows.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerLoop.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerMerge.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerMutate.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerSHA1.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerShmemPosix.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerShmemWindows.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerTracePC.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtil.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilDarwin.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilLinux.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilPosix.cpp.o" \
"/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilWindows.cpp.o"

lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerClangCounters.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerCrossOver.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerDriver.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsDlsym.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsDlsymWin.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtFunctionsWeak.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerExtraCounters.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIO.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIOPosix.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerIOWindows.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerLoop.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerMerge.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerMutate.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerSHA1.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerShmemPosix.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerShmemWindows.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerTracePC.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtil.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilDarwin.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilLinux.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilPosix.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMainObjects.dir/FuzzerUtilWindows.cpp.o
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/build.make
lib/libLLVMFuzzerNoMain.a: lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../libLLVMFuzzerNoMain.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer && $(CMAKE_COMMAND) -P CMakeFiles/LLVMFuzzerNoMain.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMFuzzerNoMain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/build: lib/libLLVMFuzzerNoMain.a

.PHONY : lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/build

lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/requires:

.PHONY : lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/requires

lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer && $(CMAKE_COMMAND) -P CMakeFiles/LLVMFuzzerNoMain.dir/cmake_clean.cmake
.PHONY : lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/clean

lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Fuzzer /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Fuzzer/CMakeFiles/LLVMFuzzerNoMain.dir/depend

