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
include lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/depend.make

# Include the progress variables for this target.
include lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFAsmPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFAsmPrinter.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFAsmPrinter.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFAsmPrinter.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFFrameLowering.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFFrameLowering.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFFrameLowering.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFFrameLowering.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFInstrInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFInstrInfo.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFInstrInfo.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFInstrInfo.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelDAGToDAG.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelDAGToDAG.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelDAGToDAG.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelDAGToDAG.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelLowering.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelLowering.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelLowering.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFISelLowering.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFMCInstLower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFMCInstLower.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFMCInstLower.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFMCInstLower.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFRegisterInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFRegisterInfo.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFRegisterInfo.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFRegisterInfo.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFSubtarget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFSubtarget.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFSubtarget.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFSubtarget.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o


lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/flags.make
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFTargetMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o -c /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFTargetMachine.cpp

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.i"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFTargetMachine.cpp > CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.i

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.s"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF/BPFTargetMachine.cpp -o CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.s

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.requires:

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.provides: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.requires
	$(MAKE) -f lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.provides.build
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.provides

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.provides.build: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o


# Object files for target LLVMBPFCodeGen
LLVMBPFCodeGen_OBJECTS = \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o" \
"CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o"

# External object files for target LLVMBPFCodeGen
LLVMBPFCodeGen_EXTERNAL_OBJECTS =

lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build.make
lib/libLLVMBPFCodeGen.a: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library ../../libLLVMBPFCodeGen.a"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && $(CMAKE_COMMAND) -P CMakeFiles/LLVMBPFCodeGen.dir/cmake_clean_target.cmake
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMBPFCodeGen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build: lib/libLLVMBPFCodeGen.a

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/build

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFAsmPrinter.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFFrameLowering.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFInstrInfo.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelDAGToDAG.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFISelLowering.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFMCInstLower.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFRegisterInfo.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFSubtarget.cpp.o.requires
lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires: lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/BPFTargetMachine.cpp.o.requires

.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/requires

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF && $(CMAKE_COMMAND) -P CMakeFiles/LLVMBPFCodeGen.dir/cmake_clean.cmake
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/clean

lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/lib/Target/BPF /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF /Users/magickli/Documents/github/LLVM/llvm-project/build/lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/BPF/CMakeFiles/LLVMBPFCodeGen.dir/depend

