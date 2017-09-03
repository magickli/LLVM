file(REMOVE_RECURSE
  "libRTAsanTest.x86_64h.pdb"
  "libRTAsanTest.x86_64h.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/RTAsanTest.x86_64h.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
