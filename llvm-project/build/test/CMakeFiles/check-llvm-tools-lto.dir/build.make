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

# Utility rule file for check-llvm-tools-lto.

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-tools-lto.dir/progress.make

test/CMakeFiles/check-llvm-tools-lto:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /Users/magickli/Documents/github/llvm/llvm-project/llvm/test/tools/lto"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/test && /usr/local/bin/python2.7 /Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/lit/lit.py -sv --param llvm_site_config=/Users/magickli/Documents/github/LLVM/llvm-project/build/test/lit.site.cfg --param llvm_unit_site_config=/Users/magickli/Documents/github/LLVM/llvm-project/build/test/Unit/lit.site.cfg /Users/magickli/Documents/github/llvm/llvm-project/llvm/test/tools/lto

check-llvm-tools-lto: test/CMakeFiles/check-llvm-tools-lto
check-llvm-tools-lto: test/CMakeFiles/check-llvm-tools-lto.dir/build.make

.PHONY : check-llvm-tools-lto

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-tools-lto.dir/build: check-llvm-tools-lto

.PHONY : test/CMakeFiles/check-llvm-tools-lto.dir/build

test/CMakeFiles/check-llvm-tools-lto.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-tools-lto.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-tools-lto.dir/clean

test/CMakeFiles/check-llvm-tools-lto.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/test /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/test /Users/magickli/Documents/github/LLVM/llvm-project/build/test/CMakeFiles/check-llvm-tools-lto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-tools-lto.dir/depend

