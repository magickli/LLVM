file(REMOVE_RECURSE
  "libRTTsanTest.pdb"
  "libRTTsanTest.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/RTTsanTest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
