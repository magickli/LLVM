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

# Utility rule file for Asan-i386-inline-Noinst-Test.

# Include the progress variables for this target.
include projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/progress.make

projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/libRTAsanTest.i386.a
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test: bin/clang
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && ../../../../../bin/clang ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests/libRTAsanTest.i386.a -o /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests/default/./Asan-i386-inline-Noinst-Test -g -stdlib=libc++ -lc++ -lc++abi -fapplication-extension -mmacosx-version-min=10.9 -isysroot / -Wl,-U,___asan_default_options -Wl,-U,___asan_default_suppressions -Wl,-U,___asan_on_error -Wl,-U,___asan_set_shadow_00 -Wl,-U,___asan_set_shadow_f1 -Wl,-U,___asan_set_shadow_f2 -Wl,-U,___asan_set_shadow_f3 -Wl,-U,___asan_set_shadow_f4 -Wl,-U,___asan_set_shadow_f5 -Wl,-U,___asan_set_shadow_f6 -Wl,-U,___asan_set_shadow_f7 -Wl,-U,___asan_set_shadow_f8 -Wl,-U,___lsan_default_suppressions -Wl,-U,___lsan_is_turned_off -Wl,-U,___ubsan_default_options -Wl,-U,___sanitizer_free_hook -Wl,-U,___sanitizer_malloc_hook -Wl,-U,___sanitizer_report_error_summary -Wl,-U,___sanitizer_sandbox_on_notify -Wl,-U,___sanitizer_symbolize_code -Wl,-U,___sanitizer_symbolize_data -Wl,-U,___sanitizer_symbolize_demangle -Wl,-U,___sanitizer_symbolize_flush -Wl,-U,___asan_default_options -Wl,-U,___asan_default_suppressions -Wl,-U,___asan_on_error -Wl,-U,___asan_set_shadow_00 -Wl,-U,___asan_set_shadow_f1 -Wl,-U,___asan_set_shadow_f2 -Wl,-U,___asan_set_shadow_f3 -Wl,-U,___asan_set_shadow_f4 -Wl,-U,___asan_set_shadow_f5 -Wl,-U,___asan_set_shadow_f6 -Wl,-U,___asan_set_shadow_f7 -Wl,-U,___asan_set_shadow_f8 -Wl,-U,___ubsan_default_options -Wl,-U,___sanitizer_free_hook -Wl,-U,___sanitizer_malloc_hook -Wl,-U,___sanitizer_report_error_summary -Wl,-U,___sanitizer_sandbox_on_notify -Wl,-U,___sanitizer_symbolize_code -Wl,-U,___sanitizer_symbolize_data -Wl,-U,___sanitizer_symbolize_demangle -Wl,-U,___sanitizer_symbolize_flush --driver-mode=g++ -framework Foundation -arch i386

projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_mac_test.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_config.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_utils.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test.ignore
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: bin/clang
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && ../../../../../bin/clang -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -Wstring-conversion -Wall -std=c++11 -Wno-unused-parameter -Wno-unknown-warning-option -Wno-covered-switch-default -DGTEST_NO_LLVM_RAW_OSTREAM=1 -DGTEST_HAS_RTTI=0 -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/sanitizer_common/tests -fno-rtti -O2 -Wno-format -Werror=sign-compare -Wno-non-virtual-dtor -Wno-variadic-macros -gline-tables-only -DASAN_HAS_BLACKLIST=1 -DASAN_HAS_EXCEPTIONS=1 -DASAN_UAR=0 -stdlib=libc++ -mmacosx-version-min=10.9 -isysroot / -arch i386 -c -o ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o /Users/magickli/Documents/github/LLVM/llvm-project/llvm/utils/unittest/googletest/src/gtest-all.cc

projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_mac_test.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_config.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_utils.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test.ignore
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: bin/clang
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_fake_stack_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && ../../../../../bin/clang -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -Wstring-conversion -Wall -std=c++11 -Wno-unused-parameter -Wno-unknown-warning-option -Wno-covered-switch-default -DGTEST_NO_LLVM_RAW_OSTREAM=1 -DGTEST_HAS_RTTI=0 -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/sanitizer_common/tests -fno-rtti -O2 -Wno-format -Werror=sign-compare -Wno-non-virtual-dtor -Wno-variadic-macros -gline-tables-only -DASAN_HAS_BLACKLIST=1 -DASAN_HAS_EXCEPTIONS=1 -DASAN_UAR=0 -stdlib=libc++ -mmacosx-version-min=10.9 -isysroot / -arch i386 -c -o ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o /Users/magickli/Documents/github/LLVM/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_fake_stack_test.cc

projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_mac_test.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_config.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_utils.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test.ignore
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: bin/clang
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_noinst_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && ../../../../../bin/clang -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -Wstring-conversion -Wall -std=c++11 -Wno-unused-parameter -Wno-unknown-warning-option -Wno-covered-switch-default -DGTEST_NO_LLVM_RAW_OSTREAM=1 -DGTEST_HAS_RTTI=0 -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/sanitizer_common/tests -fno-rtti -O2 -Wno-format -Werror=sign-compare -Wno-non-virtual-dtor -Wno-variadic-macros -gline-tables-only -DASAN_HAS_BLACKLIST=1 -DASAN_HAS_EXCEPTIONS=1 -DASAN_UAR=0 -stdlib=libc++ -mmacosx-version-min=10.9 -isysroot / -arch i386 -c -o ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o /Users/magickli/Documents/github/LLVM/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_noinst_test.cc

projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_mac_test.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_config.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_utils.h
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test.ignore
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: bin/clang
projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o: /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/magickli/Documents/github/LLVM/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o"
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && ../../../../../bin/clang -fPIC -fvisibility-inlines-hidden -Werror=date-time -std=c++11 -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wmissing-field-initializers -pedantic -Wno-long-long -Wcovered-switch-default -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -Wstring-conversion -Wall -std=c++11 -Wno-unused-parameter -Wno-unknown-warning-option -Wno-covered-switch-default -DGTEST_NO_LLVM_RAW_OSTREAM=1 -DGTEST_HAS_RTTI=0 -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/utils/unittest/googletest -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/include -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan -I/Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/sanitizer_common/tests -fno-rtti -O2 -Wno-format -Werror=sign-compare -Wno-non-virtual-dtor -Wno-variadic-macros -gline-tables-only -DASAN_HAS_BLACKLIST=1 -DASAN_HAS_EXCEPTIONS=1 -DASAN_UAR=0 -stdlib=libc++ -mmacosx-version-min=10.9 -isysroot / -arch i386 -c -o ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o /Users/magickli/Documents/github/LLVM/llvm-project/llvm/projects/compiler-rt/lib/asan/tests/asan_test_main.cc

Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test
Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.gtest-all.cc.i386-inline.o
Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_fake_stack_test.cc.i386-inline.o
Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_noinst_test.cc.i386-inline.o
Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/ASAN_NOINST_TEST_OBJECTS.asan_test_main.cc.i386-inline.o
Asan-i386-inline-Noinst-Test: projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/build.make

.PHONY : Asan-i386-inline-Noinst-Test

# Rule to build all files generated by this target.
projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/build: Asan-i386-inline-Noinst-Test

.PHONY : projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/build

projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/clean:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests && $(CMAKE_COMMAND) -P CMakeFiles/Asan-i386-inline-Noinst-Test.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/clean

projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/depend:
	cd /Users/magickli/Documents/github/LLVM/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/magickli/Documents/github/llvm/llvm-project/llvm /Users/magickli/Documents/github/llvm/llvm-project/llvm/projects/compiler-rt/lib/asan/tests /Users/magickli/Documents/github/LLVM/llvm-project/build /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests /Users/magickli/Documents/github/LLVM/llvm-project/build/projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/asan/tests/CMakeFiles/Asan-i386-inline-Noinst-Test.dir/depend

