file(REMOVE_RECURSE
  "librobotis_framework_common.a"
  "librobotis_framework_common.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/robotis_framework_common.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
