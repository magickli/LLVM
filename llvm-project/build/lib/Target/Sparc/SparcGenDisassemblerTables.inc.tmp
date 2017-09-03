/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 75, 2, // Skip to: 594
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 250, 26, // Skip to: 6926
/* 20 */      MCD::OPC_Decode, 214, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 139
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 62
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 224, 26, // Skip to: 6926
/* 46 */      MCD::OPC_Decode, 153, 1, 1, // Opcode: BPICCNT
/* 50 */      MCD::OPC_FilterValue, 1, 216, 26, // Skip to: 6926
/* 54 */      MCD::OPC_CheckPredicate, 0, 212, 26, // Skip to: 6926
/* 58 */      MCD::OPC_Decode, 152, 1, 1, // Opcode: BPICCANT
/* 62 */      MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 93
/* 66 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 69 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 81
/* 73 */      MCD::OPC_CheckPredicate, 0, 193, 26, // Skip to: 6926
/* 77 */      MCD::OPC_Decode, 150, 1, 1, // Opcode: BPICC
/* 81 */      MCD::OPC_FilterValue, 1, 185, 26, // Skip to: 6926
/* 85 */      MCD::OPC_CheckPredicate, 0, 181, 26, // Skip to: 6926
/* 89 */      MCD::OPC_Decode, 151, 1, 1, // Opcode: BPICCA
/* 93 */      MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 116
/* 97 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 169, 1, 1, // Opcode: BPXCCNT
/* 108 */     MCD::OPC_FilterValue, 1, 158, 26, // Skip to: 6926
/* 112 */     MCD::OPC_Decode, 168, 1, 1, // Opcode: BPXCCANT
/* 116 */     MCD::OPC_FilterValue, 5, 150, 26, // Skip to: 6926
/* 120 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: BPXCC
/* 131 */     MCD::OPC_FilterValue, 1, 135, 26, // Skip to: 6926
/* 135 */     MCD::OPC_Decode, 167, 1, 1, // Opcode: BPXCCA
/* 139 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 172
/* 143 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 146 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 164
/* 150 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 132, 1, 0, // Opcode: BA
/* 160 */     MCD::OPC_Decode, 133, 1, 2, // Opcode: BCOND
/* 164 */     MCD::OPC_FilterValue, 1, 102, 26, // Skip to: 6926
/* 168 */     MCD::OPC_Decode, 134, 1, 2, // Opcode: BCONDA
/* 172 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 455
/* 176 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 179 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 202
/* 183 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 186 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 172, 1, 3, // Opcode: BPZnapn
/* 194 */     MCD::OPC_FilterValue, 1, 72, 26, // Skip to: 6926
/* 198 */     MCD::OPC_Decode, 173, 1, 3, // Opcode: BPZnapt
/* 202 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 225
/* 206 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 209 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 217
/* 213 */     MCD::OPC_Decode, 156, 1, 3, // Opcode: BPLEZnapn
/* 217 */     MCD::OPC_FilterValue, 1, 49, 26, // Skip to: 6926
/* 221 */     MCD::OPC_Decode, 157, 1, 3, // Opcode: BPLEZnapt
/* 225 */     MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 248
/* 229 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 232 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 160, 1, 3, // Opcode: BPLZnapn
/* 240 */     MCD::OPC_FilterValue, 1, 26, 26, // Skip to: 6926
/* 244 */     MCD::OPC_Decode, 161, 1, 3, // Opcode: BPLZnapt
/* 248 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 271
/* 252 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 255 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 164, 1, 3, // Opcode: BPNZnapn
/* 263 */     MCD::OPC_FilterValue, 1, 3, 26, // Skip to: 6926
/* 267 */     MCD::OPC_Decode, 165, 1, 3, // Opcode: BPNZnapt
/* 271 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 294
/* 275 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 278 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 148, 1, 3, // Opcode: BPGZnapn
/* 286 */     MCD::OPC_FilterValue, 1, 236, 25, // Skip to: 6926
/* 290 */     MCD::OPC_Decode, 149, 1, 3, // Opcode: BPGZnapt
/* 294 */     MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 317
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 309
/* 305 */     MCD::OPC_Decode, 144, 1, 3, // Opcode: BPGEZnapn
/* 309 */     MCD::OPC_FilterValue, 1, 213, 25, // Skip to: 6926
/* 313 */     MCD::OPC_Decode, 145, 1, 3, // Opcode: BPGEZnapt
/* 317 */     MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 340
/* 321 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 324 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 332
/* 328 */     MCD::OPC_Decode, 170, 1, 3, // Opcode: BPZapn
/* 332 */     MCD::OPC_FilterValue, 1, 190, 25, // Skip to: 6926
/* 336 */     MCD::OPC_Decode, 171, 1, 3, // Opcode: BPZapt
/* 340 */     MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 363
/* 344 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 347 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 154, 1, 3, // Opcode: BPLEZapn
/* 355 */     MCD::OPC_FilterValue, 1, 167, 25, // Skip to: 6926
/* 359 */     MCD::OPC_Decode, 155, 1, 3, // Opcode: BPLEZapt
/* 363 */     MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 386
/* 367 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 370 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 158, 1, 3, // Opcode: BPLZapn
/* 378 */     MCD::OPC_FilterValue, 1, 144, 25, // Skip to: 6926
/* 382 */     MCD::OPC_Decode, 159, 1, 3, // Opcode: BPLZapt
/* 386 */     MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 409
/* 390 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 393 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 401
/* 397 */     MCD::OPC_Decode, 162, 1, 3, // Opcode: BPNZapn
/* 401 */     MCD::OPC_FilterValue, 1, 121, 25, // Skip to: 6926
/* 405 */     MCD::OPC_Decode, 163, 1, 3, // Opcode: BPNZapt
/* 409 */     MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 432
/* 413 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 416 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 424
/* 420 */     MCD::OPC_Decode, 146, 1, 3, // Opcode: BPGZapn
/* 424 */     MCD::OPC_FilterValue, 1, 98, 25, // Skip to: 6926
/* 428 */     MCD::OPC_Decode, 147, 1, 3, // Opcode: BPGZapt
/* 432 */     MCD::OPC_FilterValue, 23, 90, 25, // Skip to: 6926
/* 436 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 439 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 447
/* 443 */     MCD::OPC_Decode, 142, 1, 3, // Opcode: BPGEZapn
/* 447 */     MCD::OPC_FilterValue, 1, 75, 25, // Skip to: 6926
/* 451 */     MCD::OPC_Decode, 143, 1, 3, // Opcode: BPGEZapt
/* 455 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 479
/* 459 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 475
/* 465 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 475
/* 471 */     MCD::OPC_Decode, 192, 3, 4, // Opcode: NOP
/* 475 */     MCD::OPC_Decode, 236, 3, 5, // Opcode: SETHIi
/* 479 */     MCD::OPC_FilterValue, 5, 65, 0, // Skip to: 548
/* 483 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 486 */     MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 517
/* 490 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 493 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 505
/* 497 */     MCD::OPC_CheckPredicate, 0, 25, 25, // Skip to: 6926
/* 501 */     MCD::OPC_Decode, 141, 1, 6, // Opcode: BPFCCNT
/* 505 */     MCD::OPC_FilterValue, 1, 17, 25, // Skip to: 6926
/* 509 */     MCD::OPC_CheckPredicate, 0, 13, 25, // Skip to: 6926
/* 513 */     MCD::OPC_Decode, 140, 1, 6, // Opcode: BPFCCANT
/* 517 */     MCD::OPC_FilterValue, 1, 5, 25, // Skip to: 6926
/* 521 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 524 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 536
/* 528 */     MCD::OPC_CheckPredicate, 0, 250, 24, // Skip to: 6926
/* 532 */     MCD::OPC_Decode, 138, 1, 6, // Opcode: BPFCC
/* 536 */     MCD::OPC_FilterValue, 1, 242, 24, // Skip to: 6926
/* 540 */     MCD::OPC_CheckPredicate, 0, 238, 24, // Skip to: 6926
/* 544 */     MCD::OPC_Decode, 139, 1, 6, // Opcode: BPFCCA
/* 548 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 571
/* 552 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 555 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 563
/* 559 */     MCD::OPC_Decode, 218, 1, 2, // Opcode: FBCOND
/* 563 */     MCD::OPC_FilterValue, 1, 215, 24, // Skip to: 6926
/* 567 */     MCD::OPC_Decode, 219, 1, 2, // Opcode: FBCONDA
/* 571 */     MCD::OPC_FilterValue, 7, 207, 24, // Skip to: 6926
/* 575 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 578 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 182, 1, 2, // Opcode: CBCOND
/* 586 */     MCD::OPC_FilterValue, 1, 192, 24, // Skip to: 6926
/* 590 */     MCD::OPC_Decode, 183, 1, 2, // Opcode: CBCONDA
/* 594 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 175, 1, 7, // Opcode: CALL
/* 602 */     MCD::OPC_FilterValue, 2, 138, 19, // Skip to: 5608
/* 606 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 609 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 636
/* 613 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 616 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 629
/* 620 */     MCD::OPC_CheckField, 5, 8, 0, 156, 24, // Skip to: 6926
/* 626 */     MCD::OPC_Decode, 113, 8, // Opcode: ADDrr
/* 629 */     MCD::OPC_FilterValue, 1, 149, 24, // Skip to: 6926
/* 633 */     MCD::OPC_Decode, 112, 9, // Opcode: ADDri
/* 636 */     MCD::OPC_FilterValue, 1, 24, 0, // Skip to: 664
/* 640 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 643 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 657
/* 647 */     MCD::OPC_CheckField, 5, 8, 0, 129, 24, // Skip to: 6926
/* 653 */     MCD::OPC_Decode, 128, 1, 8, // Opcode: ANDrr
/* 657 */     MCD::OPC_FilterValue, 1, 121, 24, // Skip to: 6926
/* 661 */     MCD::OPC_Decode, 127, 9, // Opcode: ANDri
/* 664 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 693
/* 668 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 671 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 685
/* 675 */     MCD::OPC_CheckField, 5, 8, 0, 101, 24, // Skip to: 6926
/* 681 */     MCD::OPC_Decode, 203, 3, 8, // Opcode: ORrr
/* 685 */     MCD::OPC_FilterValue, 1, 93, 24, // Skip to: 6926
/* 689 */     MCD::OPC_Decode, 202, 3, 9, // Opcode: ORri
/* 693 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 722
/* 697 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 700 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 714
/* 704 */     MCD::OPC_CheckField, 5, 8, 0, 72, 24, // Skip to: 6926
/* 710 */     MCD::OPC_Decode, 248, 4, 8, // Opcode: XORrr
/* 714 */     MCD::OPC_FilterValue, 1, 64, 24, // Skip to: 6926
/* 718 */     MCD::OPC_Decode, 247, 4, 9, // Opcode: XORri
/* 722 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 751
/* 726 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 729 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 743
/* 733 */     MCD::OPC_CheckField, 5, 8, 0, 43, 24, // Skip to: 6926
/* 739 */     MCD::OPC_Decode, 176, 4, 8, // Opcode: SUBrr
/* 743 */     MCD::OPC_FilterValue, 1, 35, 24, // Skip to: 6926
/* 747 */     MCD::OPC_Decode, 175, 4, 9, // Opcode: SUBri
/* 751 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 778
/* 755 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 758 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 771
/* 762 */     MCD::OPC_CheckField, 5, 8, 0, 14, 24, // Skip to: 6926
/* 768 */     MCD::OPC_Decode, 123, 8, // Opcode: ANDNrr
/* 771 */     MCD::OPC_FilterValue, 1, 7, 24, // Skip to: 6926
/* 775 */     MCD::OPC_Decode, 122, 9, // Opcode: ANDNri
/* 778 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 807
/* 782 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 785 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 799
/* 789 */     MCD::OPC_CheckField, 5, 8, 0, 243, 23, // Skip to: 6926
/* 795 */     MCD::OPC_Decode, 198, 3, 8, // Opcode: ORNrr
/* 799 */     MCD::OPC_FilterValue, 1, 235, 23, // Skip to: 6926
/* 803 */     MCD::OPC_Decode, 197, 3, 9, // Opcode: ORNri
/* 807 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 836
/* 811 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 814 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 828
/* 818 */     MCD::OPC_CheckField, 5, 8, 0, 214, 23, // Skip to: 6926
/* 824 */     MCD::OPC_Decode, 242, 4, 8, // Opcode: XNORrr
/* 828 */     MCD::OPC_FilterValue, 1, 206, 23, // Skip to: 6926
/* 832 */     MCD::OPC_Decode, 241, 4, 9, // Opcode: XNORri
/* 836 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 863
/* 840 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 843 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 856
/* 847 */     MCD::OPC_CheckField, 5, 8, 0, 185, 23, // Skip to: 6926
/* 853 */     MCD::OPC_Decode, 105, 8, // Opcode: ADDCrr
/* 856 */     MCD::OPC_FilterValue, 1, 178, 23, // Skip to: 6926
/* 860 */     MCD::OPC_Decode, 104, 9, // Opcode: ADDCri
/* 863 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 892
/* 867 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 870 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 884
/* 874 */     MCD::OPC_CheckField, 5, 8, 0, 158, 23, // Skip to: 6926
/* 880 */     MCD::OPC_Decode, 191, 3, 10, // Opcode: MULXrr
/* 884 */     MCD::OPC_FilterValue, 1, 150, 23, // Skip to: 6926
/* 888 */     MCD::OPC_Decode, 190, 3, 11, // Opcode: MULXri
/* 892 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 921
/* 896 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 899 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 913
/* 903 */     MCD::OPC_CheckField, 5, 8, 0, 129, 23, // Skip to: 6926
/* 909 */     MCD::OPC_Decode, 213, 4, 8, // Opcode: UMULrr
/* 913 */     MCD::OPC_FilterValue, 1, 121, 23, // Skip to: 6926
/* 917 */     MCD::OPC_Decode, 212, 4, 9, // Opcode: UMULri
/* 921 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 950
/* 925 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 928 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 942
/* 932 */     MCD::OPC_CheckField, 5, 8, 0, 100, 23, // Skip to: 6926
/* 938 */     MCD::OPC_Decode, 248, 3, 8, // Opcode: SMULrr
/* 942 */     MCD::OPC_FilterValue, 1, 92, 23, // Skip to: 6926
/* 946 */     MCD::OPC_Decode, 247, 3, 9, // Opcode: SMULri
/* 950 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 979
/* 954 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 957 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 971
/* 961 */     MCD::OPC_CheckField, 5, 8, 0, 71, 23, // Skip to: 6926
/* 967 */     MCD::OPC_Decode, 170, 4, 8, // Opcode: SUBCrr
/* 971 */     MCD::OPC_FilterValue, 1, 63, 23, // Skip to: 6926
/* 975 */     MCD::OPC_Decode, 169, 4, 9, // Opcode: SUBCri
/* 979 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 1008
/* 983 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 986 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1000
/* 990 */     MCD::OPC_CheckField, 5, 8, 0, 42, 23, // Skip to: 6926
/* 996 */     MCD::OPC_Decode, 204, 4, 10, // Opcode: UDIVXrr
/* 1000 */    MCD::OPC_FilterValue, 1, 34, 23, // Skip to: 6926
/* 1004 */    MCD::OPC_Decode, 203, 4, 11, // Opcode: UDIVXri
/* 1008 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 1037
/* 1012 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1029
/* 1019 */    MCD::OPC_CheckField, 5, 8, 0, 13, 23, // Skip to: 6926
/* 1025 */    MCD::OPC_Decode, 206, 4, 8, // Opcode: UDIVrr
/* 1029 */    MCD::OPC_FilterValue, 1, 5, 23, // Skip to: 6926
/* 1033 */    MCD::OPC_Decode, 205, 4, 9, // Opcode: UDIVri
/* 1037 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1066
/* 1041 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1044 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1058
/* 1048 */    MCD::OPC_CheckField, 5, 8, 0, 240, 22, // Skip to: 6926
/* 1054 */    MCD::OPC_Decode, 225, 3, 8, // Opcode: SDIVrr
/* 1058 */    MCD::OPC_FilterValue, 1, 232, 22, // Skip to: 6926
/* 1062 */    MCD::OPC_Decode, 224, 3, 9, // Opcode: SDIVri
/* 1066 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1093
/* 1070 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1073 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1086
/* 1077 */    MCD::OPC_CheckField, 5, 8, 0, 211, 22, // Skip to: 6926
/* 1083 */    MCD::OPC_Decode, 103, 8, // Opcode: ADDCCrr
/* 1086 */    MCD::OPC_FilterValue, 1, 204, 22, // Skip to: 6926
/* 1090 */    MCD::OPC_Decode, 102, 9, // Opcode: ADDCCri
/* 1093 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1120
/* 1097 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1100 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1113
/* 1104 */    MCD::OPC_CheckField, 5, 8, 0, 184, 22, // Skip to: 6926
/* 1110 */    MCD::OPC_Decode, 119, 8, // Opcode: ANDCCrr
/* 1113 */    MCD::OPC_FilterValue, 1, 177, 22, // Skip to: 6926
/* 1117 */    MCD::OPC_Decode, 118, 9, // Opcode: ANDCCri
/* 1120 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1149
/* 1124 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1127 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1141
/* 1131 */    MCD::OPC_CheckField, 5, 8, 0, 157, 22, // Skip to: 6926
/* 1137 */    MCD::OPC_Decode, 194, 3, 8, // Opcode: ORCCrr
/* 1141 */    MCD::OPC_FilterValue, 1, 149, 22, // Skip to: 6926
/* 1145 */    MCD::OPC_Decode, 193, 3, 9, // Opcode: ORCCri
/* 1149 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1178
/* 1153 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1156 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1170
/* 1160 */    MCD::OPC_CheckField, 5, 8, 0, 128, 22, // Skip to: 6926
/* 1166 */    MCD::OPC_Decode, 244, 4, 8, // Opcode: XORCCrr
/* 1170 */    MCD::OPC_FilterValue, 1, 120, 22, // Skip to: 6926
/* 1174 */    MCD::OPC_Decode, 243, 4, 9, // Opcode: XORCCri
/* 1178 */    MCD::OPC_FilterValue, 20, 46, 0, // Skip to: 1228
/* 1182 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1185 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1210
/* 1189 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1192 */    MCD::OPC_FilterValue, 0, 98, 22, // Skip to: 6926
/* 1196 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1206
/* 1202 */    MCD::OPC_Decode, 188, 1, 12, // Opcode: CMPrr
/* 1206 */    MCD::OPC_Decode, 168, 4, 8, // Opcode: SUBCCrr
/* 1210 */    MCD::OPC_FilterValue, 1, 80, 22, // Skip to: 6926
/* 1214 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1224
/* 1220 */    MCD::OPC_Decode, 187, 1, 13, // Opcode: CMPri
/* 1224 */    MCD::OPC_Decode, 167, 4, 9, // Opcode: SUBCCri
/* 1228 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1255
/* 1232 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1235 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1248
/* 1239 */    MCD::OPC_CheckField, 5, 8, 0, 49, 22, // Skip to: 6926
/* 1245 */    MCD::OPC_Decode, 121, 8, // Opcode: ANDNCCrr
/* 1248 */    MCD::OPC_FilterValue, 1, 42, 22, // Skip to: 6926
/* 1252 */    MCD::OPC_Decode, 120, 9, // Opcode: ANDNCCri
/* 1255 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1284
/* 1259 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1262 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1276
/* 1266 */    MCD::OPC_CheckField, 5, 8, 0, 22, 22, // Skip to: 6926
/* 1272 */    MCD::OPC_Decode, 196, 3, 8, // Opcode: ORNCCrr
/* 1276 */    MCD::OPC_FilterValue, 1, 14, 22, // Skip to: 6926
/* 1280 */    MCD::OPC_Decode, 195, 3, 9, // Opcode: ORNCCri
/* 1284 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1313
/* 1288 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1291 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1305
/* 1295 */    MCD::OPC_CheckField, 5, 8, 0, 249, 21, // Skip to: 6926
/* 1301 */    MCD::OPC_Decode, 239, 4, 8, // Opcode: XNORCCrr
/* 1305 */    MCD::OPC_FilterValue, 1, 241, 21, // Skip to: 6926
/* 1309 */    MCD::OPC_Decode, 238, 4, 9, // Opcode: XNORCCri
/* 1313 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1340
/* 1317 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1320 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1333
/* 1324 */    MCD::OPC_CheckField, 5, 8, 0, 220, 21, // Skip to: 6926
/* 1330 */    MCD::OPC_Decode, 107, 8, // Opcode: ADDErr
/* 1333 */    MCD::OPC_FilterValue, 1, 213, 21, // Skip to: 6926
/* 1337 */    MCD::OPC_Decode, 106, 9, // Opcode: ADDEri
/* 1340 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1369
/* 1344 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1347 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1361
/* 1351 */    MCD::OPC_CheckField, 5, 8, 0, 193, 21, // Skip to: 6926
/* 1357 */    MCD::OPC_Decode, 210, 4, 8, // Opcode: UMULCCrr
/* 1361 */    MCD::OPC_FilterValue, 1, 185, 21, // Skip to: 6926
/* 1365 */    MCD::OPC_Decode, 209, 4, 9, // Opcode: UMULCCri
/* 1369 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1398
/* 1373 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1376 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1390
/* 1380 */    MCD::OPC_CheckField, 5, 8, 0, 164, 21, // Skip to: 6926
/* 1386 */    MCD::OPC_Decode, 246, 3, 8, // Opcode: SMULCCrr
/* 1390 */    MCD::OPC_FilterValue, 1, 156, 21, // Skip to: 6926
/* 1394 */    MCD::OPC_Decode, 245, 3, 9, // Opcode: SMULCCri
/* 1398 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1427
/* 1402 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1405 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1419
/* 1409 */    MCD::OPC_CheckField, 5, 8, 0, 135, 21, // Skip to: 6926
/* 1415 */    MCD::OPC_Decode, 172, 4, 8, // Opcode: SUBErr
/* 1419 */    MCD::OPC_FilterValue, 1, 127, 21, // Skip to: 6926
/* 1423 */    MCD::OPC_Decode, 171, 4, 9, // Opcode: SUBEri
/* 1427 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1456
/* 1431 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1434 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1448
/* 1438 */    MCD::OPC_CheckField, 5, 8, 0, 106, 21, // Skip to: 6926
/* 1444 */    MCD::OPC_Decode, 202, 4, 8, // Opcode: UDIVCCrr
/* 1448 */    MCD::OPC_FilterValue, 1, 98, 21, // Skip to: 6926
/* 1452 */    MCD::OPC_Decode, 201, 4, 9, // Opcode: UDIVCCri
/* 1456 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1485
/* 1460 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1477
/* 1467 */    MCD::OPC_CheckField, 5, 8, 0, 77, 21, // Skip to: 6926
/* 1473 */    MCD::OPC_Decode, 221, 3, 8, // Opcode: SDIVCCrr
/* 1477 */    MCD::OPC_FilterValue, 1, 69, 21, // Skip to: 6926
/* 1481 */    MCD::OPC_Decode, 220, 3, 9, // Opcode: SDIVCCri
/* 1485 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1514
/* 1489 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1492 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1506
/* 1496 */    MCD::OPC_CheckField, 5, 8, 0, 48, 21, // Skip to: 6926
/* 1502 */    MCD::OPC_Decode, 185, 4, 8, // Opcode: TADDCCrr
/* 1506 */    MCD::OPC_FilterValue, 1, 40, 21, // Skip to: 6926
/* 1510 */    MCD::OPC_Decode, 184, 4, 9, // Opcode: TADDCCri
/* 1514 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1543
/* 1518 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1521 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1535
/* 1525 */    MCD::OPC_CheckField, 5, 8, 0, 19, 21, // Skip to: 6926
/* 1531 */    MCD::OPC_Decode, 198, 4, 8, // Opcode: TSUBCCrr
/* 1535 */    MCD::OPC_FilterValue, 1, 11, 21, // Skip to: 6926
/* 1539 */    MCD::OPC_Decode, 197, 4, 9, // Opcode: TSUBCCri
/* 1543 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1572
/* 1547 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1550 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1564
/* 1554 */    MCD::OPC_CheckField, 5, 8, 0, 246, 20, // Skip to: 6926
/* 1560 */    MCD::OPC_Decode, 183, 4, 8, // Opcode: TADDCCTVrr
/* 1564 */    MCD::OPC_FilterValue, 1, 238, 20, // Skip to: 6926
/* 1568 */    MCD::OPC_Decode, 182, 4, 9, // Opcode: TADDCCTVri
/* 1572 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1601
/* 1576 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1579 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1593
/* 1583 */    MCD::OPC_CheckField, 5, 8, 0, 217, 20, // Skip to: 6926
/* 1589 */    MCD::OPC_Decode, 196, 4, 8, // Opcode: TSUBCCTVrr
/* 1593 */    MCD::OPC_FilterValue, 1, 209, 20, // Skip to: 6926
/* 1597 */    MCD::OPC_Decode, 195, 4, 9, // Opcode: TSUBCCTVri
/* 1601 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1630
/* 1605 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1608 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1622
/* 1612 */    MCD::OPC_CheckField, 5, 8, 0, 188, 20, // Skip to: 6926
/* 1618 */    MCD::OPC_Decode, 189, 3, 8, // Opcode: MULSCCrr
/* 1622 */    MCD::OPC_FilterValue, 1, 180, 20, // Skip to: 6926
/* 1626 */    MCD::OPC_Decode, 188, 3, 9, // Opcode: MULSCCri
/* 1630 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1684
/* 1634 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1637 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1666
/* 1641 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1644 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1658
/* 1648 */    MCD::OPC_CheckField, 5, 7, 0, 152, 20, // Skip to: 6926
/* 1654 */    MCD::OPC_Decode, 242, 3, 8, // Opcode: SLLrr
/* 1658 */    MCD::OPC_FilterValue, 1, 144, 20, // Skip to: 6926
/* 1662 */    MCD::OPC_Decode, 240, 3, 14, // Opcode: SLLXrr
/* 1666 */    MCD::OPC_FilterValue, 1, 136, 20, // Skip to: 6926
/* 1670 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1680
/* 1676 */    MCD::OPC_Decode, 239, 3, 15, // Opcode: SLLXri
/* 1680 */    MCD::OPC_Decode, 241, 3, 9, // Opcode: SLLri
/* 1684 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1738
/* 1688 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1691 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1720
/* 1695 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1698 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1712
/* 1702 */    MCD::OPC_CheckField, 5, 7, 0, 98, 20, // Skip to: 6926
/* 1708 */    MCD::OPC_Decode, 128, 4, 8, // Opcode: SRLrr
/* 1712 */    MCD::OPC_FilterValue, 1, 90, 20, // Skip to: 6926
/* 1716 */    MCD::OPC_Decode, 254, 3, 14, // Opcode: SRLXrr
/* 1720 */    MCD::OPC_FilterValue, 1, 82, 20, // Skip to: 6926
/* 1724 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1734
/* 1730 */    MCD::OPC_Decode, 253, 3, 15, // Opcode: SRLXri
/* 1734 */    MCD::OPC_Decode, 255, 3, 9, // Opcode: SRLri
/* 1738 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1792
/* 1742 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1745 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1774
/* 1749 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1752 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1766
/* 1756 */    MCD::OPC_CheckField, 5, 7, 0, 44, 20, // Skip to: 6926
/* 1762 */    MCD::OPC_Decode, 252, 3, 8, // Opcode: SRArr
/* 1766 */    MCD::OPC_FilterValue, 1, 36, 20, // Skip to: 6926
/* 1770 */    MCD::OPC_Decode, 250, 3, 14, // Opcode: SRAXrr
/* 1774 */    MCD::OPC_FilterValue, 1, 28, 20, // Skip to: 6926
/* 1778 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1788
/* 1784 */    MCD::OPC_Decode, 249, 3, 15, // Opcode: SRAXri
/* 1788 */    MCD::OPC_Decode, 251, 3, 9, // Opcode: SRAri
/* 1792 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1854
/* 1796 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1799 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1830
/* 1803 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1806 */    MCD::OPC_FilterValue, 0, 252, 19, // Skip to: 6926
/* 1810 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1826
/* 1816 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1826
/* 1822 */    MCD::OPC_Decode, 130, 4, 4, // Opcode: STBAR
/* 1826 */    MCD::OPC_Decode, 207, 3, 16, // Opcode: RDASR
/* 1830 */    MCD::OPC_FilterValue, 1, 228, 19, // Skip to: 6926
/* 1834 */    MCD::OPC_CheckPredicate, 0, 224, 19, // Skip to: 6926
/* 1838 */    MCD::OPC_CheckField, 25, 5, 0, 218, 19, // Skip to: 6926
/* 1844 */    MCD::OPC_CheckField, 14, 5, 15, 212, 19, // Skip to: 6926
/* 1850 */    MCD::OPC_Decode, 164, 3, 17, // Opcode: MEMBARi
/* 1854 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1868
/* 1858 */    MCD::OPC_CheckField, 0, 19, 0, 198, 19, // Skip to: 6926
/* 1864 */    MCD::OPC_Decode, 209, 3, 18, // Opcode: RDPSR
/* 1868 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1897
/* 1872 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1875 */    MCD::OPC_FilterValue, 0, 183, 19, // Skip to: 6926
/* 1879 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1889
/* 1885 */    MCD::OPC_Decode, 211, 3, 18, // Opcode: RDWIM
/* 1889 */    MCD::OPC_CheckPredicate, 0, 169, 19, // Skip to: 6926
/* 1893 */    MCD::OPC_Decode, 208, 3, 19, // Opcode: RDPR
/* 1897 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1926
/* 1901 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1904 */    MCD::OPC_FilterValue, 0, 154, 19, // Skip to: 6926
/* 1908 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1922
/* 1912 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1922
/* 1918 */    MCD::OPC_Decode, 251, 1, 4, // Opcode: FLUSHW
/* 1922 */    MCD::OPC_Decode, 210, 3, 18, // Opcode: RDTBR
/* 1926 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2053
/* 1930 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1933 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1993
/* 1937 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1940 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1966
/* 1944 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1958
/* 1948 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1958
/* 1954 */    MCD::OPC_Decode, 167, 3, 20, // Opcode: MOVFCCrr
/* 1958 */    MCD::OPC_CheckPredicate, 0, 100, 19, // Skip to: 6926
/* 1962 */    MCD::OPC_Decode, 225, 4, 21, // Opcode: V9MOVFCCrr
/* 1966 */    MCD::OPC_FilterValue, 1, 92, 19, // Skip to: 6926
/* 1970 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1973 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1985
/* 1977 */    MCD::OPC_CheckPredicate, 0, 81, 19, // Skip to: 6926
/* 1981 */    MCD::OPC_Decode, 169, 3, 20, // Opcode: MOVICCrr
/* 1985 */    MCD::OPC_FilterValue, 2, 73, 19, // Skip to: 6926
/* 1989 */    MCD::OPC_Decode, 186, 3, 20, // Opcode: MOVXCCrr
/* 1993 */    MCD::OPC_FilterValue, 1, 65, 19, // Skip to: 6926
/* 1997 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2000 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 2026
/* 2004 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2018
/* 2008 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2018
/* 2014 */    MCD::OPC_Decode, 166, 3, 22, // Opcode: MOVFCCri
/* 2018 */    MCD::OPC_CheckPredicate, 0, 40, 19, // Skip to: 6926
/* 2022 */    MCD::OPC_Decode, 224, 4, 23, // Opcode: V9MOVFCCri
/* 2026 */    MCD::OPC_FilterValue, 1, 32, 19, // Skip to: 6926
/* 2030 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2033 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2045
/* 2037 */    MCD::OPC_CheckPredicate, 0, 21, 19, // Skip to: 6926
/* 2041 */    MCD::OPC_Decode, 168, 3, 22, // Opcode: MOVICCri
/* 2045 */    MCD::OPC_FilterValue, 2, 13, 19, // Skip to: 6926
/* 2049 */    MCD::OPC_Decode, 185, 3, 22, // Opcode: MOVXCCri
/* 2053 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2082
/* 2057 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2060 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2074
/* 2064 */    MCD::OPC_CheckField, 5, 8, 0, 248, 18, // Skip to: 6926
/* 2070 */    MCD::OPC_Decode, 223, 3, 10, // Opcode: SDIVXrr
/* 2074 */    MCD::OPC_FilterValue, 1, 240, 18, // Skip to: 6926
/* 2078 */    MCD::OPC_Decode, 222, 3, 11, // Opcode: SDIVXri
/* 2082 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2100
/* 2086 */    MCD::OPC_CheckPredicate, 0, 228, 18, // Skip to: 6926
/* 2090 */    MCD::OPC_CheckField, 5, 14, 0, 222, 18, // Skip to: 6926
/* 2096 */    MCD::OPC_Decode, 206, 3, 24, // Opcode: POPCrr
/* 2100 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2239
/* 2104 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2107 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2121
/* 2111 */    MCD::OPC_CheckField, 5, 5, 0, 201, 18, // Skip to: 6926
/* 2117 */    MCD::OPC_Decode, 181, 3, 14, // Opcode: MOVRRZrr
/* 2121 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2135
/* 2125 */    MCD::OPC_CheckField, 5, 5, 0, 187, 18, // Skip to: 6926
/* 2131 */    MCD::OPC_Decode, 175, 3, 14, // Opcode: MOVRLEZrr
/* 2135 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2149
/* 2139 */    MCD::OPC_CheckField, 5, 5, 0, 173, 18, // Skip to: 6926
/* 2145 */    MCD::OPC_Decode, 177, 3, 14, // Opcode: MOVRLZrr
/* 2149 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2163
/* 2153 */    MCD::OPC_CheckField, 5, 5, 0, 159, 18, // Skip to: 6926
/* 2159 */    MCD::OPC_Decode, 179, 3, 14, // Opcode: MOVRNZrr
/* 2163 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2177
/* 2167 */    MCD::OPC_CheckField, 5, 5, 0, 145, 18, // Skip to: 6926
/* 2173 */    MCD::OPC_Decode, 173, 3, 14, // Opcode: MOVRGZrr
/* 2177 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2191
/* 2181 */    MCD::OPC_CheckField, 5, 5, 0, 131, 18, // Skip to: 6926
/* 2187 */    MCD::OPC_Decode, 171, 3, 14, // Opcode: MOVRGEZrr
/* 2191 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2199
/* 2195 */    MCD::OPC_Decode, 180, 3, 25, // Opcode: MOVRRZri
/* 2199 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2207
/* 2203 */    MCD::OPC_Decode, 174, 3, 25, // Opcode: MOVRLEZri
/* 2207 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2215
/* 2211 */    MCD::OPC_Decode, 176, 3, 25, // Opcode: MOVRLZri
/* 2215 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2223
/* 2219 */    MCD::OPC_Decode, 178, 3, 25, // Opcode: MOVRNZri
/* 2223 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2231
/* 2227 */    MCD::OPC_Decode, 172, 3, 25, // Opcode: MOVRGZri
/* 2231 */    MCD::OPC_FilterValue, 15, 83, 18, // Skip to: 6926
/* 2235 */    MCD::OPC_Decode, 170, 3, 25, // Opcode: MOVRGEZri
/* 2239 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2268
/* 2243 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2246 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2260
/* 2250 */    MCD::OPC_CheckField, 5, 8, 0, 62, 18, // Skip to: 6926
/* 2256 */    MCD::OPC_Decode, 227, 4, 26, // Opcode: WRASRrr
/* 2260 */    MCD::OPC_FilterValue, 1, 54, 18, // Skip to: 6926
/* 2264 */    MCD::OPC_Decode, 226, 4, 27, // Opcode: WRASRri
/* 2268 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2309
/* 2272 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2275 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2295
/* 2279 */    MCD::OPC_CheckField, 25, 5, 0, 33, 18, // Skip to: 6926
/* 2285 */    MCD::OPC_CheckField, 5, 8, 0, 27, 18, // Skip to: 6926
/* 2291 */    MCD::OPC_Decode, 231, 4, 12, // Opcode: WRPSRrr
/* 2295 */    MCD::OPC_FilterValue, 1, 19, 18, // Skip to: 6926
/* 2299 */    MCD::OPC_CheckField, 25, 5, 0, 13, 18, // Skip to: 6926
/* 2305 */    MCD::OPC_Decode, 230, 4, 13, // Opcode: WRPSRri
/* 2309 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2367
/* 2313 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2316 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2345
/* 2320 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2323 */    MCD::OPC_FilterValue, 0, 247, 17, // Skip to: 6926
/* 2327 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2337
/* 2333 */    MCD::OPC_Decode, 235, 4, 12, // Opcode: WRWIMrr
/* 2337 */    MCD::OPC_CheckPredicate, 0, 233, 17, // Skip to: 6926
/* 2341 */    MCD::OPC_Decode, 229, 4, 28, // Opcode: WRPRrr
/* 2345 */    MCD::OPC_FilterValue, 1, 225, 17, // Skip to: 6926
/* 2349 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2359
/* 2355 */    MCD::OPC_Decode, 234, 4, 13, // Opcode: WRWIMri
/* 2359 */    MCD::OPC_CheckPredicate, 0, 211, 17, // Skip to: 6926
/* 2363 */    MCD::OPC_Decode, 228, 4, 29, // Opcode: WRPRri
/* 2367 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2408
/* 2371 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2374 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2394
/* 2378 */    MCD::OPC_CheckField, 25, 5, 0, 190, 17, // Skip to: 6926
/* 2384 */    MCD::OPC_CheckField, 5, 8, 0, 184, 17, // Skip to: 6926
/* 2390 */    MCD::OPC_Decode, 233, 4, 12, // Opcode: WRTBRrr
/* 2394 */    MCD::OPC_FilterValue, 1, 176, 17, // Skip to: 6926
/* 2398 */    MCD::OPC_CheckField, 25, 5, 0, 170, 17, // Skip to: 6926
/* 2404 */    MCD::OPC_Decode, 232, 4, 13, // Opcode: WRTBRri
/* 2408 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3121
/* 2412 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2415 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2429
/* 2419 */    MCD::OPC_CheckField, 14, 5, 0, 149, 17, // Skip to: 6926
/* 2425 */    MCD::OPC_Decode, 153, 2, 30, // Opcode: FMOVS
/* 2429 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2447
/* 2433 */    MCD::OPC_CheckPredicate, 0, 137, 17, // Skip to: 6926
/* 2437 */    MCD::OPC_CheckField, 14, 5, 0, 131, 17, // Skip to: 6926
/* 2443 */    MCD::OPC_Decode, 255, 1, 31, // Opcode: FMOVD
/* 2447 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2465
/* 2451 */    MCD::OPC_CheckPredicate, 0, 119, 17, // Skip to: 6926
/* 2455 */    MCD::OPC_CheckField, 14, 5, 0, 113, 17, // Skip to: 6926
/* 2461 */    MCD::OPC_Decode, 131, 2, 32, // Opcode: FMOVQ
/* 2465 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2479
/* 2469 */    MCD::OPC_CheckField, 14, 5, 0, 99, 17, // Skip to: 6926
/* 2475 */    MCD::OPC_Decode, 173, 2, 30, // Opcode: FNEGS
/* 2479 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2497
/* 2483 */    MCD::OPC_CheckPredicate, 0, 87, 17, // Skip to: 6926
/* 2487 */    MCD::OPC_CheckField, 14, 5, 0, 81, 17, // Skip to: 6926
/* 2493 */    MCD::OPC_Decode, 171, 2, 31, // Opcode: FNEGD
/* 2497 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2515
/* 2501 */    MCD::OPC_CheckPredicate, 0, 69, 17, // Skip to: 6926
/* 2505 */    MCD::OPC_CheckField, 14, 5, 0, 63, 17, // Skip to: 6926
/* 2511 */    MCD::OPC_Decode, 172, 2, 32, // Opcode: FNEGQ
/* 2515 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2529
/* 2519 */    MCD::OPC_CheckField, 14, 5, 0, 49, 17, // Skip to: 6926
/* 2525 */    MCD::OPC_Decode, 207, 1, 30, // Opcode: FABSS
/* 2529 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2547
/* 2533 */    MCD::OPC_CheckPredicate, 0, 37, 17, // Skip to: 6926
/* 2537 */    MCD::OPC_CheckField, 14, 5, 0, 31, 17, // Skip to: 6926
/* 2543 */    MCD::OPC_Decode, 205, 1, 31, // Opcode: FABSD
/* 2547 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2565
/* 2551 */    MCD::OPC_CheckPredicate, 0, 19, 17, // Skip to: 6926
/* 2555 */    MCD::OPC_CheckField, 14, 5, 0, 13, 17, // Skip to: 6926
/* 2561 */    MCD::OPC_Decode, 206, 1, 32, // Opcode: FABSQ
/* 2565 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2579
/* 2569 */    MCD::OPC_CheckField, 14, 5, 0, 255, 16, // Skip to: 6926
/* 2575 */    MCD::OPC_Decode, 217, 2, 30, // Opcode: FSQRTS
/* 2579 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2593
/* 2583 */    MCD::OPC_CheckField, 14, 5, 0, 241, 16, // Skip to: 6926
/* 2589 */    MCD::OPC_Decode, 215, 2, 31, // Opcode: FSQRTD
/* 2593 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2607
/* 2597 */    MCD::OPC_CheckField, 14, 5, 0, 227, 16, // Skip to: 6926
/* 2603 */    MCD::OPC_Decode, 216, 2, 32, // Opcode: FSQRTQ
/* 2607 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2615
/* 2611 */    MCD::OPC_Decode, 210, 1, 33, // Opcode: FADDS
/* 2615 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2623
/* 2619 */    MCD::OPC_Decode, 208, 1, 34, // Opcode: FADDD
/* 2623 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2631
/* 2627 */    MCD::OPC_Decode, 209, 1, 35, // Opcode: FADDQ
/* 2631 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2639
/* 2635 */    MCD::OPC_Decode, 232, 2, 33, // Opcode: FSUBS
/* 2639 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2647
/* 2643 */    MCD::OPC_Decode, 230, 2, 34, // Opcode: FSUBD
/* 2647 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2655
/* 2651 */    MCD::OPC_Decode, 231, 2, 35, // Opcode: FSUBQ
/* 2655 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2663
/* 2659 */    MCD::OPC_Decode, 166, 2, 33, // Opcode: FMULS
/* 2663 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2671
/* 2667 */    MCD::OPC_Decode, 162, 2, 34, // Opcode: FMULD
/* 2671 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2679
/* 2675 */    MCD::OPC_Decode, 165, 2, 35, // Opcode: FMULQ
/* 2679 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2687
/* 2683 */    MCD::OPC_Decode, 234, 1, 33, // Opcode: FDIVS
/* 2687 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2695
/* 2691 */    MCD::OPC_Decode, 232, 1, 34, // Opcode: FDIVD
/* 2695 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2703
/* 2699 */    MCD::OPC_Decode, 233, 1, 35, // Opcode: FDIVQ
/* 2703 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2715
/* 2707 */    MCD::OPC_CheckPredicate, 1, 119, 16, // Skip to: 6926
/* 2711 */    MCD::OPC_Decode, 168, 2, 34, // Opcode: FNADDS
/* 2715 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2727
/* 2719 */    MCD::OPC_CheckPredicate, 1, 107, 16, // Skip to: 6926
/* 2723 */    MCD::OPC_Decode, 167, 2, 34, // Opcode: FNADDD
/* 2727 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2739
/* 2731 */    MCD::OPC_CheckPredicate, 1, 95, 16, // Skip to: 6926
/* 2735 */    MCD::OPC_Decode, 177, 2, 34, // Opcode: FNMULS
/* 2739 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2751
/* 2743 */    MCD::OPC_CheckPredicate, 1, 83, 16, // Skip to: 6926
/* 2747 */    MCD::OPC_Decode, 176, 2, 34, // Opcode: FNMULD
/* 2751 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2763
/* 2755 */    MCD::OPC_CheckPredicate, 1, 71, 16, // Skip to: 6926
/* 2759 */    MCD::OPC_Decode, 242, 1, 34, // Opcode: FHADDS
/* 2763 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2775
/* 2767 */    MCD::OPC_CheckPredicate, 1, 59, 16, // Skip to: 6926
/* 2771 */    MCD::OPC_Decode, 241, 1, 34, // Opcode: FHADDD
/* 2775 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2787
/* 2779 */    MCD::OPC_CheckPredicate, 1, 47, 16, // Skip to: 6926
/* 2783 */    MCD::OPC_Decode, 244, 1, 34, // Opcode: FHSUBS
/* 2787 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2799
/* 2791 */    MCD::OPC_CheckPredicate, 1, 35, 16, // Skip to: 6926
/* 2795 */    MCD::OPC_Decode, 243, 1, 34, // Opcode: FHSUBD
/* 2799 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2807
/* 2803 */    MCD::OPC_Decode, 214, 2, 36, // Opcode: FSMULD
/* 2807 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2815
/* 2811 */    MCD::OPC_Decode, 235, 1, 37, // Opcode: FDMULQ
/* 2815 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2827
/* 2819 */    MCD::OPC_CheckPredicate, 1, 7, 16, // Skip to: 6926
/* 2823 */    MCD::OPC_Decode, 175, 2, 34, // Opcode: FNHADDS
/* 2827 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2839
/* 2831 */    MCD::OPC_CheckPredicate, 1, 251, 15, // Skip to: 6926
/* 2835 */    MCD::OPC_Decode, 174, 2, 34, // Opcode: FNHADDD
/* 2839 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2851
/* 2843 */    MCD::OPC_CheckPredicate, 1, 239, 15, // Skip to: 6926
/* 2847 */    MCD::OPC_Decode, 184, 2, 34, // Opcode: FNSMULD
/* 2851 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2866
/* 2856 */    MCD::OPC_CheckField, 14, 5, 0, 224, 15, // Skip to: 6926
/* 2862 */    MCD::OPC_Decode, 229, 2, 38, // Opcode: FSTOX
/* 2866 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2881
/* 2871 */    MCD::OPC_CheckField, 14, 5, 0, 209, 15, // Skip to: 6926
/* 2877 */    MCD::OPC_Decode, 239, 1, 31, // Opcode: FDTOX
/* 2881 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2896
/* 2886 */    MCD::OPC_CheckField, 14, 5, 0, 194, 15, // Skip to: 6926
/* 2892 */    MCD::OPC_Decode, 209, 2, 39, // Opcode: FQTOX
/* 2896 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2911
/* 2901 */    MCD::OPC_CheckField, 14, 5, 0, 179, 15, // Skip to: 6926
/* 2907 */    MCD::OPC_Decode, 239, 2, 40, // Opcode: FXTOS
/* 2911 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2926
/* 2916 */    MCD::OPC_CheckField, 14, 5, 0, 164, 15, // Skip to: 6926
/* 2922 */    MCD::OPC_Decode, 237, 2, 31, // Opcode: FXTOD
/* 2926 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2941
/* 2931 */    MCD::OPC_CheckField, 14, 5, 0, 149, 15, // Skip to: 6926
/* 2937 */    MCD::OPC_Decode, 238, 2, 41, // Opcode: FXTOQ
/* 2941 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2956
/* 2946 */    MCD::OPC_CheckField, 14, 5, 0, 134, 15, // Skip to: 6926
/* 2952 */    MCD::OPC_Decode, 247, 1, 30, // Opcode: FITOS
/* 2956 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2971
/* 2961 */    MCD::OPC_CheckField, 14, 5, 0, 119, 15, // Skip to: 6926
/* 2967 */    MCD::OPC_Decode, 238, 1, 40, // Opcode: FDTOS
/* 2971 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2986
/* 2976 */    MCD::OPC_CheckField, 14, 5, 0, 104, 15, // Skip to: 6926
/* 2982 */    MCD::OPC_Decode, 208, 2, 42, // Opcode: FQTOS
/* 2986 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 3001
/* 2991 */    MCD::OPC_CheckField, 14, 5, 0, 89, 15, // Skip to: 6926
/* 2997 */    MCD::OPC_Decode, 245, 1, 38, // Opcode: FITOD
/* 3001 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 3016
/* 3006 */    MCD::OPC_CheckField, 14, 5, 0, 74, 15, // Skip to: 6926
/* 3012 */    MCD::OPC_Decode, 226, 2, 38, // Opcode: FSTOD
/* 3016 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 3031
/* 3021 */    MCD::OPC_CheckField, 14, 5, 0, 59, 15, // Skip to: 6926
/* 3027 */    MCD::OPC_Decode, 206, 2, 39, // Opcode: FQTOD
/* 3031 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3046
/* 3036 */    MCD::OPC_CheckField, 14, 5, 0, 44, 15, // Skip to: 6926
/* 3042 */    MCD::OPC_Decode, 246, 1, 43, // Opcode: FITOQ
/* 3046 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3061
/* 3051 */    MCD::OPC_CheckField, 14, 5, 0, 29, 15, // Skip to: 6926
/* 3057 */    MCD::OPC_Decode, 228, 2, 43, // Opcode: FSTOQ
/* 3061 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3076
/* 3066 */    MCD::OPC_CheckField, 14, 5, 0, 14, 15, // Skip to: 6926
/* 3072 */    MCD::OPC_Decode, 237, 1, 41, // Opcode: FDTOQ
/* 3076 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3091
/* 3081 */    MCD::OPC_CheckField, 14, 5, 0, 255, 14, // Skip to: 6926
/* 3087 */    MCD::OPC_Decode, 227, 2, 30, // Opcode: FSTOI
/* 3091 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3106
/* 3096 */    MCD::OPC_CheckField, 14, 5, 0, 240, 14, // Skip to: 6926
/* 3102 */    MCD::OPC_Decode, 236, 1, 40, // Opcode: FDTOI
/* 3106 */    MCD::OPC_FilterValue, 211, 1, 231, 14, // Skip to: 6926
/* 3111 */    MCD::OPC_CheckField, 14, 5, 0, 225, 14, // Skip to: 6926
/* 3117 */    MCD::OPC_Decode, 207, 2, 42, // Opcode: FQTOI
/* 3121 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3707
/* 3125 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3128 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3207
/* 3132 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3135 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3168
/* 3139 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3142 */    MCD::OPC_FilterValue, 0, 196, 14, // Skip to: 6926
/* 3146 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3160
/* 3150 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3160
/* 3156 */    MCD::OPC_Decode, 154, 2, 44, // Opcode: FMOVS_FCC
/* 3160 */    MCD::OPC_CheckPredicate, 0, 178, 14, // Skip to: 6926
/* 3164 */    MCD::OPC_Decode, 223, 4, 45, // Opcode: V9FMOVS_FCC
/* 3168 */    MCD::OPC_FilterValue, 1, 170, 14, // Skip to: 6926
/* 3172 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3175 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3193
/* 3179 */    MCD::OPC_CheckPredicate, 0, 159, 14, // Skip to: 6926
/* 3183 */    MCD::OPC_CheckField, 18, 1, 0, 153, 14, // Skip to: 6926
/* 3189 */    MCD::OPC_Decode, 155, 2, 44, // Opcode: FMOVS_ICC
/* 3193 */    MCD::OPC_FilterValue, 2, 145, 14, // Skip to: 6926
/* 3197 */    MCD::OPC_CheckField, 18, 1, 0, 139, 14, // Skip to: 6926
/* 3203 */    MCD::OPC_Decode, 156, 2, 44, // Opcode: FMOVS_XCC
/* 3207 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3286
/* 3211 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3214 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3247
/* 3218 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3221 */    MCD::OPC_FilterValue, 0, 117, 14, // Skip to: 6926
/* 3225 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3239
/* 3229 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3239
/* 3235 */    MCD::OPC_Decode, 128, 2, 46, // Opcode: FMOVD_FCC
/* 3239 */    MCD::OPC_CheckPredicate, 0, 99, 14, // Skip to: 6926
/* 3243 */    MCD::OPC_Decode, 221, 4, 47, // Opcode: V9FMOVD_FCC
/* 3247 */    MCD::OPC_FilterValue, 1, 91, 14, // Skip to: 6926
/* 3251 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3254 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3272
/* 3258 */    MCD::OPC_CheckPredicate, 0, 80, 14, // Skip to: 6926
/* 3262 */    MCD::OPC_CheckField, 18, 1, 0, 74, 14, // Skip to: 6926
/* 3268 */    MCD::OPC_Decode, 129, 2, 46, // Opcode: FMOVD_ICC
/* 3272 */    MCD::OPC_FilterValue, 2, 66, 14, // Skip to: 6926
/* 3276 */    MCD::OPC_CheckField, 18, 1, 0, 60, 14, // Skip to: 6926
/* 3282 */    MCD::OPC_Decode, 130, 2, 46, // Opcode: FMOVD_XCC
/* 3286 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3365
/* 3290 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3293 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3326
/* 3297 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3300 */    MCD::OPC_FilterValue, 0, 38, 14, // Skip to: 6926
/* 3304 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3318
/* 3308 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3318
/* 3314 */    MCD::OPC_Decode, 132, 2, 48, // Opcode: FMOVQ_FCC
/* 3318 */    MCD::OPC_CheckPredicate, 0, 20, 14, // Skip to: 6926
/* 3322 */    MCD::OPC_Decode, 222, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3326 */    MCD::OPC_FilterValue, 1, 12, 14, // Skip to: 6926
/* 3330 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3333 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3351
/* 3337 */    MCD::OPC_CheckPredicate, 0, 1, 14, // Skip to: 6926
/* 3341 */    MCD::OPC_CheckField, 18, 1, 0, 251, 13, // Skip to: 6926
/* 3347 */    MCD::OPC_Decode, 133, 2, 48, // Opcode: FMOVQ_ICC
/* 3351 */    MCD::OPC_FilterValue, 2, 243, 13, // Skip to: 6926
/* 3355 */    MCD::OPC_CheckField, 18, 1, 0, 237, 13, // Skip to: 6926
/* 3361 */    MCD::OPC_Decode, 134, 2, 48, // Opcode: FMOVQ_XCC
/* 3365 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3396
/* 3369 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3372 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3384
/* 3376 */    MCD::OPC_CheckPredicate, 0, 218, 13, // Skip to: 6926
/* 3380 */    MCD::OPC_Decode, 143, 2, 50, // Opcode: FMOVRLEZS
/* 3384 */    MCD::OPC_FilterValue, 3, 210, 13, // Skip to: 6926
/* 3388 */    MCD::OPC_CheckPredicate, 0, 206, 13, // Skip to: 6926
/* 3392 */    MCD::OPC_Decode, 140, 2, 50, // Opcode: FMOVRGZS
/* 3396 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3427
/* 3400 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3403 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3415
/* 3407 */    MCD::OPC_CheckPredicate, 0, 187, 13, // Skip to: 6926
/* 3411 */    MCD::OPC_Decode, 141, 2, 50, // Opcode: FMOVRLEZD
/* 3415 */    MCD::OPC_FilterValue, 3, 179, 13, // Skip to: 6926
/* 3419 */    MCD::OPC_CheckPredicate, 0, 175, 13, // Skip to: 6926
/* 3423 */    MCD::OPC_Decode, 138, 2, 50, // Opcode: FMOVRGZD
/* 3427 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3458
/* 3431 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3434 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3446
/* 3438 */    MCD::OPC_CheckPredicate, 0, 156, 13, // Skip to: 6926
/* 3442 */    MCD::OPC_Decode, 142, 2, 50, // Opcode: FMOVRLEZQ
/* 3446 */    MCD::OPC_FilterValue, 3, 148, 13, // Skip to: 6926
/* 3450 */    MCD::OPC_CheckPredicate, 0, 144, 13, // Skip to: 6926
/* 3454 */    MCD::OPC_Decode, 139, 2, 50, // Opcode: FMOVRGZQ
/* 3458 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3472
/* 3462 */    MCD::OPC_CheckField, 11, 3, 1, 130, 13, // Skip to: 6926
/* 3468 */    MCD::OPC_Decode, 220, 4, 51, // Opcode: V9FCMPS
/* 3472 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3486
/* 3476 */    MCD::OPC_CheckField, 11, 3, 1, 116, 13, // Skip to: 6926
/* 3482 */    MCD::OPC_Decode, 215, 4, 52, // Opcode: V9FCMPD
/* 3486 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3500
/* 3490 */    MCD::OPC_CheckField, 11, 3, 1, 102, 13, // Skip to: 6926
/* 3496 */    MCD::OPC_Decode, 219, 4, 53, // Opcode: V9FCMPQ
/* 3500 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3514
/* 3504 */    MCD::OPC_CheckField, 11, 3, 1, 88, 13, // Skip to: 6926
/* 3510 */    MCD::OPC_Decode, 218, 4, 51, // Opcode: V9FCMPES
/* 3514 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3528
/* 3518 */    MCD::OPC_CheckField, 11, 3, 1, 74, 13, // Skip to: 6926
/* 3524 */    MCD::OPC_Decode, 216, 4, 52, // Opcode: V9FCMPED
/* 3528 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3542
/* 3532 */    MCD::OPC_CheckField, 11, 3, 1, 60, 13, // Skip to: 6926
/* 3538 */    MCD::OPC_Decode, 217, 4, 53, // Opcode: V9FCMPEQ
/* 3542 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3597
/* 3546 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3549 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3561
/* 3553 */    MCD::OPC_CheckPredicate, 0, 41, 13, // Skip to: 6926
/* 3557 */    MCD::OPC_Decode, 152, 2, 50, // Opcode: FMOVRZS
/* 3561 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3573
/* 3565 */    MCD::OPC_CheckPredicate, 0, 29, 13, // Skip to: 6926
/* 3569 */    MCD::OPC_Decode, 146, 2, 50, // Opcode: FMOVRLZS
/* 3573 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3585
/* 3577 */    MCD::OPC_CheckPredicate, 0, 17, 13, // Skip to: 6926
/* 3581 */    MCD::OPC_Decode, 149, 2, 50, // Opcode: FMOVRNZS
/* 3585 */    MCD::OPC_FilterValue, 3, 9, 13, // Skip to: 6926
/* 3589 */    MCD::OPC_CheckPredicate, 0, 5, 13, // Skip to: 6926
/* 3593 */    MCD::OPC_Decode, 137, 2, 50, // Opcode: FMOVRGEZS
/* 3597 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3652
/* 3601 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3604 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3616
/* 3608 */    MCD::OPC_CheckPredicate, 0, 242, 12, // Skip to: 6926
/* 3612 */    MCD::OPC_Decode, 150, 2, 50, // Opcode: FMOVRZD
/* 3616 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3628
/* 3620 */    MCD::OPC_CheckPredicate, 0, 230, 12, // Skip to: 6926
/* 3624 */    MCD::OPC_Decode, 144, 2, 50, // Opcode: FMOVRLZD
/* 3628 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3640
/* 3632 */    MCD::OPC_CheckPredicate, 0, 218, 12, // Skip to: 6926
/* 3636 */    MCD::OPC_Decode, 147, 2, 50, // Opcode: FMOVRNZD
/* 3640 */    MCD::OPC_FilterValue, 3, 210, 12, // Skip to: 6926
/* 3644 */    MCD::OPC_CheckPredicate, 0, 206, 12, // Skip to: 6926
/* 3648 */    MCD::OPC_Decode, 135, 2, 50, // Opcode: FMOVRGEZD
/* 3652 */    MCD::OPC_FilterValue, 39, 198, 12, // Skip to: 6926
/* 3656 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3659 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3671
/* 3663 */    MCD::OPC_CheckPredicate, 0, 187, 12, // Skip to: 6926
/* 3667 */    MCD::OPC_Decode, 151, 2, 50, // Opcode: FMOVRZQ
/* 3671 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3683
/* 3675 */    MCD::OPC_CheckPredicate, 0, 175, 12, // Skip to: 6926
/* 3679 */    MCD::OPC_Decode, 145, 2, 50, // Opcode: FMOVRLZQ
/* 3683 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3695
/* 3687 */    MCD::OPC_CheckPredicate, 0, 163, 12, // Skip to: 6926
/* 3691 */    MCD::OPC_Decode, 148, 2, 50, // Opcode: FMOVRNZQ
/* 3695 */    MCD::OPC_FilterValue, 3, 155, 12, // Skip to: 6926
/* 3699 */    MCD::OPC_CheckPredicate, 0, 151, 12, // Skip to: 6926
/* 3703 */    MCD::OPC_Decode, 136, 2, 50, // Opcode: FMOVRGEZQ
/* 3707 */    MCD::OPC_FilterValue, 54, 28, 6, // Skip to: 5275
/* 3711 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3714 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3726
/* 3718 */    MCD::OPC_CheckPredicate, 2, 132, 12, // Skip to: 6926
/* 3722 */    MCD::OPC_Decode, 197, 1, 10, // Opcode: EDGE8
/* 3726 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3738
/* 3730 */    MCD::OPC_CheckPredicate, 3, 120, 12, // Skip to: 6926
/* 3734 */    MCD::OPC_Decode, 200, 1, 10, // Opcode: EDGE8N
/* 3738 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3750
/* 3742 */    MCD::OPC_CheckPredicate, 2, 108, 12, // Skip to: 6926
/* 3746 */    MCD::OPC_Decode, 198, 1, 10, // Opcode: EDGE8L
/* 3750 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3762
/* 3754 */    MCD::OPC_CheckPredicate, 3, 96, 12, // Skip to: 6926
/* 3758 */    MCD::OPC_Decode, 199, 1, 10, // Opcode: EDGE8LN
/* 3762 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3774
/* 3766 */    MCD::OPC_CheckPredicate, 2, 84, 12, // Skip to: 6926
/* 3770 */    MCD::OPC_Decode, 189, 1, 10, // Opcode: EDGE16
/* 3774 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3786
/* 3778 */    MCD::OPC_CheckPredicate, 3, 72, 12, // Skip to: 6926
/* 3782 */    MCD::OPC_Decode, 192, 1, 10, // Opcode: EDGE16N
/* 3786 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3798
/* 3790 */    MCD::OPC_CheckPredicate, 2, 60, 12, // Skip to: 6926
/* 3794 */    MCD::OPC_Decode, 190, 1, 10, // Opcode: EDGE16L
/* 3798 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3810
/* 3802 */    MCD::OPC_CheckPredicate, 3, 48, 12, // Skip to: 6926
/* 3806 */    MCD::OPC_Decode, 191, 1, 10, // Opcode: EDGE16LN
/* 3810 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3822
/* 3814 */    MCD::OPC_CheckPredicate, 2, 36, 12, // Skip to: 6926
/* 3818 */    MCD::OPC_Decode, 193, 1, 10, // Opcode: EDGE32
/* 3822 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3834
/* 3826 */    MCD::OPC_CheckPredicate, 3, 24, 12, // Skip to: 6926
/* 3830 */    MCD::OPC_Decode, 196, 1, 10, // Opcode: EDGE32N
/* 3834 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3846
/* 3838 */    MCD::OPC_CheckPredicate, 2, 12, 12, // Skip to: 6926
/* 3842 */    MCD::OPC_Decode, 194, 1, 10, // Opcode: EDGE32L
/* 3846 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3858
/* 3850 */    MCD::OPC_CheckPredicate, 3, 0, 12, // Skip to: 6926
/* 3854 */    MCD::OPC_Decode, 195, 1, 10, // Opcode: EDGE32LN
/* 3858 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3870
/* 3862 */    MCD::OPC_CheckPredicate, 2, 244, 11, // Skip to: 6926
/* 3866 */    MCD::OPC_Decode, 131, 1, 10, // Opcode: ARRAY8
/* 3870 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3881
/* 3874 */    MCD::OPC_CheckPredicate, 1, 232, 11, // Skip to: 6926
/* 3878 */    MCD::OPC_Decode, 108, 10, // Opcode: ADDXC
/* 3881 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3893
/* 3885 */    MCD::OPC_CheckPredicate, 2, 221, 11, // Skip to: 6926
/* 3889 */    MCD::OPC_Decode, 129, 1, 10, // Opcode: ARRAY16
/* 3893 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3904
/* 3897 */    MCD::OPC_CheckPredicate, 1, 209, 11, // Skip to: 6926
/* 3901 */    MCD::OPC_Decode, 109, 10, // Opcode: ADDXCCC
/* 3904 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3916
/* 3908 */    MCD::OPC_CheckPredicate, 2, 198, 11, // Skip to: 6926
/* 3912 */    MCD::OPC_Decode, 130, 1, 10, // Opcode: ARRAY32
/* 3916 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3928
/* 3920 */    MCD::OPC_CheckPredicate, 1, 186, 11, // Skip to: 6926
/* 3924 */    MCD::OPC_Decode, 211, 4, 10, // Opcode: UMULXHI
/* 3928 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3946
/* 3932 */    MCD::OPC_CheckPredicate, 1, 174, 11, // Skip to: 6926
/* 3936 */    MCD::OPC_CheckField, 14, 5, 0, 168, 11, // Skip to: 6926
/* 3942 */    MCD::OPC_Decode, 163, 3, 54, // Opcode: LZCNT
/* 3946 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3957
/* 3950 */    MCD::OPC_CheckPredicate, 2, 156, 11, // Skip to: 6926
/* 3954 */    MCD::OPC_Decode, 116, 10, // Opcode: ALIGNADDR
/* 3957 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3969
/* 3961 */    MCD::OPC_CheckPredicate, 3, 145, 11, // Skip to: 6926
/* 3965 */    MCD::OPC_Decode, 137, 1, 10, // Opcode: BMASK
/* 3969 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3980
/* 3973 */    MCD::OPC_CheckPredicate, 2, 133, 11, // Skip to: 6926
/* 3977 */    MCD::OPC_Decode, 117, 10, // Opcode: ALIGNADDRL
/* 3980 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 4004
/* 3984 */    MCD::OPC_CheckPredicate, 1, 122, 11, // Skip to: 6926
/* 3988 */    MCD::OPC_CheckField, 25, 5, 0, 116, 11, // Skip to: 6926
/* 3994 */    MCD::OPC_CheckField, 14, 5, 0, 110, 11, // Skip to: 6926
/* 4000 */    MCD::OPC_Decode, 186, 1, 55, // Opcode: CMASK8
/* 4004 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4016
/* 4008 */    MCD::OPC_CheckPredicate, 3, 98, 11, // Skip to: 6926
/* 4012 */    MCD::OPC_Decode, 174, 1, 34, // Opcode: BSHUFFLE
/* 4016 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 4040
/* 4020 */    MCD::OPC_CheckPredicate, 1, 86, 11, // Skip to: 6926
/* 4024 */    MCD::OPC_CheckField, 25, 5, 0, 80, 11, // Skip to: 6926
/* 4030 */    MCD::OPC_CheckField, 14, 5, 0, 74, 11, // Skip to: 6926
/* 4036 */    MCD::OPC_Decode, 184, 1, 55, // Opcode: CMASK16
/* 4040 */    MCD::OPC_FilterValue, 31, 20, 0, // Skip to: 4064
/* 4044 */    MCD::OPC_CheckPredicate, 1, 62, 11, // Skip to: 6926
/* 4048 */    MCD::OPC_CheckField, 25, 5, 0, 56, 11, // Skip to: 6926
/* 4054 */    MCD::OPC_CheckField, 14, 5, 0, 50, 11, // Skip to: 6926
/* 4060 */    MCD::OPC_Decode, 185, 1, 55, // Opcode: CMASK32
/* 4064 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4076
/* 4068 */    MCD::OPC_CheckPredicate, 2, 38, 11, // Skip to: 6926
/* 4072 */    MCD::OPC_Decode, 226, 1, 56, // Opcode: FCMPLE16
/* 4076 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4088
/* 4080 */    MCD::OPC_CheckPredicate, 1, 26, 11, // Skip to: 6926
/* 4084 */    MCD::OPC_Decode, 212, 2, 34, // Opcode: FSLL16
/* 4088 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4100
/* 4092 */    MCD::OPC_CheckPredicate, 2, 14, 11, // Skip to: 6926
/* 4096 */    MCD::OPC_Decode, 228, 1, 56, // Opcode: FCMPNE16
/* 4100 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4112
/* 4104 */    MCD::OPC_CheckPredicate, 1, 2, 11, // Skip to: 6926
/* 4108 */    MCD::OPC_Decode, 224, 2, 34, // Opcode: FSRL16
/* 4112 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4124
/* 4116 */    MCD::OPC_CheckPredicate, 2, 246, 10, // Skip to: 6926
/* 4120 */    MCD::OPC_Decode, 227, 1, 56, // Opcode: FCMPLE32
/* 4124 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4136
/* 4128 */    MCD::OPC_CheckPredicate, 1, 234, 10, // Skip to: 6926
/* 4132 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: FSLL32
/* 4136 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4148
/* 4140 */    MCD::OPC_CheckPredicate, 2, 222, 10, // Skip to: 6926
/* 4144 */    MCD::OPC_Decode, 229, 1, 56, // Opcode: FCMPNE32
/* 4148 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4160
/* 4152 */    MCD::OPC_CheckPredicate, 1, 210, 10, // Skip to: 6926
/* 4156 */    MCD::OPC_Decode, 225, 2, 34, // Opcode: FSRL32
/* 4160 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4172
/* 4164 */    MCD::OPC_CheckPredicate, 2, 198, 10, // Skip to: 6926
/* 4168 */    MCD::OPC_Decode, 224, 1, 56, // Opcode: FCMPGT16
/* 4172 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4184
/* 4176 */    MCD::OPC_CheckPredicate, 1, 186, 10, // Skip to: 6926
/* 4180 */    MCD::OPC_Decode, 210, 2, 34, // Opcode: FSLAS16
/* 4184 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4196
/* 4188 */    MCD::OPC_CheckPredicate, 2, 174, 10, // Skip to: 6926
/* 4192 */    MCD::OPC_Decode, 222, 1, 56, // Opcode: FCMPEQ16
/* 4196 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4208
/* 4200 */    MCD::OPC_CheckPredicate, 1, 162, 10, // Skip to: 6926
/* 4204 */    MCD::OPC_Decode, 218, 2, 34, // Opcode: FSRA16
/* 4208 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4220
/* 4212 */    MCD::OPC_CheckPredicate, 2, 150, 10, // Skip to: 6926
/* 4216 */    MCD::OPC_Decode, 225, 1, 56, // Opcode: FCMPGT32
/* 4220 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4232
/* 4224 */    MCD::OPC_CheckPredicate, 1, 138, 10, // Skip to: 6926
/* 4228 */    MCD::OPC_Decode, 211, 2, 34, // Opcode: FSLAS32
/* 4232 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4244
/* 4236 */    MCD::OPC_CheckPredicate, 2, 126, 10, // Skip to: 6926
/* 4240 */    MCD::OPC_Decode, 223, 1, 56, // Opcode: FCMPEQ32
/* 4244 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4256
/* 4248 */    MCD::OPC_CheckPredicate, 1, 114, 10, // Skip to: 6926
/* 4252 */    MCD::OPC_Decode, 219, 2, 34, // Opcode: FSRA32
/* 4256 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4268
/* 4260 */    MCD::OPC_CheckPredicate, 2, 102, 10, // Skip to: 6926
/* 4264 */    MCD::OPC_Decode, 159, 2, 34, // Opcode: FMUL8X16
/* 4268 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4280
/* 4272 */    MCD::OPC_CheckPredicate, 2, 90, 10, // Skip to: 6926
/* 4276 */    MCD::OPC_Decode, 161, 2, 34, // Opcode: FMUL8X16AU
/* 4280 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4292
/* 4284 */    MCD::OPC_CheckPredicate, 2, 78, 10, // Skip to: 6926
/* 4288 */    MCD::OPC_Decode, 160, 2, 34, // Opcode: FMUL8X16AL
/* 4292 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4304
/* 4296 */    MCD::OPC_CheckPredicate, 2, 66, 10, // Skip to: 6926
/* 4300 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FMUL8SUX16
/* 4304 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4316
/* 4308 */    MCD::OPC_CheckPredicate, 2, 54, 10, // Skip to: 6926
/* 4312 */    MCD::OPC_Decode, 158, 2, 34, // Opcode: FMUL8ULX16
/* 4316 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4328
/* 4320 */    MCD::OPC_CheckPredicate, 2, 42, 10, // Skip to: 6926
/* 4324 */    MCD::OPC_Decode, 163, 2, 34, // Opcode: FMULD8SUX16
/* 4328 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4340
/* 4332 */    MCD::OPC_CheckPredicate, 2, 30, 10, // Skip to: 6926
/* 4336 */    MCD::OPC_Decode, 164, 2, 34, // Opcode: FMULD8ULX16
/* 4340 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4352
/* 4344 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 6926
/* 4348 */    MCD::OPC_Decode, 194, 2, 34, // Opcode: FPACK32
/* 4352 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4370
/* 4356 */    MCD::OPC_CheckPredicate, 2, 6, 10, // Skip to: 6926
/* 4360 */    MCD::OPC_CheckField, 14, 5, 0, 0, 10, // Skip to: 6926
/* 4366 */    MCD::OPC_Decode, 193, 2, 31, // Opcode: FPACK16
/* 4370 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4388
/* 4374 */    MCD::OPC_CheckPredicate, 2, 244, 9, // Skip to: 6926
/* 4378 */    MCD::OPC_CheckField, 14, 5, 0, 238, 9, // Skip to: 6926
/* 4384 */    MCD::OPC_Decode, 195, 2, 31, // Opcode: FPACKFIX
/* 4388 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4400
/* 4392 */    MCD::OPC_CheckPredicate, 2, 226, 9, // Skip to: 6926
/* 4396 */    MCD::OPC_Decode, 204, 3, 34, // Opcode: PDIST
/* 4400 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4412
/* 4404 */    MCD::OPC_CheckPredicate, 1, 214, 9, // Skip to: 6926
/* 4408 */    MCD::OPC_Decode, 205, 3, 34, // Opcode: PDISTN
/* 4412 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4424
/* 4416 */    MCD::OPC_CheckPredicate, 1, 202, 9, // Skip to: 6926
/* 4420 */    MCD::OPC_Decode, 254, 1, 34, // Opcode: FMEAN16
/* 4424 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4436
/* 4428 */    MCD::OPC_CheckPredicate, 1, 190, 9, // Skip to: 6926
/* 4432 */    MCD::OPC_Decode, 200, 2, 34, // Opcode: FPADD64
/* 4436 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4448
/* 4440 */    MCD::OPC_CheckPredicate, 1, 178, 9, // Skip to: 6926
/* 4444 */    MCD::OPC_Decode, 220, 1, 34, // Opcode: FCHKSM16
/* 4448 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4460
/* 4452 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6926
/* 4456 */    MCD::OPC_Decode, 211, 1, 34, // Opcode: FALIGNADATA
/* 4460 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4472
/* 4464 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 6926
/* 4468 */    MCD::OPC_Decode, 201, 2, 34, // Opcode: FPMERGE
/* 4472 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4490
/* 4476 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6926
/* 4480 */    MCD::OPC_CheckField, 14, 5, 0, 136, 9, // Skip to: 6926
/* 4486 */    MCD::OPC_Decode, 240, 1, 31, // Opcode: FEXPAND
/* 4490 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4502
/* 4494 */    MCD::OPC_CheckPredicate, 2, 124, 9, // Skip to: 6926
/* 4498 */    MCD::OPC_Decode, 196, 2, 34, // Opcode: FPADD16
/* 4502 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4514
/* 4506 */    MCD::OPC_CheckPredicate, 2, 112, 9, // Skip to: 6926
/* 4510 */    MCD::OPC_Decode, 197, 2, 34, // Opcode: FPADD16S
/* 4514 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4526
/* 4518 */    MCD::OPC_CheckPredicate, 2, 100, 9, // Skip to: 6926
/* 4522 */    MCD::OPC_Decode, 198, 2, 34, // Opcode: FPADD32
/* 4526 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4538
/* 4530 */    MCD::OPC_CheckPredicate, 2, 88, 9, // Skip to: 6926
/* 4534 */    MCD::OPC_Decode, 199, 2, 34, // Opcode: FPADD32S
/* 4538 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4550
/* 4542 */    MCD::OPC_CheckPredicate, 2, 76, 9, // Skip to: 6926
/* 4546 */    MCD::OPC_Decode, 202, 2, 34, // Opcode: FPSUB16
/* 4550 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4562
/* 4554 */    MCD::OPC_CheckPredicate, 2, 64, 9, // Skip to: 6926
/* 4558 */    MCD::OPC_Decode, 203, 2, 34, // Opcode: FPSUB16S
/* 4562 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4574
/* 4566 */    MCD::OPC_CheckPredicate, 2, 52, 9, // Skip to: 6926
/* 4570 */    MCD::OPC_Decode, 204, 2, 34, // Opcode: FPSUB32
/* 4574 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4586
/* 4578 */    MCD::OPC_CheckPredicate, 2, 40, 9, // Skip to: 6926
/* 4582 */    MCD::OPC_Decode, 205, 2, 34, // Opcode: FPSUB32S
/* 4586 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4610
/* 4590 */    MCD::OPC_CheckPredicate, 2, 28, 9, // Skip to: 6926
/* 4594 */    MCD::OPC_CheckField, 14, 5, 0, 22, 9, // Skip to: 6926
/* 4600 */    MCD::OPC_CheckField, 0, 5, 0, 16, 9, // Skip to: 6926
/* 4606 */    MCD::OPC_Decode, 240, 2, 57, // Opcode: FZERO
/* 4610 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4634
/* 4614 */    MCD::OPC_CheckPredicate, 2, 4, 9, // Skip to: 6926
/* 4618 */    MCD::OPC_CheckField, 14, 5, 0, 254, 8, // Skip to: 6926
/* 4624 */    MCD::OPC_CheckField, 0, 5, 0, 248, 8, // Skip to: 6926
/* 4630 */    MCD::OPC_Decode, 241, 2, 58, // Opcode: FZEROS
/* 4634 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4646
/* 4638 */    MCD::OPC_CheckPredicate, 2, 236, 8, // Skip to: 6926
/* 4642 */    MCD::OPC_Decode, 178, 2, 34, // Opcode: FNOR
/* 4646 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4658
/* 4650 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 6926
/* 4654 */    MCD::OPC_Decode, 179, 2, 33, // Opcode: FNORS
/* 4658 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4670
/* 4662 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 6926
/* 4666 */    MCD::OPC_Decode, 215, 1, 34, // Opcode: FANDNOT2
/* 4670 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4682
/* 4674 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 6926
/* 4678 */    MCD::OPC_Decode, 216, 1, 33, // Opcode: FANDNOT2S
/* 4682 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4700
/* 4686 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 6926
/* 4690 */    MCD::OPC_CheckField, 14, 5, 0, 182, 8, // Skip to: 6926
/* 4696 */    MCD::OPC_Decode, 182, 2, 31, // Opcode: FNOT2
/* 4700 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4718
/* 4704 */    MCD::OPC_CheckPredicate, 2, 170, 8, // Skip to: 6926
/* 4708 */    MCD::OPC_CheckField, 14, 5, 0, 164, 8, // Skip to: 6926
/* 4714 */    MCD::OPC_Decode, 183, 2, 30, // Opcode: FNOT2S
/* 4718 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4730
/* 4722 */    MCD::OPC_CheckPredicate, 2, 152, 8, // Skip to: 6926
/* 4726 */    MCD::OPC_Decode, 213, 1, 34, // Opcode: FANDNOT1
/* 4730 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4742
/* 4734 */    MCD::OPC_CheckPredicate, 2, 140, 8, // Skip to: 6926
/* 4738 */    MCD::OPC_Decode, 214, 1, 33, // Opcode: FANDNOT1S
/* 4742 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4760
/* 4746 */    MCD::OPC_CheckPredicate, 2, 128, 8, // Skip to: 6926
/* 4750 */    MCD::OPC_CheckField, 0, 5, 0, 122, 8, // Skip to: 6926
/* 4756 */    MCD::OPC_Decode, 180, 2, 59, // Opcode: FNOT1
/* 4760 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4778
/* 4764 */    MCD::OPC_CheckPredicate, 2, 110, 8, // Skip to: 6926
/* 4768 */    MCD::OPC_CheckField, 0, 5, 0, 104, 8, // Skip to: 6926
/* 4774 */    MCD::OPC_Decode, 181, 2, 60, // Opcode: FNOT1S
/* 4778 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4790
/* 4782 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 6926
/* 4786 */    MCD::OPC_Decode, 235, 2, 34, // Opcode: FXOR
/* 4790 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4802
/* 4794 */    MCD::OPC_CheckPredicate, 2, 80, 8, // Skip to: 6926
/* 4798 */    MCD::OPC_Decode, 236, 2, 33, // Opcode: FXORS
/* 4802 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4814
/* 4806 */    MCD::OPC_CheckPredicate, 2, 68, 8, // Skip to: 6926
/* 4810 */    MCD::OPC_Decode, 169, 2, 34, // Opcode: FNAND
/* 4814 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4826
/* 4818 */    MCD::OPC_CheckPredicate, 2, 56, 8, // Skip to: 6926
/* 4822 */    MCD::OPC_Decode, 170, 2, 33, // Opcode: FNANDS
/* 4826 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4838
/* 4830 */    MCD::OPC_CheckPredicate, 2, 44, 8, // Skip to: 6926
/* 4834 */    MCD::OPC_Decode, 212, 1, 34, // Opcode: FAND
/* 4838 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4850
/* 4842 */    MCD::OPC_CheckPredicate, 2, 32, 8, // Skip to: 6926
/* 4846 */    MCD::OPC_Decode, 217, 1, 33, // Opcode: FANDS
/* 4850 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4862
/* 4854 */    MCD::OPC_CheckPredicate, 2, 20, 8, // Skip to: 6926
/* 4858 */    MCD::OPC_Decode, 233, 2, 34, // Opcode: FXNOR
/* 4862 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4874
/* 4866 */    MCD::OPC_CheckPredicate, 2, 8, 8, // Skip to: 6926
/* 4870 */    MCD::OPC_Decode, 234, 2, 33, // Opcode: FXNORS
/* 4874 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4892
/* 4878 */    MCD::OPC_CheckPredicate, 2, 252, 7, // Skip to: 6926
/* 4882 */    MCD::OPC_CheckField, 0, 5, 0, 246, 7, // Skip to: 6926
/* 4888 */    MCD::OPC_Decode, 220, 2, 59, // Opcode: FSRC1
/* 4892 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4910
/* 4896 */    MCD::OPC_CheckPredicate, 2, 234, 7, // Skip to: 6926
/* 4900 */    MCD::OPC_CheckField, 0, 5, 0, 228, 7, // Skip to: 6926
/* 4906 */    MCD::OPC_Decode, 221, 2, 60, // Opcode: FSRC1S
/* 4910 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4922
/* 4914 */    MCD::OPC_CheckPredicate, 2, 216, 7, // Skip to: 6926
/* 4918 */    MCD::OPC_Decode, 190, 2, 34, // Opcode: FORNOT2
/* 4922 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4934
/* 4926 */    MCD::OPC_CheckPredicate, 2, 204, 7, // Skip to: 6926
/* 4930 */    MCD::OPC_Decode, 191, 2, 33, // Opcode: FORNOT2S
/* 4934 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4952
/* 4938 */    MCD::OPC_CheckPredicate, 2, 192, 7, // Skip to: 6926
/* 4942 */    MCD::OPC_CheckField, 14, 5, 0, 186, 7, // Skip to: 6926
/* 4948 */    MCD::OPC_Decode, 222, 2, 31, // Opcode: FSRC2
/* 4952 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4970
/* 4956 */    MCD::OPC_CheckPredicate, 2, 174, 7, // Skip to: 6926
/* 4960 */    MCD::OPC_CheckField, 14, 5, 0, 168, 7, // Skip to: 6926
/* 4966 */    MCD::OPC_Decode, 223, 2, 30, // Opcode: FSRC2S
/* 4970 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4982
/* 4974 */    MCD::OPC_CheckPredicate, 2, 156, 7, // Skip to: 6926
/* 4978 */    MCD::OPC_Decode, 188, 2, 34, // Opcode: FORNOT1
/* 4982 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4994
/* 4986 */    MCD::OPC_CheckPredicate, 2, 144, 7, // Skip to: 6926
/* 4990 */    MCD::OPC_Decode, 189, 2, 33, // Opcode: FORNOT1S
/* 4994 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 5006
/* 4998 */    MCD::OPC_CheckPredicate, 2, 132, 7, // Skip to: 6926
/* 5002 */    MCD::OPC_Decode, 187, 2, 34, // Opcode: FOR
/* 5006 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 5018
/* 5010 */    MCD::OPC_CheckPredicate, 2, 120, 7, // Skip to: 6926
/* 5014 */    MCD::OPC_Decode, 192, 2, 33, // Opcode: FORS
/* 5018 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 5042
/* 5022 */    MCD::OPC_CheckPredicate, 2, 108, 7, // Skip to: 6926
/* 5026 */    MCD::OPC_CheckField, 14, 5, 0, 102, 7, // Skip to: 6926
/* 5032 */    MCD::OPC_CheckField, 0, 5, 0, 96, 7, // Skip to: 6926
/* 5038 */    MCD::OPC_Decode, 185, 2, 57, // Opcode: FONE
/* 5042 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5066
/* 5046 */    MCD::OPC_CheckPredicate, 2, 84, 7, // Skip to: 6926
/* 5050 */    MCD::OPC_CheckField, 14, 5, 0, 78, 7, // Skip to: 6926
/* 5056 */    MCD::OPC_CheckField, 0, 5, 0, 72, 7, // Skip to: 6926
/* 5062 */    MCD::OPC_Decode, 186, 2, 58, // Opcode: FONES
/* 5066 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5097
/* 5071 */    MCD::OPC_CheckPredicate, 2, 59, 7, // Skip to: 6926
/* 5075 */    MCD::OPC_CheckField, 25, 5, 0, 53, 7, // Skip to: 6926
/* 5081 */    MCD::OPC_CheckField, 14, 5, 0, 47, 7, // Skip to: 6926
/* 5087 */    MCD::OPC_CheckField, 0, 5, 0, 41, 7, // Skip to: 6926
/* 5093 */    MCD::OPC_Decode, 237, 3, 4, // Opcode: SHUTDOWN
/* 5097 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5128
/* 5102 */    MCD::OPC_CheckPredicate, 3, 28, 7, // Skip to: 6926
/* 5106 */    MCD::OPC_CheckField, 25, 5, 0, 22, 7, // Skip to: 6926
/* 5112 */    MCD::OPC_CheckField, 14, 5, 0, 16, 7, // Skip to: 6926
/* 5118 */    MCD::OPC_CheckField, 0, 5, 0, 10, 7, // Skip to: 6926
/* 5124 */    MCD::OPC_Decode, 238, 3, 4, // Opcode: SIAM
/* 5128 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5147
/* 5133 */    MCD::OPC_CheckPredicate, 1, 253, 6, // Skip to: 6926
/* 5137 */    MCD::OPC_CheckField, 14, 5, 0, 247, 6, // Skip to: 6926
/* 5143 */    MCD::OPC_Decode, 165, 3, 61, // Opcode: MOVDTOX
/* 5147 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5166
/* 5152 */    MCD::OPC_CheckPredicate, 1, 234, 6, // Skip to: 6926
/* 5156 */    MCD::OPC_CheckField, 14, 5, 0, 228, 6, // Skip to: 6926
/* 5162 */    MCD::OPC_Decode, 183, 3, 61, // Opcode: MOVSTOUW
/* 5166 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5185
/* 5171 */    MCD::OPC_CheckPredicate, 1, 215, 6, // Skip to: 6926
/* 5175 */    MCD::OPC_CheckField, 14, 5, 0, 209, 6, // Skip to: 6926
/* 5181 */    MCD::OPC_Decode, 182, 3, 61, // Opcode: MOVSTOSW
/* 5185 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5198
/* 5190 */    MCD::OPC_CheckPredicate, 1, 196, 6, // Skip to: 6926
/* 5194 */    MCD::OPC_Decode, 236, 4, 10, // Opcode: XMULX
/* 5198 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5211
/* 5203 */    MCD::OPC_CheckPredicate, 1, 183, 6, // Skip to: 6926
/* 5207 */    MCD::OPC_Decode, 237, 4, 10, // Opcode: XMULXHI
/* 5211 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5230
/* 5216 */    MCD::OPC_CheckPredicate, 1, 170, 6, // Skip to: 6926
/* 5220 */    MCD::OPC_CheckField, 14, 5, 0, 164, 6, // Skip to: 6926
/* 5226 */    MCD::OPC_Decode, 187, 3, 62, // Opcode: MOVXTOD
/* 5230 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5249
/* 5235 */    MCD::OPC_CheckPredicate, 1, 151, 6, // Skip to: 6926
/* 5239 */    MCD::OPC_CheckField, 14, 5, 0, 145, 6, // Skip to: 6926
/* 5245 */    MCD::OPC_Decode, 184, 3, 62, // Opcode: MOVWTOS
/* 5249 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5262
/* 5254 */    MCD::OPC_CheckPredicate, 1, 132, 6, // Skip to: 6926
/* 5258 */    MCD::OPC_Decode, 249, 1, 52, // Opcode: FLCMPS
/* 5262 */    MCD::OPC_FilterValue, 210, 2, 123, 6, // Skip to: 6926
/* 5267 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 6926
/* 5271 */    MCD::OPC_Decode, 248, 1, 52, // Opcode: FLCMPD
/* 5275 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5304
/* 5279 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5282 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5296
/* 5286 */    MCD::OPC_CheckField, 5, 8, 0, 98, 6, // Skip to: 6926
/* 5292 */    MCD::OPC_Decode, 244, 2, 63, // Opcode: JMPLrr
/* 5296 */    MCD::OPC_FilterValue, 1, 90, 6, // Skip to: 6926
/* 5300 */    MCD::OPC_Decode, 243, 2, 63, // Opcode: JMPLri
/* 5304 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5345
/* 5308 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5311 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5331
/* 5315 */    MCD::OPC_CheckField, 25, 5, 0, 69, 6, // Skip to: 6926
/* 5321 */    MCD::OPC_CheckField, 5, 8, 0, 63, 6, // Skip to: 6926
/* 5327 */    MCD::OPC_Decode, 217, 3, 64, // Opcode: RETTrr
/* 5331 */    MCD::OPC_FilterValue, 1, 55, 6, // Skip to: 6926
/* 5335 */    MCD::OPC_CheckField, 25, 5, 0, 49, 6, // Skip to: 6926
/* 5341 */    MCD::OPC_Decode, 216, 3, 64, // Opcode: RETTri
/* 5345 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5433
/* 5349 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5352 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5372
/* 5356 */    MCD::OPC_CheckField, 29, 1, 0, 28, 6, // Skip to: 6926
/* 5362 */    MCD::OPC_CheckField, 5, 3, 0, 22, 6, // Skip to: 6926
/* 5368 */    MCD::OPC_Decode, 200, 4, 65, // Opcode: TXCCrr
/* 5372 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5419
/* 5376 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5379 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5399
/* 5383 */    MCD::OPC_CheckField, 25, 5, 0, 1, 6, // Skip to: 6926
/* 5389 */    MCD::OPC_CheckField, 14, 5, 1, 251, 5, // Skip to: 6926
/* 5395 */    MCD::OPC_Decode, 180, 4, 4, // Opcode: TA3
/* 5399 */    MCD::OPC_FilterValue, 5, 243, 5, // Skip to: 6926
/* 5403 */    MCD::OPC_CheckField, 25, 5, 8, 237, 5, // Skip to: 6926
/* 5409 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6926
/* 5415 */    MCD::OPC_Decode, 181, 4, 4, // Opcode: TA5
/* 5419 */    MCD::OPC_FilterValue, 48, 223, 5, // Skip to: 6926
/* 5423 */    MCD::OPC_CheckField, 29, 1, 0, 217, 5, // Skip to: 6926
/* 5429 */    MCD::OPC_Decode, 199, 4, 66, // Opcode: TXCCri
/* 5433 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5492
/* 5437 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5440 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5478
/* 5444 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5447 */    MCD::OPC_FilterValue, 0, 195, 5, // Skip to: 6926
/* 5451 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5454 */    MCD::OPC_FilterValue, 0, 188, 5, // Skip to: 6926
/* 5458 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5474
/* 5464 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5474
/* 5470 */    MCD::OPC_Decode, 250, 1, 4, // Opcode: FLUSH
/* 5474 */    MCD::OPC_Decode, 253, 1, 4, // Opcode: FLUSHrr
/* 5478 */    MCD::OPC_FilterValue, 1, 164, 5, // Skip to: 6926
/* 5482 */    MCD::OPC_CheckField, 25, 5, 0, 158, 5, // Skip to: 6926
/* 5488 */    MCD::OPC_Decode, 252, 1, 4, // Opcode: FLUSHri
/* 5492 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5521
/* 5496 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5499 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5513
/* 5503 */    MCD::OPC_CheckField, 5, 8, 0, 137, 5, // Skip to: 6926
/* 5509 */    MCD::OPC_Decode, 219, 3, 8, // Opcode: SAVErr
/* 5513 */    MCD::OPC_FilterValue, 1, 129, 5, // Skip to: 6926
/* 5517 */    MCD::OPC_Decode, 218, 3, 9, // Opcode: SAVEri
/* 5521 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5550
/* 5525 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5528 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5542
/* 5532 */    MCD::OPC_CheckField, 5, 8, 0, 108, 5, // Skip to: 6926
/* 5538 */    MCD::OPC_Decode, 213, 3, 8, // Opcode: RESTORErr
/* 5542 */    MCD::OPC_FilterValue, 1, 100, 5, // Skip to: 6926
/* 5546 */    MCD::OPC_Decode, 212, 3, 9, // Opcode: RESTOREri
/* 5550 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5579
/* 5554 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5557 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5571
/* 5561 */    MCD::OPC_CheckField, 5, 8, 0, 79, 5, // Skip to: 6926
/* 5567 */    MCD::OPC_Decode, 208, 4, 8, // Opcode: UMACrr
/* 5571 */    MCD::OPC_FilterValue, 1, 71, 5, // Skip to: 6926
/* 5575 */    MCD::OPC_Decode, 207, 4, 9, // Opcode: UMACri
/* 5579 */    MCD::OPC_FilterValue, 63, 63, 5, // Skip to: 6926
/* 5583 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5586 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5600
/* 5590 */    MCD::OPC_CheckField, 5, 8, 0, 50, 5, // Skip to: 6926
/* 5596 */    MCD::OPC_Decode, 244, 3, 8, // Opcode: SMACrr
/* 5600 */    MCD::OPC_FilterValue, 1, 42, 5, // Skip to: 6926
/* 5604 */    MCD::OPC_Decode, 243, 3, 9, // Opcode: SMACri
/* 5608 */    MCD::OPC_FilterValue, 3, 34, 5, // Skip to: 6926
/* 5612 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5615 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5644
/* 5619 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5622 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5636
/* 5626 */    MCD::OPC_CheckField, 5, 8, 0, 14, 5, // Skip to: 6926
/* 5632 */    MCD::OPC_Decode, 160, 3, 67, // Opcode: LDrr
/* 5636 */    MCD::OPC_FilterValue, 1, 6, 5, // Skip to: 6926
/* 5640 */    MCD::OPC_Decode, 159, 3, 67, // Opcode: LDri
/* 5644 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5673
/* 5648 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5651 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5665
/* 5655 */    MCD::OPC_CheckField, 5, 8, 0, 241, 4, // Skip to: 6926
/* 5661 */    MCD::OPC_Decode, 151, 3, 67, // Opcode: LDUBrr
/* 5665 */    MCD::OPC_FilterValue, 1, 233, 4, // Skip to: 6926
/* 5669 */    MCD::OPC_Decode, 150, 3, 67, // Opcode: LDUBri
/* 5673 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5702
/* 5677 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5680 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5694
/* 5684 */    MCD::OPC_CheckField, 5, 8, 0, 212, 4, // Skip to: 6926
/* 5690 */    MCD::OPC_Decode, 154, 3, 67, // Opcode: LDUHrr
/* 5694 */    MCD::OPC_FilterValue, 1, 204, 4, // Skip to: 6926
/* 5698 */    MCD::OPC_Decode, 153, 3, 67, // Opcode: LDUHri
/* 5702 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5731
/* 5706 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5709 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5723
/* 5713 */    MCD::OPC_CheckField, 5, 8, 0, 183, 4, // Skip to: 6926
/* 5719 */    MCD::OPC_Decode, 129, 3, 68, // Opcode: LDDrr
/* 5723 */    MCD::OPC_FilterValue, 1, 175, 4, // Skip to: 6926
/* 5727 */    MCD::OPC_Decode, 128, 3, 68, // Opcode: LDDri
/* 5731 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5760
/* 5735 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5738 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5752
/* 5742 */    MCD::OPC_CheckField, 5, 8, 0, 154, 4, // Skip to: 6926
/* 5748 */    MCD::OPC_Decode, 166, 4, 69, // Opcode: STrr
/* 5752 */    MCD::OPC_FilterValue, 1, 146, 4, // Skip to: 6926
/* 5756 */    MCD::OPC_Decode, 165, 4, 69, // Opcode: STri
/* 5760 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5789
/* 5764 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5767 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5781
/* 5771 */    MCD::OPC_CheckField, 5, 8, 0, 125, 4, // Skip to: 6926
/* 5777 */    MCD::OPC_Decode, 133, 4, 69, // Opcode: STBrr
/* 5781 */    MCD::OPC_FilterValue, 1, 117, 4, // Skip to: 6926
/* 5785 */    MCD::OPC_Decode, 132, 4, 69, // Opcode: STBri
/* 5789 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5818
/* 5793 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5796 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5810
/* 5800 */    MCD::OPC_CheckField, 5, 8, 0, 96, 4, // Skip to: 6926
/* 5806 */    MCD::OPC_Decode, 157, 4, 69, // Opcode: STHrr
/* 5810 */    MCD::OPC_FilterValue, 1, 88, 4, // Skip to: 6926
/* 5814 */    MCD::OPC_Decode, 156, 4, 69, // Opcode: STHri
/* 5818 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5847
/* 5822 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5825 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5839
/* 5829 */    MCD::OPC_CheckField, 5, 8, 0, 67, 4, // Skip to: 6926
/* 5835 */    MCD::OPC_Decode, 149, 4, 70, // Opcode: STDrr
/* 5839 */    MCD::OPC_FilterValue, 1, 59, 4, // Skip to: 6926
/* 5843 */    MCD::OPC_Decode, 148, 4, 70, // Opcode: STDri
/* 5847 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5876
/* 5851 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5854 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5868
/* 5858 */    MCD::OPC_CheckField, 5, 8, 0, 38, 4, // Skip to: 6926
/* 5864 */    MCD::OPC_Decode, 148, 3, 67, // Opcode: LDSWrr
/* 5868 */    MCD::OPC_FilterValue, 1, 30, 4, // Skip to: 6926
/* 5872 */    MCD::OPC_Decode, 147, 3, 67, // Opcode: LDSWri
/* 5876 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5905
/* 5880 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5883 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5897
/* 5887 */    MCD::OPC_CheckField, 5, 8, 0, 9, 4, // Skip to: 6926
/* 5893 */    MCD::OPC_Decode, 140, 3, 67, // Opcode: LDSBrr
/* 5897 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 6926
/* 5901 */    MCD::OPC_Decode, 139, 3, 67, // Opcode: LDSBri
/* 5905 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5934
/* 5909 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5912 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5926
/* 5916 */    MCD::OPC_CheckField, 5, 8, 0, 236, 3, // Skip to: 6926
/* 5922 */    MCD::OPC_Decode, 143, 3, 67, // Opcode: LDSHrr
/* 5926 */    MCD::OPC_FilterValue, 1, 228, 3, // Skip to: 6926
/* 5930 */    MCD::OPC_Decode, 142, 3, 67, // Opcode: LDSHri
/* 5934 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5963
/* 5938 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5941 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5955
/* 5945 */    MCD::OPC_CheckField, 5, 8, 0, 207, 3, // Skip to: 6926
/* 5951 */    MCD::OPC_Decode, 158, 3, 67, // Opcode: LDXrr
/* 5955 */    MCD::OPC_FilterValue, 1, 199, 3, // Skip to: 6926
/* 5959 */    MCD::OPC_Decode, 157, 3, 67, // Opcode: LDXri
/* 5963 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5992
/* 5967 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5970 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5984
/* 5974 */    MCD::OPC_CheckField, 5, 8, 0, 178, 3, // Skip to: 6926
/* 5980 */    MCD::OPC_Decode, 146, 3, 4, // Opcode: LDSTUBrr
/* 5984 */    MCD::OPC_FilterValue, 1, 170, 3, // Skip to: 6926
/* 5988 */    MCD::OPC_Decode, 145, 3, 4, // Opcode: LDSTUBri
/* 5992 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 6021
/* 5996 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5999 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6013
/* 6003 */    MCD::OPC_CheckField, 5, 8, 0, 149, 3, // Skip to: 6926
/* 6009 */    MCD::OPC_Decode, 164, 4, 69, // Opcode: STXrr
/* 6013 */    MCD::OPC_FilterValue, 1, 141, 3, // Skip to: 6926
/* 6017 */    MCD::OPC_Decode, 163, 4, 69, // Opcode: STXri
/* 6021 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 6050
/* 6025 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6028 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6042
/* 6032 */    MCD::OPC_CheckField, 5, 8, 0, 120, 3, // Skip to: 6926
/* 6038 */    MCD::OPC_Decode, 179, 4, 71, // Opcode: SWAPrr
/* 6042 */    MCD::OPC_FilterValue, 1, 112, 3, // Skip to: 6926
/* 6046 */    MCD::OPC_Decode, 178, 4, 71, // Opcode: SWAPri
/* 6050 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6064
/* 6054 */    MCD::OPC_CheckField, 13, 1, 0, 98, 3, // Skip to: 6926
/* 6060 */    MCD::OPC_Decode, 245, 2, 67, // Opcode: LDArr
/* 6064 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6078
/* 6068 */    MCD::OPC_CheckField, 13, 1, 0, 84, 3, // Skip to: 6926
/* 6074 */    MCD::OPC_Decode, 149, 3, 67, // Opcode: LDUBArr
/* 6078 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6092
/* 6082 */    MCD::OPC_CheckField, 13, 1, 0, 70, 3, // Skip to: 6926
/* 6088 */    MCD::OPC_Decode, 152, 3, 67, // Opcode: LDUHArr
/* 6092 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6106
/* 6096 */    MCD::OPC_CheckField, 13, 1, 0, 56, 3, // Skip to: 6926
/* 6102 */    MCD::OPC_Decode, 250, 2, 68, // Opcode: LDDArr
/* 6106 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6120
/* 6110 */    MCD::OPC_CheckField, 13, 1, 0, 42, 3, // Skip to: 6926
/* 6116 */    MCD::OPC_Decode, 129, 4, 69, // Opcode: STArr
/* 6120 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6134
/* 6124 */    MCD::OPC_CheckField, 13, 1, 0, 28, 3, // Skip to: 6926
/* 6130 */    MCD::OPC_Decode, 131, 4, 69, // Opcode: STBArr
/* 6134 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6148
/* 6138 */    MCD::OPC_CheckField, 13, 1, 0, 14, 3, // Skip to: 6926
/* 6144 */    MCD::OPC_Decode, 155, 4, 69, // Opcode: STHArr
/* 6148 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6162
/* 6152 */    MCD::OPC_CheckField, 13, 1, 0, 0, 3, // Skip to: 6926
/* 6158 */    MCD::OPC_Decode, 138, 4, 70, // Opcode: STDArr
/* 6162 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6176
/* 6166 */    MCD::OPC_CheckField, 13, 1, 0, 242, 2, // Skip to: 6926
/* 6172 */    MCD::OPC_Decode, 138, 3, 67, // Opcode: LDSBArr
/* 6176 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6190
/* 6180 */    MCD::OPC_CheckField, 13, 1, 0, 228, 2, // Skip to: 6926
/* 6186 */    MCD::OPC_Decode, 141, 3, 67, // Opcode: LDSHArr
/* 6190 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6204
/* 6194 */    MCD::OPC_CheckField, 13, 1, 0, 214, 2, // Skip to: 6926
/* 6200 */    MCD::OPC_Decode, 144, 3, 72, // Opcode: LDSTUBArr
/* 6204 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6218
/* 6208 */    MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 6926
/* 6214 */    MCD::OPC_Decode, 177, 4, 71, // Opcode: SWAPArr
/* 6218 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6247
/* 6222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6225 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6239
/* 6229 */    MCD::OPC_CheckField, 5, 8, 0, 179, 2, // Skip to: 6926
/* 6235 */    MCD::OPC_Decode, 134, 3, 73, // Opcode: LDFrr
/* 6239 */    MCD::OPC_FilterValue, 1, 171, 2, // Skip to: 6926
/* 6243 */    MCD::OPC_Decode, 133, 3, 73, // Opcode: LDFri
/* 6247 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6320
/* 6251 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6254 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6293
/* 6258 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6261 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6275
/* 6265 */    MCD::OPC_CheckField, 5, 8, 0, 143, 2, // Skip to: 6926
/* 6271 */    MCD::OPC_Decode, 132, 3, 73, // Opcode: LDFSRrr
/* 6275 */    MCD::OPC_FilterValue, 1, 135, 2, // Skip to: 6926
/* 6279 */    MCD::OPC_CheckPredicate, 0, 131, 2, // Skip to: 6926
/* 6283 */    MCD::OPC_CheckField, 5, 8, 0, 125, 2, // Skip to: 6926
/* 6289 */    MCD::OPC_Decode, 156, 3, 73, // Opcode: LDXFSRrr
/* 6293 */    MCD::OPC_FilterValue, 1, 117, 2, // Skip to: 6926
/* 6297 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6300 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6308
/* 6304 */    MCD::OPC_Decode, 131, 3, 73, // Opcode: LDFSRri
/* 6308 */    MCD::OPC_FilterValue, 1, 102, 2, // Skip to: 6926
/* 6312 */    MCD::OPC_CheckPredicate, 0, 98, 2, // Skip to: 6926
/* 6316 */    MCD::OPC_Decode, 155, 3, 73, // Opcode: LDXFSRri
/* 6320 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6357
/* 6324 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6327 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6345
/* 6331 */    MCD::OPC_CheckPredicate, 0, 79, 2, // Skip to: 6926
/* 6335 */    MCD::OPC_CheckField, 5, 8, 0, 73, 2, // Skip to: 6926
/* 6341 */    MCD::OPC_Decode, 137, 3, 74, // Opcode: LDQFrr
/* 6345 */    MCD::OPC_FilterValue, 1, 65, 2, // Skip to: 6926
/* 6349 */    MCD::OPC_CheckPredicate, 0, 61, 2, // Skip to: 6926
/* 6353 */    MCD::OPC_Decode, 136, 3, 74, // Opcode: LDQFri
/* 6357 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6386
/* 6361 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6364 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6378
/* 6368 */    MCD::OPC_CheckField, 5, 8, 0, 40, 2, // Skip to: 6926
/* 6374 */    MCD::OPC_Decode, 255, 2, 75, // Opcode: LDDFrr
/* 6378 */    MCD::OPC_FilterValue, 1, 32, 2, // Skip to: 6926
/* 6382 */    MCD::OPC_Decode, 254, 2, 75, // Opcode: LDDFri
/* 6386 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6415
/* 6390 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6393 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6407
/* 6397 */    MCD::OPC_CheckField, 5, 8, 0, 11, 2, // Skip to: 6926
/* 6403 */    MCD::OPC_Decode, 154, 4, 76, // Opcode: STFrr
/* 6407 */    MCD::OPC_FilterValue, 1, 3, 2, // Skip to: 6926
/* 6411 */    MCD::OPC_Decode, 153, 4, 76, // Opcode: STFri
/* 6415 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6488
/* 6419 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6422 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6461
/* 6426 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6429 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6443
/* 6433 */    MCD::OPC_CheckField, 5, 8, 0, 231, 1, // Skip to: 6926
/* 6439 */    MCD::OPC_Decode, 152, 4, 76, // Opcode: STFSRrr
/* 6443 */    MCD::OPC_FilterValue, 1, 223, 1, // Skip to: 6926
/* 6447 */    MCD::OPC_CheckPredicate, 0, 219, 1, // Skip to: 6926
/* 6451 */    MCD::OPC_CheckField, 5, 8, 0, 213, 1, // Skip to: 6926
/* 6457 */    MCD::OPC_Decode, 162, 4, 76, // Opcode: STXFSRrr
/* 6461 */    MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 6926
/* 6465 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6468 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6476
/* 6472 */    MCD::OPC_Decode, 151, 4, 76, // Opcode: STFSRri
/* 6476 */    MCD::OPC_FilterValue, 1, 190, 1, // Skip to: 6926
/* 6480 */    MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 6926
/* 6484 */    MCD::OPC_Decode, 161, 4, 76, // Opcode: STXFSRri
/* 6488 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6546
/* 6492 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6495 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6524
/* 6499 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6502 */    MCD::OPC_FilterValue, 0, 164, 1, // Skip to: 6926
/* 6506 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6516
/* 6512 */    MCD::OPC_Decode, 145, 4, 76, // Opcode: STDFQrr
/* 6516 */    MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 6926
/* 6520 */    MCD::OPC_Decode, 160, 4, 77, // Opcode: STQFrr
/* 6524 */    MCD::OPC_FilterValue, 1, 142, 1, // Skip to: 6926
/* 6528 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6538
/* 6534 */    MCD::OPC_Decode, 144, 4, 76, // Opcode: STDFQri
/* 6538 */    MCD::OPC_CheckPredicate, 0, 128, 1, // Skip to: 6926
/* 6542 */    MCD::OPC_Decode, 159, 4, 77, // Opcode: STQFri
/* 6546 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6575
/* 6550 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6553 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6567
/* 6557 */    MCD::OPC_CheckField, 5, 8, 0, 107, 1, // Skip to: 6926
/* 6563 */    MCD::OPC_Decode, 147, 4, 78, // Opcode: STDFrr
/* 6567 */    MCD::OPC_FilterValue, 1, 99, 1, // Skip to: 6926
/* 6571 */    MCD::OPC_Decode, 146, 4, 78, // Opcode: STDFri
/* 6575 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6612
/* 6579 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6582 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6604
/* 6586 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6596
/* 6592 */    MCD::OPC_Decode, 249, 2, 79, // Opcode: LDCrr
/* 6596 */    MCD::OPC_CheckPredicate, 0, 70, 1, // Skip to: 6926
/* 6600 */    MCD::OPC_Decode, 130, 3, 73, // Opcode: LDFArr
/* 6604 */    MCD::OPC_FilterValue, 1, 62, 1, // Skip to: 6926
/* 6608 */    MCD::OPC_Decode, 248, 2, 79, // Opcode: LDCri
/* 6612 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6653
/* 6616 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6619 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6639
/* 6623 */    MCD::OPC_CheckField, 25, 5, 0, 41, 1, // Skip to: 6926
/* 6629 */    MCD::OPC_CheckField, 5, 8, 0, 35, 1, // Skip to: 6926
/* 6635 */    MCD::OPC_Decode, 247, 2, 79, // Opcode: LDCSRrr
/* 6639 */    MCD::OPC_FilterValue, 1, 27, 1, // Skip to: 6926
/* 6643 */    MCD::OPC_CheckField, 25, 5, 0, 21, 1, // Skip to: 6926
/* 6649 */    MCD::OPC_Decode, 246, 2, 79, // Opcode: LDCSRri
/* 6653 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6671
/* 6657 */    MCD::OPC_CheckPredicate, 0, 9, 1, // Skip to: 6926
/* 6661 */    MCD::OPC_CheckField, 13, 1, 0, 3, 1, // Skip to: 6926
/* 6667 */    MCD::OPC_Decode, 135, 3, 74, // Opcode: LDQFArr
/* 6671 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6708
/* 6675 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6678 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6700
/* 6682 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6692
/* 6688 */    MCD::OPC_Decode, 252, 2, 80, // Opcode: LDDCrr
/* 6692 */    MCD::OPC_CheckPredicate, 0, 230, 0, // Skip to: 6926
/* 6696 */    MCD::OPC_Decode, 253, 2, 75, // Opcode: LDDFArr
/* 6700 */    MCD::OPC_FilterValue, 1, 222, 0, // Skip to: 6926
/* 6704 */    MCD::OPC_Decode, 251, 2, 80, // Opcode: LDDCri
/* 6708 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6745
/* 6712 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6715 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6737
/* 6719 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6729
/* 6725 */    MCD::OPC_Decode, 137, 4, 81, // Opcode: STCrr
/* 6729 */    MCD::OPC_CheckPredicate, 0, 193, 0, // Skip to: 6926
/* 6733 */    MCD::OPC_Decode, 150, 4, 76, // Opcode: STFArr
/* 6737 */    MCD::OPC_FilterValue, 1, 185, 0, // Skip to: 6926
/* 6741 */    MCD::OPC_Decode, 136, 4, 81, // Opcode: STCri
/* 6745 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6786
/* 6749 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6752 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6772
/* 6756 */    MCD::OPC_CheckField, 25, 5, 0, 164, 0, // Skip to: 6926
/* 6762 */    MCD::OPC_CheckField, 5, 8, 0, 158, 0, // Skip to: 6926
/* 6768 */    MCD::OPC_Decode, 135, 4, 81, // Opcode: STCSRrr
/* 6772 */    MCD::OPC_FilterValue, 1, 150, 0, // Skip to: 6926
/* 6776 */    MCD::OPC_CheckField, 25, 5, 0, 144, 0, // Skip to: 6926
/* 6782 */    MCD::OPC_Decode, 134, 4, 81, // Opcode: STCSRri
/* 6786 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6835
/* 6790 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6793 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6821
/* 6797 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6813
/* 6803 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6813
/* 6809 */    MCD::OPC_Decode, 140, 4, 81, // Opcode: STDCQrr
/* 6813 */    MCD::OPC_CheckPredicate, 0, 109, 0, // Skip to: 6926
/* 6817 */    MCD::OPC_Decode, 158, 4, 77, // Opcode: STQFArr
/* 6821 */    MCD::OPC_FilterValue, 1, 101, 0, // Skip to: 6926
/* 6825 */    MCD::OPC_CheckField, 25, 5, 0, 95, 0, // Skip to: 6926
/* 6831 */    MCD::OPC_Decode, 139, 4, 81, // Opcode: STDCQri
/* 6835 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6872
/* 6839 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6842 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6864
/* 6846 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6856
/* 6852 */    MCD::OPC_Decode, 142, 4, 82, // Opcode: STDCrr
/* 6856 */    MCD::OPC_CheckPredicate, 0, 66, 0, // Skip to: 6926
/* 6860 */    MCD::OPC_Decode, 143, 4, 78, // Opcode: STDFArr
/* 6864 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 6926
/* 6868 */    MCD::OPC_Decode, 141, 4, 82, // Opcode: STDCri
/* 6872 */    MCD::OPC_FilterValue, 60, 35, 0, // Skip to: 6911
/* 6876 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6879 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6926
/* 6883 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6886 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6894
/* 6890 */    MCD::OPC_Decode, 178, 1, 83, // Opcode: CASAasi10
/* 6894 */    MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 6907
/* 6899 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 6907
/* 6903 */    MCD::OPC_Decode, 181, 1, 83, // Opcode: CASrr
/* 6907 */    MCD::OPC_Decode, 179, 1, 84, // Opcode: CASArr
/* 6911 */    MCD::OPC_FilterValue, 62, 11, 0, // Skip to: 6926
/* 6915 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, // Skip to: 6926
/* 6922 */    MCD::OPC_Decode, 180, 1, 85, // Opcode: CASXrr
/* 6926 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 194, 4, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 193, 4, 86, // Opcode: TRAPri
/* 49 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 57
/* 11 */      MCD::OPC_CheckField, 29, 3, 4, 40, 0, // Skip to: 57
/* 17 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, // Skip to: 57
/* 23 */      MCD::OPC_CheckField, 5, 3, 0, 28, 0, // Skip to: 57
/* 29 */      MCD::OPC_Decode, 187, 4, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 186, 4, 86, // Opcode: TICCri
/* 57 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
