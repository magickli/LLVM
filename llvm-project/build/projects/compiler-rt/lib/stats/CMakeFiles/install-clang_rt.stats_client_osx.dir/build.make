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

# Utility rule file for install-clang_rt.stats_client_osx.

# Include the progress variables for this target.
include projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/progress.make

projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx: lib/clang/6.0.0/lib/darwin/libclang_rt.stats_client_osx.a
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/stats && /Applications/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_COMPONENT=clang_rt.stats_client_osx -P /Users/magickli/Documents/github/LLVM/llvm-project/build/cmake_install.cmake

install-clang_rt.stats_client_osx: projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx
install-clang_rt.stats_client_osx: projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/build.make

.PHONY : install-clang_rt.stats_client_osx

# Rule to build all files generated by this target.
projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/build: install-clang_rt.stats_client_osx

.PHONY : projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/build

projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/stats && $(CMAKE_COMMAND) -P CMakeFiles/install-clang_rt.stats_client_osx.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/clean

projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/stats /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/stats /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/stats/CMakeFiles/install-clang_rt.stats_client_osx.dir/depend

