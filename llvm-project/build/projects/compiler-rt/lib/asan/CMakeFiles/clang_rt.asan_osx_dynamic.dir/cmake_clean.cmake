file(REMOVE_RECURSE
  "../../../../lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.pdb"
  "../../../../lib/clang/6.0.0/lib/darwin/libclang_rt.asan_osx_dynamic.dylib"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clang_rt.asan_osx_dynamic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
