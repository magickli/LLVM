; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; Make sure this testcase codegens to the sin and cos instructions, not calls
; RUN: llc < %s -mtriple=i686-apple-macosx -mattr=-sse,-sse2,-sse3 -enable-unsafe-fp-math  | FileCheck %s --check-prefix=CHECK --check-prefix=UNSAFE
; RUN: llc < %s -mtriple=i686-apple-macosx -mattr=-sse,-sse2,-sse3 | FileCheck %s --check-prefix=CHECK --check-prefix=SAFE

declare float  @sinf(float) readonly

declare double @sin(double) readonly

declare x86_fp80 @sinl(x86_fp80) readonly

define float @test1(float %X) {
; CHECK-LABEL: test1:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $12, %esp
; CHECK-NEXT:  Lcfi0:
; CHECK-NEXT:    .cfi_def_cfa_offset 16
; CHECK-NEXT:    flds {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstps (%esp)
; CHECK-NEXT:    calll _sinf
; CHECK-NEXT:    addl $12, %esp
; CHECK-NEXT:    retl
        %Y = call float @sinf(float %X) readonly
        ret float %Y
}

define double @test2(double %X) {
; CHECK-LABEL: test2:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $12, %esp
; CHECK-NEXT:  Lcfi1:
; CHECK-NEXT:    .cfi_def_cfa_offset 16
; CHECK-NEXT:    fldl {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstpl (%esp)
; CHECK-NEXT:    calll _sin
; CHECK-NEXT:    addl $12, %esp
; CHECK-NEXT:    retl
        %Y = call double @sin(double %X) readonly
        ret double %Y
}

define x86_fp80 @test3(x86_fp80 %X) {
; CHECK-LABEL: test3:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $28, %esp
; CHECK-NEXT:  Lcfi2:
; CHECK-NEXT:    .cfi_def_cfa_offset 32
; CHECK-NEXT:    fldt {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstpt (%esp)
; CHECK-NEXT:    calll _sinl
; CHECK-NEXT:    addl $28, %esp
; CHECK-NEXT:    retl
        %Y = call x86_fp80 @sinl(x86_fp80 %X) readonly
        ret x86_fp80 %Y
}

declare float @cosf(float) readonly

declare double @cos(double) readonly

declare x86_fp80 @cosl(x86_fp80) readonly


define float @test4(float %X) {
; CHECK-LABEL: test4:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $12, %esp
; CHECK-NEXT:  Lcfi3:
; CHECK-NEXT:    .cfi_def_cfa_offset 16
; CHECK-NEXT:    flds {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstps (%esp)
; CHECK-NEXT:    calll _cosf
; CHECK-NEXT:    addl $12, %esp
; CHECK-NEXT:    retl
        %Y = call float @cosf(float %X) readonly
        ret float %Y
}

define double @test5(double %X) {
; CHECK-LABEL: test5:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $12, %esp
; CHECK-NEXT:  Lcfi4:
; CHECK-NEXT:    .cfi_def_cfa_offset 16
; CHECK-NEXT:    fldl {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstpl (%esp)
; CHECK-NEXT:    calll _cos
; CHECK-NEXT:    addl $12, %esp
; CHECK-NEXT:    retl
        %Y = call double @cos(double %X) readonly
        ret double %Y
}

define x86_fp80 @test6(x86_fp80 %X) {
; CHECK-LABEL: test6:
; CHECK:       ## BB#0:
; CHECK-NEXT:    subl $28, %esp
; CHECK-NEXT:  Lcfi5:
; CHECK-NEXT:    .cfi_def_cfa_offset 32
; CHECK-NEXT:    fldt {{[0-9]+}}(%esp)
; CHECK-NEXT:    fstpt (%esp)
; CHECK-NEXT:    calll _cosl
; CHECK-NEXT:    addl $28, %esp
; CHECK-NEXT:    retl
        %Y = call x86_fp80 @cosl(x86_fp80 %X) readonly
        ret x86_fp80 %Y
}