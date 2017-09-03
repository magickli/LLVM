; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=core-avx-i -mattr=+rdrnd | FileCheck %s

declare {i64, i32} @llvm.x86.rdrand.64()

define i32 @_rdrand64_step(i64* %random_val) {
; CHECK-LABEL: _rdrand64_step:
; CHECK:       # BB#0:
; CHECK-NEXT:    rdrandq %rcx
; CHECK-NEXT:    movl $1, %eax
; CHECK-NEXT:    cmovael %ecx, %eax
; CHECK-NEXT:    movq %rcx, (%rdi)
; CHECK-NEXT:    retq
  %call = call {i64, i32} @llvm.x86.rdrand.64()
  %randval = extractvalue {i64, i32} %call, 0
  store i64 %randval, i64* %random_val
  %isvalid = extractvalue {i64, i32} %call, 1
  ret i32 %isvalid
}
