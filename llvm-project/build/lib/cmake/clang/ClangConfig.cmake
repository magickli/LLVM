# This file allows users to call find_package(Clang) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangARCMigrate;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingRefactor;clangToolingASTDiff;clangTooling;clangIndex;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;clang;clang-format;clang-import-test;libclang")
set(CLANG_CMAKE_DIR "/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/Users/magickli/Documents/github/llvm/llvm-project/llvm/tools/clang/include;/Users/magickli/Documents/github/LLVM/llvm-project/build/tools/clang/include")

# Provide all our library targets to users.
include("/Users/magickli/Documents/github/LLVM/llvm-project/build/lib/cmake/clang/ClangTargets.cmake")

# By creating clang-tablegen-targets here, subprojects that depend on Clang's
# tablegen-generated headers can always depend on this target whether building
# in-tree with Clang or not.
if(NOT TARGET clang-tablegen-targets)
  add_custom_target(clang-tablegen-targets)
endif()
