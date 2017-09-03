file(REMOVE_RECURSE
  "libRTAsanTest.i386.pdb"
  "libRTAsanTest.i386.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/RTAsanTest.i386.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
