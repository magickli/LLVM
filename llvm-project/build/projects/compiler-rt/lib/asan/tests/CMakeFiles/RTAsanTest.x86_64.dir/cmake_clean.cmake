file(REMOVE_RECURSE
  "libRTAsanTest.x86_64.pdb"
  "libRTAsanTest.x86_64.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/RTAsanTest.x86_64.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
