file(REMOVE_RECURSE
  "CMakeFiles/compiler-rt-headers"
  "../../../lib/clang/6.0.0/include/sanitizer/allocator_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/asan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/common_interface_defs.h"
  "../../../lib/clang/6.0.0/include/sanitizer/coverage_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/dfsan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/esan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/linux_syscall_hooks.h"
  "../../../lib/clang/6.0.0/include/sanitizer/lsan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/msan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/tsan_interface.h"
  "../../../lib/clang/6.0.0/include/sanitizer/tsan_interface_atomic.h"
  "../../../lib/clang/6.0.0/include/xray/xray_interface.h"
  "../../../lib/clang/6.0.0/include/xray/xray_log_interface.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/compiler-rt-headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
