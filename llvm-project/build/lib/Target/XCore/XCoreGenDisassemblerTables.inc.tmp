/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * XCore Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 117, 0, // Skip to: 124
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 195, 2, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 28
/* 24 */      MCD::OPC_Decode, 139, 1, 0, // Opcode: CLRE_0R
/* 28 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 37
/* 33 */      MCD::OPC_Decode, 170, 2, 0, // Opcode: SSYNC_0r
/* 37 */      MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 173, 1, 0, // Opcode: FREET_0R
/* 46 */      MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 148, 1, 0, // Opcode: DCALL_0R
/* 55 */      MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 205, 1, 0, // Opcode: KRET_0R
/* 64 */      MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 154, 1, 0, // Opcode: DRET_0R
/* 73 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 151, 2, 0, // Opcode: SETKEP_0R
/* 82 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 85 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 157, 1, 1, // Opcode: EDU_1r
/* 93 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 160, 1, 1, // Opcode: EEU_1r
/* 101 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 104 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 191, 1, 2, // Opcode: INITPC_2r
/* 112 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 185, 1, 2, // Opcode: GETST_2r
/* 120 */     MCD::OPC_Decode, 182, 2, 3, // Opcode: STW_2rus
/* 124 */     MCD::OPC_FilterValue, 1, 117, 0, // Skip to: 245
/* 128 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 131 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 232, 1, 0, // Opcode: LDSPC_0R
/* 140 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 149
/* 145 */     MCD::OPC_Decode, 175, 2, 0, // Opcode: STSPC_0R
/* 149 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 158
/* 154 */     MCD::OPC_Decode, 233, 1, 0, // Opcode: LDSSR_0R
/* 158 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 176, 2, 0, // Opcode: STSSR_0R
/* 167 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 174, 2, 0, // Opcode: STSED_0R
/* 176 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 173, 2, 0, // Opcode: STET_0R
/* 185 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 175, 1, 0, // Opcode: GETED_0R
/* 194 */     MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 203
/* 199 */     MCD::OPC_Decode, 176, 1, 0, // Opcode: GETET_0R
/* 203 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 206 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 194, 2, 1, // Opcode: WAITET_1R
/* 214 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 193, 2, 1, // Opcode: WAITEF_1R
/* 222 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 225 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 233
/* 229 */     MCD::OPC_Decode, 189, 1, 2, // Opcode: INITDP_2r
/* 233 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 241
/* 237 */     MCD::OPC_Decode, 135, 2, 4, // Opcode: OUTT_2r
/* 241 */     MCD::OPC_Decode, 243, 1, 3, // Opcode: LDW_2rus
/* 245 */     MCD::OPC_FilterValue, 2, 107, 0, // Skip to: 356
/* 249 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 252 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 261
/* 257 */     MCD::OPC_Decode, 149, 1, 0, // Opcode: DENTSP_0R
/* 261 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 153, 1, 0, // Opcode: DRESTSP_0R
/* 270 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 279
/* 275 */     MCD::OPC_Decode, 177, 1, 0, // Opcode: GETID_0R
/* 279 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 178, 1, 0, // Opcode: GETKEP_0R
/* 288 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 297
/* 293 */     MCD::OPC_Decode, 179, 1, 0, // Opcode: GETKSP_0R
/* 297 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 231, 1, 0, // Opcode: LDSED_0R
/* 306 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 229, 1, 0, // Opcode: LDET_0R
/* 315 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 318 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 172, 1, 1, // Opcode: FREER_1r
/* 326 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 251, 1, 1, // Opcode: MJOIN_1r
/* 334 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 337 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 192, 1, 2, // Opcode: INITSP_2r
/* 345 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 353
/* 349 */     MCD::OPC_Decode, 149, 2, 4, // Opcode: SETD_2r
/* 353 */     MCD::OPC_Decode, 103, 5, // Opcode: ADD_3r
/* 356 */     MCD::OPC_FilterValue, 3, 42, 0, // Skip to: 402
/* 360 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 363 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 371
/* 367 */     MCD::OPC_Decode, 192, 2, 1, // Opcode: TSTART_1R
/* 371 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 254, 1, 1, // Opcode: MSYNC_1r
/* 379 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 382 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 390
/* 386 */     MCD::OPC_Decode, 188, 1, 2, // Opcode: INITCP_2r
/* 390 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 398
/* 394 */     MCD::OPC_Decode, 190, 2, 6, // Opcode: TSETMR_2r
/* 398 */     MCD::OPC_Decode, 185, 2, 5, // Opcode: SUB_3r
/* 402 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 437
/* 406 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 409 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 416
/* 413 */     MCD::OPC_Decode, 116, 1, // Opcode: BLA_1r
/* 416 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 423
/* 420 */     MCD::OPC_Decode, 110, 1, // Opcode: BAU_1r
/* 423 */     MCD::OPC_CheckField, 4, 1, 1, 4, 0, // Skip to: 433
/* 429 */     MCD::OPC_Decode, 159, 1, 2, // Opcode: EET_2r
/* 433 */     MCD::OPC_Decode, 167, 2, 5, // Opcode: SHL_3r
/* 437 */     MCD::OPC_FilterValue, 5, 41, 0, // Skip to: 482
/* 441 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 444 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 452
/* 448 */     MCD::OPC_Decode, 133, 1, 1, // Opcode: BRU_1r
/* 452 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 460
/* 456 */     MCD::OPC_Decode, 157, 2, 1, // Opcode: SETSP_1r
/* 460 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 463 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 470
/* 467 */     MCD::OPC_Decode, 106, 7, // Opcode: ANDNOT_2r
/* 470 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 478
/* 474 */     MCD::OPC_Decode, 158, 1, 2, // Opcode: EEF_2r
/* 478 */     MCD::OPC_Decode, 169, 2, 5, // Opcode: SHR_3r
/* 482 */     MCD::OPC_FilterValue, 6, 42, 0, // Skip to: 528
/* 486 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 489 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 148, 2, 1, // Opcode: SETDP_1r
/* 497 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 505
/* 501 */     MCD::OPC_Decode, 144, 2, 1, // Opcode: SETCP_1r
/* 505 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 508 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 164, 2, 7, // Opcode: SEXT_2r
/* 516 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 165, 2, 8, // Opcode: SEXT_rus
/* 524 */     MCD::OPC_Decode, 166, 1, 5, // Opcode: EQ_3r
/* 528 */     MCD::OPC_FilterValue, 7, 41, 0, // Skip to: 573
/* 532 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 535 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 543
/* 539 */     MCD::OPC_Decode, 150, 1, 1, // Opcode: DGETREG_1r
/* 543 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 551
/* 547 */     MCD::OPC_Decode, 150, 2, 1, // Opcode: SETEV_1r
/* 551 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 554 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 186, 1, 2, // Opcode: GETTS_2r
/* 562 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 570
/* 566 */     MCD::OPC_Decode, 155, 2, 4, // Opcode: SETPT_2r
/* 570 */     MCD::OPC_Decode, 107, 5, // Opcode: AND_3r
/* 573 */     MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 619
/* 577 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 580 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 198, 1, 1, // Opcode: KCALL_1r
/* 588 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 163, 2, 1, // Opcode: SETV_1r
/* 596 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 599 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 607
/* 603 */     MCD::OPC_Decode, 197, 2, 7, // Opcode: ZEXT_2r
/* 607 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 198, 2, 8, // Opcode: ZEXT_rus
/* 615 */     MCD::OPC_Decode, 130, 2, 5, // Opcode: OR_3r
/* 619 */     MCD::OPC_FilterValue, 9, 42, 0, // Skip to: 665
/* 623 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 626 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 155, 1, 1, // Opcode: ECALLF_1r
/* 634 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 156, 1, 1, // Opcode: ECALLT_1r
/* 642 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 645 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 653
/* 649 */     MCD::OPC_Decode, 131, 2, 2, // Opcode: OUTCT_2r
/* 653 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 661
/* 657 */     MCD::OPC_Decode, 132, 2, 9, // Opcode: OUTCT_rus
/* 661 */     MCD::OPC_Decode, 244, 1, 5, // Opcode: LDW_3r
/* 665 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 688
/* 669 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 672 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 680
/* 676 */     MCD::OPC_Decode, 178, 2, 10, // Opcode: STWDP_ru6
/* 680 */     MCD::OPC_FilterValue, 1, 76, 2, // Skip to: 1272
/* 684 */     MCD::OPC_Decode, 181, 2, 10, // Opcode: STWSP_ru6
/* 688 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 711
/* 692 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 695 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 703
/* 699 */     MCD::OPC_Decode, 239, 1, 10, // Opcode: LDWDP_ru6
/* 703 */     MCD::OPC_FilterValue, 1, 53, 2, // Skip to: 1272
/* 707 */     MCD::OPC_Decode, 242, 1, 10, // Opcode: LDWSP_ru6
/* 711 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 734
/* 715 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 718 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 726
/* 722 */     MCD::OPC_Decode, 221, 1, 10, // Opcode: LDAWDP_ru6
/* 726 */     MCD::OPC_FilterValue, 1, 30, 2, // Skip to: 1272
/* 730 */     MCD::OPC_Decode, 226, 1, 10, // Opcode: LDAWSP_ru6
/* 734 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 757
/* 738 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 741 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 749
/* 745 */     MCD::OPC_Decode, 228, 1, 10, // Opcode: LDC_ru6
/* 749 */     MCD::OPC_FilterValue, 1, 7, 2, // Skip to: 1272
/* 753 */     MCD::OPC_Decode, 236, 1, 10, // Opcode: LDWCP_ru6
/* 757 */     MCD::OPC_FilterValue, 14, 86, 0, // Skip to: 847
/* 761 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 764 */     MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 806
/* 768 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 771 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 132, 1, 11, // Opcode: BRFU_u6
/* 779 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 786
/* 783 */     MCD::OPC_Decode, 115, 11, // Opcode: BLAT_u6
/* 786 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 794
/* 790 */     MCD::OPC_Decode, 168, 1, 11, // Opcode: EXTDP_u6
/* 794 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 802
/* 798 */     MCD::OPC_Decode, 200, 1, 11, // Opcode: KCALL_u6
/* 802 */     MCD::OPC_Decode, 130, 1, 12, // Opcode: BRFT_ru6
/* 806 */     MCD::OPC_FilterValue, 1, 206, 1, // Skip to: 1272
/* 810 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 813 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 820
/* 817 */     MCD::OPC_Decode, 126, 13, // Opcode: BRBU_u6
/* 820 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 828
/* 824 */     MCD::OPC_Decode, 164, 1, 11, // Opcode: ENTSP_u6
/* 828 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 836
/* 832 */     MCD::OPC_Decode, 170, 1, 11, // Opcode: EXTSP_u6
/* 836 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 844
/* 840 */     MCD::OPC_Decode, 141, 2, 11, // Opcode: RETSP_u6
/* 844 */     MCD::OPC_Decode, 124, 14, // Opcode: BRBT_ru6
/* 847 */     MCD::OPC_FilterValue, 15, 72, 0, // Skip to: 923
/* 851 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 854 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 897
/* 858 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 861 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 869
/* 865 */     MCD::OPC_Decode, 144, 1, 11, // Opcode: CLRSR_u6
/* 869 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 877
/* 873 */     MCD::OPC_Decode, 161, 2, 11, // Opcode: SETSR_u6
/* 877 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 885
/* 881 */     MCD::OPC_Decode, 202, 1, 11, // Opcode: KENTSP_u6
/* 885 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 893
/* 889 */     MCD::OPC_Decode, 204, 1, 11, // Opcode: KRESTSP_u6
/* 893 */     MCD::OPC_Decode, 128, 1, 12, // Opcode: BRFF_ru6
/* 897 */     MCD::OPC_FilterValue, 1, 115, 1, // Skip to: 1272
/* 901 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 904 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 912
/* 908 */     MCD::OPC_Decode, 184, 1, 11, // Opcode: GETSR_u6
/* 912 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 920
/* 916 */     MCD::OPC_Decode, 219, 1, 11, // Opcode: LDAWCP_u6
/* 920 */     MCD::OPC_Decode, 122, 14, // Opcode: BRBF_ru6
/* 923 */     MCD::OPC_FilterValue, 16, 42, 0, // Skip to: 969
/* 927 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 930 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 938
/* 934 */     MCD::OPC_Decode, 140, 1, 1, // Opcode: CLRPT_1R
/* 938 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 946
/* 942 */     MCD::OPC_Decode, 186, 2, 1, // Opcode: SYNCR_1r
/* 946 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 949 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 957
/* 953 */     MCD::OPC_Decode, 182, 1, 9, // Opcode: GETR_rus
/* 957 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 965
/* 961 */     MCD::OPC_Decode, 187, 1, 2, // Opcode: INCT_2r
/* 965 */     MCD::OPC_Decode, 207, 1, 5, // Opcode: LD16S_3r
/* 969 */     MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 996
/* 973 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 976 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 984
/* 980 */     MCD::OPC_Decode, 129, 2, 2, // Opcode: NOT
/* 984 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 992
/* 988 */     MCD::OPC_Decode, 195, 1, 2, // Opcode: INT_2r
/* 992 */     MCD::OPC_Decode, 208, 1, 5, // Opcode: LD8U_3r
/* 996 */     MCD::OPC_FilterValue, 18, 22, 0, // Skip to: 1022
/* 1000 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1003 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1011
/* 1007 */    MCD::OPC_Decode, 128, 2, 2, // Opcode: NEG
/* 1011 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1019
/* 1015 */    MCD::OPC_Decode, 162, 1, 2, // Opcode: ENDIN_2r
/* 1019 */    MCD::OPC_Decode, 102, 3, // Opcode: ADD_2rus
/* 1022 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1030
/* 1026 */    MCD::OPC_Decode, 184, 2, 3, // Opcode: SUB_2rus
/* 1030 */    MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1057
/* 1034 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1037 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1045
/* 1041 */    MCD::OPC_Decode, 252, 1, 2, // Opcode: MKMSK_2r
/* 1045 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1053
/* 1049 */    MCD::OPC_Decode, 253, 1, 15, // Opcode: MKMSK_rus
/* 1053 */    MCD::OPC_Decode, 166, 2, 16, // Opcode: SHL_2rus
/* 1057 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1084
/* 1061 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1064 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1072
/* 1068 */    MCD::OPC_Decode, 136, 2, 4, // Opcode: OUT_2r
/* 1072 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1080
/* 1076 */    MCD::OPC_Decode, 134, 2, 7, // Opcode: OUTSHR_2r
/* 1080 */    MCD::OPC_Decode, 168, 2, 16, // Opcode: SHR_2rus
/* 1084 */    MCD::OPC_FilterValue, 22, 23, 0, // Skip to: 1111
/* 1088 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1091 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1099
/* 1095 */    MCD::OPC_Decode, 196, 1, 2, // Opcode: IN_2r
/* 1099 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1107
/* 1103 */    MCD::OPC_Decode, 194, 1, 7, // Opcode: INSHR_2r
/* 1107 */    MCD::OPC_Decode, 165, 1, 3, // Opcode: EQ_2rus
/* 1111 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1138
/* 1115 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1118 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1126
/* 1122 */    MCD::OPC_Decode, 137, 2, 2, // Opcode: PEEK_2r
/* 1126 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1134
/* 1130 */    MCD::OPC_Decode, 187, 2, 2, // Opcode: TESTCT_2r
/* 1134 */    MCD::OPC_Decode, 191, 2, 17, // Opcode: TSETR_3r
/* 1138 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1165
/* 1142 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1145 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 153, 2, 4, // Opcode: SETPSC_2r
/* 1153 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1161
/* 1157 */    MCD::OPC_Decode, 189, 2, 2, // Opcode: TESTWCT_2r
/* 1161 */    MCD::OPC_Decode, 246, 1, 5, // Opcode: LSS_3r
/* 1165 */    MCD::OPC_FilterValue, 25, 23, 0, // Skip to: 1192
/* 1169 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1172 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1180
/* 1176 */    MCD::OPC_Decode, 137, 1, 2, // Opcode: CHKCT_2r
/* 1180 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1188
/* 1184 */    MCD::OPC_Decode, 138, 1, 15, // Opcode: CHKCT_rus
/* 1188 */    MCD::OPC_Decode, 248, 1, 5, // Opcode: LSU_3r
/* 1192 */    MCD::OPC_FilterValue, 26, 17, 0, // Skip to: 1213
/* 1196 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1199 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1206
/* 1203 */    MCD::OPC_Decode, 120, 18, // Opcode: BLRF_u10
/* 1206 */    MCD::OPC_FilterValue, 1, 62, 0, // Skip to: 1272
/* 1210 */    MCD::OPC_Decode, 118, 19, // Opcode: BLRB_u10
/* 1213 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 1236
/* 1217 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1220 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1228
/* 1224 */    MCD::OPC_Decode, 215, 1, 18, // Opcode: LDAPF_u10
/* 1228 */    MCD::OPC_FilterValue, 1, 40, 0, // Skip to: 1272
/* 1232 */    MCD::OPC_Decode, 212, 1, 19, // Opcode: LDAPB_u10
/* 1236 */    MCD::OPC_FilterValue, 28, 18, 0, // Skip to: 1258
/* 1240 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1243 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1250
/* 1247 */    MCD::OPC_Decode, 113, 18, // Opcode: BLACP_u10
/* 1250 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1272
/* 1254 */    MCD::OPC_Decode, 237, 1, 18, // Opcode: LDWCP_u10
/* 1258 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1272
/* 1262 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1272
/* 1268 */    MCD::OPC_Decode, 147, 2, 12, // Opcode: SETC_ru6
/* 1272 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 92, 0, // Skip to: 99
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 238, 3, // Skip to: 1020
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 18, 0, // Skip to: 46
/* 28 */      MCD::OPC_Decode, 111, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 46
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 136, 1, 20, // Opcode: BYTEREV_l2r
/* 46 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 183, 2, 21, // Opcode: STW_l3r
/* 57 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 60 */      MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 68
/* 64 */      MCD::OPC_Decode, 146, 1, 22, // Opcode: CRC8_l4r
/* 68 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 76
/* 72 */      MCD::OPC_Decode, 250, 1, 23, // Opcode: MACCU_l4r
/* 76 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 79 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 87
/* 83 */      MCD::OPC_Decode, 230, 1, 24, // Opcode: LDIVU_l5r
/* 87 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 206, 1, 24, // Opcode: LADD_l5r
/* 95 */      MCD::OPC_Decode, 245, 1, 25, // Opcode: LMUL_l6r
/* 99 */      MCD::OPC_FilterValue, 1, 87, 0, // Skip to: 190
/* 103 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 106 */     MCD::OPC_FilterValue, 31, 142, 3, // Skip to: 1020
/* 110 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 113 */     MCD::OPC_FilterValue, 0, 135, 3, // Skip to: 1020
/* 117 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 120 */     MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 140
/* 124 */     MCD::OPC_CheckField, 21, 6, 63, 30, 0, // Skip to: 160
/* 130 */     MCD::OPC_CheckField, 16, 4, 12, 24, 0, // Skip to: 160
/* 136 */     MCD::OPC_Decode, 145, 1, 20, // Opcode: CLZ_l2r
/* 140 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 160
/* 144 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 143, 2, 26, // Opcode: SETCLK_l2r
/* 160 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 176
/* 166 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 196, 2, 21, // Opcode: XOR_l3r
/* 176 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 186
/* 182 */     MCD::OPC_Decode, 249, 1, 23, // Opcode: MACCS_l4r
/* 186 */     MCD::OPC_Decode, 247, 1, 24, // Opcode: LSUB_l5r
/* 190 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 225
/* 194 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 197 */     MCD::OPC_FilterValue, 159, 251, 3, 49, 3, // Skip to: 1020
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 190, 1, 20, // Opcode: INITLR_l2r
/* 214 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 181, 1, 20, // Opcode: GETPS_l2r
/* 222 */     MCD::OPC_Decode, 109, 21, // Opcode: ASHR_l3r
/* 225 */     MCD::OPC_FilterValue, 3, 32, 0, // Skip to: 261
/* 229 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 232 */     MCD::OPC_FilterValue, 159, 251, 3, 14, 3, // Skip to: 1020
/* 238 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 241 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 249
/* 245 */     MCD::OPC_Decode, 154, 2, 26, // Opcode: SETPS_l2r
/* 249 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 257
/* 253 */     MCD::OPC_Decode, 174, 1, 20, // Opcode: GETD_l2r
/* 257 */     MCD::OPC_Decode, 224, 1, 21, // Opcode: LDAWF_l3r
/* 261 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 297
/* 265 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 268 */     MCD::OPC_FilterValue, 159, 251, 3, 234, 2, // Skip to: 1020
/* 274 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 277 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 285
/* 281 */     MCD::OPC_Decode, 188, 2, 20, // Opcode: TESTLCL_l2r
/* 285 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 293
/* 289 */     MCD::OPC_Decode, 162, 2, 26, // Opcode: SETTW_l2r
/* 293 */     MCD::OPC_Decode, 217, 1, 21, // Opcode: LDAWB_l3r
/* 297 */     MCD::OPC_FilterValue, 5, 32, 0, // Skip to: 333
/* 301 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 304 */     MCD::OPC_FilterValue, 159, 251, 3, 198, 2, // Skip to: 1020
/* 310 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 313 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 321
/* 317 */     MCD::OPC_Decode, 156, 2, 26, // Opcode: SETRDY_l2r
/* 321 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 329
/* 325 */     MCD::OPC_Decode, 145, 2, 20, // Opcode: SETC_l2r
/* 329 */     MCD::OPC_Decode, 210, 1, 21, // Opcode: LDA16F_l3r
/* 333 */     MCD::OPC_FilterValue, 6, 32, 0, // Skip to: 369
/* 337 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 340 */     MCD::OPC_FilterValue, 159, 251, 3, 162, 2, // Skip to: 1020
/* 346 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 349 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 357
/* 353 */     MCD::OPC_Decode, 152, 2, 26, // Opcode: SETN_l2r
/* 357 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 365
/* 361 */     MCD::OPC_Decode, 180, 1, 20, // Opcode: GETN_l2r
/* 365 */     MCD::OPC_Decode, 209, 1, 21, // Opcode: LDA16B_l3r
/* 369 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 385
/* 373 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 127, 2, // Skip to: 1020
/* 381 */     MCD::OPC_Decode, 255, 1, 21, // Opcode: MUL_l3r
/* 385 */     MCD::OPC_FilterValue, 8, 12, 0, // Skip to: 401
/* 389 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 111, 2, // Skip to: 1020
/* 397 */     MCD::OPC_Decode, 151, 1, 21, // Opcode: DIVS_l3r
/* 401 */     MCD::OPC_FilterValue, 9, 12, 0, // Skip to: 417
/* 405 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 95, 2, // Skip to: 1020
/* 413 */     MCD::OPC_Decode, 152, 1, 21, // Opcode: DIVU_l3r
/* 417 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 452
/* 421 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 424 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 438
/* 428 */     MCD::OPC_CheckField, 10, 6, 60, 74, 2, // Skip to: 1020
/* 434 */     MCD::OPC_Decode, 177, 2, 27, // Opcode: STWDP_lru6
/* 438 */     MCD::OPC_FilterValue, 1, 66, 2, // Skip to: 1020
/* 442 */     MCD::OPC_CheckField, 10, 6, 60, 60, 2, // Skip to: 1020
/* 448 */     MCD::OPC_Decode, 180, 2, 27, // Opcode: STWSP_lru6
/* 452 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 487
/* 456 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 459 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 473
/* 463 */     MCD::OPC_CheckField, 10, 6, 60, 39, 2, // Skip to: 1020
/* 469 */     MCD::OPC_Decode, 238, 1, 27, // Opcode: LDWDP_lru6
/* 473 */     MCD::OPC_FilterValue, 1, 31, 2, // Skip to: 1020
/* 477 */     MCD::OPC_CheckField, 10, 6, 60, 25, 2, // Skip to: 1020
/* 483 */     MCD::OPC_Decode, 241, 1, 27, // Opcode: LDWSP_lru6
/* 487 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 522
/* 491 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 494 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 508
/* 498 */     MCD::OPC_CheckField, 10, 6, 60, 4, 2, // Skip to: 1020
/* 504 */     MCD::OPC_Decode, 220, 1, 27, // Opcode: LDAWDP_lru6
/* 508 */     MCD::OPC_FilterValue, 1, 252, 1, // Skip to: 1020
/* 512 */     MCD::OPC_CheckField, 10, 6, 60, 246, 1, // Skip to: 1020
/* 518 */     MCD::OPC_Decode, 225, 1, 27, // Opcode: LDAWSP_lru6
/* 522 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 557
/* 526 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 529 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 543
/* 533 */     MCD::OPC_CheckField, 10, 6, 60, 225, 1, // Skip to: 1020
/* 539 */     MCD::OPC_Decode, 227, 1, 27, // Opcode: LDC_lru6
/* 543 */     MCD::OPC_FilterValue, 1, 217, 1, // Skip to: 1020
/* 547 */     MCD::OPC_CheckField, 10, 6, 60, 211, 1, // Skip to: 1020
/* 553 */     MCD::OPC_Decode, 234, 1, 27, // Opcode: LDWCP_lru6
/* 557 */     MCD::OPC_FilterValue, 14, 100, 0, // Skip to: 661
/* 561 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 564 */     MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 613
/* 568 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 571 */     MCD::OPC_FilterValue, 60, 189, 1, // Skip to: 1020
/* 575 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 578 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 131, 1, 28, // Opcode: BRFU_lu6
/* 586 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 593
/* 590 */     MCD::OPC_Decode, 114, 28, // Opcode: BLAT_lu6
/* 593 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 601
/* 597 */     MCD::OPC_Decode, 167, 1, 28, // Opcode: EXTDP_lu6
/* 601 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 609
/* 605 */     MCD::OPC_Decode, 199, 1, 28, // Opcode: KCALL_lu6
/* 609 */     MCD::OPC_Decode, 129, 1, 29, // Opcode: BRFT_lru6
/* 613 */     MCD::OPC_FilterValue, 1, 147, 1, // Skip to: 1020
/* 617 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 620 */     MCD::OPC_FilterValue, 60, 140, 1, // Skip to: 1020
/* 624 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 627 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 634
/* 631 */     MCD::OPC_Decode, 125, 30, // Opcode: BRBU_lu6
/* 634 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 163, 1, 28, // Opcode: ENTSP_lu6
/* 642 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 169, 1, 28, // Opcode: EXTSP_lu6
/* 650 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 140, 2, 28, // Opcode: RETSP_lu6
/* 658 */     MCD::OPC_Decode, 123, 31, // Opcode: BRBT_lru6
/* 661 */     MCD::OPC_FilterValue, 15, 85, 0, // Skip to: 750
/* 665 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 668 */     MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 717
/* 672 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 675 */     MCD::OPC_FilterValue, 60, 85, 1, // Skip to: 1020
/* 679 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 682 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 143, 1, 28, // Opcode: CLRSR_lu6
/* 690 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 160, 2, 28, // Opcode: SETSR_lu6
/* 698 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 706
/* 702 */     MCD::OPC_Decode, 201, 1, 28, // Opcode: KENTSP_lu6
/* 706 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 714
/* 710 */     MCD::OPC_Decode, 203, 1, 28, // Opcode: KRESTSP_lu6
/* 714 */     MCD::OPC_Decode, 127, 29, // Opcode: BRFF_lru6
/* 717 */     MCD::OPC_FilterValue, 1, 43, 1, // Skip to: 1020
/* 721 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 724 */     MCD::OPC_FilterValue, 60, 36, 1, // Skip to: 1020
/* 728 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 731 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 739
/* 735 */     MCD::OPC_Decode, 183, 1, 28, // Opcode: GETSR_lu6
/* 739 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 218, 1, 28, // Opcode: LDAWCP_lu6
/* 747 */     MCD::OPC_Decode, 121, 31, // Opcode: BRBF_lru6
/* 750 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 766
/* 754 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 2, 1, // Skip to: 1020
/* 762 */     MCD::OPC_Decode, 171, 2, 21, // Opcode: ST16_l3r
/* 766 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 782
/* 770 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 242, 0, // Skip to: 1020
/* 778 */     MCD::OPC_Decode, 172, 2, 21, // Opcode: ST8_l3r
/* 782 */     MCD::OPC_FilterValue, 18, 32, 0, // Skip to: 818
/* 786 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 789 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 798
/* 795 */     MCD::OPC_Decode, 108, 32, // Opcode: ASHR_l2rus
/* 798 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 133, 2, 32, // Opcode: OUTPW_l2rus
/* 808 */     MCD::OPC_FilterValue, 223, 251, 3, 206, 0, // Skip to: 1020
/* 814 */     MCD::OPC_Decode, 193, 1, 32, // Opcode: INPW_l2rus
/* 818 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 834
/* 822 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 190, 0, // Skip to: 1020
/* 830 */     MCD::OPC_Decode, 223, 1, 33, // Opcode: LDAWF_l2rus
/* 834 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 850
/* 838 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 174, 0, // Skip to: 1020
/* 846 */     MCD::OPC_Decode, 216, 1, 33, // Opcode: LDAWB_l2rus
/* 850 */     MCD::OPC_FilterValue, 21, 12, 0, // Skip to: 866
/* 854 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 158, 0, // Skip to: 1020
/* 862 */     MCD::OPC_Decode, 147, 1, 34, // Opcode: CRC_l3r
/* 866 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 882
/* 870 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 142, 0, // Skip to: 1020
/* 878 */     MCD::OPC_Decode, 138, 2, 21, // Opcode: REMS_l3r
/* 882 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 898
/* 886 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 126, 0, // Skip to: 1020
/* 894 */     MCD::OPC_Decode, 139, 2, 21, // Opcode: REMU_l3r
/* 898 */     MCD::OPC_FilterValue, 26, 29, 0, // Skip to: 931
/* 902 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 905 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 918
/* 909 */     MCD::OPC_CheckField, 10, 6, 60, 105, 0, // Skip to: 1020
/* 915 */     MCD::OPC_Decode, 119, 35, // Opcode: BLRF_lu10
/* 918 */     MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1020
/* 922 */     MCD::OPC_CheckField, 10, 6, 60, 92, 0, // Skip to: 1020
/* 928 */     MCD::OPC_Decode, 117, 36, // Opcode: BLRB_lu10
/* 931 */     MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 966
/* 935 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 938 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 952
/* 942 */     MCD::OPC_CheckField, 10, 6, 60, 72, 0, // Skip to: 1020
/* 948 */     MCD::OPC_Decode, 213, 1, 35, // Opcode: LDAPF_lu10
/* 952 */     MCD::OPC_FilterValue, 1, 64, 0, // Skip to: 1020
/* 956 */     MCD::OPC_CheckField, 10, 6, 60, 58, 0, // Skip to: 1020
/* 962 */     MCD::OPC_Decode, 211, 1, 36, // Opcode: LDAPB_lu10
/* 966 */     MCD::OPC_FilterValue, 28, 30, 0, // Skip to: 1000
/* 970 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 973 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 986
/* 977 */     MCD::OPC_CheckField, 10, 6, 60, 37, 0, // Skip to: 1020
/* 983 */     MCD::OPC_Decode, 112, 35, // Opcode: BLACP_lu10
/* 986 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 1020
/* 990 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 1020
/* 996 */     MCD::OPC_Decode, 235, 1, 35, // Opcode: LDWCP_lu10
/* 1000 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 1020
/* 1004 */    MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 1020
/* 1010 */    MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 1020
/* 1016 */    MCD::OPC_Decode, 146, 2, 29, // Opcode: SETC_lru6
/* 1020 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 36:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
