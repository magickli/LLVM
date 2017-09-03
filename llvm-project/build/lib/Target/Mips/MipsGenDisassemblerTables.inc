/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
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
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 128, 4, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 254, 3, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 131, 4, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 144, 2, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 129, 19, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 132, 19, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 134, 4, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 142, 4, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 147, 2, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 154, 14, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 155, 14, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 226, 11, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 205, 6, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 241, 11, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 149, 2, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 141, 19, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 216, 10, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 213, 10, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 215, 10, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 214, 10, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 255, 18, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 135, 19, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 253, 18, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 133, 4, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 140, 19, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 138, 19, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 204, 6, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 150, 2, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 209, 14, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 238, 19, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 193, 14, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 152, 14, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 235, 18, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 236, 18, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 153, 14, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 144, 8, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 145, 8, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 192, 14, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 453
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 180, 1, // Skip to: 453
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 174, 1, // Skip to: 453
/* 23 */      MCD::OPC_Decode, 143, 2, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 453
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 156, 1, // Skip to: 453
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 150, 1, // Skip to: 453
/* 47 */      MCD::OPC_Decode, 129, 4, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 453
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 132, 1, // Skip to: 453
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 126, 1, // Skip to: 453
/* 71 */      MCD::OPC_Decode, 255, 3, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 114, 1, // Skip to: 453
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 108, 1, // Skip to: 453
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 102, 1, // Skip to: 453
/* 95 */      MCD::OPC_Decode, 132, 4, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 87, 1, // Skip to: 453
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 252, 18, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 139, 19, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 137, 19, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 453
/* 167 */     MCD::OPC_Decode, 141, 4, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 453
/* 179 */     MCD::OPC_Decode, 149, 4, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 10, 1, // Skip to: 453
/* 187 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 453
/* 191 */     MCD::OPC_Decode, 148, 2, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 453
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 244, 0, // Skip to: 453
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 238, 0, // Skip to: 453
/* 215 */     MCD::OPC_Decode, 146, 2, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 453
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 220, 0, // Skip to: 453
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 214, 0, // Skip to: 453
/* 239 */     MCD::OPC_Decode, 142, 2, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 202, 0, // Skip to: 453
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 196, 0, // Skip to: 453
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 190, 0, // Skip to: 453
/* 263 */     MCD::OPC_Decode, 130, 19, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 453
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 172, 0, // Skip to: 453
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 166, 0, // Skip to: 453
/* 287 */     MCD::OPC_Decode, 133, 19, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 453
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 148, 0, // Skip to: 453
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 142, 0, // Skip to: 453
/* 311 */     MCD::OPC_Decode, 228, 11, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 130, 0, // Skip to: 453
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 124, 0, // Skip to: 453
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 118, 0, // Skip to: 453
/* 335 */     MCD::OPC_Decode, 206, 6, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 357
/* 343 */     MCD::OPC_CheckPredicate, 0, 106, 0, // Skip to: 453
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 100, 0, // Skip to: 453
/* 353 */     MCD::OPC_Decode, 244, 11, 9, // Opcode: LwRxSpImmX16
/* 357 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 381
/* 361 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 453
/* 365 */     MCD::OPC_CheckField, 27, 5, 30, 82, 0, // Skip to: 453
/* 371 */     MCD::OPC_CheckField, 5, 3, 0, 76, 0, // Skip to: 453
/* 377 */     MCD::OPC_Decode, 242, 11, 1, // Opcode: LwRxPcTcpX16
/* 381 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 453
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 58, 0, // Skip to: 453
/* 395 */     MCD::OPC_Decode, 234, 18, 9, // Opcode: SbRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 417
/* 403 */     MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 453
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 40, 0, // Skip to: 453
/* 413 */     MCD::OPC_Decode, 251, 18, 9, // Opcode: ShRxRyOffMemX16
/* 417 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 435
/* 421 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 453
/* 425 */     MCD::OPC_CheckField, 27, 5, 30, 22, 0, // Skip to: 453
/* 431 */     MCD::OPC_Decode, 143, 19, 9, // Opcode: SwRxSpImmX16
/* 435 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 453
/* 443 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 142, 19, 9, // Opcode: SwRxRyOffMemX16
/* 453 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 186, 11, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 242, 10, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 193, 18, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 167, 16, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 147, 7, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 159, 7, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 164, 7, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 221, 13, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 224, 13, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 225, 13, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 226, 13, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 222, 13, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 223, 13, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 209, 19, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 208, 19, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 207, 19, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 153, 2, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 205, 16, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 180, 17, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 231, 14, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 203, 7, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 208, 16, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 181, 17, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 182, 4, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 183, 4, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 187, 8, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 188, 8, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 160, 2, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 161, 2, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 162, 2, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 163, 2, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 5, 22, 2, // Skip to: 552
/* 18 */      MCD::OPC_Decode, 148, 1, 19, // Opcode: ADDU16_MM
/* 22 */      MCD::OPC_FilterValue, 1, 14, 2, // Skip to: 552
/* 26 */      MCD::OPC_CheckPredicate, 5, 10, 2, // Skip to: 552
/* 30 */      MCD::OPC_Decode, 154, 18, 19, // Opcode: SUBU16_MM
/* 34 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 6, 254, 1, // Skip to: 552
/* 42 */      MCD::OPC_Decode, 222, 10, 20, // Opcode: LBU16_MM
/* 46 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 6, 242, 1, // Skip to: 552
/* 54 */      MCD::OPC_Decode, 249, 12, 21, // Opcode: MOVE16_MM
/* 58 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 89
/* 62 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 65 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 77
/* 69 */      MCD::OPC_CheckPredicate, 5, 223, 1, // Skip to: 552
/* 73 */      MCD::OPC_Decode, 150, 17, 22, // Opcode: SLL16_MM
/* 77 */      MCD::OPC_FilterValue, 1, 215, 1, // Skip to: 552
/* 81 */      MCD::OPC_CheckPredicate, 5, 211, 1, // Skip to: 552
/* 85 */      MCD::OPC_Decode, 218, 17, 22, // Opcode: SRL16_MM
/* 89 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 101
/* 93 */      MCD::OPC_CheckPredicate, 6, 199, 1, // Skip to: 552
/* 97 */      MCD::OPC_Decode, 139, 11, 20, // Opcode: LHU16_MM
/* 101 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 113
/* 105 */     MCD::OPC_CheckPredicate, 5, 187, 1, // Skip to: 552
/* 109 */     MCD::OPC_Decode, 195, 1, 23, // Opcode: ANDI16_MM
/* 113 */     MCD::OPC_FilterValue, 17, 227, 0, // Skip to: 344
/* 117 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 5, 168, 1, // Skip to: 552
/* 128 */     MCD::OPC_Decode, 190, 14, 24, // Opcode: NOT16_MM
/* 132 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 5, 156, 1, // Skip to: 552
/* 140 */     MCD::OPC_Decode, 224, 19, 25, // Opcode: XOR16_MM
/* 144 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 5, 144, 1, // Skip to: 552
/* 152 */     MCD::OPC_Decode, 192, 1, 25, // Opcode: AND16_MM
/* 156 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 168
/* 160 */     MCD::OPC_CheckPredicate, 5, 132, 1, // Skip to: 552
/* 164 */     MCD::OPC_Decode, 195, 14, 25, // Opcode: OR16_MM
/* 168 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 180
/* 172 */     MCD::OPC_CheckPredicate, 7, 120, 1, // Skip to: 552
/* 176 */     MCD::OPC_Decode, 196, 11, 26, // Opcode: LWM16_MM
/* 180 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 192
/* 184 */     MCD::OPC_CheckPredicate, 7, 108, 1, // Skip to: 552
/* 188 */     MCD::OPC_Decode, 202, 18, 26, // Opcode: SWM16_MM
/* 192 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 223
/* 196 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 199 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 6, 89, 1, // Skip to: 552
/* 207 */     MCD::OPC_Decode, 199, 10, 27, // Opcode: JR16_MM
/* 211 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 552
/* 215 */     MCD::OPC_CheckPredicate, 6, 77, 1, // Skip to: 552
/* 219 */     MCD::OPC_Decode, 202, 10, 27, // Opcode: JRC16_MM
/* 223 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 254
/* 227 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 230 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 242
/* 234 */     MCD::OPC_CheckPredicate, 7, 58, 1, // Skip to: 552
/* 238 */     MCD::OPC_Decode, 177, 10, 27, // Opcode: JALR16_MM
/* 242 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 552
/* 246 */     MCD::OPC_CheckPredicate, 6, 46, 1, // Skip to: 552
/* 250 */     MCD::OPC_Decode, 184, 10, 27, // Opcode: JALRS16_MM
/* 254 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 272
/* 258 */     MCD::OPC_CheckPredicate, 6, 34, 1, // Skip to: 552
/* 262 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 552
/* 268 */     MCD::OPC_Decode, 194, 12, 27, // Opcode: MFHI16_MM
/* 272 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 290
/* 276 */     MCD::OPC_CheckPredicate, 6, 16, 1, // Skip to: 552
/* 280 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 552
/* 286 */     MCD::OPC_Decode, 200, 12, 27, // Opcode: MFLO16_MM
/* 290 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 308
/* 294 */     MCD::OPC_CheckPredicate, 5, 254, 0, // Skip to: 552
/* 298 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 552
/* 304 */     MCD::OPC_Decode, 227, 3, 28, // Opcode: BREAK16_MM
/* 308 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 326
/* 312 */     MCD::OPC_CheckPredicate, 5, 236, 0, // Skip to: 552
/* 316 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 552
/* 322 */     MCD::OPC_Decode, 155, 16, 28, // Opcode: SDBBP16_MM
/* 326 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 552
/* 330 */     MCD::OPC_CheckPredicate, 6, 218, 0, // Skip to: 552
/* 334 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 552
/* 340 */     MCD::OPC_Decode, 201, 10, 29, // Opcode: JRADDIUSP
/* 344 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 356
/* 348 */     MCD::OPC_CheckPredicate, 6, 200, 0, // Skip to: 552
/* 352 */     MCD::OPC_Decode, 209, 11, 30, // Opcode: LWSP_MM
/* 356 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 385
/* 360 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 363 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 374
/* 367 */     MCD::OPC_CheckPredicate, 6, 181, 0, // Skip to: 552
/* 371 */     MCD::OPC_Decode, 117, 31, // Opcode: ADDIUS5_MM
/* 374 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 552
/* 378 */     MCD::OPC_CheckPredicate, 6, 170, 0, // Skip to: 552
/* 382 */     MCD::OPC_Decode, 118, 32, // Opcode: ADDIUSP_MM
/* 385 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 6, 159, 0, // Skip to: 552
/* 393 */     MCD::OPC_Decode, 190, 11, 33, // Opcode: LWGP_MM
/* 397 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 6, 147, 0, // Skip to: 552
/* 405 */     MCD::OPC_Decode, 179, 11, 20, // Opcode: LW16_MM
/* 409 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 438
/* 413 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 416 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 427
/* 420 */     MCD::OPC_CheckPredicate, 6, 128, 0, // Skip to: 552
/* 424 */     MCD::OPC_Decode, 116, 34, // Opcode: ADDIUR2_MM
/* 427 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 552
/* 431 */     MCD::OPC_CheckPredicate, 6, 117, 0, // Skip to: 552
/* 435 */     MCD::OPC_Decode, 115, 35, // Opcode: ADDIUR1SP_MM
/* 438 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 456
/* 442 */     MCD::OPC_CheckPredicate, 6, 106, 0, // Skip to: 552
/* 446 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 552
/* 452 */     MCD::OPC_Decode, 251, 12, 36, // Opcode: MOVEP_MM
/* 456 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 468
/* 460 */     MCD::OPC_CheckPredicate, 6, 88, 0, // Skip to: 552
/* 464 */     MCD::OPC_Decode, 135, 16, 20, // Opcode: SB16_MM
/* 468 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 480
/* 472 */     MCD::OPC_CheckPredicate, 6, 76, 0, // Skip to: 552
/* 476 */     MCD::OPC_Decode, 196, 2, 37, // Opcode: BEQZ16_MM
/* 480 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 492
/* 484 */     MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 552
/* 488 */     MCD::OPC_Decode, 210, 16, 20, // Opcode: SH16_MM
/* 492 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 504
/* 496 */     MCD::OPC_CheckPredicate, 6, 52, 0, // Skip to: 552
/* 500 */     MCD::OPC_Decode, 204, 3, 37, // Opcode: BNEZ16_MM
/* 504 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 516
/* 508 */     MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 552
/* 512 */     MCD::OPC_Decode, 213, 18, 30, // Opcode: SWSP_MM
/* 516 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 528
/* 520 */     MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 552
/* 524 */     MCD::OPC_Decode, 152, 2, 38, // Opcode: B16_MM
/* 528 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 540
/* 532 */     MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 552
/* 536 */     MCD::OPC_Decode, 185, 18, 20, // Opcode: SW16_MM
/* 540 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 552
/* 544 */     MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 552
/* 548 */     MCD::OPC_Decode, 148, 11, 39, // Opcode: LI16_MM
/* 552 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 55, 12, // Skip to: 3134
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 240, 17, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 147, 8, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 213, 14, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 6, 105, 16, // Skip to: 4265
/* 64 */      MCD::OPC_Decode, 163, 17, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 6, 93, 16, // Skip to: 4265
/* 76 */      MCD::OPC_Decode, 237, 17, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 6, 81, 16, // Skip to: 4265
/* 88 */      MCD::OPC_Decode, 215, 17, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 73, 16, // Skip to: 4265
/* 96 */      MCD::OPC_CheckPredicate, 6, 69, 16, // Skip to: 4265
/* 100 */     MCD::OPC_Decode, 234, 15, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 5, 195, 0, // Skip to: 303
/* 108 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 111 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 129
/* 115 */     MCD::OPC_CheckPredicate, 8, 50, 16, // Skip to: 4265
/* 119 */     MCD::OPC_CheckField, 11, 5, 0, 44, 16, // Skip to: 4265
/* 125 */     MCD::OPC_Decode, 253, 4, 41, // Opcode: CMP_EQ_PH_MM
/* 129 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 147
/* 133 */     MCD::OPC_CheckPredicate, 8, 32, 16, // Skip to: 4265
/* 137 */     MCD::OPC_CheckField, 11, 5, 0, 26, 16, // Skip to: 4265
/* 143 */     MCD::OPC_Decode, 139, 5, 41, // Opcode: CMP_LT_PH_MM
/* 147 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 165
/* 151 */     MCD::OPC_CheckPredicate, 8, 14, 16, // Skip to: 4265
/* 155 */     MCD::OPC_CheckField, 11, 5, 0, 8, 16, // Skip to: 4265
/* 161 */     MCD::OPC_Decode, 133, 5, 41, // Opcode: CMP_LE_PH_MM
/* 165 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 9, 252, 15, // Skip to: 4265
/* 173 */     MCD::OPC_Decode, 231, 4, 42, // Opcode: CMPGDU_EQ_QB_MMR2
/* 177 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 9, 240, 15, // Skip to: 4265
/* 185 */     MCD::OPC_Decode, 235, 4, 42, // Opcode: CMPGDU_LT_QB_MMR2
/* 189 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 9, 228, 15, // Skip to: 4265
/* 197 */     MCD::OPC_Decode, 233, 4, 42, // Opcode: CMPGDU_LE_QB_MMR2
/* 201 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 219
/* 205 */     MCD::OPC_CheckPredicate, 8, 216, 15, // Skip to: 4265
/* 209 */     MCD::OPC_CheckField, 11, 5, 0, 210, 15, // Skip to: 4265
/* 215 */     MCD::OPC_Decode, 243, 4, 41, // Opcode: CMPU_EQ_QB_MM
/* 219 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 237
/* 223 */     MCD::OPC_CheckPredicate, 8, 198, 15, // Skip to: 4265
/* 227 */     MCD::OPC_CheckField, 11, 5, 0, 192, 15, // Skip to: 4265
/* 233 */     MCD::OPC_Decode, 247, 4, 41, // Opcode: CMPU_LT_QB_MM
/* 237 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 255
/* 241 */     MCD::OPC_CheckPredicate, 8, 180, 15, // Skip to: 4265
/* 245 */     MCD::OPC_CheckField, 11, 5, 0, 174, 15, // Skip to: 4265
/* 251 */     MCD::OPC_Decode, 245, 4, 41, // Opcode: CMPU_LE_QB_MM
/* 255 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 267
/* 259 */     MCD::OPC_CheckPredicate, 8, 162, 15, // Skip to: 4265
/* 263 */     MCD::OPC_Decode, 133, 1, 43, // Opcode: ADDQ_S_W_MM
/* 267 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 279
/* 271 */     MCD::OPC_CheckPredicate, 8, 150, 15, // Skip to: 4265
/* 275 */     MCD::OPC_Decode, 137, 18, 43, // Opcode: SUBQ_S_W_MM
/* 279 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 291
/* 283 */     MCD::OPC_CheckPredicate, 8, 138, 15, // Skip to: 4265
/* 287 */     MCD::OPC_Decode, 135, 1, 43, // Opcode: ADDSC_MM
/* 291 */     MCD::OPC_FilterValue, 15, 130, 15, // Skip to: 4265
/* 295 */     MCD::OPC_CheckPredicate, 8, 126, 15, // Skip to: 4265
/* 299 */     MCD::OPC_Decode, 172, 1, 43, // Opcode: ADDWC_MM
/* 303 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 315
/* 307 */     MCD::OPC_CheckPredicate, 6, 114, 15, // Skip to: 4265
/* 311 */     MCD::OPC_Decode, 229, 3, 44, // Opcode: BREAK_MM
/* 315 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 327
/* 319 */     MCD::OPC_CheckPredicate, 6, 102, 15, // Skip to: 4265
/* 323 */     MCD::OPC_Decode, 172, 10, 45, // Opcode: INS_MM
/* 327 */     MCD::OPC_FilterValue, 13, 103, 1, // Skip to: 690
/* 331 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 334 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 346
/* 338 */     MCD::OPC_CheckPredicate, 8, 83, 15, // Skip to: 4265
/* 342 */     MCD::OPC_Decode, 129, 1, 46, // Opcode: ADDQ_PH_MM
/* 346 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 357
/* 350 */     MCD::OPC_CheckPredicate, 9, 71, 15, // Skip to: 4265
/* 354 */     MCD::OPC_Decode, 121, 46, // Opcode: ADDQH_PH_MMR2
/* 357 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 368
/* 361 */     MCD::OPC_CheckPredicate, 9, 60, 15, // Skip to: 4265
/* 365 */     MCD::OPC_Decode, 127, 43, // Opcode: ADDQH_W_MMR2
/* 368 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 380
/* 372 */     MCD::OPC_CheckPredicate, 8, 49, 15, // Skip to: 4265
/* 376 */     MCD::OPC_Decode, 158, 1, 46, // Opcode: ADDU_QB_MM
/* 380 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 392
/* 384 */     MCD::OPC_CheckPredicate, 9, 37, 15, // Skip to: 4265
/* 388 */     MCD::OPC_Decode, 156, 1, 46, // Opcode: ADDU_PH_MMR2
/* 392 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 404
/* 396 */     MCD::OPC_CheckPredicate, 9, 25, 15, // Skip to: 4265
/* 400 */     MCD::OPC_Decode, 151, 1, 46, // Opcode: ADDUH_QB_MMR2
/* 404 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 416
/* 408 */     MCD::OPC_CheckPredicate, 8, 13, 15, // Skip to: 4265
/* 412 */     MCD::OPC_Decode, 240, 16, 47, // Opcode: SHRAV_PH_MM
/* 416 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 428
/* 420 */     MCD::OPC_CheckPredicate, 9, 1, 15, // Skip to: 4265
/* 424 */     MCD::OPC_Decode, 242, 16, 47, // Opcode: SHRAV_QB_MMR2
/* 428 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 440
/* 432 */     MCD::OPC_CheckPredicate, 8, 245, 14, // Skip to: 4265
/* 436 */     MCD::OPC_Decode, 133, 18, 46, // Opcode: SUBQ_PH_MM
/* 440 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 9, 233, 14, // Skip to: 4265
/* 448 */     MCD::OPC_Decode, 253, 17, 46, // Opcode: SUBQH_PH_MMR2
/* 452 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 464
/* 456 */     MCD::OPC_CheckPredicate, 9, 221, 14, // Skip to: 4265
/* 460 */     MCD::OPC_Decode, 131, 18, 43, // Opcode: SUBQH_W_MMR2
/* 464 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 8, 209, 14, // Skip to: 4265
/* 472 */     MCD::OPC_Decode, 164, 18, 46, // Opcode: SUBU_QB_MM
/* 476 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 9, 197, 14, // Skip to: 4265
/* 484 */     MCD::OPC_Decode, 162, 18, 46, // Opcode: SUBU_PH_MMR2
/* 488 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 9, 185, 14, // Skip to: 4265
/* 496 */     MCD::OPC_Decode, 157, 18, 46, // Opcode: SUBUH_QB_MMR2
/* 500 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 9, 173, 14, // Skip to: 4265
/* 508 */     MCD::OPC_Decode, 135, 15, 48, // Opcode: PRECR_SRA_PH_W_MMR2
/* 512 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 524
/* 516 */     MCD::OPC_CheckPredicate, 8, 161, 14, // Skip to: 4265
/* 520 */     MCD::OPC_Decode, 131, 1, 46, // Opcode: ADDQ_S_PH_MM
/* 524 */     MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 535
/* 528 */     MCD::OPC_CheckPredicate, 9, 149, 14, // Skip to: 4265
/* 532 */     MCD::OPC_Decode, 123, 46, // Opcode: ADDQH_R_PH_MMR2
/* 535 */     MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 546
/* 539 */     MCD::OPC_CheckPredicate, 9, 138, 14, // Skip to: 4265
/* 543 */     MCD::OPC_Decode, 125, 43, // Opcode: ADDQH_R_W_MMR2
/* 546 */     MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 558
/* 550 */     MCD::OPC_CheckPredicate, 8, 127, 14, // Skip to: 4265
/* 554 */     MCD::OPC_Decode, 162, 1, 46, // Opcode: ADDU_S_QB_MM
/* 558 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 570
/* 562 */     MCD::OPC_CheckPredicate, 9, 115, 14, // Skip to: 4265
/* 566 */     MCD::OPC_Decode, 160, 1, 46, // Opcode: ADDU_S_PH_MMR2
/* 570 */     MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 582
/* 574 */     MCD::OPC_CheckPredicate, 9, 103, 14, // Skip to: 4265
/* 578 */     MCD::OPC_Decode, 153, 1, 46, // Opcode: ADDUH_R_QB_MMR2
/* 582 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 594
/* 586 */     MCD::OPC_CheckPredicate, 8, 91, 14, // Skip to: 4265
/* 590 */     MCD::OPC_Decode, 244, 16, 47, // Opcode: SHRAV_R_PH_MM
/* 594 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 606
/* 598 */     MCD::OPC_CheckPredicate, 9, 79, 14, // Skip to: 4265
/* 602 */     MCD::OPC_Decode, 246, 16, 47, // Opcode: SHRAV_R_QB_MMR2
/* 606 */     MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 618
/* 610 */     MCD::OPC_CheckPredicate, 8, 67, 14, // Skip to: 4265
/* 614 */     MCD::OPC_Decode, 135, 18, 46, // Opcode: SUBQ_S_PH_MM
/* 618 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 630
/* 622 */     MCD::OPC_CheckPredicate, 9, 55, 14, // Skip to: 4265
/* 626 */     MCD::OPC_Decode, 255, 17, 46, // Opcode: SUBQH_R_PH_MMR2
/* 630 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 642
/* 634 */     MCD::OPC_CheckPredicate, 9, 43, 14, // Skip to: 4265
/* 638 */     MCD::OPC_Decode, 129, 18, 43, // Opcode: SUBQH_R_W_MMR2
/* 642 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 654
/* 646 */     MCD::OPC_CheckPredicate, 8, 31, 14, // Skip to: 4265
/* 650 */     MCD::OPC_Decode, 168, 18, 46, // Opcode: SUBU_S_QB_MM
/* 654 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 666
/* 658 */     MCD::OPC_CheckPredicate, 9, 19, 14, // Skip to: 4265
/* 662 */     MCD::OPC_Decode, 166, 18, 46, // Opcode: SUBU_S_PH_MMR2
/* 666 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 678
/* 670 */     MCD::OPC_CheckPredicate, 9, 7, 14, // Skip to: 4265
/* 674 */     MCD::OPC_Decode, 159, 18, 46, // Opcode: SUBUH_R_QB_MMR2
/* 678 */     MCD::OPC_FilterValue, 31, 255, 13, // Skip to: 4265
/* 682 */     MCD::OPC_CheckPredicate, 9, 251, 13, // Skip to: 4265
/* 686 */     MCD::OPC_Decode, 137, 15, 48, // Opcode: PRECR_SRA_R_PH_W_MMR2
/* 690 */     MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 721
/* 694 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 697 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 709
/* 701 */     MCD::OPC_CheckPredicate, 8, 232, 13, // Skip to: 4265
/* 705 */     MCD::OPC_Decode, 224, 16, 47, // Opcode: SHLLV_PH_MM
/* 709 */     MCD::OPC_FilterValue, 16, 224, 13, // Skip to: 4265
/* 713 */     MCD::OPC_CheckPredicate, 8, 220, 13, // Skip to: 4265
/* 717 */     MCD::OPC_Decode, 228, 16, 47, // Opcode: SHLLV_S_PH_MM
/* 721 */     MCD::OPC_FilterValue, 16, 183, 0, // Skip to: 908
/* 725 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 728 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 740
/* 732 */     MCD::OPC_CheckPredicate, 6, 201, 13, // Skip to: 4265
/* 736 */     MCD::OPC_Decode, 159, 17, 49, // Opcode: SLLV_MM
/* 740 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 752
/* 744 */     MCD::OPC_CheckPredicate, 6, 189, 13, // Skip to: 4265
/* 748 */     MCD::OPC_Decode, 233, 17, 49, // Opcode: SRLV_MM
/* 752 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 764
/* 756 */     MCD::OPC_CheckPredicate, 6, 177, 13, // Skip to: 4265
/* 760 */     MCD::OPC_Decode, 211, 17, 49, // Opcode: SRAV_MM
/* 764 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 776
/* 768 */     MCD::OPC_CheckPredicate, 6, 165, 13, // Skip to: 4265
/* 772 */     MCD::OPC_Decode, 233, 15, 49, // Opcode: ROTRV_MM
/* 776 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 788
/* 780 */     MCD::OPC_CheckPredicate, 6, 153, 13, // Skip to: 4265
/* 784 */     MCD::OPC_Decode, 177, 1, 43, // Opcode: ADD_MM
/* 788 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 800
/* 792 */     MCD::OPC_CheckPredicate, 6, 141, 13, // Skip to: 4265
/* 796 */     MCD::OPC_Decode, 184, 1, 43, // Opcode: ADDu_MM
/* 800 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 812
/* 804 */     MCD::OPC_CheckPredicate, 6, 129, 13, // Skip to: 4265
/* 808 */     MCD::OPC_Decode, 177, 18, 43, // Opcode: SUB_MM
/* 812 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 824
/* 816 */     MCD::OPC_CheckPredicate, 6, 117, 13, // Skip to: 4265
/* 820 */     MCD::OPC_Decode, 180, 18, 43, // Opcode: SUBu_MM
/* 824 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 836
/* 828 */     MCD::OPC_CheckPredicate, 6, 105, 13, // Skip to: 4265
/* 832 */     MCD::OPC_Decode, 143, 14, 43, // Opcode: MUL_MM
/* 836 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 848
/* 840 */     MCD::OPC_CheckPredicate, 6, 93, 13, // Skip to: 4265
/* 844 */     MCD::OPC_Decode, 199, 1, 43, // Opcode: AND_MM
/* 848 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 860
/* 852 */     MCD::OPC_CheckPredicate, 6, 81, 13, // Skip to: 4265
/* 856 */     MCD::OPC_Decode, 200, 14, 43, // Opcode: OR_MM
/* 860 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 872
/* 864 */     MCD::OPC_CheckPredicate, 6, 69, 13, // Skip to: 4265
/* 868 */     MCD::OPC_Decode, 184, 14, 43, // Opcode: NOR_MM
/* 872 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 884
/* 876 */     MCD::OPC_CheckPredicate, 6, 57, 13, // Skip to: 4265
/* 880 */     MCD::OPC_Decode, 229, 19, 43, // Opcode: XOR_MM
/* 884 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 896
/* 888 */     MCD::OPC_CheckPredicate, 6, 45, 13, // Skip to: 4265
/* 892 */     MCD::OPC_Decode, 170, 17, 43, // Opcode: SLT_MM
/* 896 */     MCD::OPC_FilterValue, 14, 37, 13, // Skip to: 4265
/* 900 */     MCD::OPC_CheckPredicate, 6, 33, 13, // Skip to: 4265
/* 904 */     MCD::OPC_Decode, 179, 17, 43, // Opcode: SLTu_MM
/* 908 */     MCD::OPC_FilterValue, 21, 171, 0, // Skip to: 1083
/* 912 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 915 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 927
/* 919 */     MCD::OPC_CheckPredicate, 8, 14, 13, // Skip to: 4265
/* 923 */     MCD::OPC_Decode, 237, 13, 46, // Opcode: MULEU_S_PH_QBL_MM
/* 927 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 939
/* 931 */     MCD::OPC_CheckPredicate, 8, 2, 13, // Skip to: 4265
/* 935 */     MCD::OPC_Decode, 239, 13, 46, // Opcode: MULEU_S_PH_QBR_MM
/* 939 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 951
/* 943 */     MCD::OPC_CheckPredicate, 8, 246, 12, // Skip to: 4265
/* 947 */     MCD::OPC_Decode, 244, 13, 46, // Opcode: MULQ_RS_PH_MM
/* 951 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 963
/* 955 */     MCD::OPC_CheckPredicate, 9, 234, 12, // Skip to: 4265
/* 959 */     MCD::OPC_Decode, 248, 13, 46, // Opcode: MULQ_S_PH_MMR2
/* 963 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 975
/* 967 */     MCD::OPC_CheckPredicate, 9, 222, 12, // Skip to: 4265
/* 971 */     MCD::OPC_Decode, 246, 13, 43, // Opcode: MULQ_RS_W_MMR2
/* 975 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 987
/* 979 */     MCD::OPC_CheckPredicate, 9, 210, 12, // Skip to: 4265
/* 983 */     MCD::OPC_Decode, 250, 13, 43, // Opcode: MULQ_S_W_MMR2
/* 987 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 999
/* 991 */     MCD::OPC_CheckPredicate, 9, 198, 12, // Skip to: 4265
/* 995 */     MCD::OPC_Decode, 209, 1, 50, // Opcode: APPEND_MMR2
/* 999 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1011
/* 1003 */    MCD::OPC_CheckPredicate, 9, 186, 12, // Skip to: 4265
/* 1007 */    MCD::OPC_Decode, 147, 15, 50, // Opcode: PREPEND_MMR2
/* 1011 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1023
/* 1015 */    MCD::OPC_CheckPredicate, 8, 174, 12, // Skip to: 4265
/* 1019 */    MCD::OPC_Decode, 237, 12, 43, // Opcode: MODSUB_MM
/* 1023 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1035
/* 1027 */    MCD::OPC_CheckPredicate, 8, 162, 12, // Skip to: 4265
/* 1031 */    MCD::OPC_Decode, 248, 16, 49, // Opcode: SHRAV_R_W_MM
/* 1035 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1047
/* 1039 */    MCD::OPC_CheckPredicate, 9, 150, 12, // Skip to: 4265
/* 1043 */    MCD::OPC_Decode, 132, 17, 47, // Opcode: SHRLV_PH_MMR2
/* 1047 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1059
/* 1051 */    MCD::OPC_CheckPredicate, 8, 138, 12, // Skip to: 4265
/* 1055 */    MCD::OPC_Decode, 134, 17, 47, // Opcode: SHRLV_QB_MM
/* 1059 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1071
/* 1063 */    MCD::OPC_CheckPredicate, 8, 126, 12, // Skip to: 4265
/* 1067 */    MCD::OPC_Decode, 226, 16, 47, // Opcode: SHLLV_QB_MM
/* 1071 */    MCD::OPC_FilterValue, 15, 118, 12, // Skip to: 4265
/* 1075 */    MCD::OPC_CheckPredicate, 8, 114, 12, // Skip to: 4265
/* 1079 */    MCD::OPC_Decode, 230, 16, 49, // Opcode: SHLLV_S_W_MM
/* 1083 */    MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 1126
/* 1087 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1090 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1102
/* 1094 */    MCD::OPC_CheckPredicate, 6, 95, 12, // Skip to: 4265
/* 1098 */    MCD::OPC_Decode, 142, 13, 51, // Opcode: MOVN_I_MM
/* 1102 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1114
/* 1106 */    MCD::OPC_CheckPredicate, 6, 83, 12, // Skip to: 4265
/* 1110 */    MCD::OPC_Decode, 162, 13, 51, // Opcode: MOVZ_I_MM
/* 1114 */    MCD::OPC_FilterValue, 4, 75, 12, // Skip to: 4265
/* 1118 */    MCD::OPC_CheckPredicate, 6, 71, 12, // Skip to: 4265
/* 1122 */    MCD::OPC_Decode, 217, 11, 52, // Opcode: LWXS_MM
/* 1126 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 1150
/* 1130 */    MCD::OPC_CheckPredicate, 8, 59, 12, // Skip to: 4265
/* 1134 */    MCD::OPC_CheckField, 22, 4, 0, 53, 12, // Skip to: 4265
/* 1140 */    MCD::OPC_CheckField, 6, 8, 0, 47, 12, // Skip to: 4265
/* 1146 */    MCD::OPC_Decode, 222, 16, 53, // Opcode: SHILO_MM
/* 1150 */    MCD::OPC_FilterValue, 37, 63, 0, // Skip to: 1217
/* 1154 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1157 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1169
/* 1161 */    MCD::OPC_CheckPredicate, 8, 28, 12, // Skip to: 4265
/* 1165 */    MCD::OPC_Decode, 233, 13, 42, // Opcode: MULEQ_S_W_PHL_MM
/* 1169 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1181
/* 1173 */    MCD::OPC_CheckPredicate, 8, 16, 12, // Skip to: 4265
/* 1177 */    MCD::OPC_Decode, 235, 13, 42, // Opcode: MULEQ_S_W_PHR_MM
/* 1181 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1193
/* 1185 */    MCD::OPC_CheckPredicate, 8, 4, 12, // Skip to: 4265
/* 1189 */    MCD::OPC_Decode, 141, 11, 52, // Opcode: LHX_MM
/* 1193 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1205
/* 1197 */    MCD::OPC_CheckPredicate, 8, 248, 11, // Skip to: 4265
/* 1201 */    MCD::OPC_Decode, 218, 11, 52, // Opcode: LWX_MM
/* 1205 */    MCD::OPC_FilterValue, 8, 240, 11, // Skip to: 4265
/* 1209 */    MCD::OPC_CheckPredicate, 8, 236, 11, // Skip to: 4265
/* 1213 */    MCD::OPC_Decode, 225, 10, 52, // Opcode: LBUX_MM
/* 1217 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1229
/* 1221 */    MCD::OPC_CheckPredicate, 6, 224, 11, // Skip to: 4265
/* 1225 */    MCD::OPC_Decode, 189, 8, 54, // Opcode: EXT_MM
/* 1229 */    MCD::OPC_FilterValue, 45, 123, 0, // Skip to: 1356
/* 1233 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1236 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1248
/* 1240 */    MCD::OPC_CheckPredicate, 9, 205, 11, // Skip to: 4265
/* 1244 */    MCD::OPC_Decode, 146, 14, 46, // Opcode: MUL_PH_MMR2
/* 1248 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1260
/* 1252 */    MCD::OPC_CheckPredicate, 9, 193, 11, // Skip to: 4265
/* 1256 */    MCD::OPC_Decode, 133, 15, 46, // Opcode: PRECR_QB_PH_MMR2
/* 1260 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1272
/* 1264 */    MCD::OPC_CheckPredicate, 8, 181, 11, // Skip to: 4265
/* 1268 */    MCD::OPC_Decode, 129, 15, 46, // Opcode: PRECRQ_QB_PH_MM
/* 1272 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1284
/* 1276 */    MCD::OPC_CheckPredicate, 8, 169, 11, // Skip to: 4265
/* 1280 */    MCD::OPC_Decode, 255, 14, 55, // Opcode: PRECRQ_PH_W_MM
/* 1284 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1296
/* 1288 */    MCD::OPC_CheckPredicate, 8, 157, 11, // Skip to: 4265
/* 1292 */    MCD::OPC_Decode, 131, 15, 55, // Opcode: PRECRQ_RS_PH_W_MM
/* 1296 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1308
/* 1300 */    MCD::OPC_CheckPredicate, 8, 145, 11, // Skip to: 4265
/* 1304 */    MCD::OPC_Decode, 253, 14, 46, // Opcode: PRECRQU_S_QB_PH_MM
/* 1308 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1320
/* 1312 */    MCD::OPC_CheckPredicate, 8, 133, 11, // Skip to: 4265
/* 1316 */    MCD::OPC_Decode, 211, 14, 46, // Opcode: PACKRL_PH_MM
/* 1320 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1332
/* 1324 */    MCD::OPC_CheckPredicate, 8, 121, 11, // Skip to: 4265
/* 1328 */    MCD::OPC_Decode, 230, 14, 46, // Opcode: PICK_QB_MM
/* 1332 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1344
/* 1336 */    MCD::OPC_CheckPredicate, 8, 109, 11, // Skip to: 4265
/* 1340 */    MCD::OPC_Decode, 228, 14, 46, // Opcode: PICK_PH_MM
/* 1344 */    MCD::OPC_FilterValue, 16, 101, 11, // Skip to: 4265
/* 1348 */    MCD::OPC_CheckPredicate, 9, 97, 11, // Skip to: 4265
/* 1352 */    MCD::OPC_Decode, 151, 14, 46, // Opcode: MUL_S_PH_MMR2
/* 1356 */    MCD::OPC_FilterValue, 53, 94, 0, // Skip to: 1454
/* 1360 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1363 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1375
/* 1367 */    MCD::OPC_CheckPredicate, 8, 78, 11, // Skip to: 4265
/* 1371 */    MCD::OPC_Decode, 130, 17, 40, // Opcode: SHRA_R_W_MM
/* 1375 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1393
/* 1379 */    MCD::OPC_CheckPredicate, 8, 66, 11, // Skip to: 4265
/* 1383 */    MCD::OPC_CheckField, 11, 1, 0, 60, 11, // Skip to: 4265
/* 1389 */    MCD::OPC_Decode, 250, 16, 56, // Opcode: SHRA_PH_MM
/* 1393 */    MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 1424
/* 1397 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 1400 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1412
/* 1404 */    MCD::OPC_CheckPredicate, 8, 41, 11, // Skip to: 4265
/* 1408 */    MCD::OPC_Decode, 232, 16, 56, // Opcode: SHLL_PH_MM
/* 1412 */    MCD::OPC_FilterValue, 1, 33, 11, // Skip to: 4265
/* 1416 */    MCD::OPC_CheckPredicate, 8, 29, 11, // Skip to: 4265
/* 1420 */    MCD::OPC_Decode, 236, 16, 56, // Opcode: SHLL_S_PH_MM
/* 1424 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1436
/* 1428 */    MCD::OPC_CheckPredicate, 8, 17, 11, // Skip to: 4265
/* 1432 */    MCD::OPC_Decode, 238, 16, 40, // Opcode: SHLL_S_W_MM
/* 1436 */    MCD::OPC_FilterValue, 28, 9, 11, // Skip to: 4265
/* 1440 */    MCD::OPC_CheckPredicate, 8, 5, 11, // Skip to: 4265
/* 1444 */    MCD::OPC_CheckField, 11, 1, 0, 255, 10, // Skip to: 4265
/* 1450 */    MCD::OPC_Decode, 254, 16, 56, // Opcode: SHRA_R_PH_MM
/* 1454 */    MCD::OPC_FilterValue, 60, 122, 6, // Skip to: 3116
/* 1458 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 1461 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1473
/* 1465 */    MCD::OPC_CheckPredicate, 6, 236, 10, // Skip to: 4265
/* 1469 */    MCD::OPC_Decode, 152, 19, 57, // Opcode: TEQ_MM
/* 1473 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 1552
/* 1477 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1480 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1498
/* 1484 */    MCD::OPC_CheckPredicate, 8, 217, 10, // Skip to: 4265
/* 1488 */    MCD::OPC_CheckField, 21, 5, 0, 211, 10, // Skip to: 4265
/* 1494 */    MCD::OPC_Decode, 197, 12, 58, // Opcode: MFHI_DSP_MM
/* 1498 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1516
/* 1502 */    MCD::OPC_CheckPredicate, 8, 199, 10, // Skip to: 4265
/* 1506 */    MCD::OPC_CheckField, 21, 5, 0, 193, 10, // Skip to: 4265
/* 1512 */    MCD::OPC_Decode, 203, 12, 58, // Opcode: MFLO_DSP_MM
/* 1516 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1534
/* 1520 */    MCD::OPC_CheckPredicate, 8, 181, 10, // Skip to: 4265
/* 1524 */    MCD::OPC_CheckField, 21, 5, 0, 175, 10, // Skip to: 4265
/* 1530 */    MCD::OPC_Decode, 212, 13, 59, // Opcode: MTHI_DSP_MM
/* 1534 */    MCD::OPC_FilterValue, 3, 167, 10, // Skip to: 4265
/* 1538 */    MCD::OPC_CheckPredicate, 8, 163, 10, // Skip to: 4265
/* 1542 */    MCD::OPC_CheckField, 21, 5, 0, 157, 10, // Skip to: 4265
/* 1548 */    MCD::OPC_Decode, 219, 13, 60, // Opcode: MTLO_DSP_MM
/* 1552 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 1607
/* 1556 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1559 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1571
/* 1563 */    MCD::OPC_CheckPredicate, 9, 138, 10, // Skip to: 4265
/* 1567 */    MCD::OPC_Decode, 202, 7, 61, // Opcode: DPA_W_PH_MMR2
/* 1571 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1583
/* 1575 */    MCD::OPC_CheckPredicate, 9, 126, 10, // Skip to: 4265
/* 1579 */    MCD::OPC_Decode, 200, 7, 61, // Opcode: DPAX_W_PH_MMR2
/* 1583 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1595
/* 1587 */    MCD::OPC_CheckPredicate, 8, 114, 10, // Skip to: 4265
/* 1591 */    MCD::OPC_Decode, 196, 7, 61, // Opcode: DPAU_H_QBL_MM
/* 1595 */    MCD::OPC_FilterValue, 3, 106, 10, // Skip to: 4265
/* 1599 */    MCD::OPC_CheckPredicate, 8, 102, 10, // Skip to: 4265
/* 1603 */    MCD::OPC_Decode, 198, 7, 61, // Opcode: DPAU_H_QBR_MM
/* 1607 */    MCD::OPC_FilterValue, 4, 144, 0, // Skip to: 1755
/* 1611 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1614 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1625
/* 1618 */    MCD::OPC_CheckPredicate, 9, 83, 10, // Skip to: 4265
/* 1622 */    MCD::OPC_Decode, 106, 62, // Opcode: ABSQ_S_QB_MMR2
/* 1625 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 1636
/* 1629 */    MCD::OPC_CheckPredicate, 8, 72, 10, // Skip to: 4265
/* 1633 */    MCD::OPC_Decode, 104, 62, // Opcode: ABSQ_S_PH_MM
/* 1636 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 1647
/* 1640 */    MCD::OPC_CheckPredicate, 8, 61, 10, // Skip to: 4265
/* 1644 */    MCD::OPC_Decode, 108, 63, // Opcode: ABSQ_S_W_MM
/* 1647 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1659
/* 1651 */    MCD::OPC_CheckPredicate, 8, 50, 10, // Skip to: 4265
/* 1655 */    MCD::OPC_Decode, 138, 3, 63, // Opcode: BITREV_MM
/* 1659 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1671
/* 1663 */    MCD::OPC_CheckPredicate, 8, 38, 10, // Skip to: 4265
/* 1667 */    MCD::OPC_Decode, 171, 10, 64, // Opcode: INSV_MM
/* 1671 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1683
/* 1675 */    MCD::OPC_CheckPredicate, 8, 26, 10, // Skip to: 4265
/* 1679 */    MCD::OPC_Decode, 241, 14, 65, // Opcode: PRECEQ_W_PHL_MM
/* 1683 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1695
/* 1687 */    MCD::OPC_CheckPredicate, 8, 14, 10, // Skip to: 4265
/* 1691 */    MCD::OPC_Decode, 243, 14, 65, // Opcode: PRECEQ_W_PHR_MM
/* 1695 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1707
/* 1699 */    MCD::OPC_CheckPredicate, 8, 2, 10, // Skip to: 4265
/* 1703 */    MCD::OPC_Decode, 235, 14, 62, // Opcode: PRECEQU_PH_QBL_MM
/* 1707 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1719
/* 1711 */    MCD::OPC_CheckPredicate, 8, 246, 9, // Skip to: 4265
/* 1715 */    MCD::OPC_Decode, 239, 14, 62, // Opcode: PRECEQU_PH_QBR_MM
/* 1719 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1731
/* 1723 */    MCD::OPC_CheckPredicate, 8, 234, 9, // Skip to: 4265
/* 1727 */    MCD::OPC_Decode, 247, 14, 62, // Opcode: PRECEU_PH_QBL_MM
/* 1731 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1743
/* 1735 */    MCD::OPC_CheckPredicate, 8, 222, 9, // Skip to: 4265
/* 1739 */    MCD::OPC_Decode, 251, 14, 62, // Opcode: PRECEU_PH_QBR_MM
/* 1743 */    MCD::OPC_FilterValue, 15, 214, 9, // Skip to: 4265
/* 1747 */    MCD::OPC_CheckPredicate, 8, 210, 9, // Skip to: 4265
/* 1751 */    MCD::OPC_Decode, 203, 15, 65, // Opcode: RADDU_W_QB_MM
/* 1755 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 1786
/* 1759 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1762 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1774
/* 1766 */    MCD::OPC_CheckPredicate, 9, 191, 9, // Skip to: 4265
/* 1770 */    MCD::OPC_Decode, 252, 16, 66, // Opcode: SHRA_QB_MMR2
/* 1774 */    MCD::OPC_FilterValue, 1, 183, 9, // Skip to: 4265
/* 1778 */    MCD::OPC_CheckPredicate, 9, 179, 9, // Skip to: 4265
/* 1782 */    MCD::OPC_Decode, 128, 17, 66, // Opcode: SHRA_R_QB_MMR2
/* 1786 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1798
/* 1790 */    MCD::OPC_CheckPredicate, 6, 167, 9, // Skip to: 4265
/* 1794 */    MCD::OPC_Decode, 160, 19, 57, // Opcode: TGE_MM
/* 1798 */    MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 1841
/* 1802 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1805 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1823
/* 1809 */    MCD::OPC_CheckPredicate, 8, 148, 9, // Skip to: 4265
/* 1813 */    MCD::OPC_CheckField, 21, 5, 0, 142, 9, // Skip to: 4265
/* 1819 */    MCD::OPC_Decode, 215, 13, 67, // Opcode: MTHLIP_MM
/* 1823 */    MCD::OPC_FilterValue, 1, 134, 9, // Skip to: 4265
/* 1827 */    MCD::OPC_CheckPredicate, 8, 130, 9, // Skip to: 4265
/* 1831 */    MCD::OPC_CheckField, 21, 5, 0, 124, 9, // Skip to: 4265
/* 1837 */    MCD::OPC_Decode, 221, 16, 67, // Opcode: SHILOV_MM
/* 1841 */    MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 1896
/* 1845 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1848 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1860
/* 1852 */    MCD::OPC_CheckPredicate, 8, 105, 9, // Skip to: 4265
/* 1856 */    MCD::OPC_Decode, 194, 7, 61, // Opcode: DPAQ_S_W_PH_MM
/* 1860 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1872
/* 1864 */    MCD::OPC_CheckPredicate, 8, 93, 9, // Skip to: 4265
/* 1868 */    MCD::OPC_Decode, 192, 7, 61, // Opcode: DPAQ_SA_L_W_MM
/* 1872 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1884
/* 1876 */    MCD::OPC_CheckPredicate, 9, 81, 9, // Skip to: 4265
/* 1880 */    MCD::OPC_Decode, 190, 7, 61, // Opcode: DPAQX_S_W_PH_MMR2
/* 1884 */    MCD::OPC_FilterValue, 3, 73, 9, // Skip to: 4265
/* 1888 */    MCD::OPC_CheckPredicate, 9, 69, 9, // Skip to: 4265
/* 1892 */    MCD::OPC_Decode, 188, 7, 61, // Opcode: DPAQX_SA_W_PH_MMR2
/* 1896 */    MCD::OPC_FilterValue, 12, 75, 0, // Skip to: 1975
/* 1900 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1903 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1915
/* 1907 */    MCD::OPC_CheckPredicate, 8, 50, 9, // Skip to: 4265
/* 1911 */    MCD::OPC_Decode, 216, 15, 68, // Opcode: REPLV_PH_MM
/* 1915 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1927
/* 1919 */    MCD::OPC_CheckPredicate, 8, 38, 9, // Skip to: 4265
/* 1923 */    MCD::OPC_Decode, 218, 15, 68, // Opcode: REPLV_QB_MM
/* 1927 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1939
/* 1931 */    MCD::OPC_CheckPredicate, 8, 26, 9, // Skip to: 4265
/* 1935 */    MCD::OPC_Decode, 234, 14, 62, // Opcode: PRECEQU_PH_QBLA_MM
/* 1939 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1951
/* 1943 */    MCD::OPC_CheckPredicate, 8, 14, 9, // Skip to: 4265
/* 1947 */    MCD::OPC_Decode, 238, 14, 62, // Opcode: PRECEQU_PH_QBRA_MM
/* 1951 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1963
/* 1955 */    MCD::OPC_CheckPredicate, 8, 2, 9, // Skip to: 4265
/* 1959 */    MCD::OPC_Decode, 246, 14, 62, // Opcode: PRECEU_PH_QBLA_MM
/* 1963 */    MCD::OPC_FilterValue, 13, 250, 8, // Skip to: 4265
/* 1967 */    MCD::OPC_CheckPredicate, 8, 246, 8, // Skip to: 4265
/* 1971 */    MCD::OPC_Decode, 250, 14, 62, // Opcode: PRECEU_PH_QBRA_MM
/* 1975 */    MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 2102
/* 1979 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1982 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2000
/* 1986 */    MCD::OPC_CheckPredicate, 6, 227, 8, // Skip to: 4265
/* 1990 */    MCD::OPC_CheckField, 16, 10, 0, 221, 8, // Skip to: 4265
/* 1996 */    MCD::OPC_Decode, 166, 19, 0, // Opcode: TLBP_MM
/* 2000 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2018
/* 2004 */    MCD::OPC_CheckPredicate, 6, 209, 8, // Skip to: 4265
/* 2008 */    MCD::OPC_CheckField, 16, 10, 0, 203, 8, // Skip to: 4265
/* 2014 */    MCD::OPC_Decode, 168, 19, 0, // Opcode: TLBR_MM
/* 2018 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2036
/* 2022 */    MCD::OPC_CheckPredicate, 6, 191, 8, // Skip to: 4265
/* 2026 */    MCD::OPC_CheckField, 16, 10, 0, 185, 8, // Skip to: 4265
/* 2032 */    MCD::OPC_Decode, 170, 19, 0, // Opcode: TLBWI_MM
/* 2036 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2054
/* 2040 */    MCD::OPC_CheckPredicate, 6, 173, 8, // Skip to: 4265
/* 2044 */    MCD::OPC_CheckField, 16, 10, 0, 167, 8, // Skip to: 4265
/* 2050 */    MCD::OPC_Decode, 172, 19, 0, // Opcode: TLBWR_MM
/* 2054 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2066
/* 2058 */    MCD::OPC_CheckPredicate, 6, 155, 8, // Skip to: 4265
/* 2062 */    MCD::OPC_Decode, 215, 19, 69, // Opcode: WAIT_MM
/* 2066 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2084
/* 2070 */    MCD::OPC_CheckPredicate, 6, 143, 8, // Skip to: 4265
/* 2074 */    MCD::OPC_CheckField, 16, 10, 0, 137, 8, // Skip to: 4265
/* 2080 */    MCD::OPC_Decode, 236, 6, 0, // Opcode: DERET_MM
/* 2084 */    MCD::OPC_FilterValue, 15, 129, 8, // Skip to: 4265
/* 2088 */    MCD::OPC_CheckPredicate, 6, 125, 8, // Skip to: 4265
/* 2092 */    MCD::OPC_CheckField, 16, 10, 0, 119, 8, // Skip to: 4265
/* 2098 */    MCD::OPC_Decode, 156, 8, 0, // Opcode: ERET_MM
/* 2102 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2114
/* 2106 */    MCD::OPC_CheckPredicate, 9, 107, 8, // Skip to: 4265
/* 2110 */    MCD::OPC_Decode, 136, 17, 56, // Opcode: SHRL_PH_MMR2
/* 2114 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 2126
/* 2118 */    MCD::OPC_CheckPredicate, 6, 95, 8, // Skip to: 4265
/* 2122 */    MCD::OPC_Decode, 159, 19, 57, // Opcode: TGEU_MM
/* 2126 */    MCD::OPC_FilterValue, 18, 51, 0, // Skip to: 2181
/* 2130 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2133 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2145
/* 2137 */    MCD::OPC_CheckPredicate, 9, 76, 8, // Skip to: 4265
/* 2141 */    MCD::OPC_Decode, 225, 7, 61, // Opcode: DPS_W_PH_MMR2
/* 2145 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2157
/* 2149 */    MCD::OPC_CheckPredicate, 9, 64, 8, // Skip to: 4265
/* 2153 */    MCD::OPC_Decode, 223, 7, 61, // Opcode: DPSX_W_PH_MMR2
/* 2157 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2169
/* 2161 */    MCD::OPC_CheckPredicate, 8, 52, 8, // Skip to: 4265
/* 2165 */    MCD::OPC_Decode, 219, 7, 61, // Opcode: DPSU_H_QBL_MM
/* 2169 */    MCD::OPC_FilterValue, 3, 44, 8, // Skip to: 4265
/* 2173 */    MCD::OPC_CheckPredicate, 8, 40, 8, // Skip to: 4265
/* 2177 */    MCD::OPC_Decode, 221, 7, 61, // Opcode: DPSU_H_QBR_MM
/* 2181 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 2199
/* 2185 */    MCD::OPC_CheckPredicate, 8, 28, 8, // Skip to: 4265
/* 2189 */    MCD::OPC_CheckField, 12, 1, 0, 22, 8, // Skip to: 4265
/* 2195 */    MCD::OPC_Decode, 222, 15, 70, // Opcode: REPL_QB_MM
/* 2199 */    MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 2254
/* 2203 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2206 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2218
/* 2210 */    MCD::OPC_CheckPredicate, 8, 3, 8, // Skip to: 4265
/* 2214 */    MCD::OPC_Decode, 205, 15, 71, // Opcode: RDDSP_MM
/* 2218 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2230
/* 2222 */    MCD::OPC_CheckPredicate, 8, 247, 7, // Skip to: 4265
/* 2226 */    MCD::OPC_Decode, 218, 19, 71, // Opcode: WRDSP_MM
/* 2230 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2242
/* 2234 */    MCD::OPC_CheckPredicate, 8, 235, 7, // Skip to: 4265
/* 2238 */    MCD::OPC_Decode, 170, 8, 72, // Opcode: EXTP_MM
/* 2242 */    MCD::OPC_FilterValue, 3, 227, 7, // Skip to: 4265
/* 2246 */    MCD::OPC_CheckPredicate, 8, 223, 7, // Skip to: 4265
/* 2250 */    MCD::OPC_Decode, 167, 8, 72, // Opcode: EXTPDP_MM
/* 2254 */    MCD::OPC_FilterValue, 26, 51, 0, // Skip to: 2309
/* 2258 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2261 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2273
/* 2265 */    MCD::OPC_CheckPredicate, 8, 204, 7, // Skip to: 4265
/* 2269 */    MCD::OPC_Decode, 211, 7, 61, // Opcode: DPSQ_S_W_PH_MM
/* 2273 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2285
/* 2277 */    MCD::OPC_CheckPredicate, 8, 192, 7, // Skip to: 4265
/* 2281 */    MCD::OPC_Decode, 209, 7, 61, // Opcode: DPSQ_SA_L_W_MM
/* 2285 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2297
/* 2289 */    MCD::OPC_CheckPredicate, 9, 180, 7, // Skip to: 4265
/* 2293 */    MCD::OPC_Decode, 207, 7, 61, // Opcode: DPSQX_S_W_PH_MMR2
/* 2297 */    MCD::OPC_FilterValue, 3, 172, 7, // Skip to: 4265
/* 2301 */    MCD::OPC_CheckPredicate, 9, 168, 7, // Skip to: 4265
/* 2305 */    MCD::OPC_Decode, 205, 7, 61, // Opcode: DPSQX_SA_W_PH_MMR2
/* 2309 */    MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 2352
/* 2313 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2316 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2334
/* 2320 */    MCD::OPC_CheckPredicate, 6, 149, 7, // Skip to: 4265
/* 2324 */    MCD::OPC_CheckField, 21, 5, 0, 143, 7, // Skip to: 4265
/* 2330 */    MCD::OPC_Decode, 136, 7, 73, // Opcode: DI_MM
/* 2334 */    MCD::OPC_FilterValue, 5, 135, 7, // Skip to: 4265
/* 2338 */    MCD::OPC_CheckPredicate, 6, 131, 7, // Skip to: 4265
/* 2342 */    MCD::OPC_CheckField, 21, 5, 0, 125, 7, // Skip to: 4265
/* 2348 */    MCD::OPC_Decode, 150, 8, 73, // Opcode: EI_MM
/* 2352 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2364
/* 2356 */    MCD::OPC_CheckPredicate, 6, 113, 7, // Skip to: 4265
/* 2360 */    MCD::OPC_Decode, 179, 19, 57, // Opcode: TLT_MM
/* 2364 */    MCD::OPC_FilterValue, 33, 27, 0, // Skip to: 2395
/* 2368 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2371 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2383
/* 2375 */    MCD::OPC_CheckPredicate, 8, 94, 7, // Skip to: 4265
/* 2379 */    MCD::OPC_Decode, 234, 16, 66, // Opcode: SHLL_QB_MM
/* 2383 */    MCD::OPC_FilterValue, 1, 86, 7, // Skip to: 4265
/* 2387 */    MCD::OPC_CheckPredicate, 8, 82, 7, // Skip to: 4265
/* 2391 */    MCD::OPC_Decode, 138, 17, 66, // Opcode: SHRL_QB_MM
/* 2395 */    MCD::OPC_FilterValue, 34, 39, 0, // Skip to: 2438
/* 2399 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2402 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2414
/* 2406 */    MCD::OPC_CheckPredicate, 9, 63, 7, // Skip to: 4265
/* 2410 */    MCD::OPC_Decode, 158, 2, 74, // Opcode: BALIGN_MMR2
/* 2414 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2426
/* 2418 */    MCD::OPC_CheckPredicate, 8, 51, 7, // Skip to: 4265
/* 2422 */    MCD::OPC_Decode, 169, 8, 75, // Opcode: EXTPV_MM
/* 2426 */    MCD::OPC_FilterValue, 3, 43, 7, // Skip to: 4265
/* 2430 */    MCD::OPC_CheckPredicate, 8, 39, 7, // Skip to: 4265
/* 2434 */    MCD::OPC_Decode, 166, 8, 75, // Opcode: EXTPDPV_MM
/* 2438 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2450
/* 2442 */    MCD::OPC_CheckPredicate, 6, 27, 7, // Skip to: 4265
/* 2446 */    MCD::OPC_Decode, 178, 19, 57, // Opcode: TLTU_MM
/* 2450 */    MCD::OPC_FilterValue, 41, 51, 0, // Skip to: 2505
/* 2454 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2457 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2469
/* 2461 */    MCD::OPC_CheckPredicate, 8, 8, 7, // Skip to: 4265
/* 2465 */    MCD::OPC_Decode, 149, 12, 61, // Opcode: MAQ_S_W_PHR_MM
/* 2469 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2481
/* 2473 */    MCD::OPC_CheckPredicate, 8, 252, 6, // Skip to: 4265
/* 2477 */    MCD::OPC_Decode, 147, 12, 61, // Opcode: MAQ_S_W_PHL_MM
/* 2481 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2493
/* 2485 */    MCD::OPC_CheckPredicate, 8, 240, 6, // Skip to: 4265
/* 2489 */    MCD::OPC_Decode, 145, 12, 61, // Opcode: MAQ_SA_W_PHR_MM
/* 2493 */    MCD::OPC_FilterValue, 3, 232, 6, // Skip to: 4265
/* 2497 */    MCD::OPC_CheckPredicate, 8, 228, 6, // Skip to: 4265
/* 2501 */    MCD::OPC_Decode, 143, 12, 61, // Opcode: MAQ_SA_W_PHL_MM
/* 2505 */    MCD::OPC_FilterValue, 42, 51, 0, // Skip to: 2560
/* 2509 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2512 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2524
/* 2516 */    MCD::OPC_CheckPredicate, 8, 209, 6, // Skip to: 4265
/* 2520 */    MCD::OPC_Decode, 136, 12, 61, // Opcode: MADD_DSP_MM
/* 2524 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2536
/* 2528 */    MCD::OPC_CheckPredicate, 8, 197, 6, // Skip to: 4265
/* 2532 */    MCD::OPC_Decode, 254, 11, 61, // Opcode: MADDU_DSP_MM
/* 2536 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2548
/* 2540 */    MCD::OPC_CheckPredicate, 8, 185, 6, // Skip to: 4265
/* 2544 */    MCD::OPC_Decode, 188, 13, 61, // Opcode: MSUB_DSP_MM
/* 2548 */    MCD::OPC_FilterValue, 3, 177, 6, // Skip to: 4265
/* 2552 */    MCD::OPC_CheckPredicate, 8, 173, 6, // Skip to: 4265
/* 2556 */    MCD::OPC_Decode, 178, 13, 61, // Opcode: MSUBU_DSP_MM
/* 2560 */    MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 2735
/* 2564 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2567 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2579
/* 2571 */    MCD::OPC_CheckPredicate, 6, 154, 6, // Skip to: 4265
/* 2575 */    MCD::OPC_Decode, 181, 16, 63, // Opcode: SEB_MM
/* 2579 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2591
/* 2583 */    MCD::OPC_CheckPredicate, 6, 142, 6, // Skip to: 4265
/* 2587 */    MCD::OPC_Decode, 185, 16, 63, // Opcode: SEH_MM
/* 2591 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2603
/* 2595 */    MCD::OPC_CheckPredicate, 6, 130, 6, // Skip to: 4265
/* 2599 */    MCD::OPC_Decode, 207, 4, 63, // Opcode: CLO_MM
/* 2603 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2615
/* 2607 */    MCD::OPC_CheckPredicate, 6, 118, 6, // Skip to: 4265
/* 2611 */    MCD::OPC_Decode, 227, 4, 63, // Opcode: CLZ_MM
/* 2615 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2627
/* 2619 */    MCD::OPC_CheckPredicate, 10, 106, 6, // Skip to: 4265
/* 2623 */    MCD::OPC_Decode, 208, 15, 76, // Opcode: RDHWR_MM
/* 2627 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2639
/* 2631 */    MCD::OPC_CheckPredicate, 6, 94, 6, // Skip to: 4265
/* 2635 */    MCD::OPC_Decode, 221, 19, 63, // Opcode: WSBH_MM
/* 2639 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2651
/* 2643 */    MCD::OPC_CheckPredicate, 6, 82, 6, // Skip to: 4265
/* 2647 */    MCD::OPC_Decode, 134, 14, 77, // Opcode: MULT_MM
/* 2651 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2663
/* 2655 */    MCD::OPC_CheckPredicate, 6, 70, 6, // Skip to: 4265
/* 2659 */    MCD::OPC_Decode, 136, 14, 77, // Opcode: MULTu_MM
/* 2663 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2675
/* 2667 */    MCD::OPC_CheckPredicate, 6, 58, 6, // Skip to: 4265
/* 2671 */    MCD::OPC_Decode, 169, 16, 77, // Opcode: SDIV_MM
/* 2675 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2687
/* 2679 */    MCD::OPC_CheckPredicate, 6, 46, 6, // Skip to: 4265
/* 2683 */    MCD::OPC_Decode, 198, 19, 77, // Opcode: UDIV_MM
/* 2687 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2699
/* 2691 */    MCD::OPC_CheckPredicate, 6, 34, 6, // Skip to: 4265
/* 2695 */    MCD::OPC_Decode, 137, 12, 77, // Opcode: MADD_MM
/* 2699 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2711
/* 2703 */    MCD::OPC_CheckPredicate, 6, 22, 6, // Skip to: 4265
/* 2707 */    MCD::OPC_Decode, 255, 11, 77, // Opcode: MADDU_MM
/* 2711 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2723
/* 2715 */    MCD::OPC_CheckPredicate, 6, 10, 6, // Skip to: 4265
/* 2719 */    MCD::OPC_Decode, 189, 13, 77, // Opcode: MSUB_MM
/* 2723 */    MCD::OPC_FilterValue, 15, 2, 6, // Skip to: 4265
/* 2727 */    MCD::OPC_CheckPredicate, 6, 254, 5, // Skip to: 4265
/* 2731 */    MCD::OPC_Decode, 179, 13, 77, // Opcode: MSUBU_MM
/* 2735 */    MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 2784
/* 2739 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2742 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2760
/* 2746 */    MCD::OPC_CheckPredicate, 6, 235, 5, // Skip to: 4265
/* 2750 */    MCD::OPC_CheckField, 21, 5, 0, 229, 5, // Skip to: 4265
/* 2756 */    MCD::OPC_Decode, 223, 18, 78, // Opcode: SYNC_MM
/* 2760 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2772
/* 2764 */    MCD::OPC_CheckPredicate, 6, 217, 5, // Skip to: 4265
/* 2768 */    MCD::OPC_Decode, 226, 18, 69, // Opcode: SYSCALL_MM
/* 2772 */    MCD::OPC_FilterValue, 13, 209, 5, // Skip to: 4265
/* 2776 */    MCD::OPC_CheckPredicate, 6, 205, 5, // Skip to: 4265
/* 2780 */    MCD::OPC_Decode, 157, 16, 69, // Opcode: SDBBP_MM
/* 2784 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2796
/* 2788 */    MCD::OPC_CheckPredicate, 6, 193, 5, // Skip to: 4265
/* 2792 */    MCD::OPC_Decode, 183, 19, 57, // Opcode: TNE_MM
/* 2796 */    MCD::OPC_FilterValue, 50, 51, 0, // Skip to: 2851
/* 2800 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2803 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2815
/* 2807 */    MCD::OPC_CheckPredicate, 8, 174, 5, // Skip to: 4265
/* 2811 */    MCD::OPC_Decode, 133, 14, 79, // Opcode: MULT_DSP_MM
/* 2815 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2827
/* 2819 */    MCD::OPC_CheckPredicate, 8, 162, 5, // Skip to: 4265
/* 2823 */    MCD::OPC_Decode, 131, 14, 79, // Opcode: MULTU_DSP_MM
/* 2827 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2839
/* 2831 */    MCD::OPC_CheckPredicate, 9, 150, 5, // Skip to: 4265
/* 2835 */    MCD::OPC_Decode, 128, 14, 61, // Opcode: MULSA_W_PH_MMR2
/* 2839 */    MCD::OPC_FilterValue, 3, 142, 5, // Skip to: 4265
/* 2843 */    MCD::OPC_CheckPredicate, 8, 138, 5, // Skip to: 4265
/* 2847 */    MCD::OPC_Decode, 254, 13, 61, // Opcode: MULSAQ_S_W_PH_MM
/* 2851 */    MCD::OPC_FilterValue, 52, 27, 0, // Skip to: 2882
/* 2855 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2858 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2870
/* 2862 */    MCD::OPC_CheckPredicate, 11, 119, 5, // Skip to: 4265
/* 2866 */    MCD::OPC_Decode, 180, 4, 80, // Opcode: CFC2_MM
/* 2870 */    MCD::OPC_FilterValue, 13, 111, 5, // Skip to: 4265
/* 2874 */    MCD::OPC_CheckPredicate, 11, 107, 5, // Skip to: 4265
/* 2878 */    MCD::OPC_Decode, 202, 5, 81, // Opcode: CTC2_MM
/* 2882 */    MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 2961
/* 2886 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2889 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2907
/* 2893 */    MCD::OPC_CheckPredicate, 6, 88, 5, // Skip to: 4265
/* 2897 */    MCD::OPC_CheckField, 21, 5, 0, 82, 5, // Skip to: 4265
/* 2903 */    MCD::OPC_Decode, 198, 12, 73, // Opcode: MFHI_MM
/* 2907 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2925
/* 2911 */    MCD::OPC_CheckPredicate, 6, 70, 5, // Skip to: 4265
/* 2915 */    MCD::OPC_CheckField, 21, 5, 0, 64, 5, // Skip to: 4265
/* 2921 */    MCD::OPC_Decode, 204, 12, 73, // Opcode: MFLO_MM
/* 2925 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2943
/* 2929 */    MCD::OPC_CheckPredicate, 6, 52, 5, // Skip to: 4265
/* 2933 */    MCD::OPC_CheckField, 21, 5, 0, 46, 5, // Skip to: 4265
/* 2939 */    MCD::OPC_Decode, 213, 13, 73, // Opcode: MTHI_MM
/* 2943 */    MCD::OPC_FilterValue, 3, 38, 5, // Skip to: 4265
/* 2947 */    MCD::OPC_CheckPredicate, 6, 34, 5, // Skip to: 4265
/* 2951 */    MCD::OPC_CheckField, 21, 5, 0, 28, 5, // Skip to: 4265
/* 2957 */    MCD::OPC_Decode, 220, 13, 73, // Opcode: MTLO_MM
/* 2961 */    MCD::OPC_FilterValue, 57, 51, 0, // Skip to: 3016
/* 2965 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2968 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2980
/* 2972 */    MCD::OPC_CheckPredicate, 8, 9, 5, // Skip to: 4265
/* 2976 */    MCD::OPC_Decode, 186, 8, 72, // Opcode: EXTR_W_MM
/* 2980 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2992
/* 2984 */    MCD::OPC_CheckPredicate, 8, 253, 4, // Skip to: 4265
/* 2988 */    MCD::OPC_Decode, 182, 8, 72, // Opcode: EXTR_R_W_MM
/* 2992 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3004
/* 2996 */    MCD::OPC_CheckPredicate, 8, 241, 4, // Skip to: 4265
/* 3000 */    MCD::OPC_Decode, 180, 8, 72, // Opcode: EXTR_RS_W_MM
/* 3004 */    MCD::OPC_FilterValue, 3, 233, 4, // Skip to: 4265
/* 3008 */    MCD::OPC_CheckPredicate, 8, 229, 4, // Skip to: 4265
/* 3012 */    MCD::OPC_Decode, 184, 8, 72, // Opcode: EXTR_S_H_MM
/* 3016 */    MCD::OPC_FilterValue, 58, 51, 0, // Skip to: 3071
/* 3020 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 3023 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3035
/* 3027 */    MCD::OPC_CheckPredicate, 8, 210, 4, // Skip to: 4265
/* 3031 */    MCD::OPC_Decode, 178, 8, 75, // Opcode: EXTRV_W_MM
/* 3035 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3047
/* 3039 */    MCD::OPC_CheckPredicate, 8, 198, 4, // Skip to: 4265
/* 3043 */    MCD::OPC_Decode, 174, 8, 75, // Opcode: EXTRV_R_W_MM
/* 3047 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3059
/* 3051 */    MCD::OPC_CheckPredicate, 8, 186, 4, // Skip to: 4265
/* 3055 */    MCD::OPC_Decode, 172, 8, 75, // Opcode: EXTRV_RS_W_MM
/* 3059 */    MCD::OPC_FilterValue, 3, 178, 4, // Skip to: 4265
/* 3063 */    MCD::OPC_CheckPredicate, 8, 174, 4, // Skip to: 4265
/* 3067 */    MCD::OPC_Decode, 176, 8, 75, // Opcode: EXTRV_S_H_MM
/* 3071 */    MCD::OPC_FilterValue, 60, 166, 4, // Skip to: 4265
/* 3075 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3078 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 3104
/* 3082 */    MCD::OPC_CheckPredicate, 6, 10, 0, // Skip to: 3096
/* 3086 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3096
/* 3092 */    MCD::OPC_Decode, 207, 10, 73, // Opcode: JR_MM
/* 3096 */    MCD::OPC_CheckPredicate, 6, 141, 4, // Skip to: 4265
/* 3100 */    MCD::OPC_Decode, 187, 10, 63, // Opcode: JALR_MM
/* 3104 */    MCD::OPC_FilterValue, 4, 133, 4, // Skip to: 4265
/* 3108 */    MCD::OPC_CheckPredicate, 6, 129, 4, // Skip to: 4265
/* 3112 */    MCD::OPC_Decode, 185, 10, 63, // Opcode: JALRS_MM
/* 3116 */    MCD::OPC_FilterValue, 61, 121, 4, // Skip to: 4265
/* 3120 */    MCD::OPC_CheckPredicate, 8, 117, 4, // Skip to: 4265
/* 3124 */    MCD::OPC_CheckField, 6, 5, 0, 111, 4, // Skip to: 4265
/* 3130 */    MCD::OPC_Decode, 220, 15, 82, // Opcode: REPL_PH_MM
/* 3134 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3146
/* 3138 */    MCD::OPC_CheckPredicate, 6, 99, 4, // Skip to: 4265
/* 3142 */    MCD::OPC_Decode, 180, 1, 83, // Opcode: ADDi_MM
/* 3146 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3158
/* 3150 */    MCD::OPC_CheckPredicate, 6, 87, 4, // Skip to: 4265
/* 3154 */    MCD::OPC_Decode, 233, 10, 84, // Opcode: LBu_MM
/* 3158 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3170
/* 3162 */    MCD::OPC_CheckPredicate, 6, 75, 4, // Skip to: 4265
/* 3166 */    MCD::OPC_Decode, 141, 16, 84, // Opcode: SB_MM
/* 3170 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3182
/* 3174 */    MCD::OPC_CheckPredicate, 6, 63, 4, // Skip to: 4265
/* 3178 */    MCD::OPC_Decode, 227, 10, 84, // Opcode: LB_MM
/* 3182 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 3249
/* 3186 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3189 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3201
/* 3193 */    MCD::OPC_CheckPredicate, 6, 44, 4, // Skip to: 4265
/* 3197 */    MCD::OPC_Decode, 202, 11, 85, // Opcode: LWP_MM
/* 3201 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3213
/* 3205 */    MCD::OPC_CheckPredicate, 6, 32, 4, // Skip to: 4265
/* 3209 */    MCD::OPC_Decode, 198, 11, 85, // Opcode: LWM32_MM
/* 3213 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3225
/* 3217 */    MCD::OPC_CheckPredicate, 6, 20, 4, // Skip to: 4265
/* 3221 */    MCD::OPC_Decode, 156, 4, 86, // Opcode: CACHE_MM
/* 3225 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3237
/* 3229 */    MCD::OPC_CheckPredicate, 6, 8, 4, // Skip to: 4265
/* 3233 */    MCD::OPC_Decode, 206, 18, 85, // Opcode: SWP_MM
/* 3237 */    MCD::OPC_FilterValue, 13, 0, 4, // Skip to: 4265
/* 3241 */    MCD::OPC_CheckPredicate, 6, 252, 3, // Skip to: 4265
/* 3245 */    MCD::OPC_Decode, 204, 18, 85, // Opcode: SWM32_MM
/* 3249 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3261
/* 3253 */    MCD::OPC_CheckPredicate, 6, 240, 3, // Skip to: 4265
/* 3257 */    MCD::OPC_Decode, 182, 1, 83, // Opcode: ADDiu_MM
/* 3261 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3273
/* 3265 */    MCD::OPC_CheckPredicate, 6, 228, 3, // Skip to: 4265
/* 3269 */    MCD::OPC_Decode, 147, 11, 84, // Opcode: LHu_MM
/* 3273 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3285
/* 3277 */    MCD::OPC_CheckPredicate, 6, 216, 3, // Skip to: 4265
/* 3281 */    MCD::OPC_Decode, 139, 17, 84, // Opcode: SH_MM
/* 3285 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3297
/* 3289 */    MCD::OPC_CheckPredicate, 6, 204, 3, // Skip to: 4265
/* 3293 */    MCD::OPC_Decode, 142, 11, 84, // Opcode: LH_MM
/* 3297 */    MCD::OPC_FilterValue, 16, 255, 0, // Skip to: 3556
/* 3301 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3304 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3316
/* 3308 */    MCD::OPC_CheckPredicate, 6, 185, 3, // Skip to: 4265
/* 3312 */    MCD::OPC_Decode, 184, 3, 87, // Opcode: BLTZ_MM
/* 3316 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3328
/* 3320 */    MCD::OPC_CheckPredicate, 6, 173, 3, // Skip to: 4265
/* 3324 */    MCD::OPC_Decode, 179, 3, 87, // Opcode: BLTZAL_MM
/* 3328 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3340
/* 3332 */    MCD::OPC_CheckPredicate, 6, 161, 3, // Skip to: 4265
/* 3336 */    MCD::OPC_Decode, 231, 2, 87, // Opcode: BGEZ_MM
/* 3340 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3352
/* 3344 */    MCD::OPC_CheckPredicate, 6, 149, 3, // Skip to: 4265
/* 3348 */    MCD::OPC_Decode, 226, 2, 87, // Opcode: BGEZAL_MM
/* 3352 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3364
/* 3356 */    MCD::OPC_CheckPredicate, 6, 137, 3, // Skip to: 4265
/* 3360 */    MCD::OPC_Decode, 157, 3, 87, // Opcode: BLEZ_MM
/* 3364 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3376
/* 3368 */    MCD::OPC_CheckPredicate, 5, 125, 3, // Skip to: 4265
/* 3372 */    MCD::OPC_Decode, 210, 3, 87, // Opcode: BNEZC_MM
/* 3376 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3388
/* 3380 */    MCD::OPC_CheckPredicate, 6, 113, 3, // Skip to: 4265
/* 3384 */    MCD::OPC_Decode, 248, 2, 87, // Opcode: BGTZ_MM
/* 3388 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3400
/* 3392 */    MCD::OPC_CheckPredicate, 5, 101, 3, // Skip to: 4265
/* 3396 */    MCD::OPC_Decode, 202, 2, 87, // Opcode: BEQZC_MM
/* 3400 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3412
/* 3404 */    MCD::OPC_CheckPredicate, 6, 89, 3, // Skip to: 4265
/* 3408 */    MCD::OPC_Decode, 176, 19, 88, // Opcode: TLTI_MM
/* 3412 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3424
/* 3416 */    MCD::OPC_CheckPredicate, 6, 77, 3, // Skip to: 4265
/* 3420 */    MCD::OPC_Decode, 157, 19, 88, // Opcode: TGEI_MM
/* 3424 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3436
/* 3428 */    MCD::OPC_CheckPredicate, 6, 65, 3, // Skip to: 4265
/* 3432 */    MCD::OPC_Decode, 175, 19, 88, // Opcode: TLTIU_MM
/* 3436 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3448
/* 3440 */    MCD::OPC_CheckPredicate, 6, 53, 3, // Skip to: 4265
/* 3444 */    MCD::OPC_Decode, 156, 19, 88, // Opcode: TGEIU_MM
/* 3448 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3460
/* 3452 */    MCD::OPC_CheckPredicate, 6, 41, 3, // Skip to: 4265
/* 3456 */    MCD::OPC_Decode, 182, 19, 88, // Opcode: TNEI_MM
/* 3460 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3472
/* 3464 */    MCD::OPC_CheckPredicate, 6, 29, 3, // Skip to: 4265
/* 3468 */    MCD::OPC_Decode, 177, 11, 89, // Opcode: LUi_MM
/* 3472 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3484
/* 3476 */    MCD::OPC_CheckPredicate, 6, 17, 3, // Skip to: 4265
/* 3480 */    MCD::OPC_Decode, 151, 19, 88, // Opcode: TEQI_MM
/* 3484 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3496
/* 3488 */    MCD::OPC_CheckPredicate, 6, 5, 3, // Skip to: 4265
/* 3492 */    MCD::OPC_Decode, 221, 18, 90, // Opcode: SYNCI_MM
/* 3496 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3508
/* 3500 */    MCD::OPC_CheckPredicate, 6, 249, 2, // Skip to: 4265
/* 3504 */    MCD::OPC_Decode, 178, 3, 87, // Opcode: BLTZALS_MM
/* 3508 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3520
/* 3512 */    MCD::OPC_CheckPredicate, 6, 237, 2, // Skip to: 4265
/* 3516 */    MCD::OPC_Decode, 225, 2, 87, // Opcode: BGEZALS_MM
/* 3520 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3538
/* 3524 */    MCD::OPC_CheckPredicate, 12, 225, 2, // Skip to: 4265
/* 3528 */    MCD::OPC_CheckField, 16, 5, 0, 219, 2, // Skip to: 4265
/* 3534 */    MCD::OPC_Decode, 223, 3, 91, // Opcode: BPOSGE32C_MMR3
/* 3538 */    MCD::OPC_FilterValue, 27, 211, 2, // Skip to: 4265
/* 3542 */    MCD::OPC_CheckPredicate, 13, 207, 2, // Skip to: 4265
/* 3546 */    MCD::OPC_CheckField, 16, 5, 0, 201, 2, // Skip to: 4265
/* 3552 */    MCD::OPC_Decode, 224, 3, 92, // Opcode: BPOSGE32_MM
/* 3556 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3568
/* 3560 */    MCD::OPC_CheckPredicate, 6, 189, 2, // Skip to: 4265
/* 3564 */    MCD::OPC_Decode, 208, 14, 93, // Opcode: ORi_MM
/* 3568 */    MCD::OPC_FilterValue, 21, 135, 0, // Skip to: 3707
/* 3572 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3575 */    MCD::OPC_FilterValue, 59, 27, 0, // Skip to: 3606
/* 3579 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3582 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3594
/* 3586 */    MCD::OPC_CheckPredicate, 14, 163, 2, // Skip to: 4265
/* 3590 */    MCD::OPC_Decode, 179, 4, 94, // Opcode: CFC1_MM
/* 3594 */    MCD::OPC_FilterValue, 3, 155, 2, // Skip to: 4265
/* 3598 */    MCD::OPC_CheckPredicate, 14, 151, 2, // Skip to: 4265
/* 3602 */    MCD::OPC_Decode, 201, 5, 95, // Opcode: CTC1_MM
/* 3606 */    MCD::OPC_FilterValue, 251, 2, 27, 0, // Skip to: 3638
/* 3611 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3614 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3626
/* 3618 */    MCD::OPC_CheckPredicate, 6, 131, 2, // Skip to: 4265
/* 3622 */    MCD::OPC_Decode, 130, 13, 96, // Opcode: MOVF_I_MM
/* 3626 */    MCD::OPC_FilterValue, 1, 123, 2, // Skip to: 4265
/* 3630 */    MCD::OPC_CheckPredicate, 6, 119, 2, // Skip to: 4265
/* 3634 */    MCD::OPC_Decode, 150, 13, 96, // Opcode: MOVT_I_MM
/* 3638 */    MCD::OPC_FilterValue, 160, 3, 8, 0, // Skip to: 3651
/* 3643 */    MCD::OPC_CheckPredicate, 6, 106, 2, // Skip to: 4265
/* 3647 */    MCD::OPC_Decode, 142, 15, 97, // Opcode: PREFX_MM
/* 3651 */    MCD::OPC_FilterValue, 187, 4, 97, 2, // Skip to: 4265
/* 3656 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3659 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3671
/* 3663 */    MCD::OPC_CheckPredicate, 14, 86, 2, // Skip to: 4265
/* 3667 */    MCD::OPC_Decode, 249, 15, 98, // Opcode: RSQRT_S_MM
/* 3671 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3683
/* 3675 */    MCD::OPC_CheckPredicate, 14, 74, 2, // Skip to: 4265
/* 3679 */    MCD::OPC_Decode, 214, 15, 98, // Opcode: RECIP_S_MM
/* 3683 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3695
/* 3687 */    MCD::OPC_CheckPredicate, 14, 62, 2, // Skip to: 4265
/* 3691 */    MCD::OPC_Decode, 247, 15, 99, // Opcode: RSQRT_D_MM
/* 3695 */    MCD::OPC_FilterValue, 10, 54, 2, // Skip to: 4265
/* 3699 */    MCD::OPC_CheckPredicate, 14, 50, 2, // Skip to: 4265
/* 3703 */    MCD::OPC_Decode, 212, 15, 99, // Opcode: RECIP_D_MM
/* 3707 */    MCD::OPC_FilterValue, 22, 42, 0, // Skip to: 3753
/* 3711 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3714 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 3727
/* 3719 */    MCD::OPC_CheckPredicate, 8, 30, 2, // Skip to: 4265
/* 3723 */    MCD::OPC_Decode, 237, 4, 42, // Opcode: CMPGU_EQ_QB_MM
/* 3727 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 3740
/* 3732 */    MCD::OPC_CheckPredicate, 8, 17, 2, // Skip to: 4265
/* 3736 */    MCD::OPC_Decode, 241, 4, 42, // Opcode: CMPGU_LT_QB_MM
/* 3740 */    MCD::OPC_FilterValue, 197, 2, 8, 2, // Skip to: 4265
/* 3745 */    MCD::OPC_CheckPredicate, 8, 4, 2, // Skip to: 4265
/* 3749 */    MCD::OPC_Decode, 239, 4, 42, // Opcode: CMPGU_LE_QB_MM
/* 3753 */    MCD::OPC_FilterValue, 24, 49, 1, // Skip to: 4062
/* 3757 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3760 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3772
/* 3764 */    MCD::OPC_CheckPredicate, 6, 241, 1, // Skip to: 4265
/* 3768 */    MCD::OPC_Decode, 195, 11, 85, // Opcode: LWL_MM
/* 3772 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3784
/* 3776 */    MCD::OPC_CheckPredicate, 6, 229, 1, // Skip to: 4265
/* 3780 */    MCD::OPC_Decode, 208, 11, 85, // Opcode: LWR_MM
/* 3784 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3796
/* 3788 */    MCD::OPC_CheckPredicate, 6, 217, 1, // Skip to: 4265
/* 3792 */    MCD::OPC_Decode, 143, 15, 86, // Opcode: PREF_MM
/* 3796 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3808
/* 3800 */    MCD::OPC_CheckPredicate, 6, 205, 1, // Skip to: 4265
/* 3804 */    MCD::OPC_Decode, 159, 11, 85, // Opcode: LL_MM
/* 3808 */    MCD::OPC_FilterValue, 6, 99, 0, // Skip to: 3911
/* 3812 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3815 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3827
/* 3819 */    MCD::OPC_CheckPredicate, 6, 186, 1, // Skip to: 4265
/* 3823 */    MCD::OPC_Decode, 232, 10, 100, // Opcode: LBuE_MM
/* 3827 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3839
/* 3831 */    MCD::OPC_CheckPredicate, 6, 174, 1, // Skip to: 4265
/* 3835 */    MCD::OPC_Decode, 146, 11, 100, // Opcode: LHuE_MM
/* 3839 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3851
/* 3843 */    MCD::OPC_CheckPredicate, 6, 162, 1, // Skip to: 4265
/* 3847 */    MCD::OPC_Decode, 194, 11, 100, // Opcode: LWLE_MM
/* 3851 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3863
/* 3855 */    MCD::OPC_CheckPredicate, 6, 150, 1, // Skip to: 4265
/* 3859 */    MCD::OPC_Decode, 207, 11, 100, // Opcode: LWRE_MM
/* 3863 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3875
/* 3867 */    MCD::OPC_CheckPredicate, 6, 138, 1, // Skip to: 4265
/* 3871 */    MCD::OPC_Decode, 220, 10, 100, // Opcode: LBE_MM
/* 3875 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3887
/* 3879 */    MCD::OPC_CheckPredicate, 6, 126, 1, // Skip to: 4265
/* 3883 */    MCD::OPC_Decode, 138, 11, 100, // Opcode: LHE_MM
/* 3887 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3899
/* 3891 */    MCD::OPC_CheckPredicate, 6, 114, 1, // Skip to: 4265
/* 3895 */    MCD::OPC_Decode, 157, 11, 100, // Opcode: LLE_MM
/* 3899 */    MCD::OPC_FilterValue, 7, 106, 1, // Skip to: 4265
/* 3903 */    MCD::OPC_CheckPredicate, 6, 102, 1, // Skip to: 4265
/* 3907 */    MCD::OPC_Decode, 188, 11, 100, // Opcode: LWE_MM
/* 3911 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3923
/* 3915 */    MCD::OPC_CheckPredicate, 6, 90, 1, // Skip to: 4265
/* 3919 */    MCD::OPC_Decode, 201, 18, 85, // Opcode: SWL_MM
/* 3923 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3935
/* 3927 */    MCD::OPC_CheckPredicate, 6, 78, 1, // Skip to: 4265
/* 3931 */    MCD::OPC_Decode, 212, 18, 85, // Opcode: SWR_MM
/* 3935 */    MCD::OPC_FilterValue, 10, 99, 0, // Skip to: 4038
/* 3939 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3942 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3954
/* 3946 */    MCD::OPC_CheckPredicate, 6, 59, 1, // Skip to: 4265
/* 3950 */    MCD::OPC_Decode, 200, 18, 100, // Opcode: SWLE_MM
/* 3954 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3966
/* 3958 */    MCD::OPC_CheckPredicate, 6, 47, 1, // Skip to: 4265
/* 3962 */    MCD::OPC_Decode, 211, 18, 100, // Opcode: SWRE_MM
/* 3966 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3978
/* 3970 */    MCD::OPC_CheckPredicate, 6, 35, 1, // Skip to: 4265
/* 3974 */    MCD::OPC_Decode, 140, 15, 101, // Opcode: PREFE_MM
/* 3978 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3990
/* 3982 */    MCD::OPC_CheckPredicate, 6, 23, 1, // Skip to: 4265
/* 3986 */    MCD::OPC_Decode, 154, 4, 101, // Opcode: CACHEE_MM
/* 3990 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4002
/* 3994 */    MCD::OPC_CheckPredicate, 6, 11, 1, // Skip to: 4265
/* 3998 */    MCD::OPC_Decode, 139, 16, 100, // Opcode: SBE_MM
/* 4002 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4014
/* 4006 */    MCD::OPC_CheckPredicate, 6, 255, 0, // Skip to: 4265
/* 4010 */    MCD::OPC_Decode, 214, 16, 100, // Opcode: SHE_MM
/* 4014 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4026
/* 4018 */    MCD::OPC_CheckPredicate, 6, 243, 0, // Skip to: 4265
/* 4022 */    MCD::OPC_Decode, 149, 16, 100, // Opcode: SCE_MM
/* 4026 */    MCD::OPC_FilterValue, 7, 235, 0, // Skip to: 4265
/* 4030 */    MCD::OPC_CheckPredicate, 6, 231, 0, // Skip to: 4265
/* 4034 */    MCD::OPC_Decode, 195, 18, 100, // Opcode: SWE_MM
/* 4038 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4050
/* 4042 */    MCD::OPC_CheckPredicate, 6, 219, 0, // Skip to: 4265
/* 4046 */    MCD::OPC_Decode, 151, 16, 85, // Opcode: SC_MM
/* 4050 */    MCD::OPC_FilterValue, 14, 211, 0, // Skip to: 4265
/* 4054 */    MCD::OPC_CheckPredicate, 10, 207, 0, // Skip to: 4265
/* 4058 */    MCD::OPC_Decode, 212, 11, 85, // Opcode: LWU_MM
/* 4062 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4074
/* 4066 */    MCD::OPC_CheckPredicate, 6, 195, 0, // Skip to: 4265
/* 4070 */    MCD::OPC_Decode, 237, 19, 93, // Opcode: XORi_MM
/* 4074 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 4086
/* 4078 */    MCD::OPC_CheckPredicate, 6, 183, 0, // Skip to: 4265
/* 4082 */    MCD::OPC_Decode, 188, 10, 102, // Opcode: JALS_MM
/* 4086 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 4097
/* 4090 */    MCD::OPC_CheckPredicate, 6, 171, 0, // Skip to: 4265
/* 4094 */    MCD::OPC_Decode, 113, 103, // Opcode: ADDIUPC_MM
/* 4097 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4109
/* 4101 */    MCD::OPC_CheckPredicate, 6, 160, 0, // Skip to: 4265
/* 4105 */    MCD::OPC_Decode, 173, 17, 83, // Opcode: SLTi_MM
/* 4109 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4121
/* 4113 */    MCD::OPC_CheckPredicate, 6, 148, 0, // Skip to: 4265
/* 4117 */    MCD::OPC_Decode, 204, 2, 104, // Opcode: BEQ_MM
/* 4121 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4133
/* 4125 */    MCD::OPC_CheckPredicate, 14, 136, 0, // Skip to: 4265
/* 4129 */    MCD::OPC_Decode, 189, 18, 105, // Opcode: SWC1_MM
/* 4133 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4145
/* 4137 */    MCD::OPC_CheckPredicate, 14, 124, 0, // Skip to: 4265
/* 4141 */    MCD::OPC_Decode, 182, 11, 105, // Opcode: LWC1_MM
/* 4145 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4157
/* 4149 */    MCD::OPC_CheckPredicate, 6, 112, 0, // Skip to: 4265
/* 4153 */    MCD::OPC_Decode, 176, 17, 83, // Opcode: SLTiu_MM
/* 4157 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4169
/* 4161 */    MCD::OPC_CheckPredicate, 6, 100, 0, // Skip to: 4265
/* 4165 */    MCD::OPC_Decode, 212, 3, 104, // Opcode: BNE_MM
/* 4169 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4181
/* 4173 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 4265
/* 4177 */    MCD::OPC_Decode, 163, 16, 105, // Opcode: SDC1_MM
/* 4181 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4193
/* 4185 */    MCD::OPC_CheckPredicate, 15, 76, 0, // Skip to: 4265
/* 4189 */    MCD::OPC_Decode, 238, 10, 105, // Opcode: LDC1_MM
/* 4193 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 4205
/* 4197 */    MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 4265
/* 4201 */    MCD::OPC_Decode, 207, 1, 93, // Opcode: ANDi_MM
/* 4205 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4217
/* 4209 */    MCD::OPC_CheckPredicate, 6, 52, 0, // Skip to: 4265
/* 4213 */    MCD::OPC_Decode, 208, 10, 102, // Opcode: J_MM
/* 4217 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 4229
/* 4221 */    MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 4265
/* 4225 */    MCD::OPC_Decode, 190, 10, 102, // Opcode: JALX_MM
/* 4229 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4241
/* 4233 */    MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 4265
/* 4237 */    MCD::OPC_Decode, 191, 10, 102, // Opcode: JAL_MM
/* 4241 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4253
/* 4245 */    MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 4265
/* 4249 */    MCD::OPC_Decode, 217, 18, 84, // Opcode: SW_MM
/* 4253 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4265
/* 4257 */    MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 4265
/* 4261 */    MCD::OPC_Decode, 219, 11, 84, // Opcode: LW_MM
/* 4265 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32r6FP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 36
/* 7 */       MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 10 */      MCD::OPC_FilterValue, 187, 96, 8, 0, // Skip to: 23
/* 15 */      MCD::OPC_CheckPredicate, 16, 41, 0, // Skip to: 60
/* 19 */      MCD::OPC_Decode, 190, 12, 106, // Opcode: MFHC1_D64_MMR6
/* 23 */      MCD::OPC_FilterValue, 187, 112, 32, 0, // Skip to: 60
/* 28 */      MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 206, 13, 107, // Opcode: MTHC1_D64_MMR6
/* 36 */      MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 162, 16, 105, // Opcode: SDC1_D64_MMR6
/* 48 */      MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 237, 10, 105, // Opcode: LDC1_D64_MMR6
/* 60 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR616[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 17, 71, 1, // Skip to: 345
/* 18 */      MCD::OPC_Decode, 149, 1, 108, // Opcode: ADDU16_MMR6
/* 22 */      MCD::OPC_FilterValue, 1, 63, 1, // Skip to: 345
/* 26 */      MCD::OPC_CheckPredicate, 17, 59, 1, // Skip to: 345
/* 30 */      MCD::OPC_Decode, 155, 18, 108, // Opcode: SUBU16_MMR6
/* 34 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 17, 47, 1, // Skip to: 345
/* 42 */      MCD::OPC_Decode, 250, 12, 21, // Opcode: MOVE16_MMR6
/* 46 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 77
/* 50 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 53 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 65
/* 57 */      MCD::OPC_CheckPredicate, 17, 28, 1, // Skip to: 345
/* 61 */      MCD::OPC_Decode, 151, 17, 22, // Opcode: SLL16_MMR6
/* 65 */      MCD::OPC_FilterValue, 1, 20, 1, // Skip to: 345
/* 69 */      MCD::OPC_CheckPredicate, 17, 16, 1, // Skip to: 345
/* 73 */      MCD::OPC_Decode, 219, 17, 22, // Opcode: SRL16_MMR6
/* 77 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 89
/* 81 */      MCD::OPC_CheckPredicate, 17, 4, 1, // Skip to: 345
/* 85 */      MCD::OPC_Decode, 196, 1, 23, // Opcode: ANDI16_MMR6
/* 89 */      MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 249
/* 93 */      MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 96 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 108
/* 100 */     MCD::OPC_CheckPredicate, 17, 241, 0, // Skip to: 345
/* 104 */     MCD::OPC_Decode, 191, 14, 109, // Opcode: NOT16_MMR6
/* 108 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 120
/* 112 */     MCD::OPC_CheckPredicate, 17, 229, 0, // Skip to: 345
/* 116 */     MCD::OPC_Decode, 193, 1, 110, // Opcode: AND16_MMR6
/* 120 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 17, 217, 0, // Skip to: 345
/* 128 */     MCD::OPC_Decode, 197, 11, 26, // Opcode: LWM16_MMR6
/* 132 */     MCD::OPC_FilterValue, 3, 27, 0, // Skip to: 163
/* 136 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 139 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 151
/* 143 */     MCD::OPC_CheckPredicate, 17, 198, 0, // Skip to: 345
/* 147 */     MCD::OPC_Decode, 203, 10, 111, // Opcode: JRC16_MMR6
/* 151 */     MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 345
/* 155 */     MCD::OPC_CheckPredicate, 17, 186, 0, // Skip to: 345
/* 159 */     MCD::OPC_Decode, 204, 10, 112, // Opcode: JRCADDIUSP_MMR6
/* 163 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 175
/* 167 */     MCD::OPC_CheckPredicate, 17, 174, 0, // Skip to: 345
/* 171 */     MCD::OPC_Decode, 225, 19, 110, // Opcode: XOR16_MMR6
/* 175 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 187
/* 179 */     MCD::OPC_CheckPredicate, 17, 162, 0, // Skip to: 345
/* 183 */     MCD::OPC_Decode, 196, 14, 110, // Opcode: OR16_MMR6
/* 187 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 199
/* 191 */     MCD::OPC_CheckPredicate, 17, 150, 0, // Skip to: 345
/* 195 */     MCD::OPC_Decode, 203, 18, 26, // Opcode: SWM16_MMR6
/* 199 */     MCD::OPC_FilterValue, 11, 142, 0, // Skip to: 345
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 218
/* 210 */     MCD::OPC_CheckPredicate, 17, 131, 0, // Skip to: 345
/* 214 */     MCD::OPC_Decode, 180, 10, 111, // Opcode: JALRC16_MMR6
/* 218 */     MCD::OPC_FilterValue, 1, 123, 0, // Skip to: 345
/* 222 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 225 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 17, 112, 0, // Skip to: 345
/* 233 */     MCD::OPC_Decode, 228, 3, 113, // Opcode: BREAK16_MMR6
/* 237 */     MCD::OPC_FilterValue, 1, 104, 0, // Skip to: 345
/* 241 */     MCD::OPC_CheckPredicate, 17, 100, 0, // Skip to: 345
/* 245 */     MCD::OPC_Decode, 156, 16, 113, // Opcode: SDBBP16_MMR6
/* 249 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 17, 88, 0, // Skip to: 345
/* 257 */     MCD::OPC_Decode, 136, 16, 20, // Opcode: SB16_MMR6
/* 261 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 273
/* 265 */     MCD::OPC_CheckPredicate, 17, 76, 0, // Skip to: 345
/* 269 */     MCD::OPC_Decode, 200, 2, 37, // Opcode: BEQZC16_MMR6
/* 273 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 285
/* 277 */     MCD::OPC_CheckPredicate, 17, 64, 0, // Skip to: 345
/* 281 */     MCD::OPC_Decode, 211, 16, 20, // Opcode: SH16_MMR6
/* 285 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 297
/* 289 */     MCD::OPC_CheckPredicate, 17, 52, 0, // Skip to: 345
/* 293 */     MCD::OPC_Decode, 208, 3, 37, // Opcode: BNEZC16_MMR6
/* 297 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 309
/* 301 */     MCD::OPC_CheckPredicate, 17, 40, 0, // Skip to: 345
/* 305 */     MCD::OPC_Decode, 214, 18, 30, // Opcode: SWSP_MMR6
/* 309 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 321
/* 313 */     MCD::OPC_CheckPredicate, 17, 28, 0, // Skip to: 345
/* 317 */     MCD::OPC_Decode, 165, 2, 38, // Opcode: BC16_MMR6
/* 321 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 333
/* 325 */     MCD::OPC_CheckPredicate, 17, 16, 0, // Skip to: 345
/* 329 */     MCD::OPC_Decode, 186, 18, 20, // Opcode: SW16_MMR6
/* 333 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 345
/* 337 */     MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 149, 11, 39, // Opcode: LI16_MMR6
/* 345 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 138, 3, // Skip to: 913
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 96, 0, // Skip to: 110
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 18, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 241, 17, 0, // Opcode: SSNOP_MMR6
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 18, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 148, 8, 0, // Opcode: EHB_MMR6
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 18, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 214, 14, 0, // Opcode: PAUSE_MMR6
/* 60 */      MCD::OPC_CheckPredicate, 18, 155, 14, // Skip to: 3803
/* 64 */      MCD::OPC_Decode, 164, 17, 40, // Opcode: SLL_MMR6
/* 68 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 18, 143, 14, // Skip to: 3803
/* 76 */      MCD::OPC_Decode, 191, 16, 43, // Opcode: SELEQZ_MMR6
/* 80 */      MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 18, 131, 14, // Skip to: 3803
/* 88 */      MCD::OPC_Decode, 198, 16, 43, // Opcode: SELNEZ_MMR6
/* 92 */      MCD::OPC_FilterValue, 7, 123, 14, // Skip to: 3803
/* 96 */      MCD::OPC_CheckPredicate, 18, 119, 14, // Skip to: 3803
/* 100 */     MCD::OPC_CheckField, 14, 2, 0, 113, 14, // Skip to: 3803
/* 106 */     MCD::OPC_Decode, 209, 15, 114, // Opcode: RDHWR_MMR6
/* 110 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 18, 101, 14, // Skip to: 3803
/* 118 */     MCD::OPC_Decode, 230, 3, 44, // Opcode: BREAK_MMR6
/* 122 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 134
/* 126 */     MCD::OPC_CheckPredicate, 18, 89, 14, // Skip to: 3803
/* 130 */     MCD::OPC_Decode, 173, 10, 45, // Opcode: INS_MMR6
/* 134 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 152
/* 138 */     MCD::OPC_CheckPredicate, 18, 77, 14, // Skip to: 3803
/* 142 */     MCD::OPC_CheckField, 6, 3, 0, 71, 14, // Skip to: 3803
/* 148 */     MCD::OPC_Decode, 169, 11, 115, // Opcode: LSA_MMR6
/* 152 */     MCD::OPC_FilterValue, 16, 117, 0, // Skip to: 273
/* 156 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 159 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 177
/* 163 */     MCD::OPC_CheckPredicate, 18, 52, 14, // Skip to: 3803
/* 167 */     MCD::OPC_CheckField, 16, 5, 0, 46, 14, // Skip to: 3803
/* 173 */     MCD::OPC_Decode, 228, 4, 14, // Opcode: CLZ_MMR6
/* 177 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 18, 34, 14, // Skip to: 3803
/* 185 */     MCD::OPC_Decode, 178, 1, 43, // Opcode: ADD_MMR6
/* 189 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 18, 22, 14, // Skip to: 3803
/* 197 */     MCD::OPC_Decode, 154, 1, 43, // Opcode: ADDU_MMR6
/* 201 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 213
/* 205 */     MCD::OPC_CheckPredicate, 18, 10, 14, // Skip to: 3803
/* 209 */     MCD::OPC_Decode, 178, 18, 43, // Opcode: SUB_MMR6
/* 213 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 225
/* 217 */     MCD::OPC_CheckPredicate, 18, 254, 13, // Skip to: 3803
/* 221 */     MCD::OPC_Decode, 160, 18, 43, // Opcode: SUBU_MMR6
/* 225 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 18, 242, 13, // Skip to: 3803
/* 233 */     MCD::OPC_Decode, 200, 1, 43, // Opcode: AND_MMR6
/* 237 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 249
/* 241 */     MCD::OPC_CheckPredicate, 18, 230, 13, // Skip to: 3803
/* 245 */     MCD::OPC_Decode, 201, 14, 43, // Opcode: OR_MMR6
/* 249 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 18, 218, 13, // Skip to: 3803
/* 257 */     MCD::OPC_Decode, 185, 14, 43, // Opcode: NOR_MMR6
/* 261 */     MCD::OPC_FilterValue, 12, 210, 13, // Skip to: 3803
/* 265 */     MCD::OPC_CheckPredicate, 18, 206, 13, // Skip to: 3803
/* 269 */     MCD::OPC_Decode, 230, 19, 43, // Opcode: XOR_MMR6
/* 273 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 376
/* 277 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 280 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 18, 187, 13, // Skip to: 3803
/* 288 */     MCD::OPC_Decode, 144, 14, 43, // Opcode: MUL_MMR6
/* 292 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 304
/* 296 */     MCD::OPC_CheckPredicate, 18, 175, 13, // Skip to: 3803
/* 300 */     MCD::OPC_Decode, 230, 13, 43, // Opcode: MUH_MMR6
/* 304 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 18, 163, 13, // Skip to: 3803
/* 312 */     MCD::OPC_Decode, 138, 14, 43, // Opcode: MULU_MMR6
/* 316 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 328
/* 320 */     MCD::OPC_CheckPredicate, 18, 151, 13, // Skip to: 3803
/* 324 */     MCD::OPC_Decode, 229, 13, 43, // Opcode: MUHU_MMR6
/* 328 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 340
/* 332 */     MCD::OPC_CheckPredicate, 18, 139, 13, // Skip to: 3803
/* 336 */     MCD::OPC_Decode, 255, 6, 43, // Opcode: DIV_MMR6
/* 340 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 18, 127, 13, // Skip to: 3803
/* 348 */     MCD::OPC_Decode, 240, 12, 43, // Opcode: MOD_MMR6
/* 352 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 18, 115, 13, // Skip to: 3803
/* 360 */     MCD::OPC_Decode, 254, 6, 43, // Opcode: DIVU_MMR6
/* 364 */     MCD::OPC_FilterValue, 7, 107, 13, // Skip to: 3803
/* 368 */     MCD::OPC_CheckPredicate, 18, 103, 13, // Skip to: 3803
/* 372 */     MCD::OPC_Decode, 239, 12, 43, // Opcode: MODU_MMR6
/* 376 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 18, 91, 13, // Skip to: 3803
/* 384 */     MCD::OPC_CheckField, 6, 3, 0, 85, 13, // Skip to: 3803
/* 390 */     MCD::OPC_Decode, 188, 1, 116, // Opcode: ALIGN_MMR6
/* 394 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 18, 73, 13, // Skip to: 3803
/* 402 */     MCD::OPC_Decode, 190, 8, 54, // Opcode: EXT_MMR6
/* 406 */     MCD::OPC_FilterValue, 52, 39, 0, // Skip to: 449
/* 410 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 413 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 431
/* 417 */     MCD::OPC_CheckPredicate, 18, 54, 13, // Skip to: 3803
/* 421 */     MCD::OPC_CheckField, 14, 2, 0, 48, 13, // Skip to: 3803
/* 427 */     MCD::OPC_Decode, 186, 12, 117, // Opcode: MFHC0_MMR6
/* 431 */     MCD::OPC_FilterValue, 11, 40, 13, // Skip to: 3803
/* 435 */     MCD::OPC_CheckPredicate, 18, 36, 13, // Skip to: 3803
/* 439 */     MCD::OPC_CheckField, 14, 2, 0, 30, 13, // Skip to: 3803
/* 445 */     MCD::OPC_Decode, 202, 13, 118, // Opcode: MTHC0_MMR6
/* 449 */     MCD::OPC_FilterValue, 60, 22, 13, // Skip to: 3803
/* 453 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 456 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 18, 11, 13, // Skip to: 3803
/* 464 */     MCD::OPC_CheckField, 14, 2, 0, 5, 13, // Skip to: 3803
/* 470 */     MCD::OPC_Decode, 179, 12, 117, // Opcode: MFC0_MMR6
/* 474 */     MCD::OPC_FilterValue, 5, 63, 0, // Skip to: 541
/* 478 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 481 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 499
/* 485 */     MCD::OPC_CheckPredicate, 18, 242, 12, // Skip to: 3803
/* 489 */     MCD::OPC_CheckField, 21, 5, 0, 236, 12, // Skip to: 3803
/* 495 */     MCD::OPC_Decode, 143, 8, 73, // Opcode: DVP_MMR6
/* 499 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 517
/* 503 */     MCD::OPC_CheckPredicate, 18, 224, 12, // Skip to: 3803
/* 507 */     MCD::OPC_CheckField, 21, 5, 0, 218, 12, // Skip to: 3803
/* 513 */     MCD::OPC_Decode, 161, 8, 73, // Opcode: EVP_MMR6
/* 517 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 529
/* 521 */     MCD::OPC_CheckPredicate, 18, 206, 12, // Skip to: 3803
/* 525 */     MCD::OPC_Decode, 210, 15, 63, // Opcode: RDPGPR_MMR6
/* 529 */     MCD::OPC_FilterValue, 30, 198, 12, // Skip to: 3803
/* 533 */     MCD::OPC_CheckPredicate, 18, 194, 12, // Skip to: 3803
/* 537 */     MCD::OPC_Decode, 219, 19, 63, // Opcode: WRPGPR_MMR6
/* 541 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 559
/* 545 */     MCD::OPC_CheckPredicate, 18, 182, 12, // Skip to: 3803
/* 549 */     MCD::OPC_CheckField, 14, 2, 0, 176, 12, // Skip to: 3803
/* 555 */     MCD::OPC_Decode, 195, 13, 118, // Opcode: MTC0_MMR6
/* 559 */     MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 626
/* 563 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 566 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 18, 157, 12, // Skip to: 3803
/* 574 */     MCD::OPC_Decode, 140, 3, 77, // Opcode: BITSWAP_MMR6
/* 578 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 18, 145, 12, // Skip to: 3803
/* 586 */     MCD::OPC_Decode, 182, 16, 63, // Opcode: SEB_MMR6
/* 590 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 602
/* 594 */     MCD::OPC_CheckPredicate, 18, 133, 12, // Skip to: 3803
/* 598 */     MCD::OPC_Decode, 186, 16, 63, // Opcode: SEH_MMR6
/* 602 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 614
/* 606 */     MCD::OPC_CheckPredicate, 18, 121, 12, // Skip to: 3803
/* 610 */     MCD::OPC_Decode, 208, 4, 63, // Opcode: CLO_MMR6
/* 614 */     MCD::OPC_FilterValue, 15, 113, 12, // Skip to: 3803
/* 618 */     MCD::OPC_CheckPredicate, 18, 109, 12, // Skip to: 3803
/* 622 */     MCD::OPC_Decode, 222, 19, 63, // Opcode: WSBH_MMR6
/* 626 */     MCD::OPC_FilterValue, 13, 130, 0, // Skip to: 760
/* 630 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 633 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 651
/* 637 */     MCD::OPC_CheckPredicate, 18, 90, 12, // Skip to: 3803
/* 641 */     MCD::OPC_CheckField, 16, 10, 0, 84, 12, // Skip to: 3803
/* 647 */     MCD::OPC_Decode, 164, 19, 0, // Opcode: TLBINV_MMR6
/* 651 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 669
/* 655 */     MCD::OPC_CheckPredicate, 18, 72, 12, // Skip to: 3803
/* 659 */     MCD::OPC_CheckField, 16, 10, 0, 66, 12, // Skip to: 3803
/* 665 */     MCD::OPC_Decode, 163, 19, 0, // Opcode: TLBINVF_MMR6
/* 669 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 687
/* 673 */     MCD::OPC_CheckPredicate, 18, 54, 12, // Skip to: 3803
/* 677 */     MCD::OPC_CheckField, 21, 5, 0, 48, 12, // Skip to: 3803
/* 683 */     MCD::OPC_Decode, 224, 18, 78, // Opcode: SYNC_MMR6
/* 687 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 699
/* 691 */     MCD::OPC_CheckPredicate, 18, 36, 12, // Skip to: 3803
/* 695 */     MCD::OPC_Decode, 216, 19, 69, // Opcode: WAIT_MMR6
/* 699 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 18, 24, 12, // Skip to: 3803
/* 707 */     MCD::OPC_Decode, 158, 16, 69, // Opcode: SDBBP_MMR6
/* 711 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 729
/* 715 */     MCD::OPC_CheckPredicate, 18, 12, 12, // Skip to: 3803
/* 719 */     MCD::OPC_CheckField, 16, 10, 0, 6, 12, // Skip to: 3803
/* 725 */     MCD::OPC_Decode, 237, 6, 0, // Opcode: DERET_MMR6
/* 729 */     MCD::OPC_FilterValue, 30, 254, 11, // Skip to: 3803
/* 733 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 736 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 748
/* 740 */     MCD::OPC_CheckPredicate, 18, 243, 11, // Skip to: 3803
/* 744 */     MCD::OPC_Decode, 157, 8, 0, // Opcode: ERET_MMR6
/* 748 */     MCD::OPC_FilterValue, 1, 235, 11, // Skip to: 3803
/* 752 */     MCD::OPC_CheckPredicate, 18, 231, 11, // Skip to: 3803
/* 756 */     MCD::OPC_Decode, 155, 8, 0, // Opcode: ERETNC_MMR6
/* 760 */     MCD::OPC_FilterValue, 20, 75, 0, // Skip to: 839
/* 764 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 767 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 779
/* 771 */     MCD::OPC_CheckPredicate, 18, 212, 11, // Skip to: 3803
/* 775 */     MCD::OPC_Decode, 185, 12, 80, // Opcode: MFC2_MMR6
/* 779 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 791
/* 783 */     MCD::OPC_CheckPredicate, 18, 200, 11, // Skip to: 3803
/* 787 */     MCD::OPC_Decode, 201, 13, 81, // Opcode: MTC2_MMR6
/* 791 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 803
/* 795 */     MCD::OPC_CheckPredicate, 19, 188, 11, // Skip to: 3803
/* 799 */     MCD::OPC_Decode, 146, 7, 119, // Opcode: DMFC2_MM64R6
/* 803 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 815
/* 807 */     MCD::OPC_CheckPredicate, 19, 176, 11, // Skip to: 3803
/* 811 */     MCD::OPC_Decode, 158, 7, 120, // Opcode: DMTC2_MM64R6
/* 815 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 827
/* 819 */     MCD::OPC_CheckPredicate, 18, 164, 11, // Skip to: 3803
/* 823 */     MCD::OPC_Decode, 192, 12, 80, // Opcode: MFHC2_MMR6
/* 827 */     MCD::OPC_FilterValue, 19, 156, 11, // Skip to: 3803
/* 831 */     MCD::OPC_CheckPredicate, 18, 152, 11, // Skip to: 3803
/* 835 */     MCD::OPC_Decode, 208, 13, 81, // Opcode: MTHC2_MMR6
/* 839 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 870
/* 843 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 846 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 858
/* 850 */     MCD::OPC_CheckPredicate, 18, 133, 11, // Skip to: 3803
/* 854 */     MCD::OPC_Decode, 182, 10, 63, // Opcode: JALRC_MMR6
/* 858 */     MCD::OPC_FilterValue, 3, 125, 11, // Skip to: 3803
/* 862 */     MCD::OPC_CheckPredicate, 18, 121, 11, // Skip to: 3803
/* 866 */     MCD::OPC_Decode, 181, 10, 63, // Opcode: JALRC_HB_MMR6
/* 870 */     MCD::OPC_FilterValue, 29, 113, 11, // Skip to: 3803
/* 874 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 877 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 895
/* 881 */     MCD::OPC_CheckPredicate, 18, 102, 11, // Skip to: 3803
/* 885 */     MCD::OPC_CheckField, 21, 5, 0, 96, 11, // Skip to: 3803
/* 891 */     MCD::OPC_Decode, 137, 7, 73, // Opcode: DI_MMR6
/* 895 */     MCD::OPC_FilterValue, 10, 88, 11, // Skip to: 3803
/* 899 */     MCD::OPC_CheckPredicate, 18, 84, 11, // Skip to: 3803
/* 903 */     MCD::OPC_CheckField, 21, 5, 0, 78, 11, // Skip to: 3803
/* 909 */     MCD::OPC_Decode, 151, 8, 73, // Opcode: EI_MMR6
/* 913 */     MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 939
/* 917 */     MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 931
/* 921 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 931
/* 927 */     MCD::OPC_Decode, 171, 11, 121, // Opcode: LUI_MMR6
/* 931 */     MCD::OPC_CheckPredicate, 18, 52, 11, // Skip to: 3803
/* 935 */     MCD::OPC_Decode, 253, 1, 93, // Opcode: AUI_MMR6
/* 939 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 951
/* 943 */     MCD::OPC_CheckPredicate, 18, 40, 11, // Skip to: 3803
/* 947 */     MCD::OPC_Decode, 226, 10, 122, // Opcode: LBU_MMR6
/* 951 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 963
/* 955 */     MCD::OPC_CheckPredicate, 18, 28, 11, // Skip to: 3803
/* 959 */     MCD::OPC_Decode, 142, 16, 84, // Opcode: SB_MMR6
/* 963 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 975
/* 967 */     MCD::OPC_CheckPredicate, 18, 16, 11, // Skip to: 3803
/* 971 */     MCD::OPC_Decode, 228, 10, 122, // Opcode: LB_MMR6
/* 975 */     MCD::OPC_FilterValue, 8, 111, 0, // Skip to: 1090
/* 979 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 982 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1000
/* 986 */     MCD::OPC_CheckPredicate, 18, 253, 10, // Skip to: 3803
/* 990 */     MCD::OPC_CheckField, 11, 1, 0, 247, 10, // Skip to: 3803
/* 996 */     MCD::OPC_Decode, 184, 11, 123, // Opcode: LWC2_MMR6
/* 1000 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1012
/* 1004 */    MCD::OPC_CheckPredicate, 18, 235, 10, // Skip to: 3803
/* 1008 */    MCD::OPC_Decode, 203, 11, 85, // Opcode: LWP_MMR6
/* 1012 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1030
/* 1016 */    MCD::OPC_CheckPredicate, 18, 223, 10, // Skip to: 3803
/* 1020 */    MCD::OPC_CheckField, 11, 1, 0, 217, 10, // Skip to: 3803
/* 1026 */    MCD::OPC_Decode, 240, 10, 123, // Opcode: LDC2_MMR6
/* 1030 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 18, 205, 10, // Skip to: 3803
/* 1038 */    MCD::OPC_Decode, 157, 4, 86, // Opcode: CACHE_MMR6
/* 1042 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1060
/* 1046 */    MCD::OPC_CheckPredicate, 18, 193, 10, // Skip to: 3803
/* 1050 */    MCD::OPC_CheckField, 11, 1, 0, 187, 10, // Skip to: 3803
/* 1056 */    MCD::OPC_Decode, 191, 18, 123, // Opcode: SWC2_MMR6
/* 1060 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1072
/* 1064 */    MCD::OPC_CheckPredicate, 18, 175, 10, // Skip to: 3803
/* 1068 */    MCD::OPC_Decode, 207, 18, 85, // Opcode: SWP_MMR6
/* 1072 */    MCD::OPC_FilterValue, 10, 167, 10, // Skip to: 3803
/* 1076 */    MCD::OPC_CheckPredicate, 18, 163, 10, // Skip to: 3803
/* 1080 */    MCD::OPC_CheckField, 11, 1, 0, 157, 10, // Skip to: 3803
/* 1086 */    MCD::OPC_Decode, 165, 16, 123, // Opcode: SDC2_MMR6
/* 1090 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1101
/* 1094 */    MCD::OPC_CheckPredicate, 18, 145, 10, // Skip to: 3803
/* 1098 */    MCD::OPC_Decode, 119, 83, // Opcode: ADDIU_MMR6
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 18, 134, 10, // Skip to: 3803
/* 1109 */    MCD::OPC_Decode, 140, 17, 84, // Opcode: SH_MMR6
/* 1113 */    MCD::OPC_FilterValue, 16, 87, 0, // Skip to: 1204
/* 1117 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1120 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1132
/* 1124 */    MCD::OPC_CheckPredicate, 20, 115, 10, // Skip to: 3803
/* 1128 */    MCD::OPC_Decode, 167, 2, 124, // Opcode: BC1EQZC_MMR6
/* 1132 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 20, 103, 10, // Skip to: 3803
/* 1140 */    MCD::OPC_Decode, 172, 2, 124, // Opcode: BC1NEZC_MMR6
/* 1144 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 18, 91, 10, // Skip to: 3803
/* 1152 */    MCD::OPC_Decode, 177, 2, 125, // Opcode: BC2EQZC_MMR6
/* 1156 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 18, 79, 10, // Skip to: 3803
/* 1164 */    MCD::OPC_Decode, 179, 2, 125, // Opcode: BC2NEZC_MMR6
/* 1168 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 18, 67, 10, // Skip to: 3803
/* 1176 */    MCD::OPC_Decode, 222, 18, 126, // Opcode: SYNCI_MMR6
/* 1180 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 19, 55, 10, // Skip to: 3803
/* 1188 */    MCD::OPC_Decode, 220, 6, 127, // Opcode: DATI_MM64R6
/* 1192 */    MCD::OPC_FilterValue, 17, 47, 10, // Skip to: 3803
/* 1196 */    MCD::OPC_CheckPredicate, 19, 43, 10, // Skip to: 3803
/* 1200 */    MCD::OPC_Decode, 216, 6, 127, // Opcode: DAHI_MM64R6
/* 1204 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 18, 31, 10, // Skip to: 3803
/* 1212 */    MCD::OPC_Decode, 199, 14, 93, // Opcode: ORI_MMR6
/* 1216 */    MCD::OPC_FilterValue, 21, 159, 5, // Skip to: 2659
/* 1220 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1223 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1236
/* 1227 */    MCD::OPC_CheckPredicate, 20, 12, 10, // Skip to: 3803
/* 1231 */    MCD::OPC_Decode, 227, 12, 128, 1, // Opcode: MIN_S_MMR6
/* 1236 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1249
/* 1240 */    MCD::OPC_CheckPredicate, 20, 255, 9, // Skip to: 3803
/* 1244 */    MCD::OPC_Decode, 249, 4, 129, 1, // Opcode: CMP_AF_S_MMR6
/* 1249 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1262
/* 1253 */    MCD::OPC_CheckPredicate, 20, 242, 9, // Skip to: 3803
/* 1257 */    MCD::OPC_Decode, 172, 12, 128, 1, // Opcode: MAX_S_MMR6
/* 1262 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 1275
/* 1266 */    MCD::OPC_CheckPredicate, 20, 229, 9, // Skip to: 3803
/* 1270 */    MCD::OPC_Decode, 248, 4, 130, 1, // Opcode: CMP_AF_D_MMR6
/* 1275 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 1294
/* 1279 */    MCD::OPC_CheckPredicate, 18, 216, 9, // Skip to: 3803
/* 1283 */    MCD::OPC_CheckField, 11, 5, 0, 210, 9, // Skip to: 3803
/* 1289 */    MCD::OPC_Decode, 226, 15, 131, 1, // Opcode: RINT_S_MMR6
/* 1294 */    MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 1307
/* 1298 */    MCD::OPC_CheckPredicate, 20, 197, 9, // Skip to: 3803
/* 1302 */    MCD::OPC_Decode, 208, 12, 128, 1, // Opcode: MINA_S_MMR6
/* 1307 */    MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 1320
/* 1311 */    MCD::OPC_CheckPredicate, 20, 184, 9, // Skip to: 3803
/* 1315 */    MCD::OPC_Decode, 153, 12, 128, 1, // Opcode: MAXA_S_MMR6
/* 1320 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 1333
/* 1324 */    MCD::OPC_CheckPredicate, 20, 171, 9, // Skip to: 3803
/* 1328 */    MCD::OPC_Decode, 207, 8, 132, 1, // Opcode: FADD_S_MMR6
/* 1333 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 1346
/* 1337 */    MCD::OPC_CheckPredicate, 18, 158, 9, // Skip to: 3803
/* 1341 */    MCD::OPC_Decode, 193, 16, 128, 1, // Opcode: SELEQZ_S_MMR6
/* 1346 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 1405
/* 1350 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1353 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1366
/* 1357 */    MCD::OPC_CheckPredicate, 20, 138, 9, // Skip to: 3803
/* 1361 */    MCD::OPC_Decode, 183, 12, 133, 1, // Opcode: MFC1_MMR6
/* 1366 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1379
/* 1370 */    MCD::OPC_CheckPredicate, 20, 125, 9, // Skip to: 3803
/* 1374 */    MCD::OPC_Decode, 199, 13, 134, 1, // Opcode: MTC1_MMR6
/* 1379 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1392
/* 1383 */    MCD::OPC_CheckPredicate, 21, 112, 9, // Skip to: 3803
/* 1387 */    MCD::OPC_Decode, 188, 12, 135, 1, // Opcode: MFHC1_D32_MMR6
/* 1392 */    MCD::OPC_FilterValue, 7, 103, 9, // Skip to: 3803
/* 1396 */    MCD::OPC_CheckPredicate, 21, 99, 9, // Skip to: 3803
/* 1400 */    MCD::OPC_Decode, 204, 13, 136, 1, // Opcode: MTHC1_D32_MMR6
/* 1405 */    MCD::OPC_FilterValue, 69, 9, 0, // Skip to: 1418
/* 1409 */    MCD::OPC_CheckPredicate, 20, 86, 9, // Skip to: 3803
/* 1413 */    MCD::OPC_Decode, 189, 5, 129, 1, // Opcode: CMP_UN_S_MMR6
/* 1418 */    MCD::OPC_FilterValue, 85, 9, 0, // Skip to: 1431
/* 1422 */    MCD::OPC_CheckPredicate, 20, 73, 9, // Skip to: 3803
/* 1426 */    MCD::OPC_Decode, 187, 5, 130, 1, // Opcode: CMP_UN_D_MMR6
/* 1431 */    MCD::OPC_FilterValue, 96, 15, 0, // Skip to: 1450
/* 1435 */    MCD::OPC_CheckPredicate, 18, 60, 9, // Skip to: 3803
/* 1439 */    MCD::OPC_CheckField, 11, 5, 0, 54, 9, // Skip to: 3803
/* 1445 */    MCD::OPC_Decode, 189, 4, 131, 1, // Opcode: CLASS_S_MMR6
/* 1450 */    MCD::OPC_FilterValue, 112, 9, 0, // Skip to: 1463
/* 1454 */    MCD::OPC_CheckPredicate, 20, 41, 9, // Skip to: 3803
/* 1458 */    MCD::OPC_Decode, 224, 9, 132, 1, // Opcode: FSUB_S_MMR6
/* 1463 */    MCD::OPC_FilterValue, 120, 9, 0, // Skip to: 1476
/* 1467 */    MCD::OPC_CheckPredicate, 18, 28, 9, // Skip to: 3803
/* 1471 */    MCD::OPC_Decode, 200, 16, 128, 1, // Opcode: SELNEZ_S_MMR6
/* 1476 */    MCD::OPC_FilterValue, 123, 27, 0, // Skip to: 1507
/* 1480 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1483 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1495
/* 1487 */    MCD::OPC_CheckPredicate, 20, 8, 9, // Skip to: 3803
/* 1491 */    MCD::OPC_Decode, 172, 9, 98, // Opcode: FMOV_S_MMR6
/* 1495 */    MCD::OPC_FilterValue, 4, 0, 9, // Skip to: 3803
/* 1499 */    MCD::OPC_CheckPredicate, 20, 252, 8, // Skip to: 3803
/* 1503 */    MCD::OPC_Decode, 169, 9, 99, // Opcode: FMOV_D_MMR6
/* 1507 */    MCD::OPC_FilterValue, 133, 1, 9, 0, // Skip to: 1521
/* 1512 */    MCD::OPC_CheckPredicate, 20, 239, 8, // Skip to: 3803
/* 1516 */    MCD::OPC_Decode, 255, 4, 129, 1, // Opcode: CMP_EQ_S_MMR6
/* 1521 */    MCD::OPC_FilterValue, 149, 1, 9, 0, // Skip to: 1535
/* 1526 */    MCD::OPC_CheckPredicate, 20, 225, 8, // Skip to: 3803
/* 1530 */    MCD::OPC_Decode, 251, 4, 130, 1, // Opcode: CMP_EQ_D_MMR6
/* 1535 */    MCD::OPC_FilterValue, 176, 1, 9, 0, // Skip to: 1549
/* 1540 */    MCD::OPC_CheckPredicate, 20, 211, 8, // Skip to: 3803
/* 1544 */    MCD::OPC_Decode, 182, 9, 132, 1, // Opcode: FMUL_S_MMR6
/* 1549 */    MCD::OPC_FilterValue, 184, 1, 9, 0, // Skip to: 1563
/* 1554 */    MCD::OPC_CheckPredicate, 18, 197, 8, // Skip to: 3803
/* 1558 */    MCD::OPC_Decode, 204, 16, 137, 1, // Opcode: SEL_S_MMR6
/* 1563 */    MCD::OPC_FilterValue, 197, 1, 9, 0, // Skip to: 1577
/* 1568 */    MCD::OPC_CheckPredicate, 20, 183, 8, // Skip to: 3803
/* 1572 */    MCD::OPC_Decode, 177, 5, 129, 1, // Opcode: CMP_UEQ_S_MMR6
/* 1577 */    MCD::OPC_FilterValue, 213, 1, 9, 0, // Skip to: 1591
/* 1582 */    MCD::OPC_CheckPredicate, 20, 169, 8, // Skip to: 3803
/* 1586 */    MCD::OPC_Decode, 175, 5, 130, 1, // Opcode: CMP_UEQ_D_MMR6
/* 1591 */    MCD::OPC_FilterValue, 240, 1, 9, 0, // Skip to: 1605
/* 1596 */    MCD::OPC_CheckPredicate, 20, 155, 8, // Skip to: 3803
/* 1600 */    MCD::OPC_Decode, 245, 8, 132, 1, // Opcode: FDIV_S_MMR6
/* 1605 */    MCD::OPC_FilterValue, 133, 2, 9, 0, // Skip to: 1619
/* 1610 */    MCD::OPC_CheckPredicate, 20, 141, 8, // Skip to: 3803
/* 1614 */    MCD::OPC_Decode, 141, 5, 129, 1, // Opcode: CMP_LT_S_MMR6
/* 1619 */    MCD::OPC_FilterValue, 149, 2, 9, 0, // Skip to: 1633
/* 1624 */    MCD::OPC_CheckPredicate, 20, 127, 8, // Skip to: 3803
/* 1628 */    MCD::OPC_Decode, 137, 5, 130, 1, // Opcode: CMP_LT_D_MMR6
/* 1633 */    MCD::OPC_FilterValue, 176, 2, 9, 0, // Skip to: 1647
/* 1638 */    MCD::OPC_CheckPredicate, 20, 113, 8, // Skip to: 3803
/* 1642 */    MCD::OPC_Decode, 203, 8, 138, 1, // Opcode: FADD_D_MMR6
/* 1647 */    MCD::OPC_FilterValue, 187, 2, 54, 0, // Skip to: 1706
/* 1652 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1655 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1668
/* 1659 */    MCD::OPC_CheckPredicate, 20, 92, 8, // Skip to: 3803
/* 1663 */    MCD::OPC_Decode, 219, 5, 139, 1, // Opcode: CVT_L_S_MMR6
/* 1668 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1680
/* 1672 */    MCD::OPC_CheckPredicate, 20, 79, 8, // Skip to: 3803
/* 1676 */    MCD::OPC_Decode, 235, 5, 98, // Opcode: CVT_W_S_MMR6
/* 1680 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1693
/* 1684 */    MCD::OPC_CheckPredicate, 20, 67, 8, // Skip to: 3803
/* 1688 */    MCD::OPC_Decode, 216, 5, 140, 1, // Opcode: CVT_L_D_MMR6
/* 1693 */    MCD::OPC_FilterValue, 9, 58, 8, // Skip to: 3803
/* 1697 */    MCD::OPC_CheckPredicate, 20, 54, 8, // Skip to: 3803
/* 1701 */    MCD::OPC_Decode, 231, 5, 141, 1, // Opcode: CVT_W_D_MMR6
/* 1706 */    MCD::OPC_FilterValue, 197, 2, 9, 0, // Skip to: 1720
/* 1711 */    MCD::OPC_CheckPredicate, 20, 40, 8, // Skip to: 3803
/* 1715 */    MCD::OPC_Decode, 185, 5, 129, 1, // Opcode: CMP_ULT_S_MMR6
/* 1720 */    MCD::OPC_FilterValue, 213, 2, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 20, 26, 8, // Skip to: 3803
/* 1729 */    MCD::OPC_Decode, 183, 5, 130, 1, // Opcode: CMP_ULT_D_MMR6
/* 1734 */    MCD::OPC_FilterValue, 240, 2, 9, 0, // Skip to: 1748
/* 1739 */    MCD::OPC_CheckPredicate, 20, 12, 8, // Skip to: 3803
/* 1743 */    MCD::OPC_Decode, 220, 9, 138, 1, // Opcode: FSUB_D_MMR6
/* 1748 */    MCD::OPC_FilterValue, 133, 3, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 20, 254, 7, // Skip to: 3803
/* 1757 */    MCD::OPC_Decode, 135, 5, 129, 1, // Opcode: CMP_LE_S_MMR6
/* 1762 */    MCD::OPC_FilterValue, 149, 3, 9, 0, // Skip to: 1776
/* 1767 */    MCD::OPC_CheckPredicate, 20, 240, 7, // Skip to: 3803
/* 1771 */    MCD::OPC_Decode, 131, 5, 130, 1, // Opcode: CMP_LE_D_MMR6
/* 1776 */    MCD::OPC_FilterValue, 176, 3, 9, 0, // Skip to: 1790
/* 1781 */    MCD::OPC_CheckPredicate, 20, 226, 7, // Skip to: 3803
/* 1785 */    MCD::OPC_Decode, 178, 9, 138, 1, // Opcode: FMUL_D_MMR6
/* 1790 */    MCD::OPC_FilterValue, 184, 3, 9, 0, // Skip to: 1804
/* 1795 */    MCD::OPC_CheckPredicate, 20, 212, 7, // Skip to: 3803
/* 1799 */    MCD::OPC_Decode, 249, 11, 142, 1, // Opcode: MADDF_S_MMR6
/* 1804 */    MCD::OPC_FilterValue, 197, 3, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 20, 198, 7, // Skip to: 3803
/* 1813 */    MCD::OPC_Decode, 181, 5, 129, 1, // Opcode: CMP_ULE_S_MMR6
/* 1818 */    MCD::OPC_FilterValue, 213, 3, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 20, 184, 7, // Skip to: 3803
/* 1827 */    MCD::OPC_Decode, 179, 5, 130, 1, // Opcode: CMP_ULE_D_MMR6
/* 1832 */    MCD::OPC_FilterValue, 240, 3, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 20, 170, 7, // Skip to: 3803
/* 1841 */    MCD::OPC_Decode, 241, 8, 138, 1, // Opcode: FDIV_D_MMR6
/* 1846 */    MCD::OPC_FilterValue, 248, 3, 9, 0, // Skip to: 1860
/* 1851 */    MCD::OPC_CheckPredicate, 20, 156, 7, // Skip to: 3803
/* 1855 */    MCD::OPC_Decode, 173, 13, 142, 1, // Opcode: MSUBF_S_MMR6
/* 1860 */    MCD::OPC_FilterValue, 131, 4, 9, 0, // Skip to: 1874
/* 1865 */    MCD::OPC_CheckPredicate, 20, 142, 7, // Skip to: 3803
/* 1869 */    MCD::OPC_Decode, 222, 12, 143, 1, // Opcode: MIN_D_MMR6
/* 1874 */    MCD::OPC_FilterValue, 133, 4, 9, 0, // Skip to: 1888
/* 1879 */    MCD::OPC_CheckPredicate, 20, 128, 7, // Skip to: 3803
/* 1883 */    MCD::OPC_Decode, 145, 5, 129, 1, // Opcode: CMP_SAF_S_MMR6
/* 1888 */    MCD::OPC_FilterValue, 139, 4, 9, 0, // Skip to: 1902
/* 1893 */    MCD::OPC_CheckPredicate, 20, 114, 7, // Skip to: 3803
/* 1897 */    MCD::OPC_Decode, 167, 12, 143, 1, // Opcode: MAX_D_MMR6
/* 1902 */    MCD::OPC_FilterValue, 149, 4, 9, 0, // Skip to: 1916
/* 1907 */    MCD::OPC_CheckPredicate, 20, 100, 7, // Skip to: 3803
/* 1911 */    MCD::OPC_Decode, 143, 5, 130, 1, // Opcode: CMP_SAF_D_MMR6
/* 1916 */    MCD::OPC_FilterValue, 160, 4, 15, 0, // Skip to: 1936
/* 1921 */    MCD::OPC_CheckPredicate, 18, 86, 7, // Skip to: 3803
/* 1925 */    MCD::OPC_CheckField, 11, 5, 0, 80, 7, // Skip to: 3803
/* 1931 */    MCD::OPC_Decode, 224, 15, 144, 1, // Opcode: RINT_D_MMR6
/* 1936 */    MCD::OPC_FilterValue, 163, 4, 9, 0, // Skip to: 1950
/* 1941 */    MCD::OPC_CheckPredicate, 20, 66, 7, // Skip to: 3803
/* 1945 */    MCD::OPC_Decode, 206, 12, 143, 1, // Opcode: MINA_D_MMR6
/* 1950 */    MCD::OPC_FilterValue, 171, 4, 9, 0, // Skip to: 1964
/* 1955 */    MCD::OPC_CheckPredicate, 20, 52, 7, // Skip to: 3803
/* 1959 */    MCD::OPC_Decode, 151, 12, 143, 1, // Opcode: MAXA_D_MMR6
/* 1964 */    MCD::OPC_FilterValue, 184, 4, 9, 0, // Skip to: 1978
/* 1969 */    MCD::OPC_CheckPredicate, 18, 38, 7, // Skip to: 3803
/* 1973 */    MCD::OPC_Decode, 190, 16, 143, 1, // Opcode: SELEQZ_D_MMR6
/* 1978 */    MCD::OPC_FilterValue, 187, 4, 27, 0, // Skip to: 2010
/* 1983 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1986 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1998
/* 1990 */    MCD::OPC_CheckPredicate, 20, 17, 7, // Skip to: 3803
/* 1994 */    MCD::OPC_Decode, 196, 17, 98, // Opcode: SQRT_S_MMR6
/* 1998 */    MCD::OPC_FilterValue, 9, 9, 7, // Skip to: 3803
/* 2002 */    MCD::OPC_CheckPredicate, 20, 5, 7, // Skip to: 3803
/* 2006 */    MCD::OPC_Decode, 195, 17, 99, // Opcode: SQRT_D_MMR6
/* 2010 */    MCD::OPC_FilterValue, 197, 4, 9, 0, // Skip to: 2024
/* 2015 */    MCD::OPC_CheckPredicate, 20, 248, 6, // Skip to: 3803
/* 2019 */    MCD::OPC_Decode, 173, 5, 129, 1, // Opcode: CMP_SUN_S_MMR6
/* 2024 */    MCD::OPC_FilterValue, 213, 4, 9, 0, // Skip to: 2038
/* 2029 */    MCD::OPC_CheckPredicate, 20, 234, 6, // Skip to: 3803
/* 2033 */    MCD::OPC_Decode, 171, 5, 130, 1, // Opcode: CMP_SUN_D_MMR6
/* 2038 */    MCD::OPC_FilterValue, 224, 4, 15, 0, // Skip to: 2058
/* 2043 */    MCD::OPC_CheckPredicate, 18, 220, 6, // Skip to: 3803
/* 2047 */    MCD::OPC_CheckField, 11, 5, 0, 214, 6, // Skip to: 3803
/* 2053 */    MCD::OPC_Decode, 187, 4, 144, 1, // Opcode: CLASS_D_MMR6
/* 2058 */    MCD::OPC_FilterValue, 248, 4, 9, 0, // Skip to: 2072
/* 2063 */    MCD::OPC_CheckPredicate, 18, 200, 6, // Skip to: 3803
/* 2067 */    MCD::OPC_Decode, 197, 16, 143, 1, // Opcode: SELNEZ_D_MMR6
/* 2072 */    MCD::OPC_FilterValue, 133, 5, 9, 0, // Skip to: 2086
/* 2077 */    MCD::OPC_CheckPredicate, 20, 186, 6, // Skip to: 3803
/* 2081 */    MCD::OPC_Decode, 149, 5, 129, 1, // Opcode: CMP_SEQ_S_MMR6
/* 2086 */    MCD::OPC_FilterValue, 149, 5, 9, 0, // Skip to: 2100
/* 2091 */    MCD::OPC_CheckPredicate, 20, 172, 6, // Skip to: 3803
/* 2095 */    MCD::OPC_Decode, 147, 5, 130, 1, // Opcode: CMP_SEQ_D_MMR6
/* 2100 */    MCD::OPC_FilterValue, 184, 5, 9, 0, // Skip to: 2114
/* 2105 */    MCD::OPC_CheckPredicate, 18, 158, 6, // Skip to: 3803
/* 2109 */    MCD::OPC_Decode, 202, 16, 145, 1, // Opcode: SEL_D_MMR6
/* 2114 */    MCD::OPC_FilterValue, 197, 5, 9, 0, // Skip to: 2128
/* 2119 */    MCD::OPC_CheckPredicate, 20, 144, 6, // Skip to: 3803
/* 2123 */    MCD::OPC_Decode, 161, 5, 129, 1, // Opcode: CMP_SUEQ_S_MMR6
/* 2128 */    MCD::OPC_FilterValue, 213, 5, 9, 0, // Skip to: 2142
/* 2133 */    MCD::OPC_CheckPredicate, 20, 130, 6, // Skip to: 3803
/* 2137 */    MCD::OPC_Decode, 159, 5, 130, 1, // Opcode: CMP_SUEQ_D_MMR6
/* 2142 */    MCD::OPC_FilterValue, 133, 6, 9, 0, // Skip to: 2156
/* 2147 */    MCD::OPC_CheckPredicate, 20, 116, 6, // Skip to: 3803
/* 2151 */    MCD::OPC_Decode, 157, 5, 129, 1, // Opcode: CMP_SLT_S_MMR6
/* 2156 */    MCD::OPC_FilterValue, 149, 6, 9, 0, // Skip to: 2170
/* 2161 */    MCD::OPC_CheckPredicate, 20, 102, 6, // Skip to: 3803
/* 2165 */    MCD::OPC_Decode, 155, 5, 130, 1, // Opcode: CMP_SLT_D_MMR6
/* 2170 */    MCD::OPC_FilterValue, 187, 6, 207, 0, // Skip to: 2382
/* 2175 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2178 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2191
/* 2182 */    MCD::OPC_CheckPredicate, 20, 81, 6, // Skip to: 3803
/* 2186 */    MCD::OPC_Decode, 148, 9, 139, 1, // Opcode: FLOOR_L_S_MMR6
/* 2191 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2203
/* 2195 */    MCD::OPC_CheckPredicate, 20, 68, 6, // Skip to: 3803
/* 2199 */    MCD::OPC_Decode, 155, 9, 98, // Opcode: FLOOR_W_S_MMR6
/* 2203 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2216
/* 2207 */    MCD::OPC_CheckPredicate, 20, 56, 6, // Skip to: 3803
/* 2211 */    MCD::OPC_Decode, 162, 4, 139, 1, // Opcode: CEIL_L_S_MMR6
/* 2216 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2228
/* 2220 */    MCD::OPC_CheckPredicate, 20, 43, 6, // Skip to: 3803
/* 2224 */    MCD::OPC_Decode, 169, 4, 98, // Opcode: CEIL_W_S_MMR6
/* 2228 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2241
/* 2232 */    MCD::OPC_CheckPredicate, 20, 31, 6, // Skip to: 3803
/* 2236 */    MCD::OPC_Decode, 188, 19, 139, 1, // Opcode: TRUNC_L_S_MMR6
/* 2241 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2253
/* 2245 */    MCD::OPC_CheckPredicate, 20, 18, 6, // Skip to: 3803
/* 2249 */    MCD::OPC_Decode, 195, 19, 98, // Opcode: TRUNC_W_S_MMR6
/* 2253 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2266
/* 2257 */    MCD::OPC_CheckPredicate, 20, 6, 6, // Skip to: 3803
/* 2261 */    MCD::OPC_Decode, 238, 15, 139, 1, // Opcode: ROUND_L_S_MMR6
/* 2266 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2278
/* 2270 */    MCD::OPC_CheckPredicate, 20, 249, 5, // Skip to: 3803
/* 2274 */    MCD::OPC_Decode, 245, 15, 98, // Opcode: ROUND_W_S_MMR6
/* 2278 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2291
/* 2282 */    MCD::OPC_CheckPredicate, 20, 237, 5, // Skip to: 3803
/* 2286 */    MCD::OPC_Decode, 146, 9, 140, 1, // Opcode: FLOOR_L_D_MMR6
/* 2291 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2304
/* 2295 */    MCD::OPC_CheckPredicate, 20, 224, 5, // Skip to: 3803
/* 2299 */    MCD::OPC_Decode, 151, 9, 141, 1, // Opcode: FLOOR_W_D_MMR6
/* 2304 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2317
/* 2308 */    MCD::OPC_CheckPredicate, 20, 211, 5, // Skip to: 3803
/* 2312 */    MCD::OPC_Decode, 160, 4, 140, 1, // Opcode: CEIL_L_D_MMR6
/* 2317 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2330
/* 2321 */    MCD::OPC_CheckPredicate, 20, 198, 5, // Skip to: 3803
/* 2325 */    MCD::OPC_Decode, 165, 4, 141, 1, // Opcode: CEIL_W_D_MMR6
/* 2330 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2343
/* 2334 */    MCD::OPC_CheckPredicate, 20, 185, 5, // Skip to: 3803
/* 2338 */    MCD::OPC_Decode, 186, 19, 140, 1, // Opcode: TRUNC_L_D_MMR6
/* 2343 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2356
/* 2347 */    MCD::OPC_CheckPredicate, 20, 172, 5, // Skip to: 3803
/* 2351 */    MCD::OPC_Decode, 191, 19, 141, 1, // Opcode: TRUNC_W_D_MMR6
/* 2356 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2369
/* 2360 */    MCD::OPC_CheckPredicate, 20, 159, 5, // Skip to: 3803
/* 2364 */    MCD::OPC_Decode, 236, 15, 140, 1, // Opcode: ROUND_L_D_MMR6
/* 2369 */    MCD::OPC_FilterValue, 15, 150, 5, // Skip to: 3803
/* 2373 */    MCD::OPC_CheckPredicate, 20, 146, 5, // Skip to: 3803
/* 2377 */    MCD::OPC_Decode, 241, 15, 140, 1, // Opcode: ROUND_W_D_MMR6
/* 2382 */    MCD::OPC_FilterValue, 197, 6, 9, 0, // Skip to: 2396
/* 2387 */    MCD::OPC_CheckPredicate, 20, 132, 5, // Skip to: 3803
/* 2391 */    MCD::OPC_Decode, 169, 5, 129, 1, // Opcode: CMP_SULT_S_MMR6
/* 2396 */    MCD::OPC_FilterValue, 213, 6, 9, 0, // Skip to: 2410
/* 2401 */    MCD::OPC_CheckPredicate, 20, 118, 5, // Skip to: 3803
/* 2405 */    MCD::OPC_Decode, 167, 5, 130, 1, // Opcode: CMP_SULT_D_MMR6
/* 2410 */    MCD::OPC_FilterValue, 251, 6, 126, 0, // Skip to: 2541
/* 2415 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2418 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2429
/* 2422 */    MCD::OPC_CheckPredicate, 20, 97, 5, // Skip to: 3803
/* 2426 */    MCD::OPC_Decode, 110, 98, // Opcode: ABS_S_MMR6
/* 2429 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2441
/* 2433 */    MCD::OPC_CheckPredicate, 20, 86, 5, // Skip to: 3803
/* 2437 */    MCD::OPC_Decode, 190, 9, 98, // Opcode: FNEG_S_MMR6
/* 2441 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2454
/* 2445 */    MCD::OPC_CheckPredicate, 20, 74, 5, // Skip to: 3803
/* 2449 */    MCD::OPC_Decode, 212, 5, 141, 1, // Opcode: CVT_D_S_MMR6
/* 2454 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2467
/* 2458 */    MCD::OPC_CheckPredicate, 20, 61, 5, // Skip to: 3803
/* 2462 */    MCD::OPC_Decode, 223, 5, 146, 1, // Opcode: CVT_S_D_MMR6
/* 2467 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2478
/* 2471 */    MCD::OPC_CheckPredicate, 20, 48, 5, // Skip to: 3803
/* 2475 */    MCD::OPC_Decode, 109, 99, // Opcode: ABS_D_MMR6
/* 2478 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2490
/* 2482 */    MCD::OPC_CheckPredicate, 20, 37, 5, // Skip to: 3803
/* 2486 */    MCD::OPC_Decode, 186, 9, 99, // Opcode: FNEG_D_MMR6
/* 2490 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2503
/* 2494 */    MCD::OPC_CheckPredicate, 20, 25, 5, // Skip to: 3803
/* 2498 */    MCD::OPC_Decode, 213, 5, 141, 1, // Opcode: CVT_D_W_MMR6
/* 2503 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2515
/* 2507 */    MCD::OPC_CheckPredicate, 20, 12, 5, // Skip to: 3803
/* 2511 */    MCD::OPC_Decode, 228, 5, 98, // Opcode: CVT_S_W_MMR6
/* 2515 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2528
/* 2519 */    MCD::OPC_CheckPredicate, 16, 0, 5, // Skip to: 3803
/* 2523 */    MCD::OPC_Decode, 210, 5, 140, 1, // Opcode: CVT_D_L_MMR6
/* 2528 */    MCD::OPC_FilterValue, 11, 247, 4, // Skip to: 3803
/* 2532 */    MCD::OPC_CheckPredicate, 16, 243, 4, // Skip to: 3803
/* 2536 */    MCD::OPC_Decode, 225, 5, 139, 1, // Opcode: CVT_S_L_MMR6
/* 2541 */    MCD::OPC_FilterValue, 133, 7, 9, 0, // Skip to: 2555
/* 2546 */    MCD::OPC_CheckPredicate, 20, 229, 4, // Skip to: 3803
/* 2550 */    MCD::OPC_Decode, 153, 5, 129, 1, // Opcode: CMP_SLE_S_MMR6
/* 2555 */    MCD::OPC_FilterValue, 149, 7, 9, 0, // Skip to: 2569
/* 2560 */    MCD::OPC_CheckPredicate, 20, 215, 4, // Skip to: 3803
/* 2564 */    MCD::OPC_Decode, 151, 5, 130, 1, // Opcode: CMP_SLE_D_MMR6
/* 2569 */    MCD::OPC_FilterValue, 184, 7, 9, 0, // Skip to: 2583
/* 2574 */    MCD::OPC_CheckPredicate, 20, 201, 4, // Skip to: 3803
/* 2578 */    MCD::OPC_Decode, 247, 11, 145, 1, // Opcode: MADDF_D_MMR6
/* 2583 */    MCD::OPC_FilterValue, 197, 7, 9, 0, // Skip to: 2597
/* 2588 */    MCD::OPC_CheckPredicate, 20, 187, 4, // Skip to: 3803
/* 2592 */    MCD::OPC_Decode, 165, 5, 129, 1, // Opcode: CMP_SULE_S_MMR6
/* 2597 */    MCD::OPC_FilterValue, 213, 7, 9, 0, // Skip to: 2611
/* 2602 */    MCD::OPC_CheckPredicate, 20, 173, 4, // Skip to: 3803
/* 2606 */    MCD::OPC_Decode, 163, 5, 130, 1, // Opcode: CMP_SULE_D_MMR6
/* 2611 */    MCD::OPC_FilterValue, 248, 7, 9, 0, // Skip to: 2625
/* 2616 */    MCD::OPC_CheckPredicate, 20, 159, 4, // Skip to: 3803
/* 2620 */    MCD::OPC_Decode, 171, 13, 145, 1, // Opcode: MSUBF_D_MMR6
/* 2625 */    MCD::OPC_FilterValue, 187, 8, 149, 4, // Skip to: 3803
/* 2630 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2633 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2646
/* 2637 */    MCD::OPC_CheckPredicate, 19, 138, 4, // Skip to: 3803
/* 2641 */    MCD::OPC_Decode, 144, 7, 147, 1, // Opcode: DMFC1_MM64R6
/* 2646 */    MCD::OPC_FilterValue, 5, 129, 4, // Skip to: 3803
/* 2650 */    MCD::OPC_CheckPredicate, 19, 125, 4, // Skip to: 3803
/* 2654 */    MCD::OPC_Decode, 156, 7, 148, 1, // Opcode: DMTC1_MM64R6
/* 2659 */    MCD::OPC_FilterValue, 22, 62, 2, // Skip to: 3237
/* 2663 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2666 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 2725
/* 2670 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2673 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2686
/* 2677 */    MCD::OPC_CheckPredicate, 19, 98, 4, // Skip to: 3803
/* 2681 */    MCD::OPC_Decode, 249, 7, 149, 1, // Opcode: DSLL_MM64R6
/* 2686 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2699
/* 2690 */    MCD::OPC_CheckPredicate, 19, 85, 4, // Skip to: 3803
/* 2694 */    MCD::OPC_Decode, 133, 8, 149, 1, // Opcode: DSRL_MM64R6
/* 2699 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2712
/* 2703 */    MCD::OPC_CheckPredicate, 19, 72, 4, // Skip to: 3803
/* 2707 */    MCD::OPC_Decode, 255, 7, 149, 1, // Opcode: DSRA_MM64R6
/* 2712 */    MCD::OPC_FilterValue, 3, 63, 4, // Skip to: 3803
/* 2716 */    MCD::OPC_CheckPredicate, 19, 59, 4, // Skip to: 3803
/* 2720 */    MCD::OPC_Decode, 235, 7, 149, 1, // Opcode: DROTR_MM64R6
/* 2725 */    MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 2768
/* 2729 */    MCD::OPC_CheckPredicate, 19, 11, 0, // Skip to: 2744
/* 2733 */    MCD::OPC_CheckField, 6, 5, 2, 5, 0, // Skip to: 2744
/* 2739 */    MCD::OPC_Decode, 252, 7, 149, 1, // Opcode: DSRA32_MM64R6
/* 2744 */    MCD::OPC_CheckPredicate, 19, 11, 0, // Skip to: 2759
/* 2748 */    MCD::OPC_CheckField, 6, 3, 4, 5, 0, // Skip to: 2759
/* 2754 */    MCD::OPC_Decode, 139, 7, 150, 1, // Opcode: DLSA_MM64R6
/* 2759 */    MCD::OPC_CheckPredicate, 19, 16, 4, // Skip to: 3803
/* 2763 */    MCD::OPC_Decode, 248, 6, 151, 1, // Opcode: DINSM_MM64R6
/* 2768 */    MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 2814
/* 2772 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2775 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2788
/* 2779 */    MCD::OPC_CheckPredicate, 19, 252, 3, // Skip to: 3803
/* 2783 */    MCD::OPC_Decode, 245, 7, 149, 1, // Opcode: DSLL32_MM64R6
/* 2788 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2801
/* 2792 */    MCD::OPC_CheckPredicate, 19, 239, 3, // Skip to: 3803
/* 2796 */    MCD::OPC_Decode, 130, 8, 149, 1, // Opcode: DSRL32_MM64R6
/* 2801 */    MCD::OPC_FilterValue, 3, 230, 3, // Skip to: 3803
/* 2805 */    MCD::OPC_CheckPredicate, 19, 226, 3, // Skip to: 3803
/* 2809 */    MCD::OPC_Decode, 232, 7, 149, 1, // Opcode: DROTR32_MM64R6
/* 2814 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2827
/* 2818 */    MCD::OPC_CheckPredicate, 19, 213, 3, // Skip to: 3803
/* 2822 */    MCD::OPC_Decode, 251, 6, 151, 1, // Opcode: DINS_MM64R6
/* 2827 */    MCD::OPC_FilterValue, 16, 107, 0, // Skip to: 2938
/* 2831 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2834 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2847
/* 2838 */    MCD::OPC_CheckPredicate, 19, 193, 3, // Skip to: 3803
/* 2842 */    MCD::OPC_Decode, 248, 7, 152, 1, // Opcode: DSLLV_MM64R6
/* 2847 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2860
/* 2851 */    MCD::OPC_CheckPredicate, 19, 180, 3, // Skip to: 3803
/* 2855 */    MCD::OPC_Decode, 132, 8, 152, 1, // Opcode: DSRLV_MM64R6
/* 2860 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2873
/* 2864 */    MCD::OPC_CheckPredicate, 19, 167, 3, // Skip to: 3803
/* 2868 */    MCD::OPC_Decode, 254, 7, 152, 1, // Opcode: DSRAV_MM64R6
/* 2873 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2886
/* 2877 */    MCD::OPC_CheckPredicate, 19, 154, 3, // Skip to: 3803
/* 2881 */    MCD::OPC_Decode, 234, 7, 152, 1, // Opcode: DROTRV_MM64R6
/* 2886 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2899
/* 2890 */    MCD::OPC_CheckPredicate, 19, 141, 3, // Skip to: 3803
/* 2894 */    MCD::OPC_Decode, 211, 6, 153, 1, // Opcode: DADD_MM64R6
/* 2899 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2912
/* 2903 */    MCD::OPC_CheckPredicate, 19, 128, 3, // Skip to: 3803
/* 2907 */    MCD::OPC_Decode, 210, 6, 153, 1, // Opcode: DADDU_MM64R6
/* 2912 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2925
/* 2916 */    MCD::OPC_CheckPredicate, 19, 115, 3, // Skip to: 3803
/* 2920 */    MCD::OPC_Decode, 136, 8, 153, 1, // Opcode: DSUB_MM64R6
/* 2925 */    MCD::OPC_FilterValue, 7, 106, 3, // Skip to: 3803
/* 2929 */    MCD::OPC_CheckPredicate, 19, 102, 3, // Skip to: 3803
/* 2933 */    MCD::OPC_Decode, 135, 8, 153, 1, // Opcode: DSUBU_MM64R6
/* 2938 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 2951
/* 2942 */    MCD::OPC_CheckPredicate, 19, 89, 3, // Skip to: 3803
/* 2946 */    MCD::OPC_Decode, 243, 6, 154, 1, // Opcode: DEXTU_MM64R6
/* 2951 */    MCD::OPC_FilterValue, 24, 107, 0, // Skip to: 3062
/* 2955 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2958 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2971
/* 2962 */    MCD::OPC_CheckPredicate, 19, 69, 3, // Skip to: 3803
/* 2966 */    MCD::OPC_Decode, 173, 7, 153, 1, // Opcode: DMUL_MM64R6
/* 2971 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2984
/* 2975 */    MCD::OPC_CheckPredicate, 19, 56, 3, // Skip to: 3803
/* 2979 */    MCD::OPC_Decode, 163, 7, 153, 1, // Opcode: DMUH_MM64R6
/* 2984 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2997
/* 2988 */    MCD::OPC_CheckPredicate, 19, 43, 3, // Skip to: 3803
/* 2992 */    MCD::OPC_Decode, 172, 7, 153, 1, // Opcode: DMULU_MM64R6
/* 2997 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 3010
/* 3001 */    MCD::OPC_CheckPredicate, 19, 30, 3, // Skip to: 3803
/* 3005 */    MCD::OPC_Decode, 162, 7, 153, 1, // Opcode: DMUHU_MM64R6
/* 3010 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3023
/* 3014 */    MCD::OPC_CheckPredicate, 19, 17, 3, // Skip to: 3803
/* 3018 */    MCD::OPC_Decode, 234, 6, 153, 1, // Opcode: DDIV_MM64R6
/* 3023 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3036
/* 3027 */    MCD::OPC_CheckPredicate, 19, 4, 3, // Skip to: 3803
/* 3031 */    MCD::OPC_Decode, 151, 7, 153, 1, // Opcode: DMOD_MM64R6
/* 3036 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3049
/* 3040 */    MCD::OPC_CheckPredicate, 19, 247, 2, // Skip to: 3803
/* 3044 */    MCD::OPC_Decode, 233, 6, 153, 1, // Opcode: DDIVU_MM64R6
/* 3049 */    MCD::OPC_FilterValue, 7, 238, 2, // Skip to: 3803
/* 3053 */    MCD::OPC_CheckPredicate, 19, 234, 2, // Skip to: 3803
/* 3057 */    MCD::OPC_Decode, 150, 7, 153, 1, // Opcode: DMODU_MM64R6
/* 3062 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 3081
/* 3066 */    MCD::OPC_CheckPredicate, 19, 221, 2, // Skip to: 3803
/* 3070 */    MCD::OPC_CheckField, 6, 2, 0, 215, 2, // Skip to: 3803
/* 3076 */    MCD::OPC_Decode, 218, 6, 155, 1, // Opcode: DALIGN_MM64R6
/* 3081 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 3094
/* 3085 */    MCD::OPC_CheckPredicate, 19, 202, 2, // Skip to: 3803
/* 3089 */    MCD::OPC_Decode, 241, 6, 154, 1, // Opcode: DEXTM_MM64R6
/* 3094 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 3107
/* 3098 */    MCD::OPC_CheckPredicate, 19, 189, 2, // Skip to: 3803
/* 3102 */    MCD::OPC_Decode, 244, 6, 154, 1, // Opcode: DEXT_MM64R6
/* 3107 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 3120
/* 3111 */    MCD::OPC_CheckPredicate, 19, 176, 2, // Skip to: 3803
/* 3115 */    MCD::OPC_Decode, 250, 6, 151, 1, // Opcode: DINSU_MM64R6
/* 3120 */    MCD::OPC_FilterValue, 60, 167, 2, // Skip to: 3803
/* 3124 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3127 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 3146
/* 3131 */    MCD::OPC_CheckPredicate, 19, 156, 2, // Skip to: 3803
/* 3135 */    MCD::OPC_CheckField, 14, 2, 0, 150, 2, // Skip to: 3803
/* 3141 */    MCD::OPC_Decode, 142, 7, 156, 1, // Opcode: DMFC0_MM64R6
/* 3146 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 3165
/* 3150 */    MCD::OPC_CheckPredicate, 19, 137, 2, // Skip to: 3803
/* 3154 */    MCD::OPC_CheckField, 14, 2, 0, 131, 2, // Skip to: 3803
/* 3160 */    MCD::OPC_Decode, 154, 7, 157, 1, // Opcode: DMTC0_MM64R6
/* 3165 */    MCD::OPC_FilterValue, 12, 122, 2, // Skip to: 3803
/* 3169 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3172 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3185
/* 3176 */    MCD::OPC_CheckPredicate, 19, 111, 2, // Skip to: 3803
/* 3180 */    MCD::OPC_Decode, 224, 6, 158, 1, // Opcode: DBITSWAP_MM64R6
/* 3185 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 3198
/* 3189 */    MCD::OPC_CheckPredicate, 19, 98, 2, // Skip to: 3803
/* 3193 */    MCD::OPC_Decode, 226, 6, 159, 1, // Opcode: DCLO_MM64R6
/* 3198 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 3211
/* 3202 */    MCD::OPC_CheckPredicate, 19, 85, 2, // Skip to: 3803
/* 3206 */    MCD::OPC_Decode, 229, 6, 159, 1, // Opcode: DCLZ_MM64R6
/* 3211 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 3224
/* 3215 */    MCD::OPC_CheckPredicate, 19, 72, 2, // Skip to: 3803
/* 3219 */    MCD::OPC_Decode, 237, 7, 159, 1, // Opcode: DSBH_MM64R6
/* 3224 */    MCD::OPC_FilterValue, 31, 63, 2, // Skip to: 3803
/* 3228 */    MCD::OPC_CheckPredicate, 19, 59, 2, // Skip to: 3803
/* 3232 */    MCD::OPC_Decode, 242, 7, 159, 1, // Opcode: DSHD_MM64R6
/* 3237 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 3250
/* 3241 */    MCD::OPC_CheckPredicate, 19, 46, 2, // Skip to: 3803
/* 3245 */    MCD::OPC_Decode, 209, 6, 160, 1, // Opcode: DADDIU_MM64R6
/* 3250 */    MCD::OPC_FilterValue, 24, 178, 0, // Skip to: 3432
/* 3254 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3257 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 18, 26, 2, // Skip to: 3803
/* 3265 */    MCD::OPC_Decode, 144, 15, 86, // Opcode: PREF_MMR6
/* 3269 */    MCD::OPC_FilterValue, 6, 53, 0, // Skip to: 3326
/* 3273 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3276 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3289
/* 3280 */    MCD::OPC_CheckPredicate, 18, 7, 2, // Skip to: 3803
/* 3284 */    MCD::OPC_Decode, 223, 10, 161, 1, // Opcode: LBUE_MMR6
/* 3289 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3302
/* 3293 */    MCD::OPC_CheckPredicate, 18, 250, 1, // Skip to: 3803
/* 3297 */    MCD::OPC_Decode, 221, 10, 161, 1, // Opcode: LBE_MMR6
/* 3302 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3314
/* 3306 */    MCD::OPC_CheckPredicate, 18, 237, 1, // Skip to: 3803
/* 3310 */    MCD::OPC_Decode, 158, 11, 100, // Opcode: LLE_MMR6
/* 3314 */    MCD::OPC_FilterValue, 7, 229, 1, // Skip to: 3803
/* 3318 */    MCD::OPC_CheckPredicate, 18, 225, 1, // Skip to: 3803
/* 3322 */    MCD::OPC_Decode, 189, 11, 100, // Opcode: LWE_MMR6
/* 3326 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3338
/* 3330 */    MCD::OPC_CheckPredicate, 19, 213, 1, // Skip to: 3803
/* 3334 */    MCD::OPC_Decode, 154, 11, 85, // Opcode: LLD_MM64R6
/* 3338 */    MCD::OPC_FilterValue, 10, 78, 0, // Skip to: 3420
/* 3342 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3345 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3357
/* 3349 */    MCD::OPC_CheckPredicate, 18, 194, 1, // Skip to: 3803
/* 3353 */    MCD::OPC_Decode, 141, 15, 101, // Opcode: PREFE_MMR6
/* 3357 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3369
/* 3361 */    MCD::OPC_CheckPredicate, 18, 182, 1, // Skip to: 3803
/* 3365 */    MCD::OPC_Decode, 155, 4, 101, // Opcode: CACHEE_MMR6
/* 3369 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3382
/* 3373 */    MCD::OPC_CheckPredicate, 18, 170, 1, // Skip to: 3803
/* 3377 */    MCD::OPC_Decode, 140, 16, 162, 1, // Opcode: SBE_MMR6
/* 3382 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3395
/* 3386 */    MCD::OPC_CheckPredicate, 18, 157, 1, // Skip to: 3803
/* 3390 */    MCD::OPC_Decode, 215, 16, 162, 1, // Opcode: SHE_MMR6
/* 3395 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3408
/* 3399 */    MCD::OPC_CheckPredicate, 18, 144, 1, // Skip to: 3803
/* 3403 */    MCD::OPC_Decode, 150, 16, 162, 1, // Opcode: SCE_MMR6
/* 3408 */    MCD::OPC_FilterValue, 7, 135, 1, // Skip to: 3803
/* 3412 */    MCD::OPC_CheckPredicate, 18, 131, 1, // Skip to: 3803
/* 3416 */    MCD::OPC_Decode, 196, 18, 100, // Opcode: SWE_MMR6
/* 3420 */    MCD::OPC_FilterValue, 14, 123, 1, // Skip to: 3803
/* 3424 */    MCD::OPC_CheckPredicate, 19, 119, 1, // Skip to: 3803
/* 3428 */    MCD::OPC_Decode, 213, 11, 85, // Opcode: LWU_MM64R6
/* 3432 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3444
/* 3436 */    MCD::OPC_CheckPredicate, 18, 107, 1, // Skip to: 3803
/* 3440 */    MCD::OPC_Decode, 228, 19, 93, // Opcode: XORI_MMR6
/* 3444 */    MCD::OPC_FilterValue, 29, 24, 0, // Skip to: 3472
/* 3448 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 3463
/* 3452 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3463
/* 3458 */    MCD::OPC_Decode, 198, 2, 163, 1, // Opcode: BEQZALC_MMR6
/* 3463 */    MCD::OPC_CheckPredicate, 18, 80, 1, // Skip to: 3803
/* 3467 */    MCD::OPC_Decode, 193, 2, 163, 1, // Opcode: BEQC_MMR6
/* 3472 */    MCD::OPC_FilterValue, 30, 94, 0, // Skip to: 3570
/* 3476 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 3479 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 18, 60, 1, // Skip to: 3803
/* 3487 */    MCD::OPC_Decode, 114, 164, 1, // Opcode: ADDIUPC_MMR6
/* 3491 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3504
/* 3495 */    MCD::OPC_CheckPredicate, 18, 48, 1, // Skip to: 3803
/* 3499 */    MCD::OPC_Decode, 201, 11, 164, 1, // Opcode: LWPC_MMR6
/* 3504 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3517
/* 3508 */    MCD::OPC_CheckPredicate, 19, 35, 1, // Skip to: 3803
/* 3512 */    MCD::OPC_Decode, 211, 11, 165, 1, // Opcode: LWUPC_MM64R6
/* 3517 */    MCD::OPC_FilterValue, 3, 26, 1, // Skip to: 3803
/* 3521 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3537
/* 3528 */    MCD::OPC_CheckPredicate, 19, 15, 1, // Skip to: 3803
/* 3532 */    MCD::OPC_Decode, 250, 10, 166, 1, // Opcode: LDPC_MM64R6
/* 3537 */    MCD::OPC_FilterValue, 1, 6, 1, // Skip to: 3803
/* 3541 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 3544 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3557
/* 3548 */    MCD::OPC_CheckPredicate, 18, 251, 0, // Skip to: 3803
/* 3552 */    MCD::OPC_Decode, 252, 1, 167, 1, // Opcode: AUIPC_MMR6
/* 3557 */    MCD::OPC_FilterValue, 3, 242, 0, // Skip to: 3803
/* 3561 */    MCD::OPC_CheckPredicate, 18, 238, 0, // Skip to: 3803
/* 3565 */    MCD::OPC_Decode, 190, 1, 167, 1, // Opcode: ALUIPC_MMR6
/* 3570 */    MCD::OPC_FilterValue, 31, 24, 0, // Skip to: 3598
/* 3574 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 3589
/* 3578 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3589
/* 3584 */    MCD::OPC_Decode, 206, 3, 168, 1, // Opcode: BNEZALC_MMR6
/* 3589 */    MCD::OPC_CheckPredicate, 18, 210, 0, // Skip to: 3803
/* 3593 */    MCD::OPC_Decode, 193, 3, 168, 1, // Opcode: BNEC_MMR6
/* 3598 */    MCD::OPC_FilterValue, 32, 23, 0, // Skip to: 3625
/* 3602 */    MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 3616
/* 3606 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3616
/* 3612 */    MCD::OPC_Decode, 194, 10, 89, // Opcode: JIALC_MMR6
/* 3616 */    MCD::OPC_CheckPredicate, 18, 183, 0, // Skip to: 3803
/* 3620 */    MCD::OPC_Decode, 203, 2, 169, 1, // Opcode: BEQZC_MMR6
/* 3625 */    MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 3638
/* 3629 */    MCD::OPC_CheckPredicate, 18, 170, 0, // Skip to: 3803
/* 3633 */    MCD::OPC_Decode, 188, 2, 170, 1, // Opcode: BC_MMR6
/* 3638 */    MCD::OPC_FilterValue, 40, 23, 0, // Skip to: 3665
/* 3642 */    MCD::OPC_CheckPredicate, 18, 10, 0, // Skip to: 3656
/* 3646 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3656
/* 3652 */    MCD::OPC_Decode, 197, 10, 89, // Opcode: JIC_MMR6
/* 3656 */    MCD::OPC_CheckPredicate, 18, 143, 0, // Skip to: 3803
/* 3660 */    MCD::OPC_Decode, 211, 3, 169, 1, // Opcode: BNEZC_MMR6
/* 3665 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 3678
/* 3669 */    MCD::OPC_CheckPredicate, 18, 130, 0, // Skip to: 3803
/* 3673 */    MCD::OPC_Decode, 156, 2, 170, 1, // Opcode: BALC_MMR6
/* 3678 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3691
/* 3682 */    MCD::OPC_CheckPredicate, 18, 117, 0, // Skip to: 3803
/* 3686 */    MCD::OPC_Decode, 215, 2, 171, 1, // Opcode: BGEUC_MMR6
/* 3691 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 3703
/* 3695 */    MCD::OPC_CheckPredicate, 18, 104, 0, // Skip to: 3803
/* 3699 */    MCD::OPC_Decode, 198, 1, 93, // Opcode: ANDI_MMR6
/* 3703 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 3716
/* 3707 */    MCD::OPC_CheckPredicate, 18, 92, 0, // Skip to: 3803
/* 3711 */    MCD::OPC_Decode, 161, 3, 172, 1, // Opcode: BLTC_MMR6
/* 3716 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 3728
/* 3720 */    MCD::OPC_CheckPredicate, 19, 79, 0, // Skip to: 3803
/* 3724 */    MCD::OPC_Decode, 176, 16, 84, // Opcode: SD_MM64R6
/* 3728 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 3740
/* 3732 */    MCD::OPC_CheckPredicate, 19, 67, 0, // Skip to: 3803
/* 3736 */    MCD::OPC_Decode, 130, 11, 84, // Opcode: LD_MM64R6
/* 3740 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3753
/* 3744 */    MCD::OPC_CheckPredicate, 18, 55, 0, // Skip to: 3803
/* 3748 */    MCD::OPC_Decode, 168, 3, 173, 1, // Opcode: BLTUC_MMR6
/* 3753 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3766
/* 3757 */    MCD::OPC_CheckPredicate, 19, 42, 0, // Skip to: 3803
/* 3761 */    MCD::OPC_Decode, 222, 6, 174, 1, // Opcode: DAUI_MM64R6
/* 3766 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 3779
/* 3770 */    MCD::OPC_CheckPredicate, 18, 29, 0, // Skip to: 3803
/* 3774 */    MCD::OPC_Decode, 208, 2, 175, 1, // Opcode: BGEC_MMR6
/* 3779 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 3791
/* 3783 */    MCD::OPC_CheckPredicate, 18, 16, 0, // Skip to: 3803
/* 3787 */    MCD::OPC_Decode, 218, 18, 84, // Opcode: SW_MMR6
/* 3791 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 3803
/* 3795 */    MCD::OPC_CheckPredicate, 18, 4, 0, // Skip to: 3803
/* 3799 */    MCD::OPC_Decode, 220, 11, 84, // Opcode: LW_MMR6
/* 3803 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 18, 74, 0, // Skip to: 85
/* 11 */      MCD::OPC_Decode, 221, 3, 163, 1, // Opcode: BOVC_MMR6
/* 16 */      MCD::OPC_FilterValue, 31, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 18, 61, 0, // Skip to: 85
/* 24 */      MCD::OPC_Decode, 214, 3, 168, 1, // Opcode: BNVC_MMR6
/* 29 */      MCD::OPC_FilterValue, 48, 24, 0, // Skip to: 57
/* 33 */      MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 48
/* 37 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 48
/* 43 */      MCD::OPC_Decode, 152, 3, 171, 1, // Opcode: BLEZALC_MMR6
/* 48 */      MCD::OPC_CheckPredicate, 18, 33, 0, // Skip to: 85
/* 52 */      MCD::OPC_Decode, 223, 2, 171, 1, // Opcode: BGEZALC_MMR6
/* 57 */      MCD::OPC_FilterValue, 56, 24, 0, // Skip to: 85
/* 61 */      MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 76
/* 65 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 76
/* 71 */      MCD::OPC_Decode, 243, 2, 173, 1, // Opcode: BGTZALC_MMR6
/* 76 */      MCD::OPC_CheckPredicate, 18, 5, 0, // Skip to: 85
/* 80 */      MCD::OPC_Decode, 176, 3, 173, 1, // Opcode: BLTZALC_MMR6
/* 85 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 3, // Skip to: 980
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 69
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 181, 58, // Skip to: 15050
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 22, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 239, 17, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 146, 8, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 23, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 212, 14, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 138, 58, // Skip to: 15050
/* 64 */      MCD::OPC_Decode, 149, 17, 176, 1, // Opcode: SLL
/* 69 */      MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 114
/* 73 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 76 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 95
/* 80 */      MCD::OPC_CheckPredicate, 24, 118, 58, // Skip to: 15050
/* 84 */      MCD::OPC_CheckField, 6, 5, 0, 112, 58, // Skip to: 15050
/* 90 */      MCD::OPC_Decode, 128, 13, 177, 1, // Opcode: MOVF_I
/* 95 */      MCD::OPC_FilterValue, 1, 103, 58, // Skip to: 15050
/* 99 */      MCD::OPC_CheckPredicate, 24, 99, 58, // Skip to: 15050
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 93, 58, // Skip to: 15050
/* 109 */     MCD::OPC_Decode, 148, 13, 177, 1, // Opcode: MOVT_I
/* 114 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 147
/* 118 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 121 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 134
/* 125 */     MCD::OPC_CheckPredicate, 1, 73, 58, // Skip to: 15050
/* 129 */     MCD::OPC_Decode, 217, 17, 176, 1, // Opcode: SRL
/* 134 */     MCD::OPC_FilterValue, 1, 64, 58, // Skip to: 15050
/* 138 */     MCD::OPC_CheckPredicate, 25, 60, 58, // Skip to: 15050
/* 142 */     MCD::OPC_Decode, 231, 15, 176, 1, // Opcode: ROTR
/* 147 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 166
/* 151 */     MCD::OPC_CheckPredicate, 1, 47, 58, // Skip to: 15050
/* 155 */     MCD::OPC_CheckField, 21, 5, 0, 41, 58, // Skip to: 15050
/* 161 */     MCD::OPC_Decode, 197, 17, 176, 1, // Opcode: SRA
/* 166 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 184
/* 170 */     MCD::OPC_CheckPredicate, 1, 28, 58, // Skip to: 15050
/* 174 */     MCD::OPC_CheckField, 6, 5, 0, 22, 58, // Skip to: 15050
/* 180 */     MCD::OPC_Decode, 158, 17, 43, // Opcode: SLLV
/* 184 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckPredicate, 26, 10, 58, // Skip to: 15050
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 4, 58, // Skip to: 15050
/* 198 */     MCD::OPC_Decode, 168, 11, 178, 1, // Opcode: LSA
/* 203 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 234
/* 207 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 210 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 222
/* 214 */     MCD::OPC_CheckPredicate, 1, 240, 57, // Skip to: 15050
/* 218 */     MCD::OPC_Decode, 232, 17, 43, // Opcode: SRLV
/* 222 */     MCD::OPC_FilterValue, 1, 232, 57, // Skip to: 15050
/* 226 */     MCD::OPC_CheckPredicate, 25, 228, 57, // Skip to: 15050
/* 230 */     MCD::OPC_Decode, 232, 15, 43, // Opcode: ROTRV
/* 234 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 252
/* 238 */     MCD::OPC_CheckPredicate, 1, 216, 57, // Skip to: 15050
/* 242 */     MCD::OPC_CheckField, 6, 5, 0, 210, 57, // Skip to: 15050
/* 248 */     MCD::OPC_Decode, 210, 17, 43, // Opcode: SRAV
/* 252 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 27, 191, 57, // Skip to: 15050
/* 267 */     MCD::OPC_Decode, 198, 10, 179, 1, // Opcode: JR
/* 272 */     MCD::OPC_FilterValue, 16, 182, 57, // Skip to: 15050
/* 276 */     MCD::OPC_CheckPredicate, 28, 178, 57, // Skip to: 15050
/* 280 */     MCD::OPC_Decode, 205, 10, 179, 1, // Opcode: JR_HB
/* 285 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 328
/* 289 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 292 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 310
/* 296 */     MCD::OPC_CheckPredicate, 1, 158, 57, // Skip to: 15050
/* 300 */     MCD::OPC_CheckField, 16, 5, 0, 152, 57, // Skip to: 15050
/* 306 */     MCD::OPC_Decode, 176, 10, 14, // Opcode: JALR
/* 310 */     MCD::OPC_FilterValue, 16, 144, 57, // Skip to: 15050
/* 314 */     MCD::OPC_CheckPredicate, 29, 140, 57, // Skip to: 15050
/* 318 */     MCD::OPC_CheckField, 16, 5, 0, 134, 57, // Skip to: 15050
/* 324 */     MCD::OPC_Decode, 186, 10, 14, // Opcode: JALR_HB
/* 328 */     MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 347
/* 332 */     MCD::OPC_CheckPredicate, 30, 122, 57, // Skip to: 15050
/* 336 */     MCD::OPC_CheckField, 6, 5, 0, 116, 57, // Skip to: 15050
/* 342 */     MCD::OPC_Decode, 160, 13, 180, 1, // Opcode: MOVZ_I_I
/* 347 */     MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 366
/* 351 */     MCD::OPC_CheckPredicate, 30, 103, 57, // Skip to: 15050
/* 355 */     MCD::OPC_CheckField, 6, 5, 0, 97, 57, // Skip to: 15050
/* 361 */     MCD::OPC_Decode, 140, 13, 180, 1, // Opcode: MOVN_I_I
/* 366 */     MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 379
/* 370 */     MCD::OPC_CheckPredicate, 1, 84, 57, // Skip to: 15050
/* 374 */     MCD::OPC_Decode, 225, 18, 181, 1, // Opcode: SYSCALL
/* 379 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 1, 71, 57, // Skip to: 15050
/* 387 */     MCD::OPC_Decode, 226, 3, 44, // Opcode: BREAK
/* 391 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 404
/* 395 */     MCD::OPC_CheckPredicate, 2, 59, 57, // Skip to: 15050
/* 399 */     MCD::OPC_Decode, 219, 18, 182, 1, // Opcode: SYNC
/* 404 */     MCD::OPC_FilterValue, 16, 45, 0, // Skip to: 453
/* 408 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 411 */     MCD::OPC_FilterValue, 0, 43, 57, // Skip to: 15050
/* 415 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 36, 57, // Skip to: 15050
/* 422 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 425 */     MCD::OPC_FilterValue, 0, 29, 57, // Skip to: 15050
/* 429 */     MCD::OPC_CheckPredicate, 31, 11, 0, // Skip to: 444
/* 433 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 444
/* 439 */     MCD::OPC_Decode, 193, 12, 183, 1, // Opcode: MFHI
/* 444 */     MCD::OPC_CheckPredicate, 32, 10, 57, // Skip to: 15050
/* 448 */     MCD::OPC_Decode, 196, 12, 184, 1, // Opcode: MFHI_DSP
/* 453 */     MCD::OPC_FilterValue, 17, 38, 0, // Skip to: 495
/* 457 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 460 */     MCD::OPC_FilterValue, 0, 250, 56, // Skip to: 15050
/* 464 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 467 */     MCD::OPC_FilterValue, 0, 243, 56, // Skip to: 15050
/* 471 */     MCD::OPC_CheckPredicate, 27, 11, 0, // Skip to: 486
/* 475 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 209, 13, 179, 1, // Opcode: MTHI
/* 486 */     MCD::OPC_CheckPredicate, 32, 224, 56, // Skip to: 15050
/* 490 */     MCD::OPC_Decode, 211, 13, 185, 1, // Opcode: MTHI_DSP
/* 495 */     MCD::OPC_FilterValue, 18, 45, 0, // Skip to: 544
/* 499 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 502 */     MCD::OPC_FilterValue, 0, 208, 56, // Skip to: 15050
/* 506 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 509 */     MCD::OPC_FilterValue, 0, 201, 56, // Skip to: 15050
/* 513 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 516 */     MCD::OPC_FilterValue, 0, 194, 56, // Skip to: 15050
/* 520 */     MCD::OPC_CheckPredicate, 31, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 535
/* 530 */     MCD::OPC_Decode, 199, 12, 183, 1, // Opcode: MFLO
/* 535 */     MCD::OPC_CheckPredicate, 32, 175, 56, // Skip to: 15050
/* 539 */     MCD::OPC_Decode, 202, 12, 184, 1, // Opcode: MFLO_DSP
/* 544 */     MCD::OPC_FilterValue, 19, 38, 0, // Skip to: 586
/* 548 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 551 */     MCD::OPC_FilterValue, 0, 159, 56, // Skip to: 15050
/* 555 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 558 */     MCD::OPC_FilterValue, 0, 152, 56, // Skip to: 15050
/* 562 */     MCD::OPC_CheckPredicate, 27, 11, 0, // Skip to: 577
/* 566 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 577
/* 572 */     MCD::OPC_Decode, 216, 13, 179, 1, // Opcode: MTLO
/* 577 */     MCD::OPC_CheckPredicate, 32, 133, 56, // Skip to: 15050
/* 581 */     MCD::OPC_Decode, 218, 13, 186, 1, // Opcode: MTLO_DSP
/* 586 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 605
/* 590 */     MCD::OPC_CheckPredicate, 33, 120, 56, // Skip to: 15050
/* 594 */     MCD::OPC_CheckField, 8, 3, 0, 114, 56, // Skip to: 15050
/* 600 */     MCD::OPC_Decode, 138, 7, 187, 1, // Opcode: DLSA
/* 605 */     MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 646
/* 609 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 612 */     MCD::OPC_FilterValue, 0, 98, 56, // Skip to: 15050
/* 616 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 619 */     MCD::OPC_FilterValue, 0, 91, 56, // Skip to: 15050
/* 623 */     MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 637
/* 627 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 129, 14, 63, // Opcode: MULT
/* 637 */     MCD::OPC_CheckPredicate, 32, 73, 56, // Skip to: 15050
/* 641 */     MCD::OPC_Decode, 132, 14, 188, 1, // Opcode: MULT_DSP
/* 646 */     MCD::OPC_FilterValue, 25, 37, 0, // Skip to: 687
/* 650 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 653 */     MCD::OPC_FilterValue, 0, 57, 56, // Skip to: 15050
/* 657 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 660 */     MCD::OPC_FilterValue, 0, 50, 56, // Skip to: 15050
/* 664 */     MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 678
/* 668 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 135, 14, 63, // Opcode: MULTu
/* 678 */     MCD::OPC_CheckPredicate, 32, 32, 56, // Skip to: 15050
/* 682 */     MCD::OPC_Decode, 130, 14, 188, 1, // Opcode: MULTU_DSP
/* 687 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 705
/* 691 */     MCD::OPC_CheckPredicate, 34, 19, 56, // Skip to: 15050
/* 695 */     MCD::OPC_CheckField, 6, 10, 0, 13, 56, // Skip to: 15050
/* 701 */     MCD::OPC_Decode, 168, 16, 63, // Opcode: SDIV
/* 705 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 723
/* 709 */     MCD::OPC_CheckPredicate, 34, 1, 56, // Skip to: 15050
/* 713 */     MCD::OPC_CheckField, 6, 10, 0, 251, 55, // Skip to: 15050
/* 719 */     MCD::OPC_Decode, 197, 19, 63, // Opcode: UDIV
/* 723 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 740
/* 727 */     MCD::OPC_CheckPredicate, 22, 239, 55, // Skip to: 15050
/* 731 */     MCD::OPC_CheckField, 6, 5, 0, 233, 55, // Skip to: 15050
/* 737 */     MCD::OPC_Decode, 111, 49, // Opcode: ADD
/* 740 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 758
/* 744 */     MCD::OPC_CheckPredicate, 1, 222, 55, // Skip to: 15050
/* 748 */     MCD::OPC_CheckField, 6, 5, 0, 216, 55, // Skip to: 15050
/* 754 */     MCD::OPC_Decode, 183, 1, 49, // Opcode: ADDu
/* 758 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 776
/* 762 */     MCD::OPC_CheckPredicate, 22, 204, 55, // Skip to: 15050
/* 766 */     MCD::OPC_CheckField, 6, 5, 0, 198, 55, // Skip to: 15050
/* 772 */     MCD::OPC_Decode, 251, 17, 49, // Opcode: SUB
/* 776 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 794
/* 780 */     MCD::OPC_CheckPredicate, 1, 186, 55, // Skip to: 15050
/* 784 */     MCD::OPC_CheckField, 6, 5, 0, 180, 55, // Skip to: 15050
/* 790 */     MCD::OPC_Decode, 179, 18, 49, // Opcode: SUBu
/* 794 */     MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 812
/* 798 */     MCD::OPC_CheckPredicate, 1, 168, 55, // Skip to: 15050
/* 802 */     MCD::OPC_CheckField, 6, 5, 0, 162, 55, // Skip to: 15050
/* 808 */     MCD::OPC_Decode, 191, 1, 49, // Opcode: AND
/* 812 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 830
/* 816 */     MCD::OPC_CheckPredicate, 1, 150, 55, // Skip to: 15050
/* 820 */     MCD::OPC_CheckField, 6, 5, 0, 144, 55, // Skip to: 15050
/* 826 */     MCD::OPC_Decode, 194, 14, 49, // Opcode: OR
/* 830 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 848
/* 834 */     MCD::OPC_CheckPredicate, 1, 132, 55, // Skip to: 15050
/* 838 */     MCD::OPC_CheckField, 6, 5, 0, 126, 55, // Skip to: 15050
/* 844 */     MCD::OPC_Decode, 223, 19, 49, // Opcode: XOR
/* 848 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 866
/* 852 */     MCD::OPC_CheckPredicate, 1, 114, 55, // Skip to: 15050
/* 856 */     MCD::OPC_CheckField, 6, 5, 0, 108, 55, // Skip to: 15050
/* 862 */     MCD::OPC_Decode, 179, 14, 49, // Opcode: NOR
/* 866 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 884
/* 870 */     MCD::OPC_CheckPredicate, 1, 96, 55, // Skip to: 15050
/* 874 */     MCD::OPC_CheckField, 6, 5, 0, 90, 55, // Skip to: 15050
/* 880 */     MCD::OPC_Decode, 166, 17, 49, // Opcode: SLT
/* 884 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 902
/* 888 */     MCD::OPC_CheckPredicate, 1, 78, 55, // Skip to: 15050
/* 892 */     MCD::OPC_CheckField, 6, 5, 0, 72, 55, // Skip to: 15050
/* 898 */     MCD::OPC_Decode, 177, 17, 49, // Opcode: SLTu
/* 902 */     MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 915
/* 906 */     MCD::OPC_CheckPredicate, 2, 60, 55, // Skip to: 15050
/* 910 */     MCD::OPC_Decode, 153, 19, 189, 1, // Opcode: TGE
/* 915 */     MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 928
/* 919 */     MCD::OPC_CheckPredicate, 2, 47, 55, // Skip to: 15050
/* 923 */     MCD::OPC_Decode, 158, 19, 189, 1, // Opcode: TGEU
/* 928 */     MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 941
/* 932 */     MCD::OPC_CheckPredicate, 2, 34, 55, // Skip to: 15050
/* 936 */     MCD::OPC_Decode, 173, 19, 189, 1, // Opcode: TLT
/* 941 */     MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 954
/* 945 */     MCD::OPC_CheckPredicate, 2, 21, 55, // Skip to: 15050
/* 949 */     MCD::OPC_Decode, 177, 19, 189, 1, // Opcode: TLTU
/* 954 */     MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 967
/* 958 */     MCD::OPC_CheckPredicate, 2, 8, 55, // Skip to: 15050
/* 962 */     MCD::OPC_Decode, 149, 19, 189, 1, // Opcode: TEQ
/* 967 */     MCD::OPC_FilterValue, 54, 255, 54, // Skip to: 15050
/* 971 */     MCD::OPC_CheckPredicate, 2, 251, 54, // Skip to: 15050
/* 975 */     MCD::OPC_Decode, 180, 19, 189, 1, // Opcode: TNE
/* 980 */     MCD::OPC_FilterValue, 1, 216, 0, // Skip to: 1200
/* 984 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 987 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1000
/* 991 */     MCD::OPC_CheckPredicate, 22, 231, 54, // Skip to: 15050
/* 995 */     MCD::OPC_Decode, 172, 3, 190, 1, // Opcode: BLTZ
/* 1000 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1013
/* 1004 */    MCD::OPC_CheckPredicate, 22, 218, 54, // Skip to: 15050
/* 1008 */    MCD::OPC_Decode, 219, 2, 190, 1, // Opcode: BGEZ
/* 1013 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1026
/* 1017 */    MCD::OPC_CheckPredicate, 35, 205, 54, // Skip to: 15050
/* 1021 */    MCD::OPC_Decode, 183, 3, 190, 1, // Opcode: BLTZL
/* 1026 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1039
/* 1030 */    MCD::OPC_CheckPredicate, 35, 192, 54, // Skip to: 15050
/* 1034 */    MCD::OPC_Decode, 230, 2, 190, 1, // Opcode: BGEZL
/* 1039 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1052
/* 1043 */    MCD::OPC_CheckPredicate, 35, 179, 54, // Skip to: 15050
/* 1047 */    MCD::OPC_Decode, 154, 19, 167, 1, // Opcode: TGEI
/* 1052 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1065
/* 1056 */    MCD::OPC_CheckPredicate, 35, 166, 54, // Skip to: 15050
/* 1060 */    MCD::OPC_Decode, 155, 19, 167, 1, // Opcode: TGEIU
/* 1065 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1078
/* 1069 */    MCD::OPC_CheckPredicate, 35, 153, 54, // Skip to: 15050
/* 1073 */    MCD::OPC_Decode, 174, 19, 167, 1, // Opcode: TLTI
/* 1078 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1091
/* 1082 */    MCD::OPC_CheckPredicate, 35, 140, 54, // Skip to: 15050
/* 1086 */    MCD::OPC_Decode, 196, 19, 167, 1, // Opcode: TTLTIU
/* 1091 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1104
/* 1095 */    MCD::OPC_CheckPredicate, 35, 127, 54, // Skip to: 15050
/* 1099 */    MCD::OPC_Decode, 150, 19, 167, 1, // Opcode: TEQI
/* 1104 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1117
/* 1108 */    MCD::OPC_CheckPredicate, 35, 114, 54, // Skip to: 15050
/* 1112 */    MCD::OPC_Decode, 181, 19, 167, 1, // Opcode: TNEI
/* 1117 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 1130
/* 1121 */    MCD::OPC_CheckPredicate, 27, 101, 54, // Skip to: 15050
/* 1125 */    MCD::OPC_Decode, 174, 3, 190, 1, // Opcode: BLTZAL
/* 1130 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 1143
/* 1134 */    MCD::OPC_CheckPredicate, 27, 88, 54, // Skip to: 15050
/* 1138 */    MCD::OPC_Decode, 221, 2, 190, 1, // Opcode: BGEZAL
/* 1143 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 1156
/* 1147 */    MCD::OPC_CheckPredicate, 35, 75, 54, // Skip to: 15050
/* 1151 */    MCD::OPC_Decode, 177, 3, 190, 1, // Opcode: BLTZALL
/* 1156 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 1169
/* 1160 */    MCD::OPC_CheckPredicate, 35, 62, 54, // Skip to: 15050
/* 1164 */    MCD::OPC_Decode, 224, 2, 190, 1, // Opcode: BGEZALL
/* 1169 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 1188
/* 1173 */    MCD::OPC_CheckPredicate, 36, 49, 54, // Skip to: 15050
/* 1177 */    MCD::OPC_CheckField, 21, 5, 0, 43, 54, // Skip to: 15050
/* 1183 */    MCD::OPC_Decode, 222, 3, 191, 1, // Opcode: BPOSGE32
/* 1188 */    MCD::OPC_FilterValue, 31, 34, 54, // Skip to: 15050
/* 1192 */    MCD::OPC_CheckPredicate, 25, 30, 54, // Skip to: 15050
/* 1196 */    MCD::OPC_Decode, 220, 18, 90, // Opcode: SYNCI
/* 1200 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1213
/* 1204 */    MCD::OPC_CheckPredicate, 22, 18, 54, // Skip to: 15050
/* 1208 */    MCD::OPC_Decode, 174, 10, 192, 1, // Opcode: J
/* 1213 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1226
/* 1217 */    MCD::OPC_CheckPredicate, 22, 5, 54, // Skip to: 15050
/* 1221 */    MCD::OPC_Decode, 175, 10, 192, 1, // Opcode: JAL
/* 1226 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1239
/* 1230 */    MCD::OPC_CheckPredicate, 22, 248, 53, // Skip to: 15050
/* 1234 */    MCD::OPC_Decode, 189, 2, 193, 1, // Opcode: BEQ
/* 1239 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1252
/* 1243 */    MCD::OPC_CheckPredicate, 22, 235, 53, // Skip to: 15050
/* 1247 */    MCD::OPC_Decode, 189, 3, 193, 1, // Opcode: BNE
/* 1252 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1271
/* 1256 */    MCD::OPC_CheckPredicate, 22, 222, 53, // Skip to: 15050
/* 1260 */    MCD::OPC_CheckField, 16, 5, 0, 216, 53, // Skip to: 15050
/* 1266 */    MCD::OPC_Decode, 149, 3, 190, 1, // Opcode: BLEZ
/* 1271 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1290
/* 1275 */    MCD::OPC_CheckPredicate, 22, 203, 53, // Skip to: 15050
/* 1279 */    MCD::OPC_CheckField, 16, 5, 0, 197, 53, // Skip to: 15050
/* 1285 */    MCD::OPC_Decode, 240, 2, 190, 1, // Opcode: BGTZ
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 27, 184, 53, // Skip to: 15050
/* 1298 */    MCD::OPC_Decode, 179, 1, 194, 1, // Opcode: ADDi
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 1, 171, 53, // Skip to: 15050
/* 1311 */    MCD::OPC_Decode, 181, 1, 194, 1, // Opcode: ADDiu
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 1, 158, 53, // Skip to: 15050
/* 1324 */    MCD::OPC_Decode, 171, 17, 194, 1, // Opcode: SLTi
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 1, 145, 53, // Skip to: 15050
/* 1337 */    MCD::OPC_Decode, 174, 17, 194, 1, // Opcode: SLTiu
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 1, 132, 53, // Skip to: 15050
/* 1350 */    MCD::OPC_Decode, 205, 1, 195, 1, // Opcode: ANDi
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 1, 119, 53, // Skip to: 15050
/* 1363 */    MCD::OPC_Decode, 206, 14, 195, 1, // Opcode: ORi
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 1, 106, 53, // Skip to: 15050
/* 1376 */    MCD::OPC_Decode, 235, 19, 195, 1, // Opcode: XORi
/* 1381 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1399
/* 1385 */    MCD::OPC_CheckPredicate, 22, 93, 53, // Skip to: 15050
/* 1389 */    MCD::OPC_CheckField, 21, 5, 0, 87, 53, // Skip to: 15050
/* 1395 */    MCD::OPC_Decode, 175, 11, 89, // Opcode: LUi
/* 1399 */    MCD::OPC_FilterValue, 16, 154, 1, // Skip to: 1813
/* 1403 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1406 */    MCD::OPC_FilterValue, 0, 169, 0, // Skip to: 1579
/* 1410 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1413 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1426
/* 1417 */    MCD::OPC_CheckPredicate, 37, 61, 53, // Skip to: 15050
/* 1421 */    MCD::OPC_Decode, 178, 12, 196, 1, // Opcode: MFC0
/* 1426 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1439
/* 1430 */    MCD::OPC_CheckPredicate, 37, 48, 53, // Skip to: 15050
/* 1434 */    MCD::OPC_Decode, 194, 13, 197, 1, // Opcode: MTC0
/* 1439 */    MCD::OPC_FilterValue, 11, 39, 0, // Skip to: 1482
/* 1443 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1446 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1464
/* 1450 */    MCD::OPC_CheckPredicate, 25, 28, 53, // Skip to: 15050
/* 1454 */    MCD::OPC_CheckField, 11, 5, 12, 22, 53, // Skip to: 15050
/* 1460 */    MCD::OPC_Decode, 245, 6, 73, // Opcode: DI
/* 1464 */    MCD::OPC_FilterValue, 1, 14, 53, // Skip to: 15050
/* 1468 */    MCD::OPC_CheckPredicate, 38, 10, 53, // Skip to: 15050
/* 1472 */    MCD::OPC_CheckField, 11, 5, 0, 4, 53, // Skip to: 15050
/* 1478 */    MCD::OPC_Decode, 142, 8, 73, // Opcode: DVPE
/* 1482 */    MCD::OPC_FilterValue, 16, 252, 52, // Skip to: 15050
/* 1486 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1489 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1507
/* 1493 */    MCD::OPC_CheckPredicate, 1, 241, 52, // Skip to: 15050
/* 1497 */    MCD::OPC_CheckField, 11, 10, 0, 235, 52, // Skip to: 15050
/* 1503 */    MCD::OPC_Decode, 167, 19, 0, // Opcode: TLBR
/* 1507 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1525
/* 1511 */    MCD::OPC_CheckPredicate, 1, 223, 52, // Skip to: 15050
/* 1515 */    MCD::OPC_CheckField, 11, 10, 0, 217, 52, // Skip to: 15050
/* 1521 */    MCD::OPC_Decode, 169, 19, 0, // Opcode: TLBWI
/* 1525 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1543
/* 1529 */    MCD::OPC_CheckPredicate, 39, 205, 52, // Skip to: 15050
/* 1533 */    MCD::OPC_CheckField, 11, 10, 0, 199, 52, // Skip to: 15050
/* 1539 */    MCD::OPC_Decode, 161, 19, 0, // Opcode: TLBINV
/* 1543 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1561
/* 1547 */    MCD::OPC_CheckPredicate, 39, 187, 52, // Skip to: 15050
/* 1551 */    MCD::OPC_CheckField, 11, 10, 0, 181, 52, // Skip to: 15050
/* 1557 */    MCD::OPC_Decode, 162, 19, 0, // Opcode: TLBINVF
/* 1561 */    MCD::OPC_FilterValue, 6, 173, 52, // Skip to: 15050
/* 1565 */    MCD::OPC_CheckPredicate, 1, 169, 52, // Skip to: 15050
/* 1569 */    MCD::OPC_CheckField, 11, 10, 0, 163, 52, // Skip to: 15050
/* 1575 */    MCD::OPC_Decode, 171, 19, 0, // Opcode: TLBWR
/* 1579 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1605
/* 1583 */    MCD::OPC_CheckPredicate, 1, 151, 52, // Skip to: 15050
/* 1587 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 143, 52, // Skip to: 15050
/* 1595 */    MCD::OPC_CheckField, 0, 3, 0, 137, 52, // Skip to: 15050
/* 1601 */    MCD::OPC_Decode, 165, 19, 0, // Opcode: TLBP
/* 1605 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1652
/* 1609 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1612 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1632
/* 1616 */    MCD::OPC_CheckPredicate, 40, 118, 52, // Skip to: 15050
/* 1620 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 110, 52, // Skip to: 15050
/* 1628 */    MCD::OPC_Decode, 153, 8, 0, // Opcode: ERET
/* 1632 */    MCD::OPC_FilterValue, 7, 102, 52, // Skip to: 15050
/* 1636 */    MCD::OPC_CheckPredicate, 37, 98, 52, // Skip to: 15050
/* 1640 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 90, 52, // Skip to: 15050
/* 1648 */    MCD::OPC_Decode, 235, 6, 0, // Opcode: DERET
/* 1652 */    MCD::OPC_FilterValue, 4, 71, 0, // Skip to: 1727
/* 1656 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1659 */    MCD::OPC_FilterValue, 0, 40, 0, // Skip to: 1703
/* 1663 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1666 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1685
/* 1670 */    MCD::OPC_CheckPredicate, 41, 64, 52, // Skip to: 15050
/* 1674 */    MCD::OPC_CheckField, 16, 10, 128, 4, 57, 52, // Skip to: 15050
/* 1681 */    MCD::OPC_Decode, 214, 19, 0, // Opcode: WAIT
/* 1685 */    MCD::OPC_FilterValue, 12, 49, 52, // Skip to: 15050
/* 1689 */    MCD::OPC_CheckPredicate, 25, 45, 52, // Skip to: 15050
/* 1693 */    MCD::OPC_CheckField, 21, 5, 11, 39, 52, // Skip to: 15050
/* 1699 */    MCD::OPC_Decode, 149, 8, 73, // Opcode: EI
/* 1703 */    MCD::OPC_FilterValue, 1, 31, 52, // Skip to: 15050
/* 1707 */    MCD::OPC_CheckPredicate, 38, 27, 52, // Skip to: 15050
/* 1711 */    MCD::OPC_CheckField, 21, 5, 11, 21, 52, // Skip to: 15050
/* 1717 */    MCD::OPC_CheckField, 11, 5, 0, 15, 52, // Skip to: 15050
/* 1723 */    MCD::OPC_Decode, 160, 8, 73, // Opcode: EVPE
/* 1727 */    MCD::OPC_FilterValue, 11, 22, 0, // Skip to: 1753
/* 1731 */    MCD::OPC_CheckPredicate, 42, 3, 52, // Skip to: 15050
/* 1735 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 251, 51, // Skip to: 15050
/* 1743 */    MCD::OPC_CheckField, 0, 3, 0, 245, 51, // Skip to: 15050
/* 1749 */    MCD::OPC_Decode, 154, 8, 0, // Opcode: ERETNC
/* 1753 */    MCD::OPC_FilterValue, 120, 26, 0, // Skip to: 1783
/* 1757 */    MCD::OPC_CheckPredicate, 38, 233, 51, // Skip to: 15050
/* 1761 */    MCD::OPC_CheckField, 21, 5, 11, 227, 51, // Skip to: 15050
/* 1767 */    MCD::OPC_CheckField, 11, 5, 1, 221, 51, // Skip to: 15050
/* 1773 */    MCD::OPC_CheckField, 0, 3, 1, 215, 51, // Skip to: 15050
/* 1779 */    MCD::OPC_Decode, 152, 7, 73, // Opcode: DMT
/* 1783 */    MCD::OPC_FilterValue, 124, 207, 51, // Skip to: 15050
/* 1787 */    MCD::OPC_CheckPredicate, 38, 203, 51, // Skip to: 15050
/* 1791 */    MCD::OPC_CheckField, 21, 5, 11, 197, 51, // Skip to: 15050
/* 1797 */    MCD::OPC_CheckField, 11, 5, 1, 191, 51, // Skip to: 15050
/* 1803 */    MCD::OPC_CheckField, 0, 3, 1, 185, 51, // Skip to: 15050
/* 1809 */    MCD::OPC_Decode, 152, 8, 73, // Opcode: EMT
/* 1813 */    MCD::OPC_FilterValue, 17, 191, 6, // Skip to: 3544
/* 1817 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1820 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1839
/* 1824 */    MCD::OPC_CheckPredicate, 43, 166, 51, // Skip to: 15050
/* 1828 */    MCD::OPC_CheckField, 0, 11, 0, 160, 51, // Skip to: 15050
/* 1834 */    MCD::OPC_Decode, 180, 12, 198, 1, // Opcode: MFC1
/* 1839 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1858
/* 1843 */    MCD::OPC_CheckPredicate, 44, 147, 51, // Skip to: 15050
/* 1847 */    MCD::OPC_CheckField, 0, 11, 0, 141, 51, // Skip to: 15050
/* 1853 */    MCD::OPC_Decode, 143, 7, 199, 1, // Opcode: DMFC1
/* 1858 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1877
/* 1862 */    MCD::OPC_CheckPredicate, 45, 128, 51, // Skip to: 15050
/* 1866 */    MCD::OPC_CheckField, 0, 11, 0, 122, 51, // Skip to: 15050
/* 1872 */    MCD::OPC_Decode, 178, 4, 200, 1, // Opcode: CFC1
/* 1877 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1896
/* 1881 */    MCD::OPC_CheckPredicate, 46, 109, 51, // Skip to: 15050
/* 1885 */    MCD::OPC_CheckField, 0, 11, 0, 103, 51, // Skip to: 15050
/* 1891 */    MCD::OPC_Decode, 187, 12, 201, 1, // Opcode: MFHC1_D32
/* 1896 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1915
/* 1900 */    MCD::OPC_CheckPredicate, 43, 90, 51, // Skip to: 15050
/* 1904 */    MCD::OPC_CheckField, 0, 11, 0, 84, 51, // Skip to: 15050
/* 1910 */    MCD::OPC_Decode, 196, 13, 202, 1, // Opcode: MTC1
/* 1915 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1934
/* 1919 */    MCD::OPC_CheckPredicate, 44, 71, 51, // Skip to: 15050
/* 1923 */    MCD::OPC_CheckField, 0, 11, 0, 65, 51, // Skip to: 15050
/* 1929 */    MCD::OPC_Decode, 155, 7, 203, 1, // Opcode: DMTC1
/* 1934 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1953
/* 1938 */    MCD::OPC_CheckPredicate, 45, 52, 51, // Skip to: 15050
/* 1942 */    MCD::OPC_CheckField, 0, 11, 0, 46, 51, // Skip to: 15050
/* 1948 */    MCD::OPC_Decode, 200, 5, 204, 1, // Opcode: CTC1
/* 1953 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1972
/* 1957 */    MCD::OPC_CheckPredicate, 46, 33, 51, // Skip to: 15050
/* 1961 */    MCD::OPC_CheckField, 0, 11, 0, 27, 51, // Skip to: 15050
/* 1967 */    MCD::OPC_Decode, 203, 13, 205, 1, // Opcode: MTHC1_D32
/* 1972 */    MCD::OPC_FilterValue, 8, 55, 0, // Skip to: 2031
/* 1976 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1979 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1992
/* 1983 */    MCD::OPC_CheckPredicate, 47, 7, 51, // Skip to: 15050
/* 1987 */    MCD::OPC_Decode, 168, 2, 206, 1, // Opcode: BC1F
/* 1992 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2005
/* 1996 */    MCD::OPC_CheckPredicate, 47, 250, 50, // Skip to: 15050
/* 2000 */    MCD::OPC_Decode, 173, 2, 206, 1, // Opcode: BC1T
/* 2005 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2018
/* 2009 */    MCD::OPC_CheckPredicate, 48, 237, 50, // Skip to: 15050
/* 2013 */    MCD::OPC_Decode, 169, 2, 206, 1, // Opcode: BC1FL
/* 2018 */    MCD::OPC_FilterValue, 3, 228, 50, // Skip to: 15050
/* 2022 */    MCD::OPC_CheckPredicate, 48, 224, 50, // Skip to: 15050
/* 2026 */    MCD::OPC_Decode, 174, 2, 206, 1, // Opcode: BC1TL
/* 2031 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2044
/* 2035 */    MCD::OPC_CheckPredicate, 26, 211, 50, // Skip to: 15050
/* 2039 */    MCD::OPC_Decode, 249, 3, 207, 1, // Opcode: BZ_V
/* 2044 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 2057
/* 2048 */    MCD::OPC_CheckPredicate, 26, 198, 50, // Skip to: 15050
/* 2052 */    MCD::OPC_Decode, 218, 3, 207, 1, // Opcode: BNZ_V
/* 2057 */    MCD::OPC_FilterValue, 16, 153, 2, // Skip to: 2726
/* 2061 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2064 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2077
/* 2068 */    MCD::OPC_CheckPredicate, 43, 178, 50, // Skip to: 15050
/* 2072 */    MCD::OPC_Decode, 205, 8, 208, 1, // Opcode: FADD_S
/* 2077 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2090
/* 2081 */    MCD::OPC_CheckPredicate, 43, 165, 50, // Skip to: 15050
/* 2085 */    MCD::OPC_Decode, 222, 9, 208, 1, // Opcode: FSUB_S
/* 2090 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2103
/* 2094 */    MCD::OPC_CheckPredicate, 43, 152, 50, // Skip to: 15050
/* 2098 */    MCD::OPC_Decode, 180, 9, 208, 1, // Opcode: FMUL_S
/* 2103 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2116
/* 2107 */    MCD::OPC_CheckPredicate, 43, 139, 50, // Skip to: 15050
/* 2111 */    MCD::OPC_Decode, 243, 8, 208, 1, // Opcode: FDIV_S
/* 2116 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2135
/* 2120 */    MCD::OPC_CheckPredicate, 49, 126, 50, // Skip to: 15050
/* 2124 */    MCD::OPC_CheckField, 16, 5, 0, 120, 50, // Skip to: 15050
/* 2130 */    MCD::OPC_Decode, 214, 9, 209, 1, // Opcode: FSQRT_S
/* 2135 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2154
/* 2139 */    MCD::OPC_CheckPredicate, 43, 107, 50, // Skip to: 15050
/* 2143 */    MCD::OPC_CheckField, 16, 5, 0, 101, 50, // Skip to: 15050
/* 2149 */    MCD::OPC_Decode, 197, 8, 209, 1, // Opcode: FABS_S
/* 2154 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2173
/* 2158 */    MCD::OPC_CheckPredicate, 43, 88, 50, // Skip to: 15050
/* 2162 */    MCD::OPC_CheckField, 16, 5, 0, 82, 50, // Skip to: 15050
/* 2168 */    MCD::OPC_Decode, 170, 9, 209, 1, // Opcode: FMOV_S
/* 2173 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2192
/* 2177 */    MCD::OPC_CheckPredicate, 43, 69, 50, // Skip to: 15050
/* 2181 */    MCD::OPC_CheckField, 16, 5, 0, 63, 50, // Skip to: 15050
/* 2187 */    MCD::OPC_Decode, 188, 9, 209, 1, // Opcode: FNEG_S
/* 2192 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2211
/* 2196 */    MCD::OPC_CheckPredicate, 49, 50, 50, // Skip to: 15050
/* 2200 */    MCD::OPC_CheckField, 16, 5, 0, 44, 50, // Skip to: 15050
/* 2206 */    MCD::OPC_Decode, 243, 15, 209, 1, // Opcode: ROUND_W_S
/* 2211 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2230
/* 2215 */    MCD::OPC_CheckPredicate, 49, 31, 50, // Skip to: 15050
/* 2219 */    MCD::OPC_CheckField, 16, 5, 0, 25, 50, // Skip to: 15050
/* 2225 */    MCD::OPC_Decode, 193, 19, 209, 1, // Opcode: TRUNC_W_S
/* 2230 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2249
/* 2234 */    MCD::OPC_CheckPredicate, 49, 12, 50, // Skip to: 15050
/* 2238 */    MCD::OPC_CheckField, 16, 5, 0, 6, 50, // Skip to: 15050
/* 2244 */    MCD::OPC_Decode, 167, 4, 209, 1, // Opcode: CEIL_W_S
/* 2249 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2268
/* 2253 */    MCD::OPC_CheckPredicate, 49, 249, 49, // Skip to: 15050
/* 2257 */    MCD::OPC_CheckField, 16, 5, 0, 243, 49, // Skip to: 15050
/* 2263 */    MCD::OPC_Decode, 153, 9, 209, 1, // Opcode: FLOOR_W_S
/* 2268 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2301
/* 2272 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2275 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2288
/* 2279 */    MCD::OPC_CheckPredicate, 24, 223, 49, // Skip to: 15050
/* 2283 */    MCD::OPC_Decode, 131, 13, 210, 1, // Opcode: MOVF_S
/* 2288 */    MCD::OPC_FilterValue, 1, 214, 49, // Skip to: 15050
/* 2292 */    MCD::OPC_CheckPredicate, 24, 210, 49, // Skip to: 15050
/* 2296 */    MCD::OPC_Decode, 151, 13, 210, 1, // Opcode: MOVT_S
/* 2301 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2314
/* 2305 */    MCD::OPC_CheckPredicate, 24, 197, 49, // Skip to: 15050
/* 2309 */    MCD::OPC_Decode, 163, 13, 211, 1, // Opcode: MOVZ_I_S
/* 2314 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2327
/* 2318 */    MCD::OPC_CheckPredicate, 24, 184, 49, // Skip to: 15050
/* 2322 */    MCD::OPC_Decode, 143, 13, 211, 1, // Opcode: MOVN_I_S
/* 2327 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2346
/* 2331 */    MCD::OPC_CheckPredicate, 50, 171, 49, // Skip to: 15050
/* 2335 */    MCD::OPC_CheckField, 16, 5, 0, 165, 49, // Skip to: 15050
/* 2341 */    MCD::OPC_Decode, 213, 15, 209, 1, // Opcode: RECIP_S
/* 2346 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2365
/* 2350 */    MCD::OPC_CheckPredicate, 50, 152, 49, // Skip to: 15050
/* 2354 */    MCD::OPC_CheckField, 16, 5, 0, 146, 49, // Skip to: 15050
/* 2360 */    MCD::OPC_Decode, 248, 15, 209, 1, // Opcode: RSQRT_S
/* 2365 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 2384
/* 2369 */    MCD::OPC_CheckPredicate, 51, 133, 49, // Skip to: 15050
/* 2373 */    MCD::OPC_CheckField, 16, 5, 0, 127, 49, // Skip to: 15050
/* 2379 */    MCD::OPC_Decode, 204, 5, 212, 1, // Opcode: CVT_D32_S
/* 2384 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2403
/* 2388 */    MCD::OPC_CheckPredicate, 43, 114, 49, // Skip to: 15050
/* 2392 */    MCD::OPC_CheckField, 16, 5, 0, 108, 49, // Skip to: 15050
/* 2398 */    MCD::OPC_Decode, 233, 5, 209, 1, // Opcode: CVT_W_S
/* 2403 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2422
/* 2407 */    MCD::OPC_CheckPredicate, 52, 95, 49, // Skip to: 15050
/* 2411 */    MCD::OPC_CheckField, 16, 5, 0, 89, 49, // Skip to: 15050
/* 2417 */    MCD::OPC_Decode, 217, 5, 213, 1, // Opcode: CVT_L_S
/* 2422 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2441
/* 2426 */    MCD::OPC_CheckPredicate, 53, 76, 49, // Skip to: 15050
/* 2430 */    MCD::OPC_CheckField, 6, 2, 0, 70, 49, // Skip to: 15050
/* 2436 */    MCD::OPC_Decode, 246, 5, 214, 1, // Opcode: C_F_S
/* 2441 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2460
/* 2445 */    MCD::OPC_CheckPredicate, 53, 57, 49, // Skip to: 15050
/* 2449 */    MCD::OPC_CheckField, 6, 2, 0, 51, 49, // Skip to: 15050
/* 2455 */    MCD::OPC_Decode, 202, 6, 214, 1, // Opcode: C_UN_S
/* 2460 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2479
/* 2464 */    MCD::OPC_CheckPredicate, 53, 38, 49, // Skip to: 15050
/* 2468 */    MCD::OPC_CheckField, 6, 2, 0, 32, 49, // Skip to: 15050
/* 2474 */    MCD::OPC_Decode, 240, 5, 214, 1, // Opcode: C_EQ_S
/* 2479 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2498
/* 2483 */    MCD::OPC_CheckPredicate, 53, 19, 49, // Skip to: 15050
/* 2487 */    MCD::OPC_CheckField, 6, 2, 0, 13, 49, // Skip to: 15050
/* 2493 */    MCD::OPC_Decode, 184, 6, 214, 1, // Opcode: C_UEQ_S
/* 2498 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 2517
/* 2502 */    MCD::OPC_CheckPredicate, 53, 0, 49, // Skip to: 15050
/* 2506 */    MCD::OPC_CheckField, 6, 2, 0, 250, 48, // Skip to: 15050
/* 2512 */    MCD::OPC_Decode, 166, 6, 214, 1, // Opcode: C_OLT_S
/* 2517 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 2536
/* 2521 */    MCD::OPC_CheckPredicate, 53, 237, 48, // Skip to: 15050
/* 2525 */    MCD::OPC_CheckField, 6, 2, 0, 231, 48, // Skip to: 15050
/* 2531 */    MCD::OPC_Decode, 196, 6, 214, 1, // Opcode: C_ULT_S
/* 2536 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 2555
/* 2540 */    MCD::OPC_CheckPredicate, 53, 218, 48, // Skip to: 15050
/* 2544 */    MCD::OPC_CheckField, 6, 2, 0, 212, 48, // Skip to: 15050
/* 2550 */    MCD::OPC_Decode, 160, 6, 214, 1, // Opcode: C_OLE_S
/* 2555 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 2574
/* 2559 */    MCD::OPC_CheckPredicate, 53, 199, 48, // Skip to: 15050
/* 2563 */    MCD::OPC_CheckField, 6, 2, 0, 193, 48, // Skip to: 15050
/* 2569 */    MCD::OPC_Decode, 190, 6, 214, 1, // Opcode: C_ULE_S
/* 2574 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 2593
/* 2578 */    MCD::OPC_CheckPredicate, 53, 180, 48, // Skip to: 15050
/* 2582 */    MCD::OPC_CheckField, 6, 2, 0, 174, 48, // Skip to: 15050
/* 2588 */    MCD::OPC_Decode, 178, 6, 214, 1, // Opcode: C_SF_S
/* 2593 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 2612
/* 2597 */    MCD::OPC_CheckPredicate, 53, 161, 48, // Skip to: 15050
/* 2601 */    MCD::OPC_CheckField, 6, 2, 0, 155, 48, // Skip to: 15050
/* 2607 */    MCD::OPC_Decode, 142, 6, 214, 1, // Opcode: C_NGLE_S
/* 2612 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 2631
/* 2616 */    MCD::OPC_CheckPredicate, 53, 142, 48, // Skip to: 15050
/* 2620 */    MCD::OPC_CheckField, 6, 2, 0, 136, 48, // Skip to: 15050
/* 2626 */    MCD::OPC_Decode, 172, 6, 214, 1, // Opcode: C_SEQ_S
/* 2631 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 2650
/* 2635 */    MCD::OPC_CheckPredicate, 53, 123, 48, // Skip to: 15050
/* 2639 */    MCD::OPC_CheckField, 6, 2, 0, 117, 48, // Skip to: 15050
/* 2645 */    MCD::OPC_Decode, 148, 6, 214, 1, // Opcode: C_NGL_S
/* 2650 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 2669
/* 2654 */    MCD::OPC_CheckPredicate, 53, 104, 48, // Skip to: 15050
/* 2658 */    MCD::OPC_CheckField, 6, 2, 0, 98, 48, // Skip to: 15050
/* 2664 */    MCD::OPC_Decode, 130, 6, 214, 1, // Opcode: C_LT_S
/* 2669 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 2688
/* 2673 */    MCD::OPC_CheckPredicate, 53, 85, 48, // Skip to: 15050
/* 2677 */    MCD::OPC_CheckField, 6, 2, 0, 79, 48, // Skip to: 15050
/* 2683 */    MCD::OPC_Decode, 136, 6, 214, 1, // Opcode: C_NGE_S
/* 2688 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 2707
/* 2692 */    MCD::OPC_CheckPredicate, 53, 66, 48, // Skip to: 15050
/* 2696 */    MCD::OPC_CheckField, 6, 2, 0, 60, 48, // Skip to: 15050
/* 2702 */    MCD::OPC_Decode, 252, 5, 214, 1, // Opcode: C_LE_S
/* 2707 */    MCD::OPC_FilterValue, 63, 51, 48, // Skip to: 15050
/* 2711 */    MCD::OPC_CheckPredicate, 53, 47, 48, // Skip to: 15050
/* 2715 */    MCD::OPC_CheckField, 6, 2, 0, 41, 48, // Skip to: 15050
/* 2721 */    MCD::OPC_Decode, 154, 6, 214, 1, // Opcode: C_NGT_S
/* 2726 */    MCD::OPC_FilterValue, 17, 153, 2, // Skip to: 3395
/* 2730 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2733 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2746
/* 2737 */    MCD::OPC_CheckPredicate, 51, 21, 48, // Skip to: 15050
/* 2741 */    MCD::OPC_Decode, 201, 8, 215, 1, // Opcode: FADD_D32
/* 2746 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2759
/* 2750 */    MCD::OPC_CheckPredicate, 51, 8, 48, // Skip to: 15050
/* 2754 */    MCD::OPC_Decode, 218, 9, 215, 1, // Opcode: FSUB_D32
/* 2759 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2772
/* 2763 */    MCD::OPC_CheckPredicate, 51, 251, 47, // Skip to: 15050
/* 2767 */    MCD::OPC_Decode, 176, 9, 215, 1, // Opcode: FMUL_D32
/* 2772 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2785
/* 2776 */    MCD::OPC_CheckPredicate, 51, 238, 47, // Skip to: 15050
/* 2780 */    MCD::OPC_Decode, 239, 8, 215, 1, // Opcode: FDIV_D32
/* 2785 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2804
/* 2789 */    MCD::OPC_CheckPredicate, 54, 225, 47, // Skip to: 15050
/* 2793 */    MCD::OPC_CheckField, 16, 5, 0, 219, 47, // Skip to: 15050
/* 2799 */    MCD::OPC_Decode, 211, 9, 216, 1, // Opcode: FSQRT_D32
/* 2804 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2823
/* 2808 */    MCD::OPC_CheckPredicate, 51, 206, 47, // Skip to: 15050
/* 2812 */    MCD::OPC_CheckField, 16, 5, 0, 200, 47, // Skip to: 15050
/* 2818 */    MCD::OPC_Decode, 194, 8, 216, 1, // Opcode: FABS_D32
/* 2823 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2842
/* 2827 */    MCD::OPC_CheckPredicate, 51, 187, 47, // Skip to: 15050
/* 2831 */    MCD::OPC_CheckField, 16, 5, 0, 181, 47, // Skip to: 15050
/* 2837 */    MCD::OPC_Decode, 166, 9, 216, 1, // Opcode: FMOV_D32
/* 2842 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2861
/* 2846 */    MCD::OPC_CheckPredicate, 51, 168, 47, // Skip to: 15050
/* 2850 */    MCD::OPC_CheckField, 16, 5, 0, 162, 47, // Skip to: 15050
/* 2856 */    MCD::OPC_Decode, 184, 9, 216, 1, // Opcode: FNEG_D32
/* 2861 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2880
/* 2865 */    MCD::OPC_CheckPredicate, 54, 149, 47, // Skip to: 15050
/* 2869 */    MCD::OPC_CheckField, 16, 5, 0, 143, 47, // Skip to: 15050
/* 2875 */    MCD::OPC_Decode, 239, 15, 217, 1, // Opcode: ROUND_W_D32
/* 2880 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2899
/* 2884 */    MCD::OPC_CheckPredicate, 54, 130, 47, // Skip to: 15050
/* 2888 */    MCD::OPC_CheckField, 16, 5, 0, 124, 47, // Skip to: 15050
/* 2894 */    MCD::OPC_Decode, 189, 19, 217, 1, // Opcode: TRUNC_W_D32
/* 2899 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2918
/* 2903 */    MCD::OPC_CheckPredicate, 54, 111, 47, // Skip to: 15050
/* 2907 */    MCD::OPC_CheckField, 16, 5, 0, 105, 47, // Skip to: 15050
/* 2913 */    MCD::OPC_Decode, 163, 4, 217, 1, // Opcode: CEIL_W_D32
/* 2918 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2937
/* 2922 */    MCD::OPC_CheckPredicate, 54, 92, 47, // Skip to: 15050
/* 2926 */    MCD::OPC_CheckField, 16, 5, 0, 86, 47, // Skip to: 15050
/* 2932 */    MCD::OPC_Decode, 149, 9, 217, 1, // Opcode: FLOOR_W_D32
/* 2937 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2970
/* 2941 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2944 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2957
/* 2948 */    MCD::OPC_CheckPredicate, 55, 66, 47, // Skip to: 15050
/* 2952 */    MCD::OPC_Decode, 253, 12, 218, 1, // Opcode: MOVF_D32
/* 2957 */    MCD::OPC_FilterValue, 1, 57, 47, // Skip to: 15050
/* 2961 */    MCD::OPC_CheckPredicate, 55, 53, 47, // Skip to: 15050
/* 2965 */    MCD::OPC_Decode, 145, 13, 218, 1, // Opcode: MOVT_D32
/* 2970 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2983
/* 2974 */    MCD::OPC_CheckPredicate, 55, 40, 47, // Skip to: 15050
/* 2978 */    MCD::OPC_Decode, 157, 13, 219, 1, // Opcode: MOVZ_I_D32
/* 2983 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2996
/* 2987 */    MCD::OPC_CheckPredicate, 55, 27, 47, // Skip to: 15050
/* 2991 */    MCD::OPC_Decode, 137, 13, 219, 1, // Opcode: MOVN_I_D32
/* 2996 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 3015
/* 3000 */    MCD::OPC_CheckPredicate, 50, 14, 47, // Skip to: 15050
/* 3004 */    MCD::OPC_CheckField, 16, 5, 0, 8, 47, // Skip to: 15050
/* 3010 */    MCD::OPC_Decode, 211, 15, 220, 1, // Opcode: RECIP_D
/* 3015 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 3034
/* 3019 */    MCD::OPC_CheckPredicate, 50, 251, 46, // Skip to: 15050
/* 3023 */    MCD::OPC_CheckField, 16, 5, 0, 245, 46, // Skip to: 15050
/* 3029 */    MCD::OPC_Decode, 246, 15, 220, 1, // Opcode: RSQRT_D
/* 3034 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3053
/* 3038 */    MCD::OPC_CheckPredicate, 51, 232, 46, // Skip to: 15050
/* 3042 */    MCD::OPC_CheckField, 16, 5, 0, 226, 46, // Skip to: 15050
/* 3048 */    MCD::OPC_Decode, 220, 5, 217, 1, // Opcode: CVT_S_D32
/* 3053 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 3072
/* 3057 */    MCD::OPC_CheckPredicate, 51, 213, 46, // Skip to: 15050
/* 3061 */    MCD::OPC_CheckField, 16, 5, 0, 207, 46, // Skip to: 15050
/* 3067 */    MCD::OPC_Decode, 229, 5, 217, 1, // Opcode: CVT_W_D32
/* 3072 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 3091
/* 3076 */    MCD::OPC_CheckPredicate, 52, 194, 46, // Skip to: 15050
/* 3080 */    MCD::OPC_CheckField, 16, 5, 0, 188, 46, // Skip to: 15050
/* 3086 */    MCD::OPC_Decode, 214, 5, 220, 1, // Opcode: CVT_L_D64
/* 3091 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 3110
/* 3095 */    MCD::OPC_CheckPredicate, 56, 175, 46, // Skip to: 15050
/* 3099 */    MCD::OPC_CheckField, 6, 2, 0, 169, 46, // Skip to: 15050
/* 3105 */    MCD::OPC_Decode, 242, 5, 221, 1, // Opcode: C_F_D32
/* 3110 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 3129
/* 3114 */    MCD::OPC_CheckPredicate, 56, 156, 46, // Skip to: 15050
/* 3118 */    MCD::OPC_CheckField, 6, 2, 0, 150, 46, // Skip to: 15050
/* 3124 */    MCD::OPC_Decode, 198, 6, 221, 1, // Opcode: C_UN_D32
/* 3129 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 3148
/* 3133 */    MCD::OPC_CheckPredicate, 56, 137, 46, // Skip to: 15050
/* 3137 */    MCD::OPC_CheckField, 6, 2, 0, 131, 46, // Skip to: 15050
/* 3143 */    MCD::OPC_Decode, 236, 5, 221, 1, // Opcode: C_EQ_D32
/* 3148 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 3167
/* 3152 */    MCD::OPC_CheckPredicate, 56, 118, 46, // Skip to: 15050
/* 3156 */    MCD::OPC_CheckField, 6, 2, 0, 112, 46, // Skip to: 15050
/* 3162 */    MCD::OPC_Decode, 180, 6, 221, 1, // Opcode: C_UEQ_D32
/* 3167 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 3186
/* 3171 */    MCD::OPC_CheckPredicate, 56, 99, 46, // Skip to: 15050
/* 3175 */    MCD::OPC_CheckField, 6, 2, 0, 93, 46, // Skip to: 15050
/* 3181 */    MCD::OPC_Decode, 162, 6, 221, 1, // Opcode: C_OLT_D32
/* 3186 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 3205
/* 3190 */    MCD::OPC_CheckPredicate, 56, 80, 46, // Skip to: 15050
/* 3194 */    MCD::OPC_CheckField, 6, 2, 0, 74, 46, // Skip to: 15050
/* 3200 */    MCD::OPC_Decode, 192, 6, 221, 1, // Opcode: C_ULT_D32
/* 3205 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 3224
/* 3209 */    MCD::OPC_CheckPredicate, 56, 61, 46, // Skip to: 15050
/* 3213 */    MCD::OPC_CheckField, 6, 2, 0, 55, 46, // Skip to: 15050
/* 3219 */    MCD::OPC_Decode, 156, 6, 221, 1, // Opcode: C_OLE_D32
/* 3224 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 3243
/* 3228 */    MCD::OPC_CheckPredicate, 56, 42, 46, // Skip to: 15050
/* 3232 */    MCD::OPC_CheckField, 6, 2, 0, 36, 46, // Skip to: 15050
/* 3238 */    MCD::OPC_Decode, 186, 6, 221, 1, // Opcode: C_ULE_D32
/* 3243 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 3262
/* 3247 */    MCD::OPC_CheckPredicate, 56, 23, 46, // Skip to: 15050
/* 3251 */    MCD::OPC_CheckField, 6, 2, 0, 17, 46, // Skip to: 15050
/* 3257 */    MCD::OPC_Decode, 174, 6, 221, 1, // Opcode: C_SF_D32
/* 3262 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 3281
/* 3266 */    MCD::OPC_CheckPredicate, 56, 4, 46, // Skip to: 15050
/* 3270 */    MCD::OPC_CheckField, 6, 2, 0, 254, 45, // Skip to: 15050
/* 3276 */    MCD::OPC_Decode, 138, 6, 221, 1, // Opcode: C_NGLE_D32
/* 3281 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 3300
/* 3285 */    MCD::OPC_CheckPredicate, 56, 241, 45, // Skip to: 15050
/* 3289 */    MCD::OPC_CheckField, 6, 2, 0, 235, 45, // Skip to: 15050
/* 3295 */    MCD::OPC_Decode, 168, 6, 221, 1, // Opcode: C_SEQ_D32
/* 3300 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 3319
/* 3304 */    MCD::OPC_CheckPredicate, 56, 222, 45, // Skip to: 15050
/* 3308 */    MCD::OPC_CheckField, 6, 2, 0, 216, 45, // Skip to: 15050
/* 3314 */    MCD::OPC_Decode, 144, 6, 221, 1, // Opcode: C_NGL_D32
/* 3319 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 3338
/* 3323 */    MCD::OPC_CheckPredicate, 56, 203, 45, // Skip to: 15050
/* 3327 */    MCD::OPC_CheckField, 6, 2, 0, 197, 45, // Skip to: 15050
/* 3333 */    MCD::OPC_Decode, 254, 5, 221, 1, // Opcode: C_LT_D32
/* 3338 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 3357
/* 3342 */    MCD::OPC_CheckPredicate, 56, 184, 45, // Skip to: 15050
/* 3346 */    MCD::OPC_CheckField, 6, 2, 0, 178, 45, // Skip to: 15050
/* 3352 */    MCD::OPC_Decode, 132, 6, 221, 1, // Opcode: C_NGE_D32
/* 3357 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 3376
/* 3361 */    MCD::OPC_CheckPredicate, 56, 165, 45, // Skip to: 15050
/* 3365 */    MCD::OPC_CheckField, 6, 2, 0, 159, 45, // Skip to: 15050
/* 3371 */    MCD::OPC_Decode, 248, 5, 221, 1, // Opcode: C_LE_D32
/* 3376 */    MCD::OPC_FilterValue, 63, 150, 45, // Skip to: 15050
/* 3380 */    MCD::OPC_CheckPredicate, 56, 146, 45, // Skip to: 15050
/* 3384 */    MCD::OPC_CheckField, 6, 2, 0, 140, 45, // Skip to: 15050
/* 3390 */    MCD::OPC_Decode, 150, 6, 221, 1, // Opcode: C_NGT_D32
/* 3395 */    MCD::OPC_FilterValue, 20, 41, 0, // Skip to: 3440
/* 3399 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3402 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3421
/* 3406 */    MCD::OPC_CheckPredicate, 43, 120, 45, // Skip to: 15050
/* 3410 */    MCD::OPC_CheckField, 16, 5, 0, 114, 45, // Skip to: 15050
/* 3416 */    MCD::OPC_Decode, 226, 5, 209, 1, // Opcode: CVT_S_W
/* 3421 */    MCD::OPC_FilterValue, 33, 105, 45, // Skip to: 15050
/* 3425 */    MCD::OPC_CheckPredicate, 51, 101, 45, // Skip to: 15050
/* 3429 */    MCD::OPC_CheckField, 16, 5, 0, 95, 45, // Skip to: 15050
/* 3435 */    MCD::OPC_Decode, 205, 5, 212, 1, // Opcode: CVT_D32_W
/* 3440 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 3453
/* 3444 */    MCD::OPC_CheckPredicate, 26, 82, 45, // Skip to: 15050
/* 3448 */    MCD::OPC_Decode, 246, 3, 207, 1, // Opcode: BZ_B
/* 3453 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 3466
/* 3457 */    MCD::OPC_CheckPredicate, 26, 69, 45, // Skip to: 15050
/* 3461 */    MCD::OPC_Decode, 248, 3, 222, 1, // Opcode: BZ_H
/* 3466 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3479
/* 3470 */    MCD::OPC_CheckPredicate, 26, 56, 45, // Skip to: 15050
/* 3474 */    MCD::OPC_Decode, 250, 3, 223, 1, // Opcode: BZ_W
/* 3479 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3492
/* 3483 */    MCD::OPC_CheckPredicate, 26, 43, 45, // Skip to: 15050
/* 3487 */    MCD::OPC_Decode, 247, 3, 224, 1, // Opcode: BZ_D
/* 3492 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 3505
/* 3496 */    MCD::OPC_CheckPredicate, 26, 30, 45, // Skip to: 15050
/* 3500 */    MCD::OPC_Decode, 215, 3, 207, 1, // Opcode: BNZ_B
/* 3505 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 3518
/* 3509 */    MCD::OPC_CheckPredicate, 26, 17, 45, // Skip to: 15050
/* 3513 */    MCD::OPC_Decode, 217, 3, 222, 1, // Opcode: BNZ_H
/* 3518 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3531
/* 3522 */    MCD::OPC_CheckPredicate, 26, 4, 45, // Skip to: 15050
/* 3526 */    MCD::OPC_Decode, 219, 3, 223, 1, // Opcode: BNZ_W
/* 3531 */    MCD::OPC_FilterValue, 31, 251, 44, // Skip to: 15050
/* 3535 */    MCD::OPC_CheckPredicate, 26, 247, 44, // Skip to: 15050
/* 3539 */    MCD::OPC_Decode, 216, 3, 224, 1, // Opcode: BNZ_D
/* 3544 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3589
/* 3548 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3551 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3570
/* 3555 */    MCD::OPC_CheckPredicate, 22, 227, 44, // Skip to: 15050
/* 3559 */    MCD::OPC_CheckField, 3, 8, 0, 221, 44, // Skip to: 15050
/* 3565 */    MCD::OPC_Decode, 184, 12, 225, 1, // Opcode: MFC2
/* 3570 */    MCD::OPC_FilterValue, 4, 212, 44, // Skip to: 15050
/* 3574 */    MCD::OPC_CheckPredicate, 22, 208, 44, // Skip to: 15050
/* 3578 */    MCD::OPC_CheckField, 3, 8, 0, 202, 44, // Skip to: 15050
/* 3584 */    MCD::OPC_Decode, 200, 13, 226, 1, // Opcode: MTC2
/* 3589 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3814
/* 3593 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3596 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3615
/* 3600 */    MCD::OPC_CheckPredicate, 57, 182, 44, // Skip to: 15050
/* 3604 */    MCD::OPC_CheckField, 11, 5, 0, 176, 44, // Skip to: 15050
/* 3610 */    MCD::OPC_Decode, 215, 11, 227, 1, // Opcode: LWXC1
/* 3615 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3634
/* 3619 */    MCD::OPC_CheckPredicate, 58, 163, 44, // Skip to: 15050
/* 3623 */    MCD::OPC_CheckField, 11, 5, 0, 157, 44, // Skip to: 15050
/* 3629 */    MCD::OPC_Decode, 252, 10, 228, 1, // Opcode: LDXC1
/* 3634 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3653
/* 3638 */    MCD::OPC_CheckPredicate, 59, 144, 44, // Skip to: 15050
/* 3642 */    MCD::OPC_CheckField, 11, 5, 0, 138, 44, // Skip to: 15050
/* 3648 */    MCD::OPC_Decode, 172, 11, 228, 1, // Opcode: LUXC1
/* 3653 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3672
/* 3657 */    MCD::OPC_CheckPredicate, 57, 125, 44, // Skip to: 15050
/* 3661 */    MCD::OPC_CheckField, 6, 5, 0, 119, 44, // Skip to: 15050
/* 3667 */    MCD::OPC_Decode, 215, 18, 229, 1, // Opcode: SWXC1
/* 3672 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3691
/* 3676 */    MCD::OPC_CheckPredicate, 58, 106, 44, // Skip to: 15050
/* 3680 */    MCD::OPC_CheckField, 6, 5, 0, 100, 44, // Skip to: 15050
/* 3686 */    MCD::OPC_Decode, 174, 16, 230, 1, // Opcode: SDXC1
/* 3691 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3710
/* 3695 */    MCD::OPC_CheckPredicate, 59, 87, 44, // Skip to: 15050
/* 3699 */    MCD::OPC_CheckField, 6, 5, 0, 81, 44, // Skip to: 15050
/* 3705 */    MCD::OPC_Decode, 181, 18, 230, 1, // Opcode: SUXC1
/* 3710 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3723
/* 3714 */    MCD::OPC_CheckPredicate, 60, 68, 44, // Skip to: 15050
/* 3718 */    MCD::OPC_Decode, 140, 12, 231, 1, // Opcode: MADD_S
/* 3723 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3736
/* 3727 */    MCD::OPC_CheckPredicate, 61, 55, 44, // Skip to: 15050
/* 3731 */    MCD::OPC_Decode, 132, 12, 232, 1, // Opcode: MADD_D32
/* 3736 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3749
/* 3740 */    MCD::OPC_CheckPredicate, 60, 42, 44, // Skip to: 15050
/* 3744 */    MCD::OPC_Decode, 192, 13, 231, 1, // Opcode: MSUB_S
/* 3749 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3762
/* 3753 */    MCD::OPC_CheckPredicate, 61, 29, 44, // Skip to: 15050
/* 3757 */    MCD::OPC_Decode, 184, 13, 232, 1, // Opcode: MSUB_D32
/* 3762 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3775
/* 3766 */    MCD::OPC_CheckPredicate, 60, 16, 44, // Skip to: 15050
/* 3770 */    MCD::OPC_Decode, 171, 14, 231, 1, // Opcode: NMADD_S
/* 3775 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3788
/* 3779 */    MCD::OPC_CheckPredicate, 61, 3, 44, // Skip to: 15050
/* 3783 */    MCD::OPC_Decode, 168, 14, 232, 1, // Opcode: NMADD_D32
/* 3788 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3801
/* 3792 */    MCD::OPC_CheckPredicate, 60, 246, 43, // Skip to: 15050
/* 3796 */    MCD::OPC_Decode, 176, 14, 231, 1, // Opcode: NMSUB_S
/* 3801 */    MCD::OPC_FilterValue, 57, 237, 43, // Skip to: 15050
/* 3805 */    MCD::OPC_CheckPredicate, 61, 233, 43, // Skip to: 15050
/* 3809 */    MCD::OPC_Decode, 173, 14, 232, 1, // Opcode: NMSUB_D32
/* 3814 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 3827
/* 3818 */    MCD::OPC_CheckPredicate, 35, 220, 43, // Skip to: 15050
/* 3822 */    MCD::OPC_Decode, 194, 2, 193, 1, // Opcode: BEQL
/* 3827 */    MCD::OPC_FilterValue, 21, 29, 2, // Skip to: 4372
/* 3831 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 3834 */    MCD::OPC_FilterValue, 187, 20, 8, 0, // Skip to: 3847
/* 3839 */    MCD::OPC_CheckPredicate, 14, 71, 0, // Skip to: 3914
/* 3843 */    MCD::OPC_Decode, 215, 9, 98, // Opcode: FSQRT_S_MM
/* 3847 */    MCD::OPC_FilterValue, 187, 22, 8, 0, // Skip to: 3860
/* 3852 */    MCD::OPC_CheckPredicate, 14, 58, 0, // Skip to: 3914
/* 3856 */    MCD::OPC_Decode, 154, 9, 98, // Opcode: FLOOR_W_S_MM
/* 3860 */    MCD::OPC_FilterValue, 187, 54, 8, 0, // Skip to: 3873
/* 3865 */    MCD::OPC_CheckPredicate, 14, 45, 0, // Skip to: 3914
/* 3869 */    MCD::OPC_Decode, 168, 4, 98, // Opcode: CEIL_W_S_MM
/* 3873 */    MCD::OPC_FilterValue, 187, 86, 8, 0, // Skip to: 3886
/* 3878 */    MCD::OPC_CheckPredicate, 14, 32, 0, // Skip to: 3914
/* 3882 */    MCD::OPC_Decode, 194, 19, 98, // Opcode: TRUNC_W_S_MM
/* 3886 */    MCD::OPC_FilterValue, 187, 96, 9, 0, // Skip to: 3900
/* 3891 */    MCD::OPC_CheckPredicate, 62, 19, 0, // Skip to: 3914
/* 3895 */    MCD::OPC_Decode, 191, 12, 135, 1, // Opcode: MFHC1_MM
/* 3900 */    MCD::OPC_FilterValue, 187, 112, 9, 0, // Skip to: 3914
/* 3905 */    MCD::OPC_CheckPredicate, 62, 5, 0, // Skip to: 3914
/* 3909 */    MCD::OPC_Decode, 207, 13, 136, 1, // Opcode: MTHC1_MM
/* 3914 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 3917 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3930
/* 3921 */    MCD::OPC_CheckPredicate, 63, 182, 1, // Skip to: 4363
/* 3925 */    MCD::OPC_Decode, 247, 5, 233, 1, // Opcode: C_F_S_MM
/* 3930 */    MCD::OPC_FilterValue, 124, 9, 0, // Skip to: 3943
/* 3934 */    MCD::OPC_CheckPredicate, 63, 169, 1, // Skip to: 4363
/* 3938 */    MCD::OPC_Decode, 203, 6, 233, 1, // Opcode: C_UN_S_MM
/* 3943 */    MCD::OPC_FilterValue, 188, 1, 9, 0, // Skip to: 3957
/* 3948 */    MCD::OPC_CheckPredicate, 63, 155, 1, // Skip to: 4363
/* 3952 */    MCD::OPC_Decode, 241, 5, 233, 1, // Opcode: C_EQ_S_MM
/* 3957 */    MCD::OPC_FilterValue, 252, 1, 9, 0, // Skip to: 3971
/* 3962 */    MCD::OPC_CheckPredicate, 63, 141, 1, // Skip to: 4363
/* 3966 */    MCD::OPC_Decode, 185, 6, 233, 1, // Opcode: C_UEQ_S_MM
/* 3971 */    MCD::OPC_FilterValue, 188, 2, 9, 0, // Skip to: 3985
/* 3976 */    MCD::OPC_CheckPredicate, 63, 127, 1, // Skip to: 4363
/* 3980 */    MCD::OPC_Decode, 167, 6, 233, 1, // Opcode: C_OLT_S_MM
/* 3985 */    MCD::OPC_FilterValue, 252, 2, 9, 0, // Skip to: 3999
/* 3990 */    MCD::OPC_CheckPredicate, 63, 113, 1, // Skip to: 4363
/* 3994 */    MCD::OPC_Decode, 197, 6, 233, 1, // Opcode: C_ULT_S_MM
/* 3999 */    MCD::OPC_FilterValue, 188, 3, 9, 0, // Skip to: 4013
/* 4004 */    MCD::OPC_CheckPredicate, 63, 99, 1, // Skip to: 4363
/* 4008 */    MCD::OPC_Decode, 161, 6, 233, 1, // Opcode: C_OLE_S_MM
/* 4013 */    MCD::OPC_FilterValue, 252, 3, 9, 0, // Skip to: 4027
/* 4018 */    MCD::OPC_CheckPredicate, 63, 85, 1, // Skip to: 4363
/* 4022 */    MCD::OPC_Decode, 191, 6, 233, 1, // Opcode: C_ULE_S_MM
/* 4027 */    MCD::OPC_FilterValue, 188, 4, 9, 0, // Skip to: 4041
/* 4032 */    MCD::OPC_CheckPredicate, 63, 71, 1, // Skip to: 4363
/* 4036 */    MCD::OPC_Decode, 179, 6, 233, 1, // Opcode: C_SF_S_MM
/* 4041 */    MCD::OPC_FilterValue, 252, 4, 9, 0, // Skip to: 4055
/* 4046 */    MCD::OPC_CheckPredicate, 63, 57, 1, // Skip to: 4363
/* 4050 */    MCD::OPC_Decode, 143, 6, 233, 1, // Opcode: C_NGLE_S_MM
/* 4055 */    MCD::OPC_FilterValue, 188, 5, 9, 0, // Skip to: 4069
/* 4060 */    MCD::OPC_CheckPredicate, 63, 43, 1, // Skip to: 4363
/* 4064 */    MCD::OPC_Decode, 173, 6, 233, 1, // Opcode: C_SEQ_S_MM
/* 4069 */    MCD::OPC_FilterValue, 252, 5, 9, 0, // Skip to: 4083
/* 4074 */    MCD::OPC_CheckPredicate, 63, 29, 1, // Skip to: 4363
/* 4078 */    MCD::OPC_Decode, 149, 6, 233, 1, // Opcode: C_NGL_S_MM
/* 4083 */    MCD::OPC_FilterValue, 188, 6, 9, 0, // Skip to: 4097
/* 4088 */    MCD::OPC_CheckPredicate, 63, 15, 1, // Skip to: 4363
/* 4092 */    MCD::OPC_Decode, 131, 6, 233, 1, // Opcode: C_LT_S_MM
/* 4097 */    MCD::OPC_FilterValue, 252, 6, 9, 0, // Skip to: 4111
/* 4102 */    MCD::OPC_CheckPredicate, 63, 1, 1, // Skip to: 4363
/* 4106 */    MCD::OPC_Decode, 137, 6, 233, 1, // Opcode: C_NGE_S_MM
/* 4111 */    MCD::OPC_FilterValue, 188, 7, 9, 0, // Skip to: 4125
/* 4116 */    MCD::OPC_CheckPredicate, 63, 243, 0, // Skip to: 4363
/* 4120 */    MCD::OPC_Decode, 253, 5, 233, 1, // Opcode: C_LE_S_MM
/* 4125 */    MCD::OPC_FilterValue, 252, 7, 9, 0, // Skip to: 4139
/* 4130 */    MCD::OPC_CheckPredicate, 63, 229, 0, // Skip to: 4363
/* 4134 */    MCD::OPC_Decode, 155, 6, 233, 1, // Opcode: C_NGT_S_MM
/* 4139 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 4153
/* 4144 */    MCD::OPC_CheckPredicate, 64, 215, 0, // Skip to: 4363
/* 4148 */    MCD::OPC_Decode, 243, 5, 234, 1, // Opcode: C_F_D32_MM
/* 4153 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 4167
/* 4158 */    MCD::OPC_CheckPredicate, 64, 201, 0, // Skip to: 4363
/* 4162 */    MCD::OPC_Decode, 199, 6, 234, 1, // Opcode: C_UN_D32_MM
/* 4167 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 4181
/* 4172 */    MCD::OPC_CheckPredicate, 64, 187, 0, // Skip to: 4363
/* 4176 */    MCD::OPC_Decode, 237, 5, 234, 1, // Opcode: C_EQ_D32_MM
/* 4181 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 4195
/* 4186 */    MCD::OPC_CheckPredicate, 64, 173, 0, // Skip to: 4363
/* 4190 */    MCD::OPC_Decode, 181, 6, 234, 1, // Opcode: C_UEQ_D32_MM
/* 4195 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 4209
/* 4200 */    MCD::OPC_CheckPredicate, 64, 159, 0, // Skip to: 4363
/* 4204 */    MCD::OPC_Decode, 163, 6, 234, 1, // Opcode: C_OLT_D32_MM
/* 4209 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 4223
/* 4214 */    MCD::OPC_CheckPredicate, 64, 145, 0, // Skip to: 4363
/* 4218 */    MCD::OPC_Decode, 193, 6, 234, 1, // Opcode: C_ULT_D32_MM
/* 4223 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 4237
/* 4228 */    MCD::OPC_CheckPredicate, 64, 131, 0, // Skip to: 4363
/* 4232 */    MCD::OPC_Decode, 157, 6, 234, 1, // Opcode: C_OLE_D32_MM
/* 4237 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 4251
/* 4242 */    MCD::OPC_CheckPredicate, 64, 117, 0, // Skip to: 4363
/* 4246 */    MCD::OPC_Decode, 187, 6, 234, 1, // Opcode: C_ULE_D32_MM
/* 4251 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 4265
/* 4256 */    MCD::OPC_CheckPredicate, 64, 103, 0, // Skip to: 4363
/* 4260 */    MCD::OPC_Decode, 175, 6, 234, 1, // Opcode: C_SF_D32_MM
/* 4265 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 4279
/* 4270 */    MCD::OPC_CheckPredicate, 64, 89, 0, // Skip to: 4363
/* 4274 */    MCD::OPC_Decode, 139, 6, 234, 1, // Opcode: C_NGLE_D32_MM
/* 4279 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 4293
/* 4284 */    MCD::OPC_CheckPredicate, 64, 75, 0, // Skip to: 4363
/* 4288 */    MCD::OPC_Decode, 169, 6, 234, 1, // Opcode: C_SEQ_D32_MM
/* 4293 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 4307
/* 4298 */    MCD::OPC_CheckPredicate, 64, 61, 0, // Skip to: 4363
/* 4302 */    MCD::OPC_Decode, 145, 6, 234, 1, // Opcode: C_NGL_D32_MM
/* 4307 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 4321
/* 4312 */    MCD::OPC_CheckPredicate, 64, 47, 0, // Skip to: 4363
/* 4316 */    MCD::OPC_Decode, 255, 5, 234, 1, // Opcode: C_LT_D32_MM
/* 4321 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 4335
/* 4326 */    MCD::OPC_CheckPredicate, 64, 33, 0, // Skip to: 4363
/* 4330 */    MCD::OPC_Decode, 133, 6, 234, 1, // Opcode: C_NGE_D32_MM
/* 4335 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 4349
/* 4340 */    MCD::OPC_CheckPredicate, 64, 19, 0, // Skip to: 4363
/* 4344 */    MCD::OPC_Decode, 249, 5, 234, 1, // Opcode: C_LE_D32_MM
/* 4349 */    MCD::OPC_FilterValue, 252, 15, 9, 0, // Skip to: 4363
/* 4354 */    MCD::OPC_CheckPredicate, 64, 5, 0, // Skip to: 4363
/* 4358 */    MCD::OPC_Decode, 151, 6, 234, 1, // Opcode: C_NGT_D32_MM
/* 4363 */    MCD::OPC_CheckPredicate, 35, 187, 41, // Skip to: 15050
/* 4367 */    MCD::OPC_Decode, 202, 3, 193, 1, // Opcode: BNEL
/* 4372 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 4391
/* 4376 */    MCD::OPC_CheckPredicate, 35, 174, 41, // Skip to: 15050
/* 4380 */    MCD::OPC_CheckField, 16, 5, 0, 168, 41, // Skip to: 15050
/* 4386 */    MCD::OPC_Decode, 156, 3, 190, 1, // Opcode: BLEZL
/* 4391 */    MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 4410
/* 4395 */    MCD::OPC_CheckPredicate, 35, 155, 41, // Skip to: 15050
/* 4399 */    MCD::OPC_CheckField, 16, 5, 0, 149, 41, // Skip to: 15050
/* 4405 */    MCD::OPC_Decode, 247, 2, 190, 1, // Opcode: BGTZL
/* 4410 */    MCD::OPC_FilterValue, 28, 236, 0, // Skip to: 4650
/* 4414 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4417 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 4458
/* 4421 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4424 */    MCD::OPC_FilterValue, 0, 126, 41, // Skip to: 15050
/* 4428 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4431 */    MCD::OPC_FilterValue, 0, 119, 41, // Skip to: 15050
/* 4435 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4449
/* 4439 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4449
/* 4445 */    MCD::OPC_Decode, 245, 11, 63, // Opcode: MADD
/* 4449 */    MCD::OPC_CheckPredicate, 32, 101, 41, // Skip to: 15050
/* 4453 */    MCD::OPC_Decode, 135, 12, 235, 1, // Opcode: MADD_DSP
/* 4458 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 4499
/* 4462 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4465 */    MCD::OPC_FilterValue, 0, 85, 41, // Skip to: 15050
/* 4469 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4472 */    MCD::OPC_FilterValue, 0, 78, 41, // Skip to: 15050
/* 4476 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4490
/* 4480 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4490
/* 4486 */    MCD::OPC_Decode, 252, 11, 63, // Opcode: MADDU
/* 4490 */    MCD::OPC_CheckPredicate, 32, 60, 41, // Skip to: 15050
/* 4494 */    MCD::OPC_Decode, 253, 11, 235, 1, // Opcode: MADDU_DSP
/* 4499 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4517
/* 4503 */    MCD::OPC_CheckPredicate, 28, 47, 41, // Skip to: 15050
/* 4507 */    MCD::OPC_CheckField, 6, 5, 0, 41, 41, // Skip to: 15050
/* 4513 */    MCD::OPC_Decode, 231, 13, 49, // Opcode: MUL
/* 4517 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 4558
/* 4521 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4524 */    MCD::OPC_FilterValue, 0, 26, 41, // Skip to: 15050
/* 4528 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4531 */    MCD::OPC_FilterValue, 0, 19, 41, // Skip to: 15050
/* 4535 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4549
/* 4539 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4549
/* 4545 */    MCD::OPC_Decode, 169, 13, 63, // Opcode: MSUB
/* 4549 */    MCD::OPC_CheckPredicate, 32, 1, 41, // Skip to: 15050
/* 4553 */    MCD::OPC_Decode, 187, 13, 235, 1, // Opcode: MSUB_DSP
/* 4558 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 4599
/* 4562 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4565 */    MCD::OPC_FilterValue, 0, 241, 40, // Skip to: 15050
/* 4569 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4572 */    MCD::OPC_FilterValue, 0, 234, 40, // Skip to: 15050
/* 4576 */    MCD::OPC_CheckPredicate, 28, 10, 0, // Skip to: 4590
/* 4580 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4590
/* 4586 */    MCD::OPC_Decode, 176, 13, 63, // Opcode: MSUBU
/* 4590 */    MCD::OPC_CheckPredicate, 32, 216, 40, // Skip to: 15050
/* 4594 */    MCD::OPC_Decode, 177, 13, 235, 1, // Opcode: MSUBU_DSP
/* 4599 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 4618
/* 4603 */    MCD::OPC_CheckPredicate, 28, 203, 40, // Skip to: 15050
/* 4607 */    MCD::OPC_CheckField, 6, 5, 0, 197, 40, // Skip to: 15050
/* 4613 */    MCD::OPC_Decode, 226, 4, 236, 1, // Opcode: CLZ
/* 4618 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 4637
/* 4622 */    MCD::OPC_CheckPredicate, 28, 184, 40, // Skip to: 15050
/* 4626 */    MCD::OPC_CheckField, 6, 5, 0, 178, 40, // Skip to: 15050
/* 4632 */    MCD::OPC_Decode, 206, 4, 236, 1, // Opcode: CLO
/* 4637 */    MCD::OPC_FilterValue, 63, 169, 40, // Skip to: 15050
/* 4641 */    MCD::OPC_CheckPredicate, 65, 165, 40, // Skip to: 15050
/* 4645 */    MCD::OPC_Decode, 154, 16, 181, 1, // Opcode: SDBBP
/* 4650 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 4663
/* 4654 */    MCD::OPC_CheckPredicate, 28, 152, 40, // Skip to: 15050
/* 4658 */    MCD::OPC_Decode, 189, 10, 192, 1, // Opcode: JALX
/* 4663 */    MCD::OPC_FilterValue, 30, 108, 28, // Skip to: 11943
/* 4667 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4670 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 4729
/* 4674 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4677 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4690
/* 4681 */    MCD::OPC_CheckPredicate, 26, 125, 40, // Skip to: 15050
/* 4685 */    MCD::OPC_Decode, 197, 1, 237, 1, // Opcode: ANDI_B
/* 4690 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4703
/* 4694 */    MCD::OPC_CheckPredicate, 26, 112, 40, // Skip to: 15050
/* 4698 */    MCD::OPC_Decode, 198, 14, 237, 1, // Opcode: ORI_B
/* 4703 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4716
/* 4707 */    MCD::OPC_CheckPredicate, 26, 99, 40, // Skip to: 15050
/* 4711 */    MCD::OPC_Decode, 181, 14, 237, 1, // Opcode: NORI_B
/* 4716 */    MCD::OPC_FilterValue, 3, 90, 40, // Skip to: 15050
/* 4720 */    MCD::OPC_CheckPredicate, 26, 86, 40, // Skip to: 15050
/* 4724 */    MCD::OPC_Decode, 227, 19, 237, 1, // Opcode: XORI_B
/* 4729 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4775
/* 4733 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4736 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4749
/* 4740 */    MCD::OPC_CheckPredicate, 26, 66, 40, // Skip to: 15050
/* 4744 */    MCD::OPC_Decode, 185, 3, 238, 1, // Opcode: BMNZI_B
/* 4749 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4762
/* 4753 */    MCD::OPC_CheckPredicate, 26, 53, 40, // Skip to: 15050
/* 4757 */    MCD::OPC_Decode, 187, 3, 238, 1, // Opcode: BMZI_B
/* 4762 */    MCD::OPC_FilterValue, 2, 44, 40, // Skip to: 15050
/* 4766 */    MCD::OPC_CheckPredicate, 26, 40, 40, // Skip to: 15050
/* 4770 */    MCD::OPC_Decode, 231, 3, 238, 1, // Opcode: BSELI_B
/* 4775 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 4821
/* 4779 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4782 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4795
/* 4786 */    MCD::OPC_CheckPredicate, 26, 20, 40, // Skip to: 15050
/* 4790 */    MCD::OPC_Decode, 216, 16, 237, 1, // Opcode: SHF_B
/* 4795 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4808
/* 4799 */    MCD::OPC_CheckPredicate, 26, 7, 40, // Skip to: 15050
/* 4803 */    MCD::OPC_Decode, 217, 16, 239, 1, // Opcode: SHF_H
/* 4808 */    MCD::OPC_FilterValue, 2, 254, 39, // Skip to: 15050
/* 4812 */    MCD::OPC_CheckPredicate, 26, 250, 39, // Skip to: 15050
/* 4816 */    MCD::OPC_Decode, 218, 16, 240, 1, // Opcode: SHF_W
/* 4821 */    MCD::OPC_FilterValue, 6, 59, 1, // Skip to: 5140
/* 4825 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4828 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4841
/* 4832 */    MCD::OPC_CheckPredicate, 26, 230, 39, // Skip to: 15050
/* 4836 */    MCD::OPC_Decode, 163, 1, 241, 1, // Opcode: ADDVI_B
/* 4841 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4854
/* 4845 */    MCD::OPC_CheckPredicate, 26, 217, 39, // Skip to: 15050
/* 4849 */    MCD::OPC_Decode, 165, 1, 242, 1, // Opcode: ADDVI_H
/* 4854 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4867
/* 4858 */    MCD::OPC_CheckPredicate, 26, 204, 39, // Skip to: 15050
/* 4862 */    MCD::OPC_Decode, 166, 1, 243, 1, // Opcode: ADDVI_W
/* 4867 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4880
/* 4871 */    MCD::OPC_CheckPredicate, 26, 191, 39, // Skip to: 15050
/* 4875 */    MCD::OPC_Decode, 164, 1, 244, 1, // Opcode: ADDVI_D
/* 4880 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4893
/* 4884 */    MCD::OPC_CheckPredicate, 26, 178, 39, // Skip to: 15050
/* 4888 */    MCD::OPC_Decode, 169, 18, 241, 1, // Opcode: SUBVI_B
/* 4893 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 4906
/* 4897 */    MCD::OPC_CheckPredicate, 26, 165, 39, // Skip to: 15050
/* 4901 */    MCD::OPC_Decode, 171, 18, 242, 1, // Opcode: SUBVI_H
/* 4906 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4919
/* 4910 */    MCD::OPC_CheckPredicate, 26, 152, 39, // Skip to: 15050
/* 4914 */    MCD::OPC_Decode, 172, 18, 243, 1, // Opcode: SUBVI_W
/* 4919 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4932
/* 4923 */    MCD::OPC_CheckPredicate, 26, 139, 39, // Skip to: 15050
/* 4927 */    MCD::OPC_Decode, 170, 18, 244, 1, // Opcode: SUBVI_D
/* 4932 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4945
/* 4936 */    MCD::OPC_CheckPredicate, 26, 126, 39, // Skip to: 15050
/* 4940 */    MCD::OPC_Decode, 154, 12, 241, 1, // Opcode: MAXI_S_B
/* 4945 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4958
/* 4949 */    MCD::OPC_CheckPredicate, 26, 113, 39, // Skip to: 15050
/* 4953 */    MCD::OPC_Decode, 156, 12, 242, 1, // Opcode: MAXI_S_H
/* 4958 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4971
/* 4962 */    MCD::OPC_CheckPredicate, 26, 100, 39, // Skip to: 15050
/* 4966 */    MCD::OPC_Decode, 157, 12, 243, 1, // Opcode: MAXI_S_W
/* 4971 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4984
/* 4975 */    MCD::OPC_CheckPredicate, 26, 87, 39, // Skip to: 15050
/* 4979 */    MCD::OPC_Decode, 155, 12, 244, 1, // Opcode: MAXI_S_D
/* 4984 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4997
/* 4988 */    MCD::OPC_CheckPredicate, 26, 74, 39, // Skip to: 15050
/* 4992 */    MCD::OPC_Decode, 158, 12, 241, 1, // Opcode: MAXI_U_B
/* 4997 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5010
/* 5001 */    MCD::OPC_CheckPredicate, 26, 61, 39, // Skip to: 15050
/* 5005 */    MCD::OPC_Decode, 160, 12, 242, 1, // Opcode: MAXI_U_H
/* 5010 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5023
/* 5014 */    MCD::OPC_CheckPredicate, 26, 48, 39, // Skip to: 15050
/* 5018 */    MCD::OPC_Decode, 161, 12, 243, 1, // Opcode: MAXI_U_W
/* 5023 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5036
/* 5027 */    MCD::OPC_CheckPredicate, 26, 35, 39, // Skip to: 15050
/* 5031 */    MCD::OPC_Decode, 159, 12, 244, 1, // Opcode: MAXI_U_D
/* 5036 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5049
/* 5040 */    MCD::OPC_CheckPredicate, 26, 22, 39, // Skip to: 15050
/* 5044 */    MCD::OPC_Decode, 209, 12, 241, 1, // Opcode: MINI_S_B
/* 5049 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5062
/* 5053 */    MCD::OPC_CheckPredicate, 26, 9, 39, // Skip to: 15050
/* 5057 */    MCD::OPC_Decode, 211, 12, 242, 1, // Opcode: MINI_S_H
/* 5062 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5075
/* 5066 */    MCD::OPC_CheckPredicate, 26, 252, 38, // Skip to: 15050
/* 5070 */    MCD::OPC_Decode, 212, 12, 243, 1, // Opcode: MINI_S_W
/* 5075 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5088
/* 5079 */    MCD::OPC_CheckPredicate, 26, 239, 38, // Skip to: 15050
/* 5083 */    MCD::OPC_Decode, 210, 12, 244, 1, // Opcode: MINI_S_D
/* 5088 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5101
/* 5092 */    MCD::OPC_CheckPredicate, 26, 226, 38, // Skip to: 15050
/* 5096 */    MCD::OPC_Decode, 213, 12, 241, 1, // Opcode: MINI_U_B
/* 5101 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5114
/* 5105 */    MCD::OPC_CheckPredicate, 26, 213, 38, // Skip to: 15050
/* 5109 */    MCD::OPC_Decode, 215, 12, 242, 1, // Opcode: MINI_U_H
/* 5114 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5127
/* 5118 */    MCD::OPC_CheckPredicate, 26, 200, 38, // Skip to: 15050
/* 5122 */    MCD::OPC_Decode, 216, 12, 243, 1, // Opcode: MINI_U_W
/* 5127 */    MCD::OPC_FilterValue, 23, 191, 38, // Skip to: 15050
/* 5131 */    MCD::OPC_CheckPredicate, 26, 187, 38, // Skip to: 15050
/* 5135 */    MCD::OPC_Decode, 214, 12, 244, 1, // Opcode: MINI_U_D
/* 5140 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 5459
/* 5144 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5147 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5160
/* 5151 */    MCD::OPC_CheckPredicate, 26, 167, 38, // Skip to: 15050
/* 5155 */    MCD::OPC_Decode, 170, 4, 241, 1, // Opcode: CEQI_B
/* 5160 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5173
/* 5164 */    MCD::OPC_CheckPredicate, 26, 154, 38, // Skip to: 15050
/* 5168 */    MCD::OPC_Decode, 172, 4, 242, 1, // Opcode: CEQI_H
/* 5173 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5186
/* 5177 */    MCD::OPC_CheckPredicate, 26, 141, 38, // Skip to: 15050
/* 5181 */    MCD::OPC_Decode, 173, 4, 243, 1, // Opcode: CEQI_W
/* 5186 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5199
/* 5190 */    MCD::OPC_CheckPredicate, 26, 128, 38, // Skip to: 15050
/* 5194 */    MCD::OPC_Decode, 171, 4, 244, 1, // Opcode: CEQI_D
/* 5199 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5212
/* 5203 */    MCD::OPC_CheckPredicate, 26, 115, 38, // Skip to: 15050
/* 5207 */    MCD::OPC_Decode, 210, 4, 241, 1, // Opcode: CLTI_S_B
/* 5212 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5225
/* 5216 */    MCD::OPC_CheckPredicate, 26, 102, 38, // Skip to: 15050
/* 5220 */    MCD::OPC_Decode, 212, 4, 242, 1, // Opcode: CLTI_S_H
/* 5225 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5238
/* 5229 */    MCD::OPC_CheckPredicate, 26, 89, 38, // Skip to: 15050
/* 5233 */    MCD::OPC_Decode, 213, 4, 243, 1, // Opcode: CLTI_S_W
/* 5238 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5251
/* 5242 */    MCD::OPC_CheckPredicate, 26, 76, 38, // Skip to: 15050
/* 5246 */    MCD::OPC_Decode, 211, 4, 244, 1, // Opcode: CLTI_S_D
/* 5251 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5264
/* 5255 */    MCD::OPC_CheckPredicate, 26, 63, 38, // Skip to: 15050
/* 5259 */    MCD::OPC_Decode, 214, 4, 241, 1, // Opcode: CLTI_U_B
/* 5264 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5277
/* 5268 */    MCD::OPC_CheckPredicate, 26, 50, 38, // Skip to: 15050
/* 5272 */    MCD::OPC_Decode, 216, 4, 242, 1, // Opcode: CLTI_U_H
/* 5277 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5290
/* 5281 */    MCD::OPC_CheckPredicate, 26, 37, 38, // Skip to: 15050
/* 5285 */    MCD::OPC_Decode, 217, 4, 243, 1, // Opcode: CLTI_U_W
/* 5290 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5303
/* 5294 */    MCD::OPC_CheckPredicate, 26, 24, 38, // Skip to: 15050
/* 5298 */    MCD::OPC_Decode, 215, 4, 244, 1, // Opcode: CLTI_U_D
/* 5303 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5316
/* 5307 */    MCD::OPC_CheckPredicate, 26, 11, 38, // Skip to: 15050
/* 5311 */    MCD::OPC_Decode, 190, 4, 241, 1, // Opcode: CLEI_S_B
/* 5316 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5329
/* 5320 */    MCD::OPC_CheckPredicate, 26, 254, 37, // Skip to: 15050
/* 5324 */    MCD::OPC_Decode, 192, 4, 242, 1, // Opcode: CLEI_S_H
/* 5329 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5342
/* 5333 */    MCD::OPC_CheckPredicate, 26, 241, 37, // Skip to: 15050
/* 5337 */    MCD::OPC_Decode, 193, 4, 243, 1, // Opcode: CLEI_S_W
/* 5342 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5355
/* 5346 */    MCD::OPC_CheckPredicate, 26, 228, 37, // Skip to: 15050
/* 5350 */    MCD::OPC_Decode, 191, 4, 244, 1, // Opcode: CLEI_S_D
/* 5355 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5368
/* 5359 */    MCD::OPC_CheckPredicate, 26, 215, 37, // Skip to: 15050
/* 5363 */    MCD::OPC_Decode, 194, 4, 241, 1, // Opcode: CLEI_U_B
/* 5368 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5381
/* 5372 */    MCD::OPC_CheckPredicate, 26, 202, 37, // Skip to: 15050
/* 5376 */    MCD::OPC_Decode, 196, 4, 242, 1, // Opcode: CLEI_U_H
/* 5381 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5394
/* 5385 */    MCD::OPC_CheckPredicate, 26, 189, 37, // Skip to: 15050
/* 5389 */    MCD::OPC_Decode, 197, 4, 243, 1, // Opcode: CLEI_U_W
/* 5394 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5407
/* 5398 */    MCD::OPC_CheckPredicate, 26, 176, 37, // Skip to: 15050
/* 5402 */    MCD::OPC_Decode, 195, 4, 244, 1, // Opcode: CLEI_U_D
/* 5407 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5420
/* 5411 */    MCD::OPC_CheckPredicate, 26, 163, 37, // Skip to: 15050
/* 5415 */    MCD::OPC_Decode, 243, 10, 245, 1, // Opcode: LDI_B
/* 5420 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5433
/* 5424 */    MCD::OPC_CheckPredicate, 26, 150, 37, // Skip to: 15050
/* 5428 */    MCD::OPC_Decode, 245, 10, 246, 1, // Opcode: LDI_H
/* 5433 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5446
/* 5437 */    MCD::OPC_CheckPredicate, 26, 137, 37, // Skip to: 15050
/* 5441 */    MCD::OPC_Decode, 246, 10, 247, 1, // Opcode: LDI_W
/* 5446 */    MCD::OPC_FilterValue, 27, 128, 37, // Skip to: 15050
/* 5450 */    MCD::OPC_CheckPredicate, 26, 124, 37, // Skip to: 15050
/* 5454 */    MCD::OPC_Decode, 244, 10, 248, 1, // Opcode: LDI_D
/* 5459 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 6042
/* 5463 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5466 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5479
/* 5470 */    MCD::OPC_CheckPredicate, 26, 104, 37, // Skip to: 15050
/* 5474 */    MCD::OPC_Decode, 155, 17, 249, 1, // Opcode: SLLI_D
/* 5479 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5538
/* 5483 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5486 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5499
/* 5490 */    MCD::OPC_CheckPredicate, 26, 84, 37, // Skip to: 15050
/* 5494 */    MCD::OPC_Decode, 157, 17, 243, 1, // Opcode: SLLI_W
/* 5499 */    MCD::OPC_FilterValue, 1, 75, 37, // Skip to: 15050
/* 5503 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5506 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5519
/* 5510 */    MCD::OPC_CheckPredicate, 26, 64, 37, // Skip to: 15050
/* 5514 */    MCD::OPC_Decode, 156, 17, 250, 1, // Opcode: SLLI_H
/* 5519 */    MCD::OPC_FilterValue, 1, 55, 37, // Skip to: 15050
/* 5523 */    MCD::OPC_CheckPredicate, 26, 51, 37, // Skip to: 15050
/* 5527 */    MCD::OPC_CheckField, 19, 1, 0, 45, 37, // Skip to: 15050
/* 5533 */    MCD::OPC_Decode, 154, 17, 251, 1, // Opcode: SLLI_B
/* 5538 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5551
/* 5542 */    MCD::OPC_CheckPredicate, 26, 32, 37, // Skip to: 15050
/* 5546 */    MCD::OPC_Decode, 199, 17, 249, 1, // Opcode: SRAI_D
/* 5551 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5610
/* 5555 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5558 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5571
/* 5562 */    MCD::OPC_CheckPredicate, 26, 12, 37, // Skip to: 15050
/* 5566 */    MCD::OPC_Decode, 201, 17, 243, 1, // Opcode: SRAI_W
/* 5571 */    MCD::OPC_FilterValue, 1, 3, 37, // Skip to: 15050
/* 5575 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5578 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5591
/* 5582 */    MCD::OPC_CheckPredicate, 26, 248, 36, // Skip to: 15050
/* 5586 */    MCD::OPC_Decode, 200, 17, 250, 1, // Opcode: SRAI_H
/* 5591 */    MCD::OPC_FilterValue, 1, 239, 36, // Skip to: 15050
/* 5595 */    MCD::OPC_CheckPredicate, 26, 235, 36, // Skip to: 15050
/* 5599 */    MCD::OPC_CheckField, 19, 1, 0, 229, 36, // Skip to: 15050
/* 5605 */    MCD::OPC_Decode, 198, 17, 251, 1, // Opcode: SRAI_B
/* 5610 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5623
/* 5614 */    MCD::OPC_CheckPredicate, 26, 216, 36, // Skip to: 15050
/* 5618 */    MCD::OPC_Decode, 221, 17, 249, 1, // Opcode: SRLI_D
/* 5623 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5682
/* 5627 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5630 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5643
/* 5634 */    MCD::OPC_CheckPredicate, 26, 196, 36, // Skip to: 15050
/* 5638 */    MCD::OPC_Decode, 223, 17, 243, 1, // Opcode: SRLI_W
/* 5643 */    MCD::OPC_FilterValue, 1, 187, 36, // Skip to: 15050
/* 5647 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5650 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5663
/* 5654 */    MCD::OPC_CheckPredicate, 26, 176, 36, // Skip to: 15050
/* 5658 */    MCD::OPC_Decode, 222, 17, 250, 1, // Opcode: SRLI_H
/* 5663 */    MCD::OPC_FilterValue, 1, 167, 36, // Skip to: 15050
/* 5667 */    MCD::OPC_CheckPredicate, 26, 163, 36, // Skip to: 15050
/* 5671 */    MCD::OPC_CheckField, 19, 1, 0, 157, 36, // Skip to: 15050
/* 5677 */    MCD::OPC_Decode, 220, 17, 251, 1, // Opcode: SRLI_B
/* 5682 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5695
/* 5686 */    MCD::OPC_CheckPredicate, 26, 144, 36, // Skip to: 15050
/* 5690 */    MCD::OPC_Decode, 181, 2, 249, 1, // Opcode: BCLRI_D
/* 5695 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 5754
/* 5699 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5702 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5715
/* 5706 */    MCD::OPC_CheckPredicate, 26, 124, 36, // Skip to: 15050
/* 5710 */    MCD::OPC_Decode, 183, 2, 243, 1, // Opcode: BCLRI_W
/* 5715 */    MCD::OPC_FilterValue, 1, 115, 36, // Skip to: 15050
/* 5719 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5722 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5735
/* 5726 */    MCD::OPC_CheckPredicate, 26, 104, 36, // Skip to: 15050
/* 5730 */    MCD::OPC_Decode, 182, 2, 250, 1, // Opcode: BCLRI_H
/* 5735 */    MCD::OPC_FilterValue, 1, 95, 36, // Skip to: 15050
/* 5739 */    MCD::OPC_CheckPredicate, 26, 91, 36, // Skip to: 15050
/* 5743 */    MCD::OPC_CheckField, 19, 1, 0, 85, 36, // Skip to: 15050
/* 5749 */    MCD::OPC_Decode, 180, 2, 251, 1, // Opcode: BCLRI_B
/* 5754 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5767
/* 5758 */    MCD::OPC_CheckPredicate, 26, 72, 36, // Skip to: 15050
/* 5762 */    MCD::OPC_Decode, 239, 3, 249, 1, // Opcode: BSETI_D
/* 5767 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 5826
/* 5771 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5774 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5787
/* 5778 */    MCD::OPC_CheckPredicate, 26, 52, 36, // Skip to: 15050
/* 5782 */    MCD::OPC_Decode, 241, 3, 243, 1, // Opcode: BSETI_W
/* 5787 */    MCD::OPC_FilterValue, 1, 43, 36, // Skip to: 15050
/* 5791 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5794 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5807
/* 5798 */    MCD::OPC_CheckPredicate, 26, 32, 36, // Skip to: 15050
/* 5802 */    MCD::OPC_Decode, 240, 3, 250, 1, // Opcode: BSETI_H
/* 5807 */    MCD::OPC_FilterValue, 1, 23, 36, // Skip to: 15050
/* 5811 */    MCD::OPC_CheckPredicate, 26, 19, 36, // Skip to: 15050
/* 5815 */    MCD::OPC_CheckField, 19, 1, 0, 13, 36, // Skip to: 15050
/* 5821 */    MCD::OPC_Decode, 238, 3, 251, 1, // Opcode: BSETI_B
/* 5826 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5839
/* 5830 */    MCD::OPC_CheckPredicate, 26, 0, 36, // Skip to: 15050
/* 5834 */    MCD::OPC_Decode, 195, 3, 249, 1, // Opcode: BNEGI_D
/* 5839 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 5898
/* 5843 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5846 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5859
/* 5850 */    MCD::OPC_CheckPredicate, 26, 236, 35, // Skip to: 15050
/* 5854 */    MCD::OPC_Decode, 197, 3, 243, 1, // Opcode: BNEGI_W
/* 5859 */    MCD::OPC_FilterValue, 1, 227, 35, // Skip to: 15050
/* 5863 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5866 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5879
/* 5870 */    MCD::OPC_CheckPredicate, 26, 216, 35, // Skip to: 15050
/* 5874 */    MCD::OPC_Decode, 196, 3, 250, 1, // Opcode: BNEGI_H
/* 5879 */    MCD::OPC_FilterValue, 1, 207, 35, // Skip to: 15050
/* 5883 */    MCD::OPC_CheckPredicate, 26, 203, 35, // Skip to: 15050
/* 5887 */    MCD::OPC_CheckField, 19, 1, 0, 197, 35, // Skip to: 15050
/* 5893 */    MCD::OPC_Decode, 194, 3, 251, 1, // Opcode: BNEGI_B
/* 5898 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5911
/* 5902 */    MCD::OPC_CheckPredicate, 26, 184, 35, // Skip to: 15050
/* 5906 */    MCD::OPC_Decode, 250, 2, 252, 1, // Opcode: BINSLI_D
/* 5911 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5970
/* 5915 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5918 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5931
/* 5922 */    MCD::OPC_CheckPredicate, 26, 164, 35, // Skip to: 15050
/* 5926 */    MCD::OPC_Decode, 252, 2, 253, 1, // Opcode: BINSLI_W
/* 5931 */    MCD::OPC_FilterValue, 1, 155, 35, // Skip to: 15050
/* 5935 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5938 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5951
/* 5942 */    MCD::OPC_CheckPredicate, 26, 144, 35, // Skip to: 15050
/* 5946 */    MCD::OPC_Decode, 251, 2, 254, 1, // Opcode: BINSLI_H
/* 5951 */    MCD::OPC_FilterValue, 1, 135, 35, // Skip to: 15050
/* 5955 */    MCD::OPC_CheckPredicate, 26, 131, 35, // Skip to: 15050
/* 5959 */    MCD::OPC_CheckField, 19, 1, 0, 125, 35, // Skip to: 15050
/* 5965 */    MCD::OPC_Decode, 249, 2, 255, 1, // Opcode: BINSLI_B
/* 5970 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5983
/* 5974 */    MCD::OPC_CheckPredicate, 26, 112, 35, // Skip to: 15050
/* 5978 */    MCD::OPC_Decode, 130, 3, 252, 1, // Opcode: BINSRI_D
/* 5983 */    MCD::OPC_FilterValue, 15, 103, 35, // Skip to: 15050
/* 5987 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5990 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6003
/* 5994 */    MCD::OPC_CheckPredicate, 26, 92, 35, // Skip to: 15050
/* 5998 */    MCD::OPC_Decode, 132, 3, 253, 1, // Opcode: BINSRI_W
/* 6003 */    MCD::OPC_FilterValue, 1, 83, 35, // Skip to: 15050
/* 6007 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6010 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6023
/* 6014 */    MCD::OPC_CheckPredicate, 26, 72, 35, // Skip to: 15050
/* 6018 */    MCD::OPC_Decode, 131, 3, 254, 1, // Opcode: BINSRI_H
/* 6023 */    MCD::OPC_FilterValue, 1, 63, 35, // Skip to: 15050
/* 6027 */    MCD::OPC_CheckPredicate, 26, 59, 35, // Skip to: 15050
/* 6031 */    MCD::OPC_CheckField, 19, 1, 0, 53, 35, // Skip to: 15050
/* 6037 */    MCD::OPC_Decode, 129, 3, 255, 1, // Opcode: BINSRI_B
/* 6042 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 6337
/* 6046 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 6049 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6062
/* 6053 */    MCD::OPC_CheckPredicate, 26, 33, 35, // Skip to: 15050
/* 6057 */    MCD::OPC_Decode, 255, 15, 249, 1, // Opcode: SAT_S_D
/* 6062 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 6121
/* 6066 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6069 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6082
/* 6073 */    MCD::OPC_CheckPredicate, 26, 13, 35, // Skip to: 15050
/* 6077 */    MCD::OPC_Decode, 129, 16, 243, 1, // Opcode: SAT_S_W
/* 6082 */    MCD::OPC_FilterValue, 1, 4, 35, // Skip to: 15050
/* 6086 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6089 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6102
/* 6093 */    MCD::OPC_CheckPredicate, 26, 249, 34, // Skip to: 15050
/* 6097 */    MCD::OPC_Decode, 128, 16, 250, 1, // Opcode: SAT_S_H
/* 6102 */    MCD::OPC_FilterValue, 1, 240, 34, // Skip to: 15050
/* 6106 */    MCD::OPC_CheckPredicate, 26, 236, 34, // Skip to: 15050
/* 6110 */    MCD::OPC_CheckField, 19, 1, 0, 230, 34, // Skip to: 15050
/* 6116 */    MCD::OPC_Decode, 254, 15, 251, 1, // Opcode: SAT_S_B
/* 6121 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6134
/* 6125 */    MCD::OPC_CheckPredicate, 26, 217, 34, // Skip to: 15050
/* 6129 */    MCD::OPC_Decode, 131, 16, 249, 1, // Opcode: SAT_U_D
/* 6134 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 6193
/* 6138 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6141 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6154
/* 6145 */    MCD::OPC_CheckPredicate, 26, 197, 34, // Skip to: 15050
/* 6149 */    MCD::OPC_Decode, 133, 16, 243, 1, // Opcode: SAT_U_W
/* 6154 */    MCD::OPC_FilterValue, 1, 188, 34, // Skip to: 15050
/* 6158 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6161 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6174
/* 6165 */    MCD::OPC_CheckPredicate, 26, 177, 34, // Skip to: 15050
/* 6169 */    MCD::OPC_Decode, 132, 16, 250, 1, // Opcode: SAT_U_H
/* 6174 */    MCD::OPC_FilterValue, 1, 168, 34, // Skip to: 15050
/* 6178 */    MCD::OPC_CheckPredicate, 26, 164, 34, // Skip to: 15050
/* 6182 */    MCD::OPC_CheckField, 19, 1, 0, 158, 34, // Skip to: 15050
/* 6188 */    MCD::OPC_Decode, 130, 16, 251, 1, // Opcode: SAT_U_B
/* 6193 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6206
/* 6197 */    MCD::OPC_CheckPredicate, 26, 145, 34, // Skip to: 15050
/* 6201 */    MCD::OPC_Decode, 203, 17, 249, 1, // Opcode: SRARI_D
/* 6206 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 6265
/* 6210 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6213 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6226
/* 6217 */    MCD::OPC_CheckPredicate, 26, 125, 34, // Skip to: 15050
/* 6221 */    MCD::OPC_Decode, 205, 17, 243, 1, // Opcode: SRARI_W
/* 6226 */    MCD::OPC_FilterValue, 1, 116, 34, // Skip to: 15050
/* 6230 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6233 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6246
/* 6237 */    MCD::OPC_CheckPredicate, 26, 105, 34, // Skip to: 15050
/* 6241 */    MCD::OPC_Decode, 204, 17, 250, 1, // Opcode: SRARI_H
/* 6246 */    MCD::OPC_FilterValue, 1, 96, 34, // Skip to: 15050
/* 6250 */    MCD::OPC_CheckPredicate, 26, 92, 34, // Skip to: 15050
/* 6254 */    MCD::OPC_CheckField, 19, 1, 0, 86, 34, // Skip to: 15050
/* 6260 */    MCD::OPC_Decode, 202, 17, 251, 1, // Opcode: SRARI_B
/* 6265 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6278
/* 6269 */    MCD::OPC_CheckPredicate, 26, 73, 34, // Skip to: 15050
/* 6273 */    MCD::OPC_Decode, 225, 17, 249, 1, // Opcode: SRLRI_D
/* 6278 */    MCD::OPC_FilterValue, 7, 64, 34, // Skip to: 15050
/* 6282 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6285 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6298
/* 6289 */    MCD::OPC_CheckPredicate, 26, 53, 34, // Skip to: 15050
/* 6293 */    MCD::OPC_Decode, 227, 17, 243, 1, // Opcode: SRLRI_W
/* 6298 */    MCD::OPC_FilterValue, 1, 44, 34, // Skip to: 15050
/* 6302 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6305 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6318
/* 6309 */    MCD::OPC_CheckPredicate, 26, 33, 34, // Skip to: 15050
/* 6313 */    MCD::OPC_Decode, 226, 17, 250, 1, // Opcode: SRLRI_H
/* 6318 */    MCD::OPC_FilterValue, 1, 24, 34, // Skip to: 15050
/* 6322 */    MCD::OPC_CheckPredicate, 26, 20, 34, // Skip to: 15050
/* 6326 */    MCD::OPC_CheckField, 19, 1, 0, 14, 34, // Skip to: 15050
/* 6332 */    MCD::OPC_Decode, 224, 17, 251, 1, // Opcode: SRLRI_B
/* 6337 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 6760
/* 6341 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6344 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6357
/* 6348 */    MCD::OPC_CheckPredicate, 26, 250, 33, // Skip to: 15050
/* 6352 */    MCD::OPC_Decode, 160, 17, 128, 2, // Opcode: SLL_B
/* 6357 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6370
/* 6361 */    MCD::OPC_CheckPredicate, 26, 237, 33, // Skip to: 15050
/* 6365 */    MCD::OPC_Decode, 162, 17, 129, 2, // Opcode: SLL_H
/* 6370 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6383
/* 6374 */    MCD::OPC_CheckPredicate, 26, 224, 33, // Skip to: 15050
/* 6378 */    MCD::OPC_Decode, 165, 17, 130, 2, // Opcode: SLL_W
/* 6383 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6396
/* 6387 */    MCD::OPC_CheckPredicate, 26, 211, 33, // Skip to: 15050
/* 6391 */    MCD::OPC_Decode, 161, 17, 131, 2, // Opcode: SLL_D
/* 6396 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6409
/* 6400 */    MCD::OPC_CheckPredicate, 26, 198, 33, // Skip to: 15050
/* 6404 */    MCD::OPC_Decode, 212, 17, 128, 2, // Opcode: SRA_B
/* 6409 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6422
/* 6413 */    MCD::OPC_CheckPredicate, 26, 185, 33, // Skip to: 15050
/* 6417 */    MCD::OPC_Decode, 214, 17, 129, 2, // Opcode: SRA_H
/* 6422 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6435
/* 6426 */    MCD::OPC_CheckPredicate, 26, 172, 33, // Skip to: 15050
/* 6430 */    MCD::OPC_Decode, 216, 17, 130, 2, // Opcode: SRA_W
/* 6435 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6448
/* 6439 */    MCD::OPC_CheckPredicate, 26, 159, 33, // Skip to: 15050
/* 6443 */    MCD::OPC_Decode, 213, 17, 131, 2, // Opcode: SRA_D
/* 6448 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6461
/* 6452 */    MCD::OPC_CheckPredicate, 26, 146, 33, // Skip to: 15050
/* 6456 */    MCD::OPC_Decode, 234, 17, 128, 2, // Opcode: SRL_B
/* 6461 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6474
/* 6465 */    MCD::OPC_CheckPredicate, 26, 133, 33, // Skip to: 15050
/* 6469 */    MCD::OPC_Decode, 236, 17, 129, 2, // Opcode: SRL_H
/* 6474 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6487
/* 6478 */    MCD::OPC_CheckPredicate, 26, 120, 33, // Skip to: 15050
/* 6482 */    MCD::OPC_Decode, 238, 17, 130, 2, // Opcode: SRL_W
/* 6487 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6500
/* 6491 */    MCD::OPC_CheckPredicate, 26, 107, 33, // Skip to: 15050
/* 6495 */    MCD::OPC_Decode, 235, 17, 131, 2, // Opcode: SRL_D
/* 6500 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6513
/* 6504 */    MCD::OPC_CheckPredicate, 26, 94, 33, // Skip to: 15050
/* 6508 */    MCD::OPC_Decode, 184, 2, 128, 2, // Opcode: BCLR_B
/* 6513 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6526
/* 6517 */    MCD::OPC_CheckPredicate, 26, 81, 33, // Skip to: 15050
/* 6521 */    MCD::OPC_Decode, 186, 2, 129, 2, // Opcode: BCLR_H
/* 6526 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6539
/* 6530 */    MCD::OPC_CheckPredicate, 26, 68, 33, // Skip to: 15050
/* 6534 */    MCD::OPC_Decode, 187, 2, 130, 2, // Opcode: BCLR_W
/* 6539 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6552
/* 6543 */    MCD::OPC_CheckPredicate, 26, 55, 33, // Skip to: 15050
/* 6547 */    MCD::OPC_Decode, 185, 2, 131, 2, // Opcode: BCLR_D
/* 6552 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6565
/* 6556 */    MCD::OPC_CheckPredicate, 26, 42, 33, // Skip to: 15050
/* 6560 */    MCD::OPC_Decode, 242, 3, 128, 2, // Opcode: BSET_B
/* 6565 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6578
/* 6569 */    MCD::OPC_CheckPredicate, 26, 29, 33, // Skip to: 15050
/* 6573 */    MCD::OPC_Decode, 244, 3, 129, 2, // Opcode: BSET_H
/* 6578 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6591
/* 6582 */    MCD::OPC_CheckPredicate, 26, 16, 33, // Skip to: 15050
/* 6586 */    MCD::OPC_Decode, 245, 3, 130, 2, // Opcode: BSET_W
/* 6591 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6604
/* 6595 */    MCD::OPC_CheckPredicate, 26, 3, 33, // Skip to: 15050
/* 6599 */    MCD::OPC_Decode, 243, 3, 131, 2, // Opcode: BSET_D
/* 6604 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6617
/* 6608 */    MCD::OPC_CheckPredicate, 26, 246, 32, // Skip to: 15050
/* 6612 */    MCD::OPC_Decode, 198, 3, 128, 2, // Opcode: BNEG_B
/* 6617 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6630
/* 6621 */    MCD::OPC_CheckPredicate, 26, 233, 32, // Skip to: 15050
/* 6625 */    MCD::OPC_Decode, 200, 3, 129, 2, // Opcode: BNEG_H
/* 6630 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6643
/* 6634 */    MCD::OPC_CheckPredicate, 26, 220, 32, // Skip to: 15050
/* 6638 */    MCD::OPC_Decode, 201, 3, 130, 2, // Opcode: BNEG_W
/* 6643 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6656
/* 6647 */    MCD::OPC_CheckPredicate, 26, 207, 32, // Skip to: 15050
/* 6651 */    MCD::OPC_Decode, 199, 3, 131, 2, // Opcode: BNEG_D
/* 6656 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6669
/* 6660 */    MCD::OPC_CheckPredicate, 26, 194, 32, // Skip to: 15050
/* 6664 */    MCD::OPC_Decode, 253, 2, 132, 2, // Opcode: BINSL_B
/* 6669 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6682
/* 6673 */    MCD::OPC_CheckPredicate, 26, 181, 32, // Skip to: 15050
/* 6677 */    MCD::OPC_Decode, 255, 2, 133, 2, // Opcode: BINSL_H
/* 6682 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6695
/* 6686 */    MCD::OPC_CheckPredicate, 26, 168, 32, // Skip to: 15050
/* 6690 */    MCD::OPC_Decode, 128, 3, 134, 2, // Opcode: BINSL_W
/* 6695 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6708
/* 6699 */    MCD::OPC_CheckPredicate, 26, 155, 32, // Skip to: 15050
/* 6703 */    MCD::OPC_Decode, 254, 2, 135, 2, // Opcode: BINSL_D
/* 6708 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6721
/* 6712 */    MCD::OPC_CheckPredicate, 26, 142, 32, // Skip to: 15050
/* 6716 */    MCD::OPC_Decode, 133, 3, 132, 2, // Opcode: BINSR_B
/* 6721 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6734
/* 6725 */    MCD::OPC_CheckPredicate, 26, 129, 32, // Skip to: 15050
/* 6729 */    MCD::OPC_Decode, 135, 3, 133, 2, // Opcode: BINSR_H
/* 6734 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6747
/* 6738 */    MCD::OPC_CheckPredicate, 26, 116, 32, // Skip to: 15050
/* 6742 */    MCD::OPC_Decode, 136, 3, 134, 2, // Opcode: BINSR_W
/* 6747 */    MCD::OPC_FilterValue, 31, 107, 32, // Skip to: 15050
/* 6751 */    MCD::OPC_CheckPredicate, 26, 103, 32, // Skip to: 15050
/* 6755 */    MCD::OPC_Decode, 134, 3, 135, 2, // Opcode: BINSR_D
/* 6760 */    MCD::OPC_FilterValue, 14, 163, 1, // Skip to: 7183
/* 6764 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6767 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6780
/* 6771 */    MCD::OPC_CheckPredicate, 26, 83, 32, // Skip to: 15050
/* 6775 */    MCD::OPC_Decode, 167, 1, 128, 2, // Opcode: ADDV_B
/* 6780 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6793
/* 6784 */    MCD::OPC_CheckPredicate, 26, 70, 32, // Skip to: 15050
/* 6788 */    MCD::OPC_Decode, 169, 1, 129, 2, // Opcode: ADDV_H
/* 6793 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6806
/* 6797 */    MCD::OPC_CheckPredicate, 26, 57, 32, // Skip to: 15050
/* 6801 */    MCD::OPC_Decode, 170, 1, 130, 2, // Opcode: ADDV_W
/* 6806 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6819
/* 6810 */    MCD::OPC_CheckPredicate, 26, 44, 32, // Skip to: 15050
/* 6814 */    MCD::OPC_Decode, 168, 1, 131, 2, // Opcode: ADDV_D
/* 6819 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6832
/* 6823 */    MCD::OPC_CheckPredicate, 26, 31, 32, // Skip to: 15050
/* 6827 */    MCD::OPC_Decode, 173, 18, 128, 2, // Opcode: SUBV_B
/* 6832 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6845
/* 6836 */    MCD::OPC_CheckPredicate, 26, 18, 32, // Skip to: 15050
/* 6840 */    MCD::OPC_Decode, 175, 18, 129, 2, // Opcode: SUBV_H
/* 6845 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6858
/* 6849 */    MCD::OPC_CheckPredicate, 26, 5, 32, // Skip to: 15050
/* 6853 */    MCD::OPC_Decode, 176, 18, 130, 2, // Opcode: SUBV_W
/* 6858 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6871
/* 6862 */    MCD::OPC_CheckPredicate, 26, 248, 31, // Skip to: 15050
/* 6866 */    MCD::OPC_Decode, 174, 18, 131, 2, // Opcode: SUBV_D
/* 6871 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6884
/* 6875 */    MCD::OPC_CheckPredicate, 26, 235, 31, // Skip to: 15050
/* 6879 */    MCD::OPC_Decode, 169, 12, 128, 2, // Opcode: MAX_S_B
/* 6884 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6897
/* 6888 */    MCD::OPC_CheckPredicate, 26, 222, 31, // Skip to: 15050
/* 6892 */    MCD::OPC_Decode, 171, 12, 129, 2, // Opcode: MAX_S_H
/* 6897 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6910
/* 6901 */    MCD::OPC_CheckPredicate, 26, 209, 31, // Skip to: 15050
/* 6905 */    MCD::OPC_Decode, 173, 12, 130, 2, // Opcode: MAX_S_W
/* 6910 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6923
/* 6914 */    MCD::OPC_CheckPredicate, 26, 196, 31, // Skip to: 15050
/* 6918 */    MCD::OPC_Decode, 170, 12, 131, 2, // Opcode: MAX_S_D
/* 6923 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6936
/* 6927 */    MCD::OPC_CheckPredicate, 26, 183, 31, // Skip to: 15050
/* 6931 */    MCD::OPC_Decode, 174, 12, 128, 2, // Opcode: MAX_U_B
/* 6936 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6949
/* 6940 */    MCD::OPC_CheckPredicate, 26, 170, 31, // Skip to: 15050
/* 6944 */    MCD::OPC_Decode, 176, 12, 129, 2, // Opcode: MAX_U_H
/* 6949 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6962
/* 6953 */    MCD::OPC_CheckPredicate, 26, 157, 31, // Skip to: 15050
/* 6957 */    MCD::OPC_Decode, 177, 12, 130, 2, // Opcode: MAX_U_W
/* 6962 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6975
/* 6966 */    MCD::OPC_CheckPredicate, 26, 144, 31, // Skip to: 15050
/* 6970 */    MCD::OPC_Decode, 175, 12, 131, 2, // Opcode: MAX_U_D
/* 6975 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6988
/* 6979 */    MCD::OPC_CheckPredicate, 26, 131, 31, // Skip to: 15050
/* 6983 */    MCD::OPC_Decode, 224, 12, 128, 2, // Opcode: MIN_S_B
/* 6988 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7001
/* 6992 */    MCD::OPC_CheckPredicate, 26, 118, 31, // Skip to: 15050
/* 6996 */    MCD::OPC_Decode, 226, 12, 129, 2, // Opcode: MIN_S_H
/* 7001 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7014
/* 7005 */    MCD::OPC_CheckPredicate, 26, 105, 31, // Skip to: 15050
/* 7009 */    MCD::OPC_Decode, 228, 12, 130, 2, // Opcode: MIN_S_W
/* 7014 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7027
/* 7018 */    MCD::OPC_CheckPredicate, 26, 92, 31, // Skip to: 15050
/* 7022 */    MCD::OPC_Decode, 225, 12, 131, 2, // Opcode: MIN_S_D
/* 7027 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7040
/* 7031 */    MCD::OPC_CheckPredicate, 26, 79, 31, // Skip to: 15050
/* 7035 */    MCD::OPC_Decode, 229, 12, 128, 2, // Opcode: MIN_U_B
/* 7040 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7053
/* 7044 */    MCD::OPC_CheckPredicate, 26, 66, 31, // Skip to: 15050
/* 7048 */    MCD::OPC_Decode, 231, 12, 129, 2, // Opcode: MIN_U_H
/* 7053 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7066
/* 7057 */    MCD::OPC_CheckPredicate, 26, 53, 31, // Skip to: 15050
/* 7061 */    MCD::OPC_Decode, 232, 12, 130, 2, // Opcode: MIN_U_W
/* 7066 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7079
/* 7070 */    MCD::OPC_CheckPredicate, 26, 40, 31, // Skip to: 15050
/* 7074 */    MCD::OPC_Decode, 230, 12, 131, 2, // Opcode: MIN_U_D
/* 7079 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7092
/* 7083 */    MCD::OPC_CheckPredicate, 26, 27, 31, // Skip to: 15050
/* 7087 */    MCD::OPC_Decode, 162, 12, 128, 2, // Opcode: MAX_A_B
/* 7092 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7105
/* 7096 */    MCD::OPC_CheckPredicate, 26, 14, 31, // Skip to: 15050
/* 7100 */    MCD::OPC_Decode, 164, 12, 129, 2, // Opcode: MAX_A_H
/* 7105 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7118
/* 7109 */    MCD::OPC_CheckPredicate, 26, 1, 31, // Skip to: 15050
/* 7113 */    MCD::OPC_Decode, 165, 12, 130, 2, // Opcode: MAX_A_W
/* 7118 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7131
/* 7122 */    MCD::OPC_CheckPredicate, 26, 244, 30, // Skip to: 15050
/* 7126 */    MCD::OPC_Decode, 163, 12, 131, 2, // Opcode: MAX_A_D
/* 7131 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7144
/* 7135 */    MCD::OPC_CheckPredicate, 26, 231, 30, // Skip to: 15050
/* 7139 */    MCD::OPC_Decode, 217, 12, 128, 2, // Opcode: MIN_A_B
/* 7144 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7157
/* 7148 */    MCD::OPC_CheckPredicate, 26, 218, 30, // Skip to: 15050
/* 7152 */    MCD::OPC_Decode, 219, 12, 129, 2, // Opcode: MIN_A_H
/* 7157 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7170
/* 7161 */    MCD::OPC_CheckPredicate, 26, 205, 30, // Skip to: 15050
/* 7165 */    MCD::OPC_Decode, 220, 12, 130, 2, // Opcode: MIN_A_W
/* 7170 */    MCD::OPC_FilterValue, 31, 196, 30, // Skip to: 15050
/* 7174 */    MCD::OPC_CheckPredicate, 26, 192, 30, // Skip to: 15050
/* 7178 */    MCD::OPC_Decode, 218, 12, 131, 2, // Opcode: MIN_A_D
/* 7183 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 7450
/* 7187 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7190 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7203
/* 7194 */    MCD::OPC_CheckPredicate, 26, 172, 30, // Skip to: 15050
/* 7198 */    MCD::OPC_Decode, 174, 4, 128, 2, // Opcode: CEQ_B
/* 7203 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7216
/* 7207 */    MCD::OPC_CheckPredicate, 26, 159, 30, // Skip to: 15050
/* 7211 */    MCD::OPC_Decode, 176, 4, 129, 2, // Opcode: CEQ_H
/* 7216 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7229
/* 7220 */    MCD::OPC_CheckPredicate, 26, 146, 30, // Skip to: 15050
/* 7224 */    MCD::OPC_Decode, 177, 4, 130, 2, // Opcode: CEQ_W
/* 7229 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7242
/* 7233 */    MCD::OPC_CheckPredicate, 26, 133, 30, // Skip to: 15050
/* 7237 */    MCD::OPC_Decode, 175, 4, 131, 2, // Opcode: CEQ_D
/* 7242 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7255
/* 7246 */    MCD::OPC_CheckPredicate, 26, 120, 30, // Skip to: 15050
/* 7250 */    MCD::OPC_Decode, 218, 4, 128, 2, // Opcode: CLT_S_B
/* 7255 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7268
/* 7259 */    MCD::OPC_CheckPredicate, 26, 107, 30, // Skip to: 15050
/* 7263 */    MCD::OPC_Decode, 220, 4, 129, 2, // Opcode: CLT_S_H
/* 7268 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7281
/* 7272 */    MCD::OPC_CheckPredicate, 26, 94, 30, // Skip to: 15050
/* 7276 */    MCD::OPC_Decode, 221, 4, 130, 2, // Opcode: CLT_S_W
/* 7281 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7294
/* 7285 */    MCD::OPC_CheckPredicate, 26, 81, 30, // Skip to: 15050
/* 7289 */    MCD::OPC_Decode, 219, 4, 131, 2, // Opcode: CLT_S_D
/* 7294 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7307
/* 7298 */    MCD::OPC_CheckPredicate, 26, 68, 30, // Skip to: 15050
/* 7302 */    MCD::OPC_Decode, 222, 4, 128, 2, // Opcode: CLT_U_B
/* 7307 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7320
/* 7311 */    MCD::OPC_CheckPredicate, 26, 55, 30, // Skip to: 15050
/* 7315 */    MCD::OPC_Decode, 224, 4, 129, 2, // Opcode: CLT_U_H
/* 7320 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7333
/* 7324 */    MCD::OPC_CheckPredicate, 26, 42, 30, // Skip to: 15050
/* 7328 */    MCD::OPC_Decode, 225, 4, 130, 2, // Opcode: CLT_U_W
/* 7333 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7346
/* 7337 */    MCD::OPC_CheckPredicate, 26, 29, 30, // Skip to: 15050
/* 7341 */    MCD::OPC_Decode, 223, 4, 131, 2, // Opcode: CLT_U_D
/* 7346 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7359
/* 7350 */    MCD::OPC_CheckPredicate, 26, 16, 30, // Skip to: 15050
/* 7354 */    MCD::OPC_Decode, 198, 4, 128, 2, // Opcode: CLE_S_B
/* 7359 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7372
/* 7363 */    MCD::OPC_CheckPredicate, 26, 3, 30, // Skip to: 15050
/* 7367 */    MCD::OPC_Decode, 200, 4, 129, 2, // Opcode: CLE_S_H
/* 7372 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7385
/* 7376 */    MCD::OPC_CheckPredicate, 26, 246, 29, // Skip to: 15050
/* 7380 */    MCD::OPC_Decode, 201, 4, 130, 2, // Opcode: CLE_S_W
/* 7385 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7398
/* 7389 */    MCD::OPC_CheckPredicate, 26, 233, 29, // Skip to: 15050
/* 7393 */    MCD::OPC_Decode, 199, 4, 131, 2, // Opcode: CLE_S_D
/* 7398 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7411
/* 7402 */    MCD::OPC_CheckPredicate, 26, 220, 29, // Skip to: 15050
/* 7406 */    MCD::OPC_Decode, 202, 4, 128, 2, // Opcode: CLE_U_B
/* 7411 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7424
/* 7415 */    MCD::OPC_CheckPredicate, 26, 207, 29, // Skip to: 15050
/* 7419 */    MCD::OPC_Decode, 204, 4, 129, 2, // Opcode: CLE_U_H
/* 7424 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7437
/* 7428 */    MCD::OPC_CheckPredicate, 26, 194, 29, // Skip to: 15050
/* 7432 */    MCD::OPC_Decode, 205, 4, 130, 2, // Opcode: CLE_U_W
/* 7437 */    MCD::OPC_FilterValue, 23, 185, 29, // Skip to: 15050
/* 7441 */    MCD::OPC_CheckPredicate, 26, 181, 29, // Skip to: 15050
/* 7445 */    MCD::OPC_Decode, 203, 4, 131, 2, // Opcode: CLE_U_D
/* 7450 */    MCD::OPC_FilterValue, 16, 163, 1, // Skip to: 7873
/* 7454 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7457 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7470
/* 7461 */    MCD::OPC_CheckPredicate, 26, 161, 29, // Skip to: 15050
/* 7465 */    MCD::OPC_Decode, 173, 1, 128, 2, // Opcode: ADD_A_B
/* 7470 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7483
/* 7474 */    MCD::OPC_CheckPredicate, 26, 148, 29, // Skip to: 15050
/* 7478 */    MCD::OPC_Decode, 175, 1, 129, 2, // Opcode: ADD_A_H
/* 7483 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7496
/* 7487 */    MCD::OPC_CheckPredicate, 26, 135, 29, // Skip to: 15050
/* 7491 */    MCD::OPC_Decode, 176, 1, 130, 2, // Opcode: ADD_A_W
/* 7496 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7509
/* 7500 */    MCD::OPC_CheckPredicate, 26, 122, 29, // Skip to: 15050
/* 7504 */    MCD::OPC_Decode, 174, 1, 131, 2, // Opcode: ADD_A_D
/* 7509 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7522
/* 7513 */    MCD::OPC_CheckPredicate, 26, 109, 29, // Skip to: 15050
/* 7517 */    MCD::OPC_Decode, 136, 1, 128, 2, // Opcode: ADDS_A_B
/* 7522 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7535
/* 7526 */    MCD::OPC_CheckPredicate, 26, 96, 29, // Skip to: 15050
/* 7530 */    MCD::OPC_Decode, 138, 1, 129, 2, // Opcode: ADDS_A_H
/* 7535 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7548
/* 7539 */    MCD::OPC_CheckPredicate, 26, 83, 29, // Skip to: 15050
/* 7543 */    MCD::OPC_Decode, 139, 1, 130, 2, // Opcode: ADDS_A_W
/* 7548 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7561
/* 7552 */    MCD::OPC_CheckPredicate, 26, 70, 29, // Skip to: 15050
/* 7556 */    MCD::OPC_Decode, 137, 1, 131, 2, // Opcode: ADDS_A_D
/* 7561 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7574
/* 7565 */    MCD::OPC_CheckPredicate, 26, 57, 29, // Skip to: 15050
/* 7569 */    MCD::OPC_Decode, 140, 1, 128, 2, // Opcode: ADDS_S_B
/* 7574 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7587
/* 7578 */    MCD::OPC_CheckPredicate, 26, 44, 29, // Skip to: 15050
/* 7582 */    MCD::OPC_Decode, 142, 1, 129, 2, // Opcode: ADDS_S_H
/* 7587 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7600
/* 7591 */    MCD::OPC_CheckPredicate, 26, 31, 29, // Skip to: 15050
/* 7595 */    MCD::OPC_Decode, 143, 1, 130, 2, // Opcode: ADDS_S_W
/* 7600 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7613
/* 7604 */    MCD::OPC_CheckPredicate, 26, 18, 29, // Skip to: 15050
/* 7608 */    MCD::OPC_Decode, 141, 1, 131, 2, // Opcode: ADDS_S_D
/* 7613 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7626
/* 7617 */    MCD::OPC_CheckPredicate, 26, 5, 29, // Skip to: 15050
/* 7621 */    MCD::OPC_Decode, 144, 1, 128, 2, // Opcode: ADDS_U_B
/* 7626 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7639
/* 7630 */    MCD::OPC_CheckPredicate, 26, 248, 28, // Skip to: 15050
/* 7634 */    MCD::OPC_Decode, 146, 1, 129, 2, // Opcode: ADDS_U_H
/* 7639 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7652
/* 7643 */    MCD::OPC_CheckPredicate, 26, 235, 28, // Skip to: 15050
/* 7647 */    MCD::OPC_Decode, 147, 1, 130, 2, // Opcode: ADDS_U_W
/* 7652 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7665
/* 7656 */    MCD::OPC_CheckPredicate, 26, 222, 28, // Skip to: 15050
/* 7660 */    MCD::OPC_Decode, 145, 1, 131, 2, // Opcode: ADDS_U_D
/* 7665 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7678
/* 7669 */    MCD::OPC_CheckPredicate, 26, 209, 28, // Skip to: 15050
/* 7673 */    MCD::OPC_Decode, 134, 2, 128, 2, // Opcode: AVE_S_B
/* 7678 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7691
/* 7682 */    MCD::OPC_CheckPredicate, 26, 196, 28, // Skip to: 15050
/* 7686 */    MCD::OPC_Decode, 136, 2, 129, 2, // Opcode: AVE_S_H
/* 7691 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7704
/* 7695 */    MCD::OPC_CheckPredicate, 26, 183, 28, // Skip to: 15050
/* 7699 */    MCD::OPC_Decode, 137, 2, 130, 2, // Opcode: AVE_S_W
/* 7704 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7717
/* 7708 */    MCD::OPC_CheckPredicate, 26, 170, 28, // Skip to: 15050
/* 7712 */    MCD::OPC_Decode, 135, 2, 131, 2, // Opcode: AVE_S_D
/* 7717 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7730
/* 7721 */    MCD::OPC_CheckPredicate, 26, 157, 28, // Skip to: 15050
/* 7725 */    MCD::OPC_Decode, 138, 2, 128, 2, // Opcode: AVE_U_B
/* 7730 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7743
/* 7734 */    MCD::OPC_CheckPredicate, 26, 144, 28, // Skip to: 15050
/* 7738 */    MCD::OPC_Decode, 140, 2, 129, 2, // Opcode: AVE_U_H
/* 7743 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7756
/* 7747 */    MCD::OPC_CheckPredicate, 26, 131, 28, // Skip to: 15050
/* 7751 */    MCD::OPC_Decode, 141, 2, 130, 2, // Opcode: AVE_U_W
/* 7756 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7769
/* 7760 */    MCD::OPC_CheckPredicate, 26, 118, 28, // Skip to: 15050
/* 7764 */    MCD::OPC_Decode, 139, 2, 131, 2, // Opcode: AVE_U_D
/* 7769 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7782
/* 7773 */    MCD::OPC_CheckPredicate, 26, 105, 28, // Skip to: 15050
/* 7777 */    MCD::OPC_Decode, 254, 1, 128, 2, // Opcode: AVER_S_B
/* 7782 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7795
/* 7786 */    MCD::OPC_CheckPredicate, 26, 92, 28, // Skip to: 15050
/* 7790 */    MCD::OPC_Decode, 128, 2, 129, 2, // Opcode: AVER_S_H
/* 7795 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7808
/* 7799 */    MCD::OPC_CheckPredicate, 26, 79, 28, // Skip to: 15050
/* 7803 */    MCD::OPC_Decode, 129, 2, 130, 2, // Opcode: AVER_S_W
/* 7808 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7821
/* 7812 */    MCD::OPC_CheckPredicate, 26, 66, 28, // Skip to: 15050
/* 7816 */    MCD::OPC_Decode, 255, 1, 131, 2, // Opcode: AVER_S_D
/* 7821 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7834
/* 7825 */    MCD::OPC_CheckPredicate, 26, 53, 28, // Skip to: 15050
/* 7829 */    MCD::OPC_Decode, 130, 2, 128, 2, // Opcode: AVER_U_B
/* 7834 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7847
/* 7838 */    MCD::OPC_CheckPredicate, 26, 40, 28, // Skip to: 15050
/* 7842 */    MCD::OPC_Decode, 132, 2, 129, 2, // Opcode: AVER_U_H
/* 7847 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7860
/* 7851 */    MCD::OPC_CheckPredicate, 26, 27, 28, // Skip to: 15050
/* 7855 */    MCD::OPC_Decode, 133, 2, 130, 2, // Opcode: AVER_U_W
/* 7860 */    MCD::OPC_FilterValue, 31, 18, 28, // Skip to: 15050
/* 7864 */    MCD::OPC_CheckPredicate, 26, 14, 28, // Skip to: 15050
/* 7868 */    MCD::OPC_Decode, 131, 2, 131, 2, // Opcode: AVER_U_D
/* 7873 */    MCD::OPC_FilterValue, 17, 59, 1, // Skip to: 8192
/* 7877 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7880 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7893
/* 7884 */    MCD::OPC_CheckPredicate, 26, 250, 27, // Skip to: 15050
/* 7888 */    MCD::OPC_Decode, 146, 18, 128, 2, // Opcode: SUBS_S_B
/* 7893 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7906
/* 7897 */    MCD::OPC_CheckPredicate, 26, 237, 27, // Skip to: 15050
/* 7901 */    MCD::OPC_Decode, 148, 18, 129, 2, // Opcode: SUBS_S_H
/* 7906 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7919
/* 7910 */    MCD::OPC_CheckPredicate, 26, 224, 27, // Skip to: 15050
/* 7914 */    MCD::OPC_Decode, 149, 18, 130, 2, // Opcode: SUBS_S_W
/* 7919 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7932
/* 7923 */    MCD::OPC_CheckPredicate, 26, 211, 27, // Skip to: 15050
/* 7927 */    MCD::OPC_Decode, 147, 18, 131, 2, // Opcode: SUBS_S_D
/* 7932 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7945
/* 7936 */    MCD::OPC_CheckPredicate, 26, 198, 27, // Skip to: 15050
/* 7940 */    MCD::OPC_Decode, 150, 18, 128, 2, // Opcode: SUBS_U_B
/* 7945 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7958
/* 7949 */    MCD::OPC_CheckPredicate, 26, 185, 27, // Skip to: 15050
/* 7953 */    MCD::OPC_Decode, 152, 18, 129, 2, // Opcode: SUBS_U_H
/* 7958 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7971
/* 7962 */    MCD::OPC_CheckPredicate, 26, 172, 27, // Skip to: 15050
/* 7966 */    MCD::OPC_Decode, 153, 18, 130, 2, // Opcode: SUBS_U_W
/* 7971 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7984
/* 7975 */    MCD::OPC_CheckPredicate, 26, 159, 27, // Skip to: 15050
/* 7979 */    MCD::OPC_Decode, 151, 18, 131, 2, // Opcode: SUBS_U_D
/* 7984 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7997
/* 7988 */    MCD::OPC_CheckPredicate, 26, 146, 27, // Skip to: 15050
/* 7992 */    MCD::OPC_Decode, 138, 18, 128, 2, // Opcode: SUBSUS_U_B
/* 7997 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8010
/* 8001 */    MCD::OPC_CheckPredicate, 26, 133, 27, // Skip to: 15050
/* 8005 */    MCD::OPC_Decode, 140, 18, 129, 2, // Opcode: SUBSUS_U_H
/* 8010 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8023
/* 8014 */    MCD::OPC_CheckPredicate, 26, 120, 27, // Skip to: 15050
/* 8018 */    MCD::OPC_Decode, 141, 18, 130, 2, // Opcode: SUBSUS_U_W
/* 8023 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8036
/* 8027 */    MCD::OPC_CheckPredicate, 26, 107, 27, // Skip to: 15050
/* 8031 */    MCD::OPC_Decode, 139, 18, 131, 2, // Opcode: SUBSUS_U_D
/* 8036 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8049
/* 8040 */    MCD::OPC_CheckPredicate, 26, 94, 27, // Skip to: 15050
/* 8044 */    MCD::OPC_Decode, 142, 18, 128, 2, // Opcode: SUBSUU_S_B
/* 8049 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8062
/* 8053 */    MCD::OPC_CheckPredicate, 26, 81, 27, // Skip to: 15050
/* 8057 */    MCD::OPC_Decode, 144, 18, 129, 2, // Opcode: SUBSUU_S_H
/* 8062 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8075
/* 8066 */    MCD::OPC_CheckPredicate, 26, 68, 27, // Skip to: 15050
/* 8070 */    MCD::OPC_Decode, 145, 18, 130, 2, // Opcode: SUBSUU_S_W
/* 8075 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8088
/* 8079 */    MCD::OPC_CheckPredicate, 26, 55, 27, // Skip to: 15050
/* 8083 */    MCD::OPC_Decode, 143, 18, 131, 2, // Opcode: SUBSUU_S_D
/* 8088 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8101
/* 8092 */    MCD::OPC_CheckPredicate, 26, 42, 27, // Skip to: 15050
/* 8096 */    MCD::OPC_Decode, 210, 1, 128, 2, // Opcode: ASUB_S_B
/* 8101 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8114
/* 8105 */    MCD::OPC_CheckPredicate, 26, 29, 27, // Skip to: 15050
/* 8109 */    MCD::OPC_Decode, 212, 1, 129, 2, // Opcode: ASUB_S_H
/* 8114 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8127
/* 8118 */    MCD::OPC_CheckPredicate, 26, 16, 27, // Skip to: 15050
/* 8122 */    MCD::OPC_Decode, 213, 1, 130, 2, // Opcode: ASUB_S_W
/* 8127 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8140
/* 8131 */    MCD::OPC_CheckPredicate, 26, 3, 27, // Skip to: 15050
/* 8135 */    MCD::OPC_Decode, 211, 1, 131, 2, // Opcode: ASUB_S_D
/* 8140 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8153
/* 8144 */    MCD::OPC_CheckPredicate, 26, 246, 26, // Skip to: 15050
/* 8148 */    MCD::OPC_Decode, 214, 1, 128, 2, // Opcode: ASUB_U_B
/* 8153 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8166
/* 8157 */    MCD::OPC_CheckPredicate, 26, 233, 26, // Skip to: 15050
/* 8161 */    MCD::OPC_Decode, 216, 1, 129, 2, // Opcode: ASUB_U_H
/* 8166 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8179
/* 8170 */    MCD::OPC_CheckPredicate, 26, 220, 26, // Skip to: 15050
/* 8174 */    MCD::OPC_Decode, 217, 1, 130, 2, // Opcode: ASUB_U_W
/* 8179 */    MCD::OPC_FilterValue, 23, 211, 26, // Skip to: 15050
/* 8183 */    MCD::OPC_CheckPredicate, 26, 207, 26, // Skip to: 15050
/* 8187 */    MCD::OPC_Decode, 215, 1, 131, 2, // Opcode: ASUB_U_D
/* 8192 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 8563
/* 8196 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8199 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8212
/* 8203 */    MCD::OPC_CheckPredicate, 26, 187, 26, // Skip to: 15050
/* 8207 */    MCD::OPC_Decode, 139, 14, 128, 2, // Opcode: MULV_B
/* 8212 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8225
/* 8216 */    MCD::OPC_CheckPredicate, 26, 174, 26, // Skip to: 15050
/* 8220 */    MCD::OPC_Decode, 141, 14, 129, 2, // Opcode: MULV_H
/* 8225 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8238
/* 8229 */    MCD::OPC_CheckPredicate, 26, 161, 26, // Skip to: 15050
/* 8233 */    MCD::OPC_Decode, 142, 14, 130, 2, // Opcode: MULV_W
/* 8238 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8251
/* 8242 */    MCD::OPC_CheckPredicate, 26, 148, 26, // Skip to: 15050
/* 8246 */    MCD::OPC_Decode, 140, 14, 131, 2, // Opcode: MULV_D
/* 8251 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8264
/* 8255 */    MCD::OPC_CheckPredicate, 26, 135, 26, // Skip to: 15050
/* 8259 */    MCD::OPC_Decode, 128, 12, 132, 2, // Opcode: MADDV_B
/* 8264 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8277
/* 8268 */    MCD::OPC_CheckPredicate, 26, 122, 26, // Skip to: 15050
/* 8272 */    MCD::OPC_Decode, 130, 12, 133, 2, // Opcode: MADDV_H
/* 8277 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8290
/* 8281 */    MCD::OPC_CheckPredicate, 26, 109, 26, // Skip to: 15050
/* 8285 */    MCD::OPC_Decode, 131, 12, 134, 2, // Opcode: MADDV_W
/* 8290 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8303
/* 8294 */    MCD::OPC_CheckPredicate, 26, 96, 26, // Skip to: 15050
/* 8298 */    MCD::OPC_Decode, 129, 12, 135, 2, // Opcode: MADDV_D
/* 8303 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8316
/* 8307 */    MCD::OPC_CheckPredicate, 26, 83, 26, // Skip to: 15050
/* 8311 */    MCD::OPC_Decode, 180, 13, 132, 2, // Opcode: MSUBV_B
/* 8316 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8329
/* 8320 */    MCD::OPC_CheckPredicate, 26, 70, 26, // Skip to: 15050
/* 8324 */    MCD::OPC_Decode, 182, 13, 133, 2, // Opcode: MSUBV_H
/* 8329 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8342
/* 8333 */    MCD::OPC_CheckPredicate, 26, 57, 26, // Skip to: 15050
/* 8337 */    MCD::OPC_Decode, 183, 13, 134, 2, // Opcode: MSUBV_W
/* 8342 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8355
/* 8346 */    MCD::OPC_CheckPredicate, 26, 44, 26, // Skip to: 15050
/* 8350 */    MCD::OPC_Decode, 181, 13, 135, 2, // Opcode: MSUBV_D
/* 8355 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8368
/* 8359 */    MCD::OPC_CheckPredicate, 26, 31, 26, // Skip to: 15050
/* 8363 */    MCD::OPC_Decode, 128, 7, 128, 2, // Opcode: DIV_S_B
/* 8368 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8381
/* 8372 */    MCD::OPC_CheckPredicate, 26, 18, 26, // Skip to: 15050
/* 8376 */    MCD::OPC_Decode, 130, 7, 129, 2, // Opcode: DIV_S_H
/* 8381 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8394
/* 8385 */    MCD::OPC_CheckPredicate, 26, 5, 26, // Skip to: 15050
/* 8389 */    MCD::OPC_Decode, 131, 7, 130, 2, // Opcode: DIV_S_W
/* 8394 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8407
/* 8398 */    MCD::OPC_CheckPredicate, 26, 248, 25, // Skip to: 15050
/* 8402 */    MCD::OPC_Decode, 129, 7, 131, 2, // Opcode: DIV_S_D
/* 8407 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8420
/* 8411 */    MCD::OPC_CheckPredicate, 26, 235, 25, // Skip to: 15050
/* 8415 */    MCD::OPC_Decode, 132, 7, 128, 2, // Opcode: DIV_U_B
/* 8420 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8433
/* 8424 */    MCD::OPC_CheckPredicate, 26, 222, 25, // Skip to: 15050
/* 8428 */    MCD::OPC_Decode, 134, 7, 129, 2, // Opcode: DIV_U_H
/* 8433 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8446
/* 8437 */    MCD::OPC_CheckPredicate, 26, 209, 25, // Skip to: 15050
/* 8441 */    MCD::OPC_Decode, 135, 7, 130, 2, // Opcode: DIV_U_W
/* 8446 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8459
/* 8450 */    MCD::OPC_CheckPredicate, 26, 196, 25, // Skip to: 15050
/* 8454 */    MCD::OPC_Decode, 133, 7, 131, 2, // Opcode: DIV_U_D
/* 8459 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8472
/* 8463 */    MCD::OPC_CheckPredicate, 26, 183, 25, // Skip to: 15050
/* 8467 */    MCD::OPC_Decode, 241, 12, 128, 2, // Opcode: MOD_S_B
/* 8472 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8485
/* 8476 */    MCD::OPC_CheckPredicate, 26, 170, 25, // Skip to: 15050
/* 8480 */    MCD::OPC_Decode, 243, 12, 129, 2, // Opcode: MOD_S_H
/* 8485 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8498
/* 8489 */    MCD::OPC_CheckPredicate, 26, 157, 25, // Skip to: 15050
/* 8493 */    MCD::OPC_Decode, 244, 12, 130, 2, // Opcode: MOD_S_W
/* 8498 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8511
/* 8502 */    MCD::OPC_CheckPredicate, 26, 144, 25, // Skip to: 15050
/* 8506 */    MCD::OPC_Decode, 242, 12, 131, 2, // Opcode: MOD_S_D
/* 8511 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8524
/* 8515 */    MCD::OPC_CheckPredicate, 26, 131, 25, // Skip to: 15050
/* 8519 */    MCD::OPC_Decode, 245, 12, 128, 2, // Opcode: MOD_U_B
/* 8524 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8537
/* 8528 */    MCD::OPC_CheckPredicate, 26, 118, 25, // Skip to: 15050
/* 8532 */    MCD::OPC_Decode, 247, 12, 129, 2, // Opcode: MOD_U_H
/* 8537 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8550
/* 8541 */    MCD::OPC_CheckPredicate, 26, 105, 25, // Skip to: 15050
/* 8545 */    MCD::OPC_Decode, 248, 12, 130, 2, // Opcode: MOD_U_W
/* 8550 */    MCD::OPC_FilterValue, 31, 96, 25, // Skip to: 15050
/* 8554 */    MCD::OPC_CheckPredicate, 26, 92, 25, // Skip to: 15050
/* 8558 */    MCD::OPC_Decode, 246, 12, 131, 2, // Opcode: MOD_U_D
/* 8563 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 8804
/* 8567 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8570 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8583
/* 8574 */    MCD::OPC_CheckPredicate, 26, 72, 25, // Skip to: 15050
/* 8578 */    MCD::OPC_Decode, 176, 7, 136, 2, // Opcode: DOTP_S_H
/* 8583 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8596
/* 8587 */    MCD::OPC_CheckPredicate, 26, 59, 25, // Skip to: 15050
/* 8591 */    MCD::OPC_Decode, 177, 7, 137, 2, // Opcode: DOTP_S_W
/* 8596 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8609
/* 8600 */    MCD::OPC_CheckPredicate, 26, 46, 25, // Skip to: 15050
/* 8604 */    MCD::OPC_Decode, 175, 7, 138, 2, // Opcode: DOTP_S_D
/* 8609 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8622
/* 8613 */    MCD::OPC_CheckPredicate, 26, 33, 25, // Skip to: 15050
/* 8617 */    MCD::OPC_Decode, 179, 7, 136, 2, // Opcode: DOTP_U_H
/* 8622 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8635
/* 8626 */    MCD::OPC_CheckPredicate, 26, 20, 25, // Skip to: 15050
/* 8630 */    MCD::OPC_Decode, 180, 7, 137, 2, // Opcode: DOTP_U_W
/* 8635 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8648
/* 8639 */    MCD::OPC_CheckPredicate, 26, 7, 25, // Skip to: 15050
/* 8643 */    MCD::OPC_Decode, 178, 7, 138, 2, // Opcode: DOTP_U_D
/* 8648 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8661
/* 8652 */    MCD::OPC_CheckPredicate, 26, 250, 24, // Skip to: 15050
/* 8656 */    MCD::OPC_Decode, 182, 7, 139, 2, // Opcode: DPADD_S_H
/* 8661 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8674
/* 8665 */    MCD::OPC_CheckPredicate, 26, 237, 24, // Skip to: 15050
/* 8669 */    MCD::OPC_Decode, 183, 7, 140, 2, // Opcode: DPADD_S_W
/* 8674 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8687
/* 8678 */    MCD::OPC_CheckPredicate, 26, 224, 24, // Skip to: 15050
/* 8682 */    MCD::OPC_Decode, 181, 7, 141, 2, // Opcode: DPADD_S_D
/* 8687 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8700
/* 8691 */    MCD::OPC_CheckPredicate, 26, 211, 24, // Skip to: 15050
/* 8695 */    MCD::OPC_Decode, 185, 7, 139, 2, // Opcode: DPADD_U_H
/* 8700 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8713
/* 8704 */    MCD::OPC_CheckPredicate, 26, 198, 24, // Skip to: 15050
/* 8708 */    MCD::OPC_Decode, 186, 7, 140, 2, // Opcode: DPADD_U_W
/* 8713 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8726
/* 8717 */    MCD::OPC_CheckPredicate, 26, 185, 24, // Skip to: 15050
/* 8721 */    MCD::OPC_Decode, 184, 7, 141, 2, // Opcode: DPADD_U_D
/* 8726 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8739
/* 8730 */    MCD::OPC_CheckPredicate, 26, 172, 24, // Skip to: 15050
/* 8734 */    MCD::OPC_Decode, 213, 7, 139, 2, // Opcode: DPSUB_S_H
/* 8739 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8752
/* 8743 */    MCD::OPC_CheckPredicate, 26, 159, 24, // Skip to: 15050
/* 8747 */    MCD::OPC_Decode, 214, 7, 140, 2, // Opcode: DPSUB_S_W
/* 8752 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8765
/* 8756 */    MCD::OPC_CheckPredicate, 26, 146, 24, // Skip to: 15050
/* 8760 */    MCD::OPC_Decode, 212, 7, 141, 2, // Opcode: DPSUB_S_D
/* 8765 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8778
/* 8769 */    MCD::OPC_CheckPredicate, 26, 133, 24, // Skip to: 15050
/* 8773 */    MCD::OPC_Decode, 216, 7, 139, 2, // Opcode: DPSUB_U_H
/* 8778 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8791
/* 8782 */    MCD::OPC_CheckPredicate, 26, 120, 24, // Skip to: 15050
/* 8786 */    MCD::OPC_Decode, 217, 7, 140, 2, // Opcode: DPSUB_U_W
/* 8791 */    MCD::OPC_FilterValue, 23, 111, 24, // Skip to: 15050
/* 8795 */    MCD::OPC_CheckPredicate, 26, 107, 24, // Skip to: 15050
/* 8799 */    MCD::OPC_Decode, 215, 7, 141, 2, // Opcode: DPSUB_U_D
/* 8804 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 9227
/* 8808 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8811 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8824
/* 8815 */    MCD::OPC_CheckPredicate, 26, 87, 24, // Skip to: 15050
/* 8819 */    MCD::OPC_Decode, 145, 17, 142, 2, // Opcode: SLD_B
/* 8824 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8837
/* 8828 */    MCD::OPC_CheckPredicate, 26, 74, 24, // Skip to: 15050
/* 8832 */    MCD::OPC_Decode, 147, 17, 143, 2, // Opcode: SLD_H
/* 8837 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8850
/* 8841 */    MCD::OPC_CheckPredicate, 26, 61, 24, // Skip to: 15050
/* 8845 */    MCD::OPC_Decode, 148, 17, 144, 2, // Opcode: SLD_W
/* 8850 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8863
/* 8854 */    MCD::OPC_CheckPredicate, 26, 48, 24, // Skip to: 15050
/* 8858 */    MCD::OPC_Decode, 146, 17, 145, 2, // Opcode: SLD_D
/* 8863 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8876
/* 8867 */    MCD::OPC_CheckPredicate, 26, 35, 24, // Skip to: 15050
/* 8871 */    MCD::OPC_Decode, 191, 17, 146, 2, // Opcode: SPLAT_B
/* 8876 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8889
/* 8880 */    MCD::OPC_CheckPredicate, 26, 22, 24, // Skip to: 15050
/* 8884 */    MCD::OPC_Decode, 193, 17, 147, 2, // Opcode: SPLAT_H
/* 8889 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8902
/* 8893 */    MCD::OPC_CheckPredicate, 26, 9, 24, // Skip to: 15050
/* 8897 */    MCD::OPC_Decode, 194, 17, 148, 2, // Opcode: SPLAT_W
/* 8902 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8915
/* 8906 */    MCD::OPC_CheckPredicate, 26, 252, 23, // Skip to: 15050
/* 8910 */    MCD::OPC_Decode, 192, 17, 149, 2, // Opcode: SPLAT_D
/* 8915 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8928
/* 8919 */    MCD::OPC_CheckPredicate, 26, 239, 23, // Skip to: 15050
/* 8923 */    MCD::OPC_Decode, 215, 14, 128, 2, // Opcode: PCKEV_B
/* 8928 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8941
/* 8932 */    MCD::OPC_CheckPredicate, 26, 226, 23, // Skip to: 15050
/* 8936 */    MCD::OPC_Decode, 217, 14, 129, 2, // Opcode: PCKEV_H
/* 8941 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8954
/* 8945 */    MCD::OPC_CheckPredicate, 26, 213, 23, // Skip to: 15050
/* 8949 */    MCD::OPC_Decode, 218, 14, 130, 2, // Opcode: PCKEV_W
/* 8954 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8967
/* 8958 */    MCD::OPC_CheckPredicate, 26, 200, 23, // Skip to: 15050
/* 8962 */    MCD::OPC_Decode, 216, 14, 131, 2, // Opcode: PCKEV_D
/* 8967 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8980
/* 8971 */    MCD::OPC_CheckPredicate, 26, 187, 23, // Skip to: 15050
/* 8975 */    MCD::OPC_Decode, 219, 14, 128, 2, // Opcode: PCKOD_B
/* 8980 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8993
/* 8984 */    MCD::OPC_CheckPredicate, 26, 174, 23, // Skip to: 15050
/* 8988 */    MCD::OPC_Decode, 221, 14, 129, 2, // Opcode: PCKOD_H
/* 8993 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9006
/* 8997 */    MCD::OPC_CheckPredicate, 26, 161, 23, // Skip to: 15050
/* 9001 */    MCD::OPC_Decode, 222, 14, 130, 2, // Opcode: PCKOD_W
/* 9006 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9019
/* 9010 */    MCD::OPC_CheckPredicate, 26, 148, 23, // Skip to: 15050
/* 9014 */    MCD::OPC_Decode, 220, 14, 131, 2, // Opcode: PCKOD_D
/* 9019 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9032
/* 9023 */    MCD::OPC_CheckPredicate, 26, 135, 23, // Skip to: 15050
/* 9027 */    MCD::OPC_Decode, 135, 10, 128, 2, // Opcode: ILVL_B
/* 9032 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9045
/* 9036 */    MCD::OPC_CheckPredicate, 26, 122, 23, // Skip to: 15050
/* 9040 */    MCD::OPC_Decode, 137, 10, 129, 2, // Opcode: ILVL_H
/* 9045 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9058
/* 9049 */    MCD::OPC_CheckPredicate, 26, 109, 23, // Skip to: 15050
/* 9053 */    MCD::OPC_Decode, 138, 10, 130, 2, // Opcode: ILVL_W
/* 9058 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9071
/* 9062 */    MCD::OPC_CheckPredicate, 26, 96, 23, // Skip to: 15050
/* 9066 */    MCD::OPC_Decode, 136, 10, 131, 2, // Opcode: ILVL_D
/* 9071 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9084
/* 9075 */    MCD::OPC_CheckPredicate, 26, 83, 23, // Skip to: 15050
/* 9079 */    MCD::OPC_Decode, 143, 10, 128, 2, // Opcode: ILVR_B
/* 9084 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9097
/* 9088 */    MCD::OPC_CheckPredicate, 26, 70, 23, // Skip to: 15050
/* 9092 */    MCD::OPC_Decode, 145, 10, 129, 2, // Opcode: ILVR_H
/* 9097 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9110
/* 9101 */    MCD::OPC_CheckPredicate, 26, 57, 23, // Skip to: 15050
/* 9105 */    MCD::OPC_Decode, 146, 10, 130, 2, // Opcode: ILVR_W
/* 9110 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9123
/* 9114 */    MCD::OPC_CheckPredicate, 26, 44, 23, // Skip to: 15050
/* 9118 */    MCD::OPC_Decode, 144, 10, 131, 2, // Opcode: ILVR_D
/* 9123 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9136
/* 9127 */    MCD::OPC_CheckPredicate, 26, 31, 23, // Skip to: 15050
/* 9131 */    MCD::OPC_Decode, 131, 10, 128, 2, // Opcode: ILVEV_B
/* 9136 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9149
/* 9140 */    MCD::OPC_CheckPredicate, 26, 18, 23, // Skip to: 15050
/* 9144 */    MCD::OPC_Decode, 133, 10, 129, 2, // Opcode: ILVEV_H
/* 9149 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9162
/* 9153 */    MCD::OPC_CheckPredicate, 26, 5, 23, // Skip to: 15050
/* 9157 */    MCD::OPC_Decode, 134, 10, 130, 2, // Opcode: ILVEV_W
/* 9162 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9175
/* 9166 */    MCD::OPC_CheckPredicate, 26, 248, 22, // Skip to: 15050
/* 9170 */    MCD::OPC_Decode, 132, 10, 131, 2, // Opcode: ILVEV_D
/* 9175 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9188
/* 9179 */    MCD::OPC_CheckPredicate, 26, 235, 22, // Skip to: 15050
/* 9183 */    MCD::OPC_Decode, 139, 10, 128, 2, // Opcode: ILVOD_B
/* 9188 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9201
/* 9192 */    MCD::OPC_CheckPredicate, 26, 222, 22, // Skip to: 15050
/* 9196 */    MCD::OPC_Decode, 141, 10, 129, 2, // Opcode: ILVOD_H
/* 9201 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9214
/* 9205 */    MCD::OPC_CheckPredicate, 26, 209, 22, // Skip to: 15050
/* 9209 */    MCD::OPC_Decode, 142, 10, 130, 2, // Opcode: ILVOD_W
/* 9214 */    MCD::OPC_FilterValue, 31, 200, 22, // Skip to: 15050
/* 9218 */    MCD::OPC_CheckPredicate, 26, 196, 22, // Skip to: 15050
/* 9222 */    MCD::OPC_Decode, 140, 10, 131, 2, // Opcode: ILVOD_D
/* 9227 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 9546
/* 9231 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9234 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9247
/* 9238 */    MCD::OPC_CheckPredicate, 26, 176, 22, // Skip to: 15050
/* 9242 */    MCD::OPC_Decode, 210, 19, 132, 2, // Opcode: VSHF_B
/* 9247 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9260
/* 9251 */    MCD::OPC_CheckPredicate, 26, 163, 22, // Skip to: 15050
/* 9255 */    MCD::OPC_Decode, 212, 19, 133, 2, // Opcode: VSHF_H
/* 9260 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9273
/* 9264 */    MCD::OPC_CheckPredicate, 26, 150, 22, // Skip to: 15050
/* 9268 */    MCD::OPC_Decode, 213, 19, 134, 2, // Opcode: VSHF_W
/* 9273 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9286
/* 9277 */    MCD::OPC_CheckPredicate, 26, 137, 22, // Skip to: 15050
/* 9281 */    MCD::OPC_Decode, 211, 19, 135, 2, // Opcode: VSHF_D
/* 9286 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9299
/* 9290 */    MCD::OPC_CheckPredicate, 26, 124, 22, // Skip to: 15050
/* 9294 */    MCD::OPC_Decode, 206, 17, 128, 2, // Opcode: SRAR_B
/* 9299 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9312
/* 9303 */    MCD::OPC_CheckPredicate, 26, 111, 22, // Skip to: 15050
/* 9307 */    MCD::OPC_Decode, 208, 17, 129, 2, // Opcode: SRAR_H
/* 9312 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9325
/* 9316 */    MCD::OPC_CheckPredicate, 26, 98, 22, // Skip to: 15050
/* 9320 */    MCD::OPC_Decode, 209, 17, 130, 2, // Opcode: SRAR_W
/* 9325 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9338
/* 9329 */    MCD::OPC_CheckPredicate, 26, 85, 22, // Skip to: 15050
/* 9333 */    MCD::OPC_Decode, 207, 17, 131, 2, // Opcode: SRAR_D
/* 9338 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9351
/* 9342 */    MCD::OPC_CheckPredicate, 26, 72, 22, // Skip to: 15050
/* 9346 */    MCD::OPC_Decode, 228, 17, 128, 2, // Opcode: SRLR_B
/* 9351 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9364
/* 9355 */    MCD::OPC_CheckPredicate, 26, 59, 22, // Skip to: 15050
/* 9359 */    MCD::OPC_Decode, 230, 17, 129, 2, // Opcode: SRLR_H
/* 9364 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9377
/* 9368 */    MCD::OPC_CheckPredicate, 26, 46, 22, // Skip to: 15050
/* 9372 */    MCD::OPC_Decode, 231, 17, 130, 2, // Opcode: SRLR_W
/* 9377 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9390
/* 9381 */    MCD::OPC_CheckPredicate, 26, 33, 22, // Skip to: 15050
/* 9385 */    MCD::OPC_Decode, 229, 17, 131, 2, // Opcode: SRLR_D
/* 9390 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9403
/* 9394 */    MCD::OPC_CheckPredicate, 26, 20, 22, // Skip to: 15050
/* 9398 */    MCD::OPC_Decode, 248, 9, 136, 2, // Opcode: HADD_S_H
/* 9403 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9416
/* 9407 */    MCD::OPC_CheckPredicate, 26, 7, 22, // Skip to: 15050
/* 9411 */    MCD::OPC_Decode, 249, 9, 137, 2, // Opcode: HADD_S_W
/* 9416 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9429
/* 9420 */    MCD::OPC_CheckPredicate, 26, 250, 21, // Skip to: 15050
/* 9424 */    MCD::OPC_Decode, 247, 9, 138, 2, // Opcode: HADD_S_D
/* 9429 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9442
/* 9433 */    MCD::OPC_CheckPredicate, 26, 237, 21, // Skip to: 15050
/* 9437 */    MCD::OPC_Decode, 251, 9, 136, 2, // Opcode: HADD_U_H
/* 9442 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9455
/* 9446 */    MCD::OPC_CheckPredicate, 26, 224, 21, // Skip to: 15050
/* 9450 */    MCD::OPC_Decode, 252, 9, 137, 2, // Opcode: HADD_U_W
/* 9455 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9468
/* 9459 */    MCD::OPC_CheckPredicate, 26, 211, 21, // Skip to: 15050
/* 9463 */    MCD::OPC_Decode, 250, 9, 138, 2, // Opcode: HADD_U_D
/* 9468 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9481
/* 9472 */    MCD::OPC_CheckPredicate, 26, 198, 21, // Skip to: 15050
/* 9476 */    MCD::OPC_Decode, 254, 9, 136, 2, // Opcode: HSUB_S_H
/* 9481 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9494
/* 9485 */    MCD::OPC_CheckPredicate, 26, 185, 21, // Skip to: 15050
/* 9489 */    MCD::OPC_Decode, 255, 9, 137, 2, // Opcode: HSUB_S_W
/* 9494 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9507
/* 9498 */    MCD::OPC_CheckPredicate, 26, 172, 21, // Skip to: 15050
/* 9502 */    MCD::OPC_Decode, 253, 9, 138, 2, // Opcode: HSUB_S_D
/* 9507 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9520
/* 9511 */    MCD::OPC_CheckPredicate, 26, 159, 21, // Skip to: 15050
/* 9515 */    MCD::OPC_Decode, 129, 10, 136, 2, // Opcode: HSUB_U_H
/* 9520 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9533
/* 9524 */    MCD::OPC_CheckPredicate, 26, 146, 21, // Skip to: 15050
/* 9528 */    MCD::OPC_Decode, 130, 10, 137, 2, // Opcode: HSUB_U_W
/* 9533 */    MCD::OPC_FilterValue, 31, 137, 21, // Skip to: 15050
/* 9537 */    MCD::OPC_CheckPredicate, 26, 133, 21, // Skip to: 15050
/* 9541 */    MCD::OPC_Decode, 128, 10, 138, 2, // Opcode: HSUB_U_D
/* 9546 */    MCD::OPC_FilterValue, 25, 210, 1, // Skip to: 10016
/* 9550 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 9553 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9566
/* 9557 */    MCD::OPC_CheckPredicate, 26, 113, 21, // Skip to: 15050
/* 9561 */    MCD::OPC_Decode, 141, 17, 150, 2, // Opcode: SLDI_B
/* 9566 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9585
/* 9570 */    MCD::OPC_CheckPredicate, 26, 100, 21, // Skip to: 15050
/* 9574 */    MCD::OPC_CheckField, 19, 1, 0, 94, 21, // Skip to: 15050
/* 9580 */    MCD::OPC_Decode, 143, 17, 151, 2, // Opcode: SLDI_H
/* 9585 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 9643
/* 9589 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9592 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9605
/* 9596 */    MCD::OPC_CheckPredicate, 26, 74, 21, // Skip to: 15050
/* 9600 */    MCD::OPC_Decode, 144, 17, 152, 2, // Opcode: SLDI_W
/* 9605 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9624
/* 9609 */    MCD::OPC_CheckPredicate, 26, 61, 21, // Skip to: 15050
/* 9613 */    MCD::OPC_CheckField, 17, 1, 0, 55, 21, // Skip to: 15050
/* 9619 */    MCD::OPC_Decode, 142, 17, 153, 2, // Opcode: SLDI_D
/* 9624 */    MCD::OPC_FilterValue, 3, 46, 21, // Skip to: 15050
/* 9628 */    MCD::OPC_CheckPredicate, 26, 42, 21, // Skip to: 15050
/* 9632 */    MCD::OPC_CheckField, 16, 2, 2, 36, 21, // Skip to: 15050
/* 9638 */    MCD::OPC_Decode, 203, 5, 154, 2, // Opcode: CTCMSA
/* 9643 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9656
/* 9647 */    MCD::OPC_CheckPredicate, 26, 23, 21, // Skip to: 15050
/* 9651 */    MCD::OPC_Decode, 187, 17, 155, 2, // Opcode: SPLATI_B
/* 9656 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 9675
/* 9660 */    MCD::OPC_CheckPredicate, 26, 10, 21, // Skip to: 15050
/* 9664 */    MCD::OPC_CheckField, 19, 1, 0, 4, 21, // Skip to: 15050
/* 9670 */    MCD::OPC_Decode, 189, 17, 156, 2, // Opcode: SPLATI_H
/* 9675 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 9733
/* 9679 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9682 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9695
/* 9686 */    MCD::OPC_CheckPredicate, 26, 240, 20, // Skip to: 15050
/* 9690 */    MCD::OPC_Decode, 190, 17, 157, 2, // Opcode: SPLATI_W
/* 9695 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9714
/* 9699 */    MCD::OPC_CheckPredicate, 26, 227, 20, // Skip to: 15050
/* 9703 */    MCD::OPC_CheckField, 17, 1, 0, 221, 20, // Skip to: 15050
/* 9709 */    MCD::OPC_Decode, 188, 17, 158, 2, // Opcode: SPLATI_D
/* 9714 */    MCD::OPC_FilterValue, 3, 212, 20, // Skip to: 15050
/* 9718 */    MCD::OPC_CheckPredicate, 26, 208, 20, // Skip to: 15050
/* 9722 */    MCD::OPC_CheckField, 16, 2, 2, 202, 20, // Skip to: 15050
/* 9728 */    MCD::OPC_Decode, 181, 4, 159, 2, // Opcode: CFCMSA
/* 9733 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9746
/* 9737 */    MCD::OPC_CheckPredicate, 26, 189, 20, // Skip to: 15050
/* 9741 */    MCD::OPC_Decode, 193, 5, 160, 2, // Opcode: COPY_S_B
/* 9746 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 9765
/* 9750 */    MCD::OPC_CheckPredicate, 26, 176, 20, // Skip to: 15050
/* 9754 */    MCD::OPC_CheckField, 19, 1, 0, 170, 20, // Skip to: 15050
/* 9760 */    MCD::OPC_Decode, 195, 5, 161, 2, // Opcode: COPY_S_H
/* 9765 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 9823
/* 9769 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9772 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9785
/* 9776 */    MCD::OPC_CheckPredicate, 26, 150, 20, // Skip to: 15050
/* 9780 */    MCD::OPC_Decode, 196, 5, 162, 2, // Opcode: COPY_S_W
/* 9785 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9804
/* 9789 */    MCD::OPC_CheckPredicate, 33, 137, 20, // Skip to: 15050
/* 9793 */    MCD::OPC_CheckField, 17, 1, 0, 131, 20, // Skip to: 15050
/* 9799 */    MCD::OPC_Decode, 194, 5, 163, 2, // Opcode: COPY_S_D
/* 9804 */    MCD::OPC_FilterValue, 3, 122, 20, // Skip to: 15050
/* 9808 */    MCD::OPC_CheckPredicate, 26, 118, 20, // Skip to: 15050
/* 9812 */    MCD::OPC_CheckField, 16, 2, 2, 112, 20, // Skip to: 15050
/* 9818 */    MCD::OPC_Decode, 252, 12, 164, 2, // Opcode: MOVE_V
/* 9823 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9836
/* 9827 */    MCD::OPC_CheckPredicate, 26, 99, 20, // Skip to: 15050
/* 9831 */    MCD::OPC_Decode, 197, 5, 160, 2, // Opcode: COPY_U_B
/* 9836 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 9855
/* 9840 */    MCD::OPC_CheckPredicate, 26, 86, 20, // Skip to: 15050
/* 9844 */    MCD::OPC_CheckField, 19, 1, 0, 80, 20, // Skip to: 15050
/* 9850 */    MCD::OPC_Decode, 198, 5, 161, 2, // Opcode: COPY_U_H
/* 9855 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 9874
/* 9859 */    MCD::OPC_CheckPredicate, 33, 67, 20, // Skip to: 15050
/* 9863 */    MCD::OPC_CheckField, 18, 2, 0, 61, 20, // Skip to: 15050
/* 9869 */    MCD::OPC_Decode, 199, 5, 162, 2, // Opcode: COPY_U_W
/* 9874 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9887
/* 9878 */    MCD::OPC_CheckPredicate, 26, 48, 20, // Skip to: 15050
/* 9882 */    MCD::OPC_Decode, 148, 10, 165, 2, // Opcode: INSERT_B
/* 9887 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 9906
/* 9891 */    MCD::OPC_CheckPredicate, 26, 35, 20, // Skip to: 15050
/* 9895 */    MCD::OPC_CheckField, 19, 1, 0, 29, 20, // Skip to: 15050
/* 9901 */    MCD::OPC_Decode, 160, 10, 166, 2, // Opcode: INSERT_H
/* 9906 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9945
/* 9910 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9913 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9926
/* 9917 */    MCD::OPC_CheckPredicate, 26, 9, 20, // Skip to: 15050
/* 9921 */    MCD::OPC_Decode, 163, 10, 167, 2, // Opcode: INSERT_W
/* 9926 */    MCD::OPC_FilterValue, 2, 0, 20, // Skip to: 15050
/* 9930 */    MCD::OPC_CheckPredicate, 33, 252, 19, // Skip to: 15050
/* 9934 */    MCD::OPC_CheckField, 17, 1, 0, 246, 19, // Skip to: 15050
/* 9940 */    MCD::OPC_Decode, 151, 10, 168, 2, // Opcode: INSERT_D
/* 9945 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9958
/* 9949 */    MCD::OPC_CheckPredicate, 26, 233, 19, // Skip to: 15050
/* 9953 */    MCD::OPC_Decode, 167, 10, 169, 2, // Opcode: INSVE_B
/* 9958 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9977
/* 9962 */    MCD::OPC_CheckPredicate, 26, 220, 19, // Skip to: 15050
/* 9966 */    MCD::OPC_CheckField, 19, 1, 0, 214, 19, // Skip to: 15050
/* 9972 */    MCD::OPC_Decode, 169, 10, 169, 2, // Opcode: INSVE_H
/* 9977 */    MCD::OPC_FilterValue, 23, 205, 19, // Skip to: 15050
/* 9981 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9984 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9997
/* 9988 */    MCD::OPC_CheckPredicate, 26, 194, 19, // Skip to: 15050
/* 9992 */    MCD::OPC_Decode, 170, 10, 169, 2, // Opcode: INSVE_W
/* 9997 */    MCD::OPC_FilterValue, 2, 185, 19, // Skip to: 15050
/* 10001 */   MCD::OPC_CheckPredicate, 26, 181, 19, // Skip to: 15050
/* 10005 */   MCD::OPC_CheckField, 17, 1, 0, 175, 19, // Skip to: 15050
/* 10011 */   MCD::OPC_Decode, 168, 10, 169, 2, // Opcode: INSVE_D
/* 10016 */   MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 10439
/* 10020 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10023 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10036
/* 10027 */   MCD::OPC_CheckPredicate, 26, 155, 19, // Skip to: 15050
/* 10031 */   MCD::OPC_Decode, 210, 8, 130, 2, // Opcode: FCAF_W
/* 10036 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10049
/* 10040 */   MCD::OPC_CheckPredicate, 26, 142, 19, // Skip to: 15050
/* 10044 */   MCD::OPC_Decode, 209, 8, 131, 2, // Opcode: FCAF_D
/* 10049 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10062
/* 10053 */   MCD::OPC_CheckPredicate, 26, 129, 19, // Skip to: 15050
/* 10057 */   MCD::OPC_Decode, 237, 8, 130, 2, // Opcode: FCUN_W
/* 10062 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10075
/* 10066 */   MCD::OPC_CheckPredicate, 26, 116, 19, // Skip to: 15050
/* 10070 */   MCD::OPC_Decode, 236, 8, 131, 2, // Opcode: FCUN_D
/* 10075 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10088
/* 10079 */   MCD::OPC_CheckPredicate, 26, 103, 19, // Skip to: 15050
/* 10083 */   MCD::OPC_Decode, 212, 8, 130, 2, // Opcode: FCEQ_W
/* 10088 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10101
/* 10092 */   MCD::OPC_CheckPredicate, 26, 90, 19, // Skip to: 15050
/* 10096 */   MCD::OPC_Decode, 211, 8, 131, 2, // Opcode: FCEQ_D
/* 10101 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10114
/* 10105 */   MCD::OPC_CheckPredicate, 26, 77, 19, // Skip to: 15050
/* 10109 */   MCD::OPC_Decode, 229, 8, 130, 2, // Opcode: FCUEQ_W
/* 10114 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10127
/* 10118 */   MCD::OPC_CheckPredicate, 26, 64, 19, // Skip to: 15050
/* 10122 */   MCD::OPC_Decode, 228, 8, 131, 2, // Opcode: FCUEQ_D
/* 10127 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10140
/* 10131 */   MCD::OPC_CheckPredicate, 26, 51, 19, // Skip to: 15050
/* 10135 */   MCD::OPC_Decode, 218, 8, 130, 2, // Opcode: FCLT_W
/* 10140 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10153
/* 10144 */   MCD::OPC_CheckPredicate, 26, 38, 19, // Skip to: 15050
/* 10148 */   MCD::OPC_Decode, 217, 8, 131, 2, // Opcode: FCLT_D
/* 10153 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10166
/* 10157 */   MCD::OPC_CheckPredicate, 26, 25, 19, // Skip to: 15050
/* 10161 */   MCD::OPC_Decode, 233, 8, 130, 2, // Opcode: FCULT_W
/* 10166 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10179
/* 10170 */   MCD::OPC_CheckPredicate, 26, 12, 19, // Skip to: 15050
/* 10174 */   MCD::OPC_Decode, 232, 8, 131, 2, // Opcode: FCULT_D
/* 10179 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10192
/* 10183 */   MCD::OPC_CheckPredicate, 26, 255, 18, // Skip to: 15050
/* 10187 */   MCD::OPC_Decode, 216, 8, 130, 2, // Opcode: FCLE_W
/* 10192 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10205
/* 10196 */   MCD::OPC_CheckPredicate, 26, 242, 18, // Skip to: 15050
/* 10200 */   MCD::OPC_Decode, 215, 8, 131, 2, // Opcode: FCLE_D
/* 10205 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10218
/* 10209 */   MCD::OPC_CheckPredicate, 26, 229, 18, // Skip to: 15050
/* 10213 */   MCD::OPC_Decode, 231, 8, 130, 2, // Opcode: FCULE_W
/* 10218 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10231
/* 10222 */   MCD::OPC_CheckPredicate, 26, 216, 18, // Skip to: 15050
/* 10226 */   MCD::OPC_Decode, 230, 8, 131, 2, // Opcode: FCULE_D
/* 10231 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10244
/* 10235 */   MCD::OPC_CheckPredicate, 26, 203, 18, // Skip to: 15050
/* 10239 */   MCD::OPC_Decode, 199, 9, 130, 2, // Opcode: FSAF_W
/* 10244 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10257
/* 10248 */   MCD::OPC_CheckPredicate, 26, 190, 18, // Skip to: 15050
/* 10252 */   MCD::OPC_Decode, 198, 9, 131, 2, // Opcode: FSAF_D
/* 10257 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10270
/* 10261 */   MCD::OPC_CheckPredicate, 26, 177, 18, // Skip to: 15050
/* 10265 */   MCD::OPC_Decode, 235, 9, 130, 2, // Opcode: FSUN_W
/* 10270 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10283
/* 10274 */   MCD::OPC_CheckPredicate, 26, 164, 18, // Skip to: 15050
/* 10278 */   MCD::OPC_Decode, 234, 9, 131, 2, // Opcode: FSUN_D
/* 10283 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10296
/* 10287 */   MCD::OPC_CheckPredicate, 26, 151, 18, // Skip to: 15050
/* 10291 */   MCD::OPC_Decode, 201, 9, 130, 2, // Opcode: FSEQ_W
/* 10296 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10309
/* 10300 */   MCD::OPC_CheckPredicate, 26, 138, 18, // Skip to: 15050
/* 10304 */   MCD::OPC_Decode, 200, 9, 131, 2, // Opcode: FSEQ_D
/* 10309 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10322
/* 10313 */   MCD::OPC_CheckPredicate, 26, 125, 18, // Skip to: 15050
/* 10317 */   MCD::OPC_Decode, 227, 9, 130, 2, // Opcode: FSUEQ_W
/* 10322 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10335
/* 10326 */   MCD::OPC_CheckPredicate, 26, 112, 18, // Skip to: 15050
/* 10330 */   MCD::OPC_Decode, 226, 9, 131, 2, // Opcode: FSUEQ_D
/* 10335 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10348
/* 10339 */   MCD::OPC_CheckPredicate, 26, 99, 18, // Skip to: 15050
/* 10343 */   MCD::OPC_Decode, 205, 9, 130, 2, // Opcode: FSLT_W
/* 10348 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10361
/* 10352 */   MCD::OPC_CheckPredicate, 26, 86, 18, // Skip to: 15050
/* 10356 */   MCD::OPC_Decode, 204, 9, 131, 2, // Opcode: FSLT_D
/* 10361 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10374
/* 10365 */   MCD::OPC_CheckPredicate, 26, 73, 18, // Skip to: 15050
/* 10369 */   MCD::OPC_Decode, 231, 9, 130, 2, // Opcode: FSULT_W
/* 10374 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10387
/* 10378 */   MCD::OPC_CheckPredicate, 26, 60, 18, // Skip to: 15050
/* 10382 */   MCD::OPC_Decode, 230, 9, 131, 2, // Opcode: FSULT_D
/* 10387 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10400
/* 10391 */   MCD::OPC_CheckPredicate, 26, 47, 18, // Skip to: 15050
/* 10395 */   MCD::OPC_Decode, 203, 9, 130, 2, // Opcode: FSLE_W
/* 10400 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10413
/* 10404 */   MCD::OPC_CheckPredicate, 26, 34, 18, // Skip to: 15050
/* 10408 */   MCD::OPC_Decode, 202, 9, 131, 2, // Opcode: FSLE_D
/* 10413 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10426
/* 10417 */   MCD::OPC_CheckPredicate, 26, 21, 18, // Skip to: 15050
/* 10421 */   MCD::OPC_Decode, 229, 9, 130, 2, // Opcode: FSULE_W
/* 10426 */   MCD::OPC_FilterValue, 31, 12, 18, // Skip to: 15050
/* 10430 */   MCD::OPC_CheckPredicate, 26, 8, 18, // Skip to: 15050
/* 10434 */   MCD::OPC_Decode, 228, 9, 131, 2, // Opcode: FSULE_D
/* 10439 */   MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 10784
/* 10443 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10446 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10459
/* 10450 */   MCD::OPC_CheckPredicate, 26, 244, 17, // Skip to: 15050
/* 10454 */   MCD::OPC_Decode, 208, 8, 130, 2, // Opcode: FADD_W
/* 10459 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10472
/* 10463 */   MCD::OPC_CheckPredicate, 26, 231, 17, // Skip to: 15050
/* 10467 */   MCD::OPC_Decode, 200, 8, 131, 2, // Opcode: FADD_D
/* 10472 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10485
/* 10476 */   MCD::OPC_CheckPredicate, 26, 218, 17, // Skip to: 15050
/* 10480 */   MCD::OPC_Decode, 225, 9, 130, 2, // Opcode: FSUB_W
/* 10485 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10498
/* 10489 */   MCD::OPC_CheckPredicate, 26, 205, 17, // Skip to: 15050
/* 10493 */   MCD::OPC_Decode, 217, 9, 131, 2, // Opcode: FSUB_D
/* 10498 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10511
/* 10502 */   MCD::OPC_CheckPredicate, 26, 192, 17, // Skip to: 15050
/* 10506 */   MCD::OPC_Decode, 183, 9, 130, 2, // Opcode: FMUL_W
/* 10511 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10524
/* 10515 */   MCD::OPC_CheckPredicate, 26, 179, 17, // Skip to: 15050
/* 10519 */   MCD::OPC_Decode, 175, 9, 131, 2, // Opcode: FMUL_D
/* 10524 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10537
/* 10528 */   MCD::OPC_CheckPredicate, 26, 166, 17, // Skip to: 15050
/* 10532 */   MCD::OPC_Decode, 246, 8, 130, 2, // Opcode: FDIV_W
/* 10537 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10550
/* 10541 */   MCD::OPC_CheckPredicate, 26, 153, 17, // Skip to: 15050
/* 10545 */   MCD::OPC_Decode, 238, 8, 131, 2, // Opcode: FDIV_D
/* 10550 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10563
/* 10554 */   MCD::OPC_CheckPredicate, 26, 140, 17, // Skip to: 15050
/* 10558 */   MCD::OPC_Decode, 157, 9, 134, 2, // Opcode: FMADD_W
/* 10563 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10576
/* 10567 */   MCD::OPC_CheckPredicate, 26, 127, 17, // Skip to: 15050
/* 10571 */   MCD::OPC_Decode, 156, 9, 135, 2, // Opcode: FMADD_D
/* 10576 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10589
/* 10580 */   MCD::OPC_CheckPredicate, 26, 114, 17, // Skip to: 15050
/* 10584 */   MCD::OPC_Decode, 174, 9, 134, 2, // Opcode: FMSUB_W
/* 10589 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10602
/* 10593 */   MCD::OPC_CheckPredicate, 26, 101, 17, // Skip to: 15050
/* 10597 */   MCD::OPC_Decode, 173, 9, 135, 2, // Opcode: FMSUB_D
/* 10602 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10615
/* 10606 */   MCD::OPC_CheckPredicate, 26, 88, 17, // Skip to: 15050
/* 10610 */   MCD::OPC_Decode, 251, 8, 130, 2, // Opcode: FEXP2_W
/* 10615 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10628
/* 10619 */   MCD::OPC_CheckPredicate, 26, 75, 17, // Skip to: 15050
/* 10623 */   MCD::OPC_Decode, 249, 8, 131, 2, // Opcode: FEXP2_D
/* 10628 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10641
/* 10632 */   MCD::OPC_CheckPredicate, 26, 62, 17, // Skip to: 15050
/* 10636 */   MCD::OPC_Decode, 247, 8, 170, 2, // Opcode: FEXDO_H
/* 10641 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10654
/* 10645 */   MCD::OPC_CheckPredicate, 26, 49, 17, // Skip to: 15050
/* 10649 */   MCD::OPC_Decode, 248, 8, 171, 2, // Opcode: FEXDO_W
/* 10654 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10667
/* 10658 */   MCD::OPC_CheckPredicate, 26, 36, 17, // Skip to: 15050
/* 10662 */   MCD::OPC_Decode, 240, 9, 170, 2, // Opcode: FTQ_H
/* 10667 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10680
/* 10671 */   MCD::OPC_CheckPredicate, 26, 23, 17, // Skip to: 15050
/* 10675 */   MCD::OPC_Decode, 241, 9, 171, 2, // Opcode: FTQ_W
/* 10680 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10693
/* 10684 */   MCD::OPC_CheckPredicate, 26, 10, 17, // Skip to: 15050
/* 10688 */   MCD::OPC_Decode, 165, 9, 130, 2, // Opcode: FMIN_W
/* 10693 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10706
/* 10697 */   MCD::OPC_CheckPredicate, 26, 253, 16, // Skip to: 15050
/* 10701 */   MCD::OPC_Decode, 164, 9, 131, 2, // Opcode: FMIN_D
/* 10706 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10719
/* 10710 */   MCD::OPC_CheckPredicate, 26, 240, 16, // Skip to: 15050
/* 10714 */   MCD::OPC_Decode, 163, 9, 130, 2, // Opcode: FMIN_A_W
/* 10719 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10732
/* 10723 */   MCD::OPC_CheckPredicate, 26, 227, 16, // Skip to: 15050
/* 10727 */   MCD::OPC_Decode, 162, 9, 131, 2, // Opcode: FMIN_A_D
/* 10732 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10745
/* 10736 */   MCD::OPC_CheckPredicate, 26, 214, 16, // Skip to: 15050
/* 10740 */   MCD::OPC_Decode, 161, 9, 130, 2, // Opcode: FMAX_W
/* 10745 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10758
/* 10749 */   MCD::OPC_CheckPredicate, 26, 201, 16, // Skip to: 15050
/* 10753 */   MCD::OPC_Decode, 160, 9, 131, 2, // Opcode: FMAX_D
/* 10758 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10771
/* 10762 */   MCD::OPC_CheckPredicate, 26, 188, 16, // Skip to: 15050
/* 10766 */   MCD::OPC_Decode, 159, 9, 130, 2, // Opcode: FMAX_A_W
/* 10771 */   MCD::OPC_FilterValue, 31, 179, 16, // Skip to: 15050
/* 10775 */   MCD::OPC_CheckPredicate, 26, 175, 16, // Skip to: 15050
/* 10779 */   MCD::OPC_Decode, 158, 9, 131, 2, // Opcode: FMAX_A_D
/* 10784 */   MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 11103
/* 10788 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10791 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10804
/* 10795 */   MCD::OPC_CheckPredicate, 26, 155, 16, // Skip to: 15050
/* 10799 */   MCD::OPC_Decode, 227, 8, 130, 2, // Opcode: FCOR_W
/* 10804 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10817
/* 10808 */   MCD::OPC_CheckPredicate, 26, 142, 16, // Skip to: 15050
/* 10812 */   MCD::OPC_Decode, 226, 8, 131, 2, // Opcode: FCOR_D
/* 10817 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10830
/* 10821 */   MCD::OPC_CheckPredicate, 26, 129, 16, // Skip to: 15050
/* 10825 */   MCD::OPC_Decode, 235, 8, 130, 2, // Opcode: FCUNE_W
/* 10830 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10843
/* 10834 */   MCD::OPC_CheckPredicate, 26, 116, 16, // Skip to: 15050
/* 10838 */   MCD::OPC_Decode, 234, 8, 131, 2, // Opcode: FCUNE_D
/* 10843 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10856
/* 10847 */   MCD::OPC_CheckPredicate, 26, 103, 16, // Skip to: 15050
/* 10851 */   MCD::OPC_Decode, 225, 8, 130, 2, // Opcode: FCNE_W
/* 10856 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10869
/* 10860 */   MCD::OPC_CheckPredicate, 26, 90, 16, // Skip to: 15050
/* 10864 */   MCD::OPC_Decode, 224, 8, 131, 2, // Opcode: FCNE_D
/* 10869 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10882
/* 10873 */   MCD::OPC_CheckPredicate, 26, 77, 16, // Skip to: 15050
/* 10877 */   MCD::OPC_Decode, 147, 14, 129, 2, // Opcode: MUL_Q_H
/* 10882 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10895
/* 10886 */   MCD::OPC_CheckPredicate, 26, 64, 16, // Skip to: 15050
/* 10890 */   MCD::OPC_Decode, 148, 14, 130, 2, // Opcode: MUL_Q_W
/* 10895 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10908
/* 10899 */   MCD::OPC_CheckPredicate, 26, 51, 16, // Skip to: 15050
/* 10903 */   MCD::OPC_Decode, 138, 12, 133, 2, // Opcode: MADD_Q_H
/* 10908 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10921
/* 10912 */   MCD::OPC_CheckPredicate, 26, 38, 16, // Skip to: 15050
/* 10916 */   MCD::OPC_Decode, 139, 12, 134, 2, // Opcode: MADD_Q_W
/* 10921 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10934
/* 10925 */   MCD::OPC_CheckPredicate, 26, 25, 16, // Skip to: 15050
/* 10929 */   MCD::OPC_Decode, 190, 13, 133, 2, // Opcode: MSUB_Q_H
/* 10934 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10947
/* 10938 */   MCD::OPC_CheckPredicate, 26, 12, 16, // Skip to: 15050
/* 10942 */   MCD::OPC_Decode, 191, 13, 134, 2, // Opcode: MSUB_Q_W
/* 10947 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10960
/* 10951 */   MCD::OPC_CheckPredicate, 26, 255, 15, // Skip to: 15050
/* 10955 */   MCD::OPC_Decode, 209, 9, 130, 2, // Opcode: FSOR_W
/* 10960 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10973
/* 10964 */   MCD::OPC_CheckPredicate, 26, 242, 15, // Skip to: 15050
/* 10968 */   MCD::OPC_Decode, 208, 9, 131, 2, // Opcode: FSOR_D
/* 10973 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10986
/* 10977 */   MCD::OPC_CheckPredicate, 26, 229, 15, // Skip to: 15050
/* 10981 */   MCD::OPC_Decode, 233, 9, 130, 2, // Opcode: FSUNE_W
/* 10986 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10999
/* 10990 */   MCD::OPC_CheckPredicate, 26, 216, 15, // Skip to: 15050
/* 10994 */   MCD::OPC_Decode, 232, 9, 131, 2, // Opcode: FSUNE_D
/* 10999 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11012
/* 11003 */   MCD::OPC_CheckPredicate, 26, 203, 15, // Skip to: 15050
/* 11007 */   MCD::OPC_Decode, 207, 9, 130, 2, // Opcode: FSNE_W
/* 11012 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11025
/* 11016 */   MCD::OPC_CheckPredicate, 26, 190, 15, // Skip to: 15050
/* 11020 */   MCD::OPC_Decode, 206, 9, 131, 2, // Opcode: FSNE_D
/* 11025 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11038
/* 11029 */   MCD::OPC_CheckPredicate, 26, 177, 15, // Skip to: 15050
/* 11033 */   MCD::OPC_Decode, 251, 13, 129, 2, // Opcode: MULR_Q_H
/* 11038 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11051
/* 11042 */   MCD::OPC_CheckPredicate, 26, 164, 15, // Skip to: 15050
/* 11046 */   MCD::OPC_Decode, 252, 13, 130, 2, // Opcode: MULR_Q_W
/* 11051 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11064
/* 11055 */   MCD::OPC_CheckPredicate, 26, 151, 15, // Skip to: 15050
/* 11059 */   MCD::OPC_Decode, 250, 11, 133, 2, // Opcode: MADDR_Q_H
/* 11064 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11077
/* 11068 */   MCD::OPC_CheckPredicate, 26, 138, 15, // Skip to: 15050
/* 11072 */   MCD::OPC_Decode, 251, 11, 134, 2, // Opcode: MADDR_Q_W
/* 11077 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11090
/* 11081 */   MCD::OPC_CheckPredicate, 26, 125, 15, // Skip to: 15050
/* 11085 */   MCD::OPC_Decode, 174, 13, 133, 2, // Opcode: MSUBR_Q_H
/* 11090 */   MCD::OPC_FilterValue, 29, 116, 15, // Skip to: 15050
/* 11094 */   MCD::OPC_CheckPredicate, 26, 112, 15, // Skip to: 15050
/* 11098 */   MCD::OPC_Decode, 175, 13, 134, 2, // Opcode: MSUBR_Q_W
/* 11103 */   MCD::OPC_FilterValue, 30, 220, 2, // Skip to: 11839
/* 11107 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 11110 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11123
/* 11114 */   MCD::OPC_CheckPredicate, 26, 92, 15, // Skip to: 15050
/* 11118 */   MCD::OPC_Decode, 201, 1, 128, 2, // Opcode: AND_V
/* 11123 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11136
/* 11127 */   MCD::OPC_CheckPredicate, 26, 79, 15, // Skip to: 15050
/* 11131 */   MCD::OPC_Decode, 202, 14, 128, 2, // Opcode: OR_V
/* 11136 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11149
/* 11140 */   MCD::OPC_CheckPredicate, 26, 66, 15, // Skip to: 15050
/* 11144 */   MCD::OPC_Decode, 186, 14, 128, 2, // Opcode: NOR_V
/* 11149 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11162
/* 11153 */   MCD::OPC_CheckPredicate, 26, 53, 15, // Skip to: 15050
/* 11157 */   MCD::OPC_Decode, 231, 19, 128, 2, // Opcode: XOR_V
/* 11162 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11175
/* 11166 */   MCD::OPC_CheckPredicate, 26, 40, 15, // Skip to: 15050
/* 11170 */   MCD::OPC_Decode, 186, 3, 132, 2, // Opcode: BMNZ_V
/* 11175 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11188
/* 11179 */   MCD::OPC_CheckPredicate, 26, 27, 15, // Skip to: 15050
/* 11183 */   MCD::OPC_Decode, 188, 3, 132, 2, // Opcode: BMZ_V
/* 11188 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11201
/* 11192 */   MCD::OPC_CheckPredicate, 26, 14, 15, // Skip to: 15050
/* 11196 */   MCD::OPC_Decode, 236, 3, 132, 2, // Opcode: BSEL_V
/* 11201 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 11416
/* 11205 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11208 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11221
/* 11212 */   MCD::OPC_CheckPredicate, 26, 250, 14, // Skip to: 15050
/* 11216 */   MCD::OPC_Decode, 137, 9, 172, 2, // Opcode: FILL_B
/* 11221 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11234
/* 11225 */   MCD::OPC_CheckPredicate, 26, 237, 14, // Skip to: 15050
/* 11229 */   MCD::OPC_Decode, 141, 9, 173, 2, // Opcode: FILL_H
/* 11234 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11247
/* 11238 */   MCD::OPC_CheckPredicate, 26, 224, 14, // Skip to: 15050
/* 11242 */   MCD::OPC_Decode, 142, 9, 174, 2, // Opcode: FILL_W
/* 11247 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11260
/* 11251 */   MCD::OPC_CheckPredicate, 33, 211, 14, // Skip to: 15050
/* 11255 */   MCD::OPC_Decode, 138, 9, 175, 2, // Opcode: FILL_D
/* 11260 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11273
/* 11264 */   MCD::OPC_CheckPredicate, 26, 198, 14, // Skip to: 15050
/* 11268 */   MCD::OPC_Decode, 223, 14, 164, 2, // Opcode: PCNT_B
/* 11273 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11286
/* 11277 */   MCD::OPC_CheckPredicate, 26, 185, 14, // Skip to: 15050
/* 11281 */   MCD::OPC_Decode, 225, 14, 176, 2, // Opcode: PCNT_H
/* 11286 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11299
/* 11290 */   MCD::OPC_CheckPredicate, 26, 172, 14, // Skip to: 15050
/* 11294 */   MCD::OPC_Decode, 226, 14, 177, 2, // Opcode: PCNT_W
/* 11299 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11312
/* 11303 */   MCD::OPC_CheckPredicate, 26, 159, 14, // Skip to: 15050
/* 11307 */   MCD::OPC_Decode, 224, 14, 178, 2, // Opcode: PCNT_D
/* 11312 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11325
/* 11316 */   MCD::OPC_CheckPredicate, 26, 146, 14, // Skip to: 15050
/* 11320 */   MCD::OPC_Decode, 160, 14, 164, 2, // Opcode: NLOC_B
/* 11325 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11338
/* 11329 */   MCD::OPC_CheckPredicate, 26, 133, 14, // Skip to: 15050
/* 11333 */   MCD::OPC_Decode, 162, 14, 176, 2, // Opcode: NLOC_H
/* 11338 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11351
/* 11342 */   MCD::OPC_CheckPredicate, 26, 120, 14, // Skip to: 15050
/* 11346 */   MCD::OPC_Decode, 163, 14, 177, 2, // Opcode: NLOC_W
/* 11351 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11364
/* 11355 */   MCD::OPC_CheckPredicate, 26, 107, 14, // Skip to: 15050
/* 11359 */   MCD::OPC_Decode, 161, 14, 178, 2, // Opcode: NLOC_D
/* 11364 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11377
/* 11368 */   MCD::OPC_CheckPredicate, 26, 94, 14, // Skip to: 15050
/* 11372 */   MCD::OPC_Decode, 164, 14, 164, 2, // Opcode: NLZC_B
/* 11377 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11390
/* 11381 */   MCD::OPC_CheckPredicate, 26, 81, 14, // Skip to: 15050
/* 11385 */   MCD::OPC_Decode, 166, 14, 176, 2, // Opcode: NLZC_H
/* 11390 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11403
/* 11394 */   MCD::OPC_CheckPredicate, 26, 68, 14, // Skip to: 15050
/* 11398 */   MCD::OPC_Decode, 167, 14, 177, 2, // Opcode: NLZC_W
/* 11403 */   MCD::OPC_FilterValue, 15, 59, 14, // Skip to: 15050
/* 11407 */   MCD::OPC_CheckPredicate, 26, 55, 14, // Skip to: 15050
/* 11411 */   MCD::OPC_Decode, 165, 14, 178, 2, // Opcode: NLZC_D
/* 11416 */   MCD::OPC_FilterValue, 25, 46, 14, // Skip to: 15050
/* 11420 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11423 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11436
/* 11427 */   MCD::OPC_CheckPredicate, 26, 35, 14, // Skip to: 15050
/* 11431 */   MCD::OPC_Decode, 214, 8, 177, 2, // Opcode: FCLASS_W
/* 11436 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11449
/* 11440 */   MCD::OPC_CheckPredicate, 26, 22, 14, // Skip to: 15050
/* 11444 */   MCD::OPC_Decode, 213, 8, 178, 2, // Opcode: FCLASS_D
/* 11449 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11462
/* 11453 */   MCD::OPC_CheckPredicate, 26, 9, 14, // Skip to: 15050
/* 11457 */   MCD::OPC_Decode, 243, 9, 177, 2, // Opcode: FTRUNC_S_W
/* 11462 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11475
/* 11466 */   MCD::OPC_CheckPredicate, 26, 252, 13, // Skip to: 15050
/* 11470 */   MCD::OPC_Decode, 242, 9, 178, 2, // Opcode: FTRUNC_S_D
/* 11475 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11488
/* 11479 */   MCD::OPC_CheckPredicate, 26, 239, 13, // Skip to: 15050
/* 11483 */   MCD::OPC_Decode, 245, 9, 177, 2, // Opcode: FTRUNC_U_W
/* 11488 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11501
/* 11492 */   MCD::OPC_CheckPredicate, 26, 226, 13, // Skip to: 15050
/* 11496 */   MCD::OPC_Decode, 244, 9, 178, 2, // Opcode: FTRUNC_U_D
/* 11501 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11514
/* 11505 */   MCD::OPC_CheckPredicate, 26, 213, 13, // Skip to: 15050
/* 11509 */   MCD::OPC_Decode, 216, 9, 177, 2, // Opcode: FSQRT_W
/* 11514 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11527
/* 11518 */   MCD::OPC_CheckPredicate, 26, 200, 13, // Skip to: 15050
/* 11522 */   MCD::OPC_Decode, 210, 9, 178, 2, // Opcode: FSQRT_D
/* 11527 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11540
/* 11531 */   MCD::OPC_CheckPredicate, 26, 187, 13, // Skip to: 15050
/* 11535 */   MCD::OPC_Decode, 197, 9, 177, 2, // Opcode: FRSQRT_W
/* 11540 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11553
/* 11544 */   MCD::OPC_CheckPredicate, 26, 174, 13, // Skip to: 15050
/* 11548 */   MCD::OPC_Decode, 196, 9, 178, 2, // Opcode: FRSQRT_D
/* 11553 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11566
/* 11557 */   MCD::OPC_CheckPredicate, 26, 161, 13, // Skip to: 15050
/* 11561 */   MCD::OPC_Decode, 193, 9, 177, 2, // Opcode: FRCP_W
/* 11566 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11579
/* 11570 */   MCD::OPC_CheckPredicate, 26, 148, 13, // Skip to: 15050
/* 11574 */   MCD::OPC_Decode, 192, 9, 178, 2, // Opcode: FRCP_D
/* 11579 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11592
/* 11583 */   MCD::OPC_CheckPredicate, 26, 135, 13, // Skip to: 15050
/* 11587 */   MCD::OPC_Decode, 195, 9, 177, 2, // Opcode: FRINT_W
/* 11592 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11605
/* 11596 */   MCD::OPC_CheckPredicate, 26, 122, 13, // Skip to: 15050
/* 11600 */   MCD::OPC_Decode, 194, 9, 178, 2, // Opcode: FRINT_D
/* 11605 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11618
/* 11609 */   MCD::OPC_CheckPredicate, 26, 109, 13, // Skip to: 15050
/* 11613 */   MCD::OPC_Decode, 144, 9, 177, 2, // Opcode: FLOG2_W
/* 11618 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11631
/* 11622 */   MCD::OPC_CheckPredicate, 26, 96, 13, // Skip to: 15050
/* 11626 */   MCD::OPC_Decode, 143, 9, 178, 2, // Opcode: FLOG2_D
/* 11631 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 11644
/* 11635 */   MCD::OPC_CheckPredicate, 26, 83, 13, // Skip to: 15050
/* 11639 */   MCD::OPC_Decode, 254, 8, 179, 2, // Opcode: FEXUPL_W
/* 11644 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 11657
/* 11648 */   MCD::OPC_CheckPredicate, 26, 70, 13, // Skip to: 15050
/* 11652 */   MCD::OPC_Decode, 253, 8, 180, 2, // Opcode: FEXUPL_D
/* 11657 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 11670
/* 11661 */   MCD::OPC_CheckPredicate, 26, 57, 13, // Skip to: 15050
/* 11665 */   MCD::OPC_Decode, 128, 9, 179, 2, // Opcode: FEXUPR_W
/* 11670 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 11683
/* 11674 */   MCD::OPC_CheckPredicate, 26, 44, 13, // Skip to: 15050
/* 11678 */   MCD::OPC_Decode, 255, 8, 180, 2, // Opcode: FEXUPR_D
/* 11683 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11696
/* 11687 */   MCD::OPC_CheckPredicate, 26, 31, 13, // Skip to: 15050
/* 11691 */   MCD::OPC_Decode, 134, 9, 179, 2, // Opcode: FFQL_W
/* 11696 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11709
/* 11700 */   MCD::OPC_CheckPredicate, 26, 18, 13, // Skip to: 15050
/* 11704 */   MCD::OPC_Decode, 133, 9, 180, 2, // Opcode: FFQL_D
/* 11709 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11722
/* 11713 */   MCD::OPC_CheckPredicate, 26, 5, 13, // Skip to: 15050
/* 11717 */   MCD::OPC_Decode, 136, 9, 179, 2, // Opcode: FFQR_W
/* 11722 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11735
/* 11726 */   MCD::OPC_CheckPredicate, 26, 248, 12, // Skip to: 15050
/* 11730 */   MCD::OPC_Decode, 135, 9, 180, 2, // Opcode: FFQR_D
/* 11735 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11748
/* 11739 */   MCD::OPC_CheckPredicate, 26, 235, 12, // Skip to: 15050
/* 11743 */   MCD::OPC_Decode, 237, 9, 177, 2, // Opcode: FTINT_S_W
/* 11748 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11761
/* 11752 */   MCD::OPC_CheckPredicate, 26, 222, 12, // Skip to: 15050
/* 11756 */   MCD::OPC_Decode, 236, 9, 178, 2, // Opcode: FTINT_S_D
/* 11761 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11774
/* 11765 */   MCD::OPC_CheckPredicate, 26, 209, 12, // Skip to: 15050
/* 11769 */   MCD::OPC_Decode, 239, 9, 177, 2, // Opcode: FTINT_U_W
/* 11774 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11787
/* 11778 */   MCD::OPC_CheckPredicate, 26, 196, 12, // Skip to: 15050
/* 11782 */   MCD::OPC_Decode, 238, 9, 178, 2, // Opcode: FTINT_U_D
/* 11787 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11800
/* 11791 */   MCD::OPC_CheckPredicate, 26, 183, 12, // Skip to: 15050
/* 11795 */   MCD::OPC_Decode, 130, 9, 177, 2, // Opcode: FFINT_S_W
/* 11800 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11813
/* 11804 */   MCD::OPC_CheckPredicate, 26, 170, 12, // Skip to: 15050
/* 11808 */   MCD::OPC_Decode, 129, 9, 178, 2, // Opcode: FFINT_S_D
/* 11813 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11826
/* 11817 */   MCD::OPC_CheckPredicate, 26, 157, 12, // Skip to: 15050
/* 11821 */   MCD::OPC_Decode, 132, 9, 177, 2, // Opcode: FFINT_U_W
/* 11826 */   MCD::OPC_FilterValue, 31, 148, 12, // Skip to: 15050
/* 11830 */   MCD::OPC_CheckPredicate, 26, 144, 12, // Skip to: 15050
/* 11834 */   MCD::OPC_Decode, 131, 9, 178, 2, // Opcode: FFINT_U_D
/* 11839 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 11852
/* 11843 */   MCD::OPC_CheckPredicate, 26, 131, 12, // Skip to: 15050
/* 11847 */   MCD::OPC_Decode, 254, 10, 181, 2, // Opcode: LD_B
/* 11852 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 11865
/* 11856 */   MCD::OPC_CheckPredicate, 26, 118, 12, // Skip to: 15050
/* 11860 */   MCD::OPC_Decode, 129, 11, 181, 2, // Opcode: LD_H
/* 11865 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 11878
/* 11869 */   MCD::OPC_CheckPredicate, 26, 105, 12, // Skip to: 15050
/* 11873 */   MCD::OPC_Decode, 131, 11, 181, 2, // Opcode: LD_W
/* 11878 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 11891
/* 11882 */   MCD::OPC_CheckPredicate, 26, 92, 12, // Skip to: 15050
/* 11886 */   MCD::OPC_Decode, 255, 10, 181, 2, // Opcode: LD_D
/* 11891 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 11904
/* 11895 */   MCD::OPC_CheckPredicate, 26, 79, 12, // Skip to: 15050
/* 11899 */   MCD::OPC_Decode, 246, 17, 181, 2, // Opcode: ST_B
/* 11904 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11917
/* 11908 */   MCD::OPC_CheckPredicate, 26, 66, 12, // Skip to: 15050
/* 11912 */   MCD::OPC_Decode, 249, 17, 181, 2, // Opcode: ST_H
/* 11917 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11930
/* 11921 */   MCD::OPC_CheckPredicate, 26, 53, 12, // Skip to: 15050
/* 11925 */   MCD::OPC_Decode, 250, 17, 181, 2, // Opcode: ST_W
/* 11930 */   MCD::OPC_FilterValue, 39, 44, 12, // Skip to: 15050
/* 11934 */   MCD::OPC_CheckPredicate, 26, 40, 12, // Skip to: 15050
/* 11938 */   MCD::OPC_Decode, 247, 17, 181, 2, // Opcode: ST_D
/* 11943 */   MCD::OPC_FilterValue, 31, 231, 10, // Skip to: 14738
/* 11947 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11950 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11963
/* 11954 */   MCD::OPC_CheckPredicate, 25, 20, 12, // Skip to: 15050
/* 11958 */   MCD::OPC_Decode, 162, 8, 182, 2, // Opcode: EXT
/* 11963 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11976
/* 11967 */   MCD::OPC_CheckPredicate, 25, 7, 12, // Skip to: 15050
/* 11971 */   MCD::OPC_Decode, 147, 10, 183, 2, // Opcode: INS
/* 11976 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11995
/* 11980 */   MCD::OPC_CheckPredicate, 38, 250, 11, // Skip to: 15050
/* 11984 */   MCD::OPC_CheckField, 6, 5, 0, 244, 11, // Skip to: 15050
/* 11990 */   MCD::OPC_Decode, 191, 9, 184, 2, // Opcode: FORK
/* 11995 */   MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 12019
/* 11999 */   MCD::OPC_CheckPredicate, 38, 231, 11, // Skip to: 15050
/* 12003 */   MCD::OPC_CheckField, 16, 5, 0, 225, 11, // Skip to: 15050
/* 12009 */   MCD::OPC_CheckField, 6, 5, 0, 219, 11, // Skip to: 15050
/* 12015 */   MCD::OPC_Decode, 239, 19, 14, // Opcode: YIELD
/* 12019 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 12065
/* 12023 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12026 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12039
/* 12030 */   MCD::OPC_CheckPredicate, 32, 200, 11, // Skip to: 15050
/* 12034 */   MCD::OPC_Decode, 214, 11, 185, 2, // Opcode: LWX
/* 12039 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12052
/* 12043 */   MCD::OPC_CheckPredicate, 32, 187, 11, // Skip to: 15050
/* 12047 */   MCD::OPC_Decode, 140, 11, 185, 2, // Opcode: LHX
/* 12052 */   MCD::OPC_FilterValue, 6, 178, 11, // Skip to: 15050
/* 12056 */   MCD::OPC_CheckPredicate, 32, 174, 11, // Skip to: 15050
/* 12060 */   MCD::OPC_Decode, 224, 10, 185, 2, // Opcode: LBUX
/* 12065 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12084
/* 12069 */   MCD::OPC_CheckPredicate, 32, 161, 11, // Skip to: 15050
/* 12073 */   MCD::OPC_CheckField, 6, 10, 0, 155, 11, // Skip to: 15050
/* 12079 */   MCD::OPC_Decode, 166, 10, 186, 2, // Opcode: INSV
/* 12084 */   MCD::OPC_FilterValue, 16, 60, 1, // Skip to: 12404
/* 12088 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12091 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12104
/* 12095 */   MCD::OPC_CheckPredicate, 32, 135, 11, // Skip to: 15050
/* 12099 */   MCD::OPC_Decode, 157, 1, 187, 2, // Opcode: ADDU_QB
/* 12104 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12117
/* 12108 */   MCD::OPC_CheckPredicate, 32, 122, 11, // Skip to: 15050
/* 12112 */   MCD::OPC_Decode, 163, 18, 187, 2, // Opcode: SUBU_QB
/* 12117 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12130
/* 12121 */   MCD::OPC_CheckPredicate, 32, 109, 11, // Skip to: 15050
/* 12125 */   MCD::OPC_Decode, 161, 1, 187, 2, // Opcode: ADDU_S_QB
/* 12130 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12143
/* 12134 */   MCD::OPC_CheckPredicate, 32, 96, 11, // Skip to: 15050
/* 12138 */   MCD::OPC_Decode, 167, 18, 187, 2, // Opcode: SUBU_S_QB
/* 12143 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12156
/* 12147 */   MCD::OPC_CheckPredicate, 32, 83, 11, // Skip to: 15050
/* 12151 */   MCD::OPC_Decode, 236, 13, 187, 2, // Opcode: MULEU_S_PH_QBL
/* 12156 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12169
/* 12160 */   MCD::OPC_CheckPredicate, 32, 70, 11, // Skip to: 15050
/* 12164 */   MCD::OPC_Decode, 238, 13, 187, 2, // Opcode: MULEU_S_PH_QBR
/* 12169 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12182
/* 12173 */   MCD::OPC_CheckPredicate, 66, 57, 11, // Skip to: 15050
/* 12177 */   MCD::OPC_Decode, 155, 1, 187, 2, // Opcode: ADDU_PH
/* 12182 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12195
/* 12186 */   MCD::OPC_CheckPredicate, 66, 44, 11, // Skip to: 15050
/* 12190 */   MCD::OPC_Decode, 161, 18, 187, 2, // Opcode: SUBU_PH
/* 12195 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12208
/* 12199 */   MCD::OPC_CheckPredicate, 32, 31, 11, // Skip to: 15050
/* 12203 */   MCD::OPC_Decode, 128, 1, 187, 2, // Opcode: ADDQ_PH
/* 12208 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12221
/* 12212 */   MCD::OPC_CheckPredicate, 32, 18, 11, // Skip to: 15050
/* 12216 */   MCD::OPC_Decode, 132, 18, 187, 2, // Opcode: SUBQ_PH
/* 12221 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12234
/* 12225 */   MCD::OPC_CheckPredicate, 66, 5, 11, // Skip to: 15050
/* 12229 */   MCD::OPC_Decode, 159, 1, 187, 2, // Opcode: ADDU_S_PH
/* 12234 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12247
/* 12238 */   MCD::OPC_CheckPredicate, 66, 248, 10, // Skip to: 15050
/* 12242 */   MCD::OPC_Decode, 165, 18, 187, 2, // Opcode: SUBU_S_PH
/* 12247 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12260
/* 12251 */   MCD::OPC_CheckPredicate, 32, 235, 10, // Skip to: 15050
/* 12255 */   MCD::OPC_Decode, 130, 1, 187, 2, // Opcode: ADDQ_S_PH
/* 12260 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12273
/* 12264 */   MCD::OPC_CheckPredicate, 32, 222, 10, // Skip to: 15050
/* 12268 */   MCD::OPC_Decode, 134, 18, 187, 2, // Opcode: SUBQ_S_PH
/* 12273 */   MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 12285
/* 12277 */   MCD::OPC_CheckPredicate, 32, 209, 10, // Skip to: 15050
/* 12281 */   MCD::OPC_Decode, 134, 1, 49, // Opcode: ADDSC
/* 12285 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12297
/* 12289 */   MCD::OPC_CheckPredicate, 32, 197, 10, // Skip to: 15050
/* 12293 */   MCD::OPC_Decode, 171, 1, 49, // Opcode: ADDWC
/* 12297 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 12309
/* 12301 */   MCD::OPC_CheckPredicate, 32, 185, 10, // Skip to: 15050
/* 12305 */   MCD::OPC_Decode, 236, 12, 49, // Opcode: MODSUB
/* 12309 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12328
/* 12313 */   MCD::OPC_CheckPredicate, 32, 173, 10, // Skip to: 15050
/* 12317 */   MCD::OPC_CheckField, 16, 5, 0, 167, 10, // Skip to: 15050
/* 12323 */   MCD::OPC_Decode, 202, 15, 188, 2, // Opcode: RADDU_W_QB
/* 12328 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12340
/* 12332 */   MCD::OPC_CheckPredicate, 32, 154, 10, // Skip to: 15050
/* 12336 */   MCD::OPC_Decode, 132, 1, 49, // Opcode: ADDQ_S_W
/* 12340 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12352
/* 12344 */   MCD::OPC_CheckPredicate, 32, 142, 10, // Skip to: 15050
/* 12348 */   MCD::OPC_Decode, 136, 18, 49, // Opcode: SUBQ_S_W
/* 12352 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 12365
/* 12356 */   MCD::OPC_CheckPredicate, 32, 130, 10, // Skip to: 15050
/* 12360 */   MCD::OPC_Decode, 232, 13, 189, 2, // Opcode: MULEQ_S_W_PHL
/* 12365 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 12378
/* 12369 */   MCD::OPC_CheckPredicate, 32, 117, 10, // Skip to: 15050
/* 12373 */   MCD::OPC_Decode, 234, 13, 189, 2, // Opcode: MULEQ_S_W_PHR
/* 12378 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12391
/* 12382 */   MCD::OPC_CheckPredicate, 66, 104, 10, // Skip to: 15050
/* 12386 */   MCD::OPC_Decode, 247, 13, 187, 2, // Opcode: MULQ_S_PH
/* 12391 */   MCD::OPC_FilterValue, 31, 95, 10, // Skip to: 15050
/* 12395 */   MCD::OPC_CheckPredicate, 32, 91, 10, // Skip to: 15050
/* 12399 */   MCD::OPC_Decode, 243, 13, 187, 2, // Opcode: MULQ_RS_PH
/* 12404 */   MCD::OPC_FilterValue, 17, 63, 1, // Skip to: 12727
/* 12408 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12411 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12429
/* 12415 */   MCD::OPC_CheckPredicate, 32, 71, 10, // Skip to: 15050
/* 12419 */   MCD::OPC_CheckField, 11, 5, 0, 65, 10, // Skip to: 15050
/* 12425 */   MCD::OPC_Decode, 242, 4, 62, // Opcode: CMPU_EQ_QB
/* 12429 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12447
/* 12433 */   MCD::OPC_CheckPredicate, 32, 53, 10, // Skip to: 15050
/* 12437 */   MCD::OPC_CheckField, 11, 5, 0, 47, 10, // Skip to: 15050
/* 12443 */   MCD::OPC_Decode, 246, 4, 62, // Opcode: CMPU_LT_QB
/* 12447 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12465
/* 12451 */   MCD::OPC_CheckPredicate, 32, 35, 10, // Skip to: 15050
/* 12455 */   MCD::OPC_CheckField, 11, 5, 0, 29, 10, // Skip to: 15050
/* 12461 */   MCD::OPC_Decode, 244, 4, 62, // Opcode: CMPU_LE_QB
/* 12465 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12478
/* 12469 */   MCD::OPC_CheckPredicate, 32, 17, 10, // Skip to: 15050
/* 12473 */   MCD::OPC_Decode, 229, 14, 187, 2, // Opcode: PICK_QB
/* 12478 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12491
/* 12482 */   MCD::OPC_CheckPredicate, 32, 4, 10, // Skip to: 15050
/* 12486 */   MCD::OPC_Decode, 236, 4, 189, 2, // Opcode: CMPGU_EQ_QB
/* 12491 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12504
/* 12495 */   MCD::OPC_CheckPredicate, 32, 247, 9, // Skip to: 15050
/* 12499 */   MCD::OPC_Decode, 240, 4, 189, 2, // Opcode: CMPGU_LT_QB
/* 12504 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12517
/* 12508 */   MCD::OPC_CheckPredicate, 32, 234, 9, // Skip to: 15050
/* 12512 */   MCD::OPC_Decode, 238, 4, 189, 2, // Opcode: CMPGU_LE_QB
/* 12517 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12535
/* 12521 */   MCD::OPC_CheckPredicate, 32, 221, 9, // Skip to: 15050
/* 12525 */   MCD::OPC_CheckField, 11, 5, 0, 215, 9, // Skip to: 15050
/* 12531 */   MCD::OPC_Decode, 252, 4, 62, // Opcode: CMP_EQ_PH
/* 12535 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12553
/* 12539 */   MCD::OPC_CheckPredicate, 32, 203, 9, // Skip to: 15050
/* 12543 */   MCD::OPC_CheckField, 11, 5, 0, 197, 9, // Skip to: 15050
/* 12549 */   MCD::OPC_Decode, 138, 5, 62, // Opcode: CMP_LT_PH
/* 12553 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 12571
/* 12557 */   MCD::OPC_CheckPredicate, 32, 185, 9, // Skip to: 15050
/* 12561 */   MCD::OPC_CheckField, 11, 5, 0, 179, 9, // Skip to: 15050
/* 12567 */   MCD::OPC_Decode, 132, 5, 62, // Opcode: CMP_LE_PH
/* 12571 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12584
/* 12575 */   MCD::OPC_CheckPredicate, 32, 167, 9, // Skip to: 15050
/* 12579 */   MCD::OPC_Decode, 227, 14, 187, 2, // Opcode: PICK_PH
/* 12584 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12597
/* 12588 */   MCD::OPC_CheckPredicate, 32, 154, 9, // Skip to: 15050
/* 12592 */   MCD::OPC_Decode, 128, 15, 187, 2, // Opcode: PRECRQ_QB_PH
/* 12597 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12610
/* 12601 */   MCD::OPC_CheckPredicate, 66, 141, 9, // Skip to: 15050
/* 12605 */   MCD::OPC_Decode, 132, 15, 187, 2, // Opcode: PRECR_QB_PH
/* 12610 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12623
/* 12614 */   MCD::OPC_CheckPredicate, 32, 128, 9, // Skip to: 15050
/* 12618 */   MCD::OPC_Decode, 210, 14, 187, 2, // Opcode: PACKRL_PH
/* 12623 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12636
/* 12627 */   MCD::OPC_CheckPredicate, 32, 115, 9, // Skip to: 15050
/* 12631 */   MCD::OPC_Decode, 252, 14, 187, 2, // Opcode: PRECRQU_S_QB_PH
/* 12636 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12649
/* 12640 */   MCD::OPC_CheckPredicate, 32, 102, 9, // Skip to: 15050
/* 12644 */   MCD::OPC_Decode, 254, 14, 190, 2, // Opcode: PRECRQ_PH_W
/* 12649 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12662
/* 12653 */   MCD::OPC_CheckPredicate, 32, 89, 9, // Skip to: 15050
/* 12657 */   MCD::OPC_Decode, 130, 15, 190, 2, // Opcode: PRECRQ_RS_PH_W
/* 12662 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 12675
/* 12666 */   MCD::OPC_CheckPredicate, 66, 76, 9, // Skip to: 15050
/* 12670 */   MCD::OPC_Decode, 230, 4, 189, 2, // Opcode: CMPGDU_EQ_QB
/* 12675 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12688
/* 12679 */   MCD::OPC_CheckPredicate, 66, 63, 9, // Skip to: 15050
/* 12683 */   MCD::OPC_Decode, 234, 4, 189, 2, // Opcode: CMPGDU_LT_QB
/* 12688 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 12701
/* 12692 */   MCD::OPC_CheckPredicate, 66, 50, 9, // Skip to: 15050
/* 12696 */   MCD::OPC_Decode, 232, 4, 189, 2, // Opcode: CMPGDU_LE_QB
/* 12701 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12714
/* 12705 */   MCD::OPC_CheckPredicate, 66, 37, 9, // Skip to: 15050
/* 12709 */   MCD::OPC_Decode, 134, 15, 191, 2, // Opcode: PRECR_SRA_PH_W
/* 12714 */   MCD::OPC_FilterValue, 31, 28, 9, // Skip to: 15050
/* 12718 */   MCD::OPC_CheckPredicate, 66, 24, 9, // Skip to: 15050
/* 12722 */   MCD::OPC_Decode, 136, 15, 191, 2, // Opcode: PRECR_SRA_R_PH_W
/* 12727 */   MCD::OPC_FilterValue, 18, 73, 1, // Skip to: 13060
/* 12731 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12734 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12752
/* 12738 */   MCD::OPC_CheckPredicate, 66, 4, 9, // Skip to: 15050
/* 12742 */   MCD::OPC_CheckField, 21, 5, 0, 254, 8, // Skip to: 15050
/* 12748 */   MCD::OPC_Decode, 105, 192, 2, // Opcode: ABSQ_S_QB
/* 12752 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12765
/* 12756 */   MCD::OPC_CheckPredicate, 32, 242, 8, // Skip to: 15050
/* 12760 */   MCD::OPC_Decode, 221, 15, 193, 2, // Opcode: REPL_QB
/* 12765 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12784
/* 12769 */   MCD::OPC_CheckPredicate, 32, 229, 8, // Skip to: 15050
/* 12773 */   MCD::OPC_CheckField, 21, 5, 0, 223, 8, // Skip to: 15050
/* 12779 */   MCD::OPC_Decode, 217, 15, 194, 2, // Opcode: REPLV_QB
/* 12784 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12803
/* 12788 */   MCD::OPC_CheckPredicate, 32, 210, 8, // Skip to: 15050
/* 12792 */   MCD::OPC_CheckField, 21, 5, 0, 204, 8, // Skip to: 15050
/* 12798 */   MCD::OPC_Decode, 232, 14, 192, 2, // Opcode: PRECEQU_PH_QBL
/* 12803 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12822
/* 12807 */   MCD::OPC_CheckPredicate, 32, 191, 8, // Skip to: 15050
/* 12811 */   MCD::OPC_CheckField, 21, 5, 0, 185, 8, // Skip to: 15050
/* 12817 */   MCD::OPC_Decode, 236, 14, 192, 2, // Opcode: PRECEQU_PH_QBR
/* 12822 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12841
/* 12826 */   MCD::OPC_CheckPredicate, 32, 172, 8, // Skip to: 15050
/* 12830 */   MCD::OPC_CheckField, 21, 5, 0, 166, 8, // Skip to: 15050
/* 12836 */   MCD::OPC_Decode, 233, 14, 192, 2, // Opcode: PRECEQU_PH_QBLA
/* 12841 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12860
/* 12845 */   MCD::OPC_CheckPredicate, 32, 153, 8, // Skip to: 15050
/* 12849 */   MCD::OPC_CheckField, 21, 5, 0, 147, 8, // Skip to: 15050
/* 12855 */   MCD::OPC_Decode, 237, 14, 192, 2, // Opcode: PRECEQU_PH_QBRA
/* 12860 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12878
/* 12864 */   MCD::OPC_CheckPredicate, 32, 134, 8, // Skip to: 15050
/* 12868 */   MCD::OPC_CheckField, 21, 5, 0, 128, 8, // Skip to: 15050
/* 12874 */   MCD::OPC_Decode, 103, 192, 2, // Opcode: ABSQ_S_PH
/* 12878 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12890
/* 12882 */   MCD::OPC_CheckPredicate, 32, 116, 8, // Skip to: 15050
/* 12886 */   MCD::OPC_Decode, 219, 15, 82, // Opcode: REPL_PH
/* 12890 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12909
/* 12894 */   MCD::OPC_CheckPredicate, 32, 104, 8, // Skip to: 15050
/* 12898 */   MCD::OPC_CheckField, 21, 5, 0, 98, 8, // Skip to: 15050
/* 12904 */   MCD::OPC_Decode, 215, 15, 194, 2, // Opcode: REPLV_PH
/* 12909 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12928
/* 12913 */   MCD::OPC_CheckPredicate, 32, 85, 8, // Skip to: 15050
/* 12917 */   MCD::OPC_CheckField, 21, 5, 0, 79, 8, // Skip to: 15050
/* 12923 */   MCD::OPC_Decode, 240, 14, 195, 2, // Opcode: PRECEQ_W_PHL
/* 12928 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12947
/* 12932 */   MCD::OPC_CheckPredicate, 32, 66, 8, // Skip to: 15050
/* 12936 */   MCD::OPC_CheckField, 21, 5, 0, 60, 8, // Skip to: 15050
/* 12942 */   MCD::OPC_Decode, 242, 14, 195, 2, // Opcode: PRECEQ_W_PHR
/* 12947 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12965
/* 12951 */   MCD::OPC_CheckPredicate, 32, 47, 8, // Skip to: 15050
/* 12955 */   MCD::OPC_CheckField, 21, 5, 0, 41, 8, // Skip to: 15050
/* 12961 */   MCD::OPC_Decode, 107, 196, 2, // Opcode: ABSQ_S_W
/* 12965 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12984
/* 12969 */   MCD::OPC_CheckPredicate, 32, 29, 8, // Skip to: 15050
/* 12973 */   MCD::OPC_CheckField, 21, 5, 0, 23, 8, // Skip to: 15050
/* 12979 */   MCD::OPC_Decode, 137, 3, 196, 2, // Opcode: BITREV
/* 12984 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 13003
/* 12988 */   MCD::OPC_CheckPredicate, 32, 10, 8, // Skip to: 15050
/* 12992 */   MCD::OPC_CheckField, 21, 5, 0, 4, 8, // Skip to: 15050
/* 12998 */   MCD::OPC_Decode, 244, 14, 192, 2, // Opcode: PRECEU_PH_QBL
/* 13003 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 13022
/* 13007 */   MCD::OPC_CheckPredicate, 32, 247, 7, // Skip to: 15050
/* 13011 */   MCD::OPC_CheckField, 21, 5, 0, 241, 7, // Skip to: 15050
/* 13017 */   MCD::OPC_Decode, 248, 14, 192, 2, // Opcode: PRECEU_PH_QBR
/* 13022 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 13041
/* 13026 */   MCD::OPC_CheckPredicate, 32, 228, 7, // Skip to: 15050
/* 13030 */   MCD::OPC_CheckField, 21, 5, 0, 222, 7, // Skip to: 15050
/* 13036 */   MCD::OPC_Decode, 245, 14, 192, 2, // Opcode: PRECEU_PH_QBLA
/* 13041 */   MCD::OPC_FilterValue, 31, 213, 7, // Skip to: 15050
/* 13045 */   MCD::OPC_CheckPredicate, 32, 209, 7, // Skip to: 15050
/* 13049 */   MCD::OPC_CheckField, 21, 5, 0, 203, 7, // Skip to: 15050
/* 13055 */   MCD::OPC_Decode, 249, 14, 192, 2, // Opcode: PRECEU_PH_QBRA
/* 13060 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 13351
/* 13064 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13067 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13080
/* 13071 */   MCD::OPC_CheckPredicate, 32, 183, 7, // Skip to: 15050
/* 13075 */   MCD::OPC_Decode, 233, 16, 197, 2, // Opcode: SHLL_QB
/* 13080 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13093
/* 13084 */   MCD::OPC_CheckPredicate, 32, 170, 7, // Skip to: 15050
/* 13088 */   MCD::OPC_Decode, 137, 17, 197, 2, // Opcode: SHRL_QB
/* 13093 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 13106
/* 13097 */   MCD::OPC_CheckPredicate, 32, 157, 7, // Skip to: 15050
/* 13101 */   MCD::OPC_Decode, 225, 16, 198, 2, // Opcode: SHLLV_QB
/* 13106 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13119
/* 13110 */   MCD::OPC_CheckPredicate, 32, 144, 7, // Skip to: 15050
/* 13114 */   MCD::OPC_Decode, 133, 17, 198, 2, // Opcode: SHRLV_QB
/* 13119 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 13132
/* 13123 */   MCD::OPC_CheckPredicate, 66, 131, 7, // Skip to: 15050
/* 13127 */   MCD::OPC_Decode, 251, 16, 197, 2, // Opcode: SHRA_QB
/* 13132 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 13145
/* 13136 */   MCD::OPC_CheckPredicate, 66, 118, 7, // Skip to: 15050
/* 13140 */   MCD::OPC_Decode, 255, 16, 197, 2, // Opcode: SHRA_R_QB
/* 13145 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 13158
/* 13149 */   MCD::OPC_CheckPredicate, 66, 105, 7, // Skip to: 15050
/* 13153 */   MCD::OPC_Decode, 241, 16, 198, 2, // Opcode: SHRAV_QB
/* 13158 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 13171
/* 13162 */   MCD::OPC_CheckPredicate, 66, 92, 7, // Skip to: 15050
/* 13166 */   MCD::OPC_Decode, 245, 16, 198, 2, // Opcode: SHRAV_R_QB
/* 13171 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 13184
/* 13175 */   MCD::OPC_CheckPredicate, 32, 79, 7, // Skip to: 15050
/* 13179 */   MCD::OPC_Decode, 231, 16, 197, 2, // Opcode: SHLL_PH
/* 13184 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13197
/* 13188 */   MCD::OPC_CheckPredicate, 32, 66, 7, // Skip to: 15050
/* 13192 */   MCD::OPC_Decode, 249, 16, 197, 2, // Opcode: SHRA_PH
/* 13197 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 13210
/* 13201 */   MCD::OPC_CheckPredicate, 32, 53, 7, // Skip to: 15050
/* 13205 */   MCD::OPC_Decode, 223, 16, 198, 2, // Opcode: SHLLV_PH
/* 13210 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13223
/* 13214 */   MCD::OPC_CheckPredicate, 32, 40, 7, // Skip to: 15050
/* 13218 */   MCD::OPC_Decode, 239, 16, 198, 2, // Opcode: SHRAV_PH
/* 13223 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13236
/* 13227 */   MCD::OPC_CheckPredicate, 32, 27, 7, // Skip to: 15050
/* 13231 */   MCD::OPC_Decode, 235, 16, 197, 2, // Opcode: SHLL_S_PH
/* 13236 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 13249
/* 13240 */   MCD::OPC_CheckPredicate, 32, 14, 7, // Skip to: 15050
/* 13244 */   MCD::OPC_Decode, 253, 16, 197, 2, // Opcode: SHRA_R_PH
/* 13249 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13262
/* 13253 */   MCD::OPC_CheckPredicate, 32, 1, 7, // Skip to: 15050
/* 13257 */   MCD::OPC_Decode, 227, 16, 198, 2, // Opcode: SHLLV_S_PH
/* 13262 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 13275
/* 13266 */   MCD::OPC_CheckPredicate, 32, 244, 6, // Skip to: 15050
/* 13270 */   MCD::OPC_Decode, 243, 16, 198, 2, // Opcode: SHRAV_R_PH
/* 13275 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 13288
/* 13279 */   MCD::OPC_CheckPredicate, 32, 231, 6, // Skip to: 15050
/* 13283 */   MCD::OPC_Decode, 237, 16, 199, 2, // Opcode: SHLL_S_W
/* 13288 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 13301
/* 13292 */   MCD::OPC_CheckPredicate, 32, 218, 6, // Skip to: 15050
/* 13296 */   MCD::OPC_Decode, 129, 17, 199, 2, // Opcode: SHRA_R_W
/* 13301 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13313
/* 13305 */   MCD::OPC_CheckPredicate, 32, 205, 6, // Skip to: 15050
/* 13309 */   MCD::OPC_Decode, 229, 16, 43, // Opcode: SHLLV_S_W
/* 13313 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 13325
/* 13317 */   MCD::OPC_CheckPredicate, 32, 193, 6, // Skip to: 15050
/* 13321 */   MCD::OPC_Decode, 247, 16, 43, // Opcode: SHRAV_R_W
/* 13325 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 13338
/* 13329 */   MCD::OPC_CheckPredicate, 66, 181, 6, // Skip to: 15050
/* 13333 */   MCD::OPC_Decode, 135, 17, 197, 2, // Opcode: SHRL_PH
/* 13338 */   MCD::OPC_FilterValue, 27, 172, 6, // Skip to: 15050
/* 13342 */   MCD::OPC_CheckPredicate, 66, 168, 6, // Skip to: 15050
/* 13346 */   MCD::OPC_Decode, 131, 17, 198, 2, // Opcode: SHRLV_PH
/* 13351 */   MCD::OPC_FilterValue, 24, 201, 0, // Skip to: 13556
/* 13355 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13358 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13371
/* 13362 */   MCD::OPC_CheckPredicate, 66, 148, 6, // Skip to: 15050
/* 13366 */   MCD::OPC_Decode, 150, 1, 187, 2, // Opcode: ADDUH_QB
/* 13371 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13384
/* 13375 */   MCD::OPC_CheckPredicate, 66, 135, 6, // Skip to: 15050
/* 13379 */   MCD::OPC_Decode, 156, 18, 187, 2, // Opcode: SUBUH_QB
/* 13384 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 13397
/* 13388 */   MCD::OPC_CheckPredicate, 66, 122, 6, // Skip to: 15050
/* 13392 */   MCD::OPC_Decode, 152, 1, 187, 2, // Opcode: ADDUH_R_QB
/* 13397 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13410
/* 13401 */   MCD::OPC_CheckPredicate, 66, 109, 6, // Skip to: 15050
/* 13405 */   MCD::OPC_Decode, 158, 18, 187, 2, // Opcode: SUBUH_R_QB
/* 13410 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 13422
/* 13414 */   MCD::OPC_CheckPredicate, 66, 96, 6, // Skip to: 15050
/* 13418 */   MCD::OPC_Decode, 120, 187, 2, // Opcode: ADDQH_PH
/* 13422 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13435
/* 13426 */   MCD::OPC_CheckPredicate, 66, 84, 6, // Skip to: 15050
/* 13430 */   MCD::OPC_Decode, 252, 17, 187, 2, // Opcode: SUBQH_PH
/* 13435 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 13447
/* 13439 */   MCD::OPC_CheckPredicate, 66, 71, 6, // Skip to: 15050
/* 13443 */   MCD::OPC_Decode, 122, 187, 2, // Opcode: ADDQH_R_PH
/* 13447 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13460
/* 13451 */   MCD::OPC_CheckPredicate, 66, 59, 6, // Skip to: 15050
/* 13455 */   MCD::OPC_Decode, 254, 17, 187, 2, // Opcode: SUBQH_R_PH
/* 13460 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13473
/* 13464 */   MCD::OPC_CheckPredicate, 66, 46, 6, // Skip to: 15050
/* 13468 */   MCD::OPC_Decode, 145, 14, 187, 2, // Opcode: MUL_PH
/* 13473 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13486
/* 13477 */   MCD::OPC_CheckPredicate, 66, 33, 6, // Skip to: 15050
/* 13481 */   MCD::OPC_Decode, 150, 14, 187, 2, // Opcode: MUL_S_PH
/* 13486 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 13497
/* 13490 */   MCD::OPC_CheckPredicate, 66, 20, 6, // Skip to: 15050
/* 13494 */   MCD::OPC_Decode, 126, 49, // Opcode: ADDQH_W
/* 13497 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 13509
/* 13501 */   MCD::OPC_CheckPredicate, 66, 9, 6, // Skip to: 15050
/* 13505 */   MCD::OPC_Decode, 130, 18, 49, // Opcode: SUBQH_W
/* 13509 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 13520
/* 13513 */   MCD::OPC_CheckPredicate, 66, 253, 5, // Skip to: 15050
/* 13517 */   MCD::OPC_Decode, 124, 49, // Opcode: ADDQH_R_W
/* 13520 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 13532
/* 13524 */   MCD::OPC_CheckPredicate, 66, 242, 5, // Skip to: 15050
/* 13528 */   MCD::OPC_Decode, 128, 18, 49, // Opcode: SUBQH_R_W
/* 13532 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13544
/* 13536 */   MCD::OPC_CheckPredicate, 66, 230, 5, // Skip to: 15050
/* 13540 */   MCD::OPC_Decode, 249, 13, 49, // Opcode: MULQ_S_W
/* 13544 */   MCD::OPC_FilterValue, 23, 222, 5, // Skip to: 15050
/* 13548 */   MCD::OPC_CheckPredicate, 66, 218, 5, // Skip to: 15050
/* 13552 */   MCD::OPC_Decode, 245, 13, 49, // Opcode: MULQ_RS_W
/* 13556 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13575
/* 13560 */   MCD::OPC_CheckPredicate, 67, 206, 5, // Skip to: 15050
/* 13564 */   MCD::OPC_CheckField, 6, 1, 0, 200, 5, // Skip to: 15050
/* 13570 */   MCD::OPC_Decode, 193, 11, 200, 2, // Opcode: LWLE
/* 13575 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13594
/* 13579 */   MCD::OPC_CheckPredicate, 67, 187, 5, // Skip to: 15050
/* 13583 */   MCD::OPC_CheckField, 6, 1, 0, 181, 5, // Skip to: 15050
/* 13589 */   MCD::OPC_Decode, 206, 11, 200, 2, // Opcode: LWRE
/* 13594 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13613
/* 13598 */   MCD::OPC_CheckPredicate, 68, 168, 5, // Skip to: 15050
/* 13602 */   MCD::OPC_CheckField, 6, 1, 0, 162, 5, // Skip to: 15050
/* 13608 */   MCD::OPC_Decode, 153, 4, 201, 2, // Opcode: CACHEE
/* 13613 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 13632
/* 13617 */   MCD::OPC_CheckPredicate, 68, 149, 5, // Skip to: 15050
/* 13621 */   MCD::OPC_CheckField, 6, 1, 0, 143, 5, // Skip to: 15050
/* 13627 */   MCD::OPC_Decode, 138, 16, 200, 2, // Opcode: SBE
/* 13632 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 13651
/* 13636 */   MCD::OPC_CheckPredicate, 68, 130, 5, // Skip to: 15050
/* 13640 */   MCD::OPC_CheckField, 6, 1, 0, 124, 5, // Skip to: 15050
/* 13646 */   MCD::OPC_Decode, 213, 16, 200, 2, // Opcode: SHE
/* 13651 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 13670
/* 13655 */   MCD::OPC_CheckPredicate, 39, 111, 5, // Skip to: 15050
/* 13659 */   MCD::OPC_CheckField, 6, 1, 0, 105, 5, // Skip to: 15050
/* 13665 */   MCD::OPC_Decode, 148, 16, 200, 2, // Opcode: SCE
/* 13670 */   MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 13689
/* 13674 */   MCD::OPC_CheckPredicate, 39, 92, 5, // Skip to: 15050
/* 13678 */   MCD::OPC_CheckField, 6, 1, 0, 86, 5, // Skip to: 15050
/* 13684 */   MCD::OPC_Decode, 194, 18, 200, 2, // Opcode: SWE
/* 13689 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 13753
/* 13693 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13696 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13715
/* 13700 */   MCD::OPC_CheckPredicate, 25, 66, 5, // Skip to: 15050
/* 13704 */   MCD::OPC_CheckField, 21, 5, 0, 60, 5, // Skip to: 15050
/* 13710 */   MCD::OPC_Decode, 220, 19, 196, 2, // Opcode: WSBH
/* 13715 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13734
/* 13719 */   MCD::OPC_CheckPredicate, 23, 47, 5, // Skip to: 15050
/* 13723 */   MCD::OPC_CheckField, 21, 5, 0, 41, 5, // Skip to: 15050
/* 13729 */   MCD::OPC_Decode, 179, 16, 196, 2, // Opcode: SEB
/* 13734 */   MCD::OPC_FilterValue, 24, 32, 5, // Skip to: 15050
/* 13738 */   MCD::OPC_CheckPredicate, 23, 28, 5, // Skip to: 15050
/* 13742 */   MCD::OPC_CheckField, 21, 5, 0, 22, 5, // Skip to: 15050
/* 13748 */   MCD::OPC_Decode, 183, 16, 196, 2, // Opcode: SEH
/* 13753 */   MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 13772
/* 13757 */   MCD::OPC_CheckPredicate, 67, 9, 5, // Skip to: 15050
/* 13761 */   MCD::OPC_CheckField, 6, 1, 0, 3, 5, // Skip to: 15050
/* 13767 */   MCD::OPC_Decode, 199, 18, 200, 2, // Opcode: SWLE
/* 13772 */   MCD::OPC_FilterValue, 34, 15, 0, // Skip to: 13791
/* 13776 */   MCD::OPC_CheckPredicate, 67, 246, 4, // Skip to: 15050
/* 13780 */   MCD::OPC_CheckField, 6, 1, 0, 240, 4, // Skip to: 15050
/* 13786 */   MCD::OPC_Decode, 210, 18, 200, 2, // Opcode: SWRE
/* 13791 */   MCD::OPC_FilterValue, 35, 15, 0, // Skip to: 13810
/* 13795 */   MCD::OPC_CheckPredicate, 68, 227, 4, // Skip to: 15050
/* 13799 */   MCD::OPC_CheckField, 6, 1, 0, 221, 4, // Skip to: 15050
/* 13805 */   MCD::OPC_Decode, 139, 15, 201, 2, // Opcode: PREFE
/* 13810 */   MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 13829
/* 13814 */   MCD::OPC_CheckPredicate, 68, 208, 4, // Skip to: 15050
/* 13818 */   MCD::OPC_CheckField, 6, 1, 0, 202, 4, // Skip to: 15050
/* 13824 */   MCD::OPC_Decode, 231, 10, 200, 2, // Opcode: LBuE
/* 13829 */   MCD::OPC_FilterValue, 41, 15, 0, // Skip to: 13848
/* 13833 */   MCD::OPC_CheckPredicate, 68, 189, 4, // Skip to: 15050
/* 13837 */   MCD::OPC_CheckField, 6, 1, 0, 183, 4, // Skip to: 15050
/* 13843 */   MCD::OPC_Decode, 145, 11, 200, 2, // Opcode: LHuE
/* 13848 */   MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 13867
/* 13852 */   MCD::OPC_CheckPredicate, 68, 170, 4, // Skip to: 15050
/* 13856 */   MCD::OPC_CheckField, 6, 1, 0, 164, 4, // Skip to: 15050
/* 13862 */   MCD::OPC_Decode, 219, 10, 200, 2, // Opcode: LBE
/* 13867 */   MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 13886
/* 13871 */   MCD::OPC_CheckPredicate, 68, 151, 4, // Skip to: 15050
/* 13875 */   MCD::OPC_CheckField, 6, 1, 0, 145, 4, // Skip to: 15050
/* 13881 */   MCD::OPC_Decode, 137, 11, 200, 2, // Opcode: LHE
/* 13886 */   MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 13905
/* 13890 */   MCD::OPC_CheckPredicate, 39, 132, 4, // Skip to: 15050
/* 13894 */   MCD::OPC_CheckField, 6, 1, 0, 126, 4, // Skip to: 15050
/* 13900 */   MCD::OPC_Decode, 156, 11, 200, 2, // Opcode: LLE
/* 13905 */   MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 13924
/* 13909 */   MCD::OPC_CheckPredicate, 39, 113, 4, // Skip to: 15050
/* 13913 */   MCD::OPC_CheckField, 6, 1, 0, 107, 4, // Skip to: 15050
/* 13919 */   MCD::OPC_Decode, 187, 11, 200, 2, // Opcode: LWE
/* 13924 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 14349
/* 13928 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13931 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13950
/* 13935 */   MCD::OPC_CheckPredicate, 66, 87, 4, // Skip to: 15050
/* 13939 */   MCD::OPC_CheckField, 13, 3, 0, 81, 4, // Skip to: 15050
/* 13945 */   MCD::OPC_Decode, 201, 7, 235, 1, // Opcode: DPA_W_PH
/* 13950 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13969
/* 13954 */   MCD::OPC_CheckPredicate, 66, 68, 4, // Skip to: 15050
/* 13958 */   MCD::OPC_CheckField, 13, 3, 0, 62, 4, // Skip to: 15050
/* 13964 */   MCD::OPC_Decode, 224, 7, 235, 1, // Opcode: DPS_W_PH
/* 13969 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13988
/* 13973 */   MCD::OPC_CheckPredicate, 66, 49, 4, // Skip to: 15050
/* 13977 */   MCD::OPC_CheckField, 13, 3, 0, 43, 4, // Skip to: 15050
/* 13983 */   MCD::OPC_Decode, 255, 13, 235, 1, // Opcode: MULSA_W_PH
/* 13988 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 14007
/* 13992 */   MCD::OPC_CheckPredicate, 32, 30, 4, // Skip to: 15050
/* 13996 */   MCD::OPC_CheckField, 13, 3, 0, 24, 4, // Skip to: 15050
/* 14002 */   MCD::OPC_Decode, 195, 7, 235, 1, // Opcode: DPAU_H_QBL
/* 14007 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 14026
/* 14011 */   MCD::OPC_CheckPredicate, 32, 11, 4, // Skip to: 15050
/* 14015 */   MCD::OPC_CheckField, 13, 3, 0, 5, 4, // Skip to: 15050
/* 14021 */   MCD::OPC_Decode, 193, 7, 235, 1, // Opcode: DPAQ_S_W_PH
/* 14026 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 14045
/* 14030 */   MCD::OPC_CheckPredicate, 32, 248, 3, // Skip to: 15050
/* 14034 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 15050
/* 14040 */   MCD::OPC_Decode, 210, 7, 235, 1, // Opcode: DPSQ_S_W_PH
/* 14045 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 14064
/* 14049 */   MCD::OPC_CheckPredicate, 32, 229, 3, // Skip to: 15050
/* 14053 */   MCD::OPC_CheckField, 13, 3, 0, 223, 3, // Skip to: 15050
/* 14059 */   MCD::OPC_Decode, 253, 13, 235, 1, // Opcode: MULSAQ_S_W_PH
/* 14064 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 14083
/* 14068 */   MCD::OPC_CheckPredicate, 32, 210, 3, // Skip to: 15050
/* 14072 */   MCD::OPC_CheckField, 13, 3, 0, 204, 3, // Skip to: 15050
/* 14078 */   MCD::OPC_Decode, 197, 7, 235, 1, // Opcode: DPAU_H_QBR
/* 14083 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 14102
/* 14087 */   MCD::OPC_CheckPredicate, 66, 191, 3, // Skip to: 15050
/* 14091 */   MCD::OPC_CheckField, 13, 3, 0, 185, 3, // Skip to: 15050
/* 14097 */   MCD::OPC_Decode, 199, 7, 235, 1, // Opcode: DPAX_W_PH
/* 14102 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 14121
/* 14106 */   MCD::OPC_CheckPredicate, 66, 172, 3, // Skip to: 15050
/* 14110 */   MCD::OPC_CheckField, 13, 3, 0, 166, 3, // Skip to: 15050
/* 14116 */   MCD::OPC_Decode, 222, 7, 235, 1, // Opcode: DPSX_W_PH
/* 14121 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14140
/* 14125 */   MCD::OPC_CheckPredicate, 32, 153, 3, // Skip to: 15050
/* 14129 */   MCD::OPC_CheckField, 13, 3, 0, 147, 3, // Skip to: 15050
/* 14135 */   MCD::OPC_Decode, 218, 7, 235, 1, // Opcode: DPSU_H_QBL
/* 14140 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 14159
/* 14144 */   MCD::OPC_CheckPredicate, 32, 134, 3, // Skip to: 15050
/* 14148 */   MCD::OPC_CheckField, 13, 3, 0, 128, 3, // Skip to: 15050
/* 14154 */   MCD::OPC_Decode, 191, 7, 235, 1, // Opcode: DPAQ_SA_L_W
/* 14159 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 14178
/* 14163 */   MCD::OPC_CheckPredicate, 32, 115, 3, // Skip to: 15050
/* 14167 */   MCD::OPC_CheckField, 13, 3, 0, 109, 3, // Skip to: 15050
/* 14173 */   MCD::OPC_Decode, 208, 7, 235, 1, // Opcode: DPSQ_SA_L_W
/* 14178 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14197
/* 14182 */   MCD::OPC_CheckPredicate, 32, 96, 3, // Skip to: 15050
/* 14186 */   MCD::OPC_CheckField, 13, 3, 0, 90, 3, // Skip to: 15050
/* 14192 */   MCD::OPC_Decode, 220, 7, 235, 1, // Opcode: DPSU_H_QBR
/* 14197 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 14216
/* 14201 */   MCD::OPC_CheckPredicate, 32, 77, 3, // Skip to: 15050
/* 14205 */   MCD::OPC_CheckField, 13, 3, 0, 71, 3, // Skip to: 15050
/* 14211 */   MCD::OPC_Decode, 142, 12, 235, 1, // Opcode: MAQ_SA_W_PHL
/* 14216 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 14235
/* 14220 */   MCD::OPC_CheckPredicate, 32, 58, 3, // Skip to: 15050
/* 14224 */   MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 15050
/* 14230 */   MCD::OPC_Decode, 144, 12, 235, 1, // Opcode: MAQ_SA_W_PHR
/* 14235 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 14254
/* 14239 */   MCD::OPC_CheckPredicate, 32, 39, 3, // Skip to: 15050
/* 14243 */   MCD::OPC_CheckField, 13, 3, 0, 33, 3, // Skip to: 15050
/* 14249 */   MCD::OPC_Decode, 146, 12, 235, 1, // Opcode: MAQ_S_W_PHL
/* 14254 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 14273
/* 14258 */   MCD::OPC_CheckPredicate, 32, 20, 3, // Skip to: 15050
/* 14262 */   MCD::OPC_CheckField, 13, 3, 0, 14, 3, // Skip to: 15050
/* 14268 */   MCD::OPC_Decode, 148, 12, 235, 1, // Opcode: MAQ_S_W_PHR
/* 14273 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 14292
/* 14277 */   MCD::OPC_CheckPredicate, 66, 1, 3, // Skip to: 15050
/* 14281 */   MCD::OPC_CheckField, 13, 3, 0, 251, 2, // Skip to: 15050
/* 14287 */   MCD::OPC_Decode, 189, 7, 235, 1, // Opcode: DPAQX_S_W_PH
/* 14292 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 14311
/* 14296 */   MCD::OPC_CheckPredicate, 66, 238, 2, // Skip to: 15050
/* 14300 */   MCD::OPC_CheckField, 13, 3, 0, 232, 2, // Skip to: 15050
/* 14306 */   MCD::OPC_Decode, 206, 7, 235, 1, // Opcode: DPSQX_S_W_PH
/* 14311 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14330
/* 14315 */   MCD::OPC_CheckPredicate, 66, 219, 2, // Skip to: 15050
/* 14319 */   MCD::OPC_CheckField, 13, 3, 0, 213, 2, // Skip to: 15050
/* 14325 */   MCD::OPC_Decode, 187, 7, 235, 1, // Opcode: DPAQX_SA_W_PH
/* 14330 */   MCD::OPC_FilterValue, 27, 204, 2, // Skip to: 15050
/* 14334 */   MCD::OPC_CheckPredicate, 66, 200, 2, // Skip to: 15050
/* 14338 */   MCD::OPC_CheckField, 13, 3, 0, 194, 2, // Skip to: 15050
/* 14344 */   MCD::OPC_Decode, 204, 7, 235, 1, // Opcode: DPSQX_SA_W_PH
/* 14349 */   MCD::OPC_FilterValue, 49, 42, 0, // Skip to: 14395
/* 14353 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14356 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 14369
/* 14360 */   MCD::OPC_CheckPredicate, 66, 174, 2, // Skip to: 15050
/* 14364 */   MCD::OPC_Decode, 208, 1, 202, 2, // Opcode: APPEND
/* 14369 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 14382
/* 14373 */   MCD::OPC_CheckPredicate, 66, 161, 2, // Skip to: 15050
/* 14377 */   MCD::OPC_Decode, 146, 15, 202, 2, // Opcode: PREPEND
/* 14382 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 15050
/* 14386 */   MCD::OPC_CheckPredicate, 66, 148, 2, // Skip to: 15050
/* 14390 */   MCD::OPC_Decode, 157, 2, 202, 2, // Opcode: BALIGN
/* 14395 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 14713
/* 14399 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14402 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 14421
/* 14406 */   MCD::OPC_CheckPredicate, 32, 128, 2, // Skip to: 15050
/* 14410 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 15050
/* 14416 */   MCD::OPC_Decode, 185, 8, 203, 2, // Opcode: EXTR_W
/* 14421 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 14440
/* 14425 */   MCD::OPC_CheckPredicate, 32, 109, 2, // Skip to: 15050
/* 14429 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 15050
/* 14435 */   MCD::OPC_Decode, 177, 8, 204, 2, // Opcode: EXTRV_W
/* 14440 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 14459
/* 14444 */   MCD::OPC_CheckPredicate, 32, 90, 2, // Skip to: 15050
/* 14448 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 15050
/* 14454 */   MCD::OPC_Decode, 163, 8, 203, 2, // Opcode: EXTP
/* 14459 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 14478
/* 14463 */   MCD::OPC_CheckPredicate, 32, 71, 2, // Skip to: 15050
/* 14467 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 15050
/* 14473 */   MCD::OPC_Decode, 168, 8, 204, 2, // Opcode: EXTPV
/* 14478 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 14497
/* 14482 */   MCD::OPC_CheckPredicate, 32, 52, 2, // Skip to: 15050
/* 14486 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 15050
/* 14492 */   MCD::OPC_Decode, 181, 8, 203, 2, // Opcode: EXTR_R_W
/* 14497 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 14516
/* 14501 */   MCD::OPC_CheckPredicate, 32, 33, 2, // Skip to: 15050
/* 14505 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 15050
/* 14511 */   MCD::OPC_Decode, 173, 8, 204, 2, // Opcode: EXTRV_R_W
/* 14516 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 14535
/* 14520 */   MCD::OPC_CheckPredicate, 32, 14, 2, // Skip to: 15050
/* 14524 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 15050
/* 14530 */   MCD::OPC_Decode, 179, 8, 203, 2, // Opcode: EXTR_RS_W
/* 14535 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 14554
/* 14539 */   MCD::OPC_CheckPredicate, 32, 251, 1, // Skip to: 15050
/* 14543 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 15050
/* 14549 */   MCD::OPC_Decode, 171, 8, 204, 2, // Opcode: EXTRV_RS_W
/* 14554 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 14573
/* 14558 */   MCD::OPC_CheckPredicate, 32, 232, 1, // Skip to: 15050
/* 14562 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 15050
/* 14568 */   MCD::OPC_Decode, 164, 8, 203, 2, // Opcode: EXTPDP
/* 14573 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14592
/* 14577 */   MCD::OPC_CheckPredicate, 32, 213, 1, // Skip to: 15050
/* 14581 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 15050
/* 14587 */   MCD::OPC_Decode, 165, 8, 204, 2, // Opcode: EXTPDPV
/* 14592 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 14611
/* 14596 */   MCD::OPC_CheckPredicate, 32, 194, 1, // Skip to: 15050
/* 14600 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 15050
/* 14606 */   MCD::OPC_Decode, 183, 8, 203, 2, // Opcode: EXTR_S_H
/* 14611 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14630
/* 14615 */   MCD::OPC_CheckPredicate, 32, 175, 1, // Skip to: 15050
/* 14619 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 15050
/* 14625 */   MCD::OPC_Decode, 175, 8, 204, 2, // Opcode: EXTRV_S_H
/* 14630 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 14643
/* 14634 */   MCD::OPC_CheckPredicate, 32, 156, 1, // Skip to: 15050
/* 14638 */   MCD::OPC_Decode, 204, 15, 205, 2, // Opcode: RDDSP
/* 14643 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 14656
/* 14647 */   MCD::OPC_CheckPredicate, 36, 143, 1, // Skip to: 15050
/* 14651 */   MCD::OPC_Decode, 217, 19, 206, 2, // Opcode: WRDSP
/* 14656 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14675
/* 14660 */   MCD::OPC_CheckPredicate, 32, 130, 1, // Skip to: 15050
/* 14664 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 15050
/* 14670 */   MCD::OPC_Decode, 219, 16, 207, 2, // Opcode: SHILO
/* 14675 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 14694
/* 14679 */   MCD::OPC_CheckPredicate, 32, 111, 1, // Skip to: 15050
/* 14683 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 15050
/* 14689 */   MCD::OPC_Decode, 220, 16, 208, 2, // Opcode: SHILOV
/* 14694 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 15050
/* 14698 */   MCD::OPC_CheckPredicate, 32, 92, 1, // Skip to: 15050
/* 14702 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 15050
/* 14708 */   MCD::OPC_Decode, 214, 13, 208, 2, // Opcode: MTHLIP
/* 14713 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 15050
/* 14717 */   MCD::OPC_CheckPredicate, 1, 73, 1, // Skip to: 15050
/* 14721 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 15050
/* 14727 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 15050
/* 14733 */   MCD::OPC_Decode, 206, 15, 209, 2, // Opcode: RDHWR
/* 14738 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 14751
/* 14742 */   MCD::OPC_CheckPredicate, 22, 48, 1, // Skip to: 15050
/* 14746 */   MCD::OPC_Decode, 217, 10, 210, 2, // Opcode: LB
/* 14751 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 14764
/* 14755 */   MCD::OPC_CheckPredicate, 1, 35, 1, // Skip to: 15050
/* 14759 */   MCD::OPC_Decode, 135, 11, 210, 2, // Opcode: LH
/* 14764 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 14777
/* 14768 */   MCD::OPC_CheckPredicate, 31, 22, 1, // Skip to: 15050
/* 14772 */   MCD::OPC_Decode, 191, 11, 210, 2, // Opcode: LWL
/* 14777 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 14790
/* 14781 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 15050
/* 14785 */   MCD::OPC_Decode, 178, 11, 210, 2, // Opcode: LW
/* 14790 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 14803
/* 14794 */   MCD::OPC_CheckPredicate, 22, 252, 0, // Skip to: 15050
/* 14798 */   MCD::OPC_Decode, 229, 10, 210, 2, // Opcode: LBu
/* 14803 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 14816
/* 14807 */   MCD::OPC_CheckPredicate, 1, 239, 0, // Skip to: 15050
/* 14811 */   MCD::OPC_Decode, 143, 11, 210, 2, // Opcode: LHu
/* 14816 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 14829
/* 14820 */   MCD::OPC_CheckPredicate, 31, 226, 0, // Skip to: 15050
/* 14824 */   MCD::OPC_Decode, 204, 11, 210, 2, // Opcode: LWR
/* 14829 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 14842
/* 14833 */   MCD::OPC_CheckPredicate, 22, 213, 0, // Skip to: 15050
/* 14837 */   MCD::OPC_Decode, 134, 16, 210, 2, // Opcode: SB
/* 14842 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 14855
/* 14846 */   MCD::OPC_CheckPredicate, 22, 200, 0, // Skip to: 15050
/* 14850 */   MCD::OPC_Decode, 209, 16, 210, 2, // Opcode: SH
/* 14855 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 14868
/* 14859 */   MCD::OPC_CheckPredicate, 31, 187, 0, // Skip to: 15050
/* 14863 */   MCD::OPC_Decode, 197, 18, 210, 2, // Opcode: SWL
/* 14868 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 14881
/* 14872 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 15050
/* 14876 */   MCD::OPC_Decode, 184, 18, 210, 2, // Opcode: SW
/* 14881 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 14894
/* 14885 */   MCD::OPC_CheckPredicate, 31, 161, 0, // Skip to: 15050
/* 14889 */   MCD::OPC_Decode, 208, 18, 210, 2, // Opcode: SWR
/* 14894 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 14907
/* 14898 */   MCD::OPC_CheckPredicate, 69, 148, 0, // Skip to: 15050
/* 14902 */   MCD::OPC_Decode, 152, 4, 211, 2, // Opcode: CACHE
/* 14907 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 14920
/* 14911 */   MCD::OPC_CheckPredicate, 70, 135, 0, // Skip to: 15050
/* 14915 */   MCD::OPC_Decode, 150, 11, 210, 2, // Opcode: LL
/* 14920 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 14933
/* 14924 */   MCD::OPC_CheckPredicate, 45, 122, 0, // Skip to: 15050
/* 14928 */   MCD::OPC_Decode, 181, 11, 212, 2, // Opcode: LWC1
/* 14933 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 14946
/* 14937 */   MCD::OPC_CheckPredicate, 34, 109, 0, // Skip to: 15050
/* 14941 */   MCD::OPC_Decode, 183, 11, 213, 2, // Opcode: LWC2
/* 14946 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 14959
/* 14950 */   MCD::OPC_CheckPredicate, 69, 96, 0, // Skip to: 15050
/* 14954 */   MCD::OPC_Decode, 138, 15, 211, 2, // Opcode: PREF
/* 14959 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 14972
/* 14963 */   MCD::OPC_CheckPredicate, 71, 83, 0, // Skip to: 15050
/* 14967 */   MCD::OPC_Decode, 235, 10, 212, 2, // Opcode: LDC1
/* 14972 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 14985
/* 14976 */   MCD::OPC_CheckPredicate, 72, 70, 0, // Skip to: 15050
/* 14980 */   MCD::OPC_Decode, 239, 10, 213, 2, // Opcode: LDC2
/* 14985 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 14998
/* 14989 */   MCD::OPC_CheckPredicate, 70, 57, 0, // Skip to: 15050
/* 14993 */   MCD::OPC_Decode, 143, 16, 210, 2, // Opcode: SC
/* 14998 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 15011
/* 15002 */   MCD::OPC_CheckPredicate, 45, 44, 0, // Skip to: 15050
/* 15006 */   MCD::OPC_Decode, 188, 18, 212, 2, // Opcode: SWC1
/* 15011 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 15024
/* 15015 */   MCD::OPC_CheckPredicate, 34, 31, 0, // Skip to: 15050
/* 15019 */   MCD::OPC_Decode, 190, 18, 213, 2, // Opcode: SWC2
/* 15024 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 15037
/* 15028 */   MCD::OPC_CheckPredicate, 71, 18, 0, // Skip to: 15050
/* 15032 */   MCD::OPC_Decode, 160, 16, 212, 2, // Opcode: SDC1
/* 15037 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 15050
/* 15041 */   MCD::OPC_CheckPredicate, 72, 5, 0, // Skip to: 15050
/* 15045 */   MCD::OPC_Decode, 164, 16, 213, 2, // Opcode: SDC2
/* 15050 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32_64_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 73, 36, 0, // Skip to: 47
/* 11 */      MCD::OPC_CheckField, 0, 21, 8, 30, 0, // Skip to: 47
/* 17 */      MCD::OPC_Decode, 200, 10, 13, // Opcode: JR64
/* 21 */      MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 34
/* 25 */      MCD::OPC_CheckPredicate, 74, 18, 0, // Skip to: 47
/* 29 */      MCD::OPC_Decode, 151, 11, 210, 2, // Opcode: LL64
/* 34 */      MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 74, 5, 0, // Skip to: 47
/* 42 */      MCD::OPC_Decode, 144, 16, 210, 2, // Opcode: SC64
/* 47 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 197, 1, // Skip to: 460
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 75, 142, 7, // Skip to: 1952
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 136, 7, // Skip to: 1952
/* 24 */      MCD::OPC_Decode, 170, 11, 178, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 48
/* 33 */      MCD::OPC_CheckPredicate, 75, 123, 7, // Skip to: 1952
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 117, 7, // Skip to: 1952
/* 43 */      MCD::OPC_Decode, 206, 10, 179, 1, // Opcode: JR_HB_R6
/* 48 */      MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 61
/* 52 */      MCD::OPC_CheckPredicate, 76, 104, 7, // Skip to: 1952
/* 56 */      MCD::OPC_Decode, 159, 16, 181, 1, // Opcode: SDBBP_R6
/* 61 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 85
/* 65 */      MCD::OPC_CheckPredicate, 75, 91, 7, // Skip to: 1952
/* 69 */      MCD::OPC_CheckField, 16, 5, 0, 85, 7, // Skip to: 1952
/* 75 */      MCD::OPC_CheckField, 6, 5, 1, 79, 7, // Skip to: 1952
/* 81 */      MCD::OPC_Decode, 229, 4, 14, // Opcode: CLZ_R6
/* 85 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 109
/* 89 */      MCD::OPC_CheckPredicate, 75, 67, 7, // Skip to: 1952
/* 93 */      MCD::OPC_CheckField, 16, 5, 0, 61, 7, // Skip to: 1952
/* 99 */      MCD::OPC_CheckField, 6, 5, 1, 55, 7, // Skip to: 1952
/* 105 */     MCD::OPC_Decode, 209, 4, 14, // Opcode: CLO_R6
/* 109 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 133
/* 113 */     MCD::OPC_CheckPredicate, 77, 43, 7, // Skip to: 1952
/* 117 */     MCD::OPC_CheckField, 16, 5, 0, 37, 7, // Skip to: 1952
/* 123 */     MCD::OPC_CheckField, 6, 5, 1, 31, 7, // Skip to: 1952
/* 129 */     MCD::OPC_Decode, 230, 6, 15, // Opcode: DCLZ_R6
/* 133 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 157
/* 137 */     MCD::OPC_CheckPredicate, 77, 19, 7, // Skip to: 1952
/* 141 */     MCD::OPC_CheckField, 16, 5, 0, 13, 7, // Skip to: 1952
/* 147 */     MCD::OPC_CheckField, 6, 5, 1, 7, 7, // Skip to: 1952
/* 153 */     MCD::OPC_Decode, 227, 6, 15, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 77, 251, 6, // Skip to: 1952
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 245, 6, // Skip to: 1952
/* 171 */     MCD::OPC_Decode, 140, 7, 187, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 76, 225, 6, // Skip to: 1952
/* 191 */     MCD::OPC_Decode, 149, 14, 49, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 217, 6, // Skip to: 1952
/* 199 */     MCD::OPC_CheckPredicate, 76, 213, 6, // Skip to: 1952
/* 203 */     MCD::OPC_Decode, 227, 13, 49, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 76, 194, 6, // Skip to: 1952
/* 222 */     MCD::OPC_Decode, 137, 14, 49, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 186, 6, // Skip to: 1952
/* 230 */     MCD::OPC_CheckPredicate, 76, 182, 6, // Skip to: 1952
/* 234 */     MCD::OPC_Decode, 228, 13, 49, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 76, 163, 6, // Skip to: 1952
/* 253 */     MCD::OPC_Decode, 252, 6, 49, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 155, 6, // Skip to: 1952
/* 261 */     MCD::OPC_CheckPredicate, 76, 151, 6, // Skip to: 1952
/* 265 */     MCD::OPC_Decode, 235, 12, 49, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 76, 132, 6, // Skip to: 1952
/* 284 */     MCD::OPC_Decode, 253, 6, 49, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 124, 6, // Skip to: 1952
/* 292 */     MCD::OPC_CheckPredicate, 76, 120, 6, // Skip to: 1952
/* 296 */     MCD::OPC_Decode, 238, 12, 49, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 331
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 77, 101, 6, // Skip to: 1952
/* 315 */     MCD::OPC_Decode, 174, 7, 12, // Opcode: DMUL_R6
/* 319 */     MCD::OPC_FilterValue, 3, 93, 6, // Skip to: 1952
/* 323 */     MCD::OPC_CheckPredicate, 77, 89, 6, // Skip to: 1952
/* 327 */     MCD::OPC_Decode, 160, 7, 12, // Opcode: DMUH
/* 331 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 362
/* 335 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 338 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 350
/* 342 */     MCD::OPC_CheckPredicate, 77, 70, 6, // Skip to: 1952
/* 346 */     MCD::OPC_Decode, 171, 7, 12, // Opcode: DMULU
/* 350 */     MCD::OPC_FilterValue, 3, 62, 6, // Skip to: 1952
/* 354 */     MCD::OPC_CheckPredicate, 77, 58, 6, // Skip to: 1952
/* 358 */     MCD::OPC_Decode, 161, 7, 12, // Opcode: DMUHU
/* 362 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 393
/* 366 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 369 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 77, 39, 6, // Skip to: 1952
/* 377 */     MCD::OPC_Decode, 231, 6, 12, // Opcode: DDIV
/* 381 */     MCD::OPC_FilterValue, 3, 31, 6, // Skip to: 1952
/* 385 */     MCD::OPC_CheckPredicate, 77, 27, 6, // Skip to: 1952
/* 389 */     MCD::OPC_Decode, 148, 7, 12, // Opcode: DMOD
/* 393 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 424
/* 397 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 400 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 412
/* 404 */     MCD::OPC_CheckPredicate, 77, 8, 6, // Skip to: 1952
/* 408 */     MCD::OPC_Decode, 232, 6, 12, // Opcode: DDIVU
/* 412 */     MCD::OPC_FilterValue, 3, 0, 6, // Skip to: 1952
/* 416 */     MCD::OPC_CheckPredicate, 77, 252, 5, // Skip to: 1952
/* 420 */     MCD::OPC_Decode, 149, 7, 12, // Opcode: DMODU
/* 424 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 442
/* 428 */     MCD::OPC_CheckPredicate, 78, 240, 5, // Skip to: 1952
/* 432 */     MCD::OPC_CheckField, 6, 5, 0, 234, 5, // Skip to: 1952
/* 438 */     MCD::OPC_Decode, 187, 16, 49, // Opcode: SELEQZ
/* 442 */     MCD::OPC_FilterValue, 55, 226, 5, // Skip to: 1952
/* 446 */     MCD::OPC_CheckPredicate, 78, 222, 5, // Skip to: 1952
/* 450 */     MCD::OPC_CheckField, 6, 5, 0, 216, 5, // Skip to: 1952
/* 456 */     MCD::OPC_Decode, 194, 16, 49, // Opcode: SELNEZ
/* 460 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 512
/* 464 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 467 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 480
/* 471 */     MCD::OPC_CheckPredicate, 77, 197, 5, // Skip to: 1952
/* 475 */     MCD::OPC_Decode, 215, 6, 214, 2, // Opcode: DAHI
/* 480 */     MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 499
/* 484 */     MCD::OPC_CheckPredicate, 75, 184, 5, // Skip to: 1952
/* 488 */     MCD::OPC_CheckField, 21, 5, 0, 178, 5, // Skip to: 1952
/* 494 */     MCD::OPC_Decode, 154, 2, 191, 1, // Opcode: BAL
/* 499 */     MCD::OPC_FilterValue, 30, 169, 5, // Skip to: 1952
/* 503 */     MCD::OPC_CheckPredicate, 77, 165, 5, // Skip to: 1952
/* 507 */     MCD::OPC_Decode, 219, 6, 214, 2, // Opcode: DATI
/* 512 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckPredicate, 76, 152, 5, // Skip to: 1952
/* 520 */     MCD::OPC_Decode, 222, 2, 215, 2, // Opcode: BGEZALC
/* 525 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 538
/* 529 */     MCD::OPC_CheckPredicate, 76, 139, 5, // Skip to: 1952
/* 533 */     MCD::OPC_Decode, 175, 3, 216, 2, // Opcode: BLTZALC
/* 538 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 551
/* 542 */     MCD::OPC_CheckPredicate, 76, 126, 5, // Skip to: 1952
/* 546 */     MCD::OPC_Decode, 191, 2, 217, 2, // Opcode: BEQC
/* 551 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 564
/* 555 */     MCD::OPC_CheckPredicate, 75, 113, 5, // Skip to: 1952
/* 559 */     MCD::OPC_Decode, 250, 1, 195, 1, // Opcode: AUI
/* 564 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 607
/* 568 */     MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 571 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 589
/* 575 */     MCD::OPC_CheckPredicate, 75, 93, 5, // Skip to: 1952
/* 579 */     MCD::OPC_CheckField, 21, 5, 11, 87, 5, // Skip to: 1952
/* 585 */     MCD::OPC_Decode, 159, 8, 73, // Opcode: EVP
/* 589 */     MCD::OPC_FilterValue, 36, 79, 5, // Skip to: 1952
/* 593 */     MCD::OPC_CheckPredicate, 75, 75, 5, // Skip to: 1952
/* 597 */     MCD::OPC_CheckField, 21, 5, 11, 69, 5, // Skip to: 1952
/* 603 */     MCD::OPC_Decode, 141, 8, 73, // Opcode: DVP
/* 607 */     MCD::OPC_FilterValue, 17, 15, 3, // Skip to: 1394
/* 611 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 614 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 627
/* 618 */     MCD::OPC_CheckPredicate, 79, 50, 5, // Skip to: 1952
/* 622 */     MCD::OPC_Decode, 166, 2, 218, 2, // Opcode: BC1EQZ
/* 627 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 640
/* 631 */     MCD::OPC_CheckPredicate, 79, 37, 5, // Skip to: 1952
/* 635 */     MCD::OPC_Decode, 171, 2, 218, 2, // Opcode: BC1NEZ
/* 640 */     MCD::OPC_FilterValue, 16, 158, 0, // Skip to: 802
/* 644 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 647 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 660
/* 651 */     MCD::OPC_CheckPredicate, 79, 17, 5, // Skip to: 1952
/* 655 */     MCD::OPC_Decode, 203, 16, 219, 2, // Opcode: SEL_S
/* 660 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 673
/* 664 */     MCD::OPC_CheckPredicate, 79, 4, 5, // Skip to: 1952
/* 668 */     MCD::OPC_Decode, 192, 16, 208, 1, // Opcode: SELEQZ_S
/* 673 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 686
/* 677 */     MCD::OPC_CheckPredicate, 79, 247, 4, // Skip to: 1952
/* 681 */     MCD::OPC_Decode, 199, 16, 208, 1, // Opcode: SELNEZ_S
/* 686 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 699
/* 690 */     MCD::OPC_CheckPredicate, 79, 234, 4, // Skip to: 1952
/* 694 */     MCD::OPC_Decode, 248, 11, 220, 2, // Opcode: MADDF_S
/* 699 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 712
/* 703 */     MCD::OPC_CheckPredicate, 79, 221, 4, // Skip to: 1952
/* 707 */     MCD::OPC_Decode, 172, 13, 220, 2, // Opcode: MSUBF_S
/* 712 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 731
/* 716 */     MCD::OPC_CheckPredicate, 79, 208, 4, // Skip to: 1952
/* 720 */     MCD::OPC_CheckField, 16, 5, 0, 202, 4, // Skip to: 1952
/* 726 */     MCD::OPC_Decode, 225, 15, 209, 1, // Opcode: RINT_S
/* 731 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 750
/* 735 */     MCD::OPC_CheckPredicate, 79, 189, 4, // Skip to: 1952
/* 739 */     MCD::OPC_CheckField, 16, 5, 0, 183, 4, // Skip to: 1952
/* 745 */     MCD::OPC_Decode, 188, 4, 209, 1, // Opcode: CLASS_S
/* 750 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 763
/* 754 */     MCD::OPC_CheckPredicate, 79, 170, 4, // Skip to: 1952
/* 758 */     MCD::OPC_Decode, 223, 12, 208, 1, // Opcode: MIN_S
/* 763 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 776
/* 767 */     MCD::OPC_CheckPredicate, 79, 157, 4, // Skip to: 1952
/* 771 */     MCD::OPC_Decode, 168, 12, 208, 1, // Opcode: MAX_S
/* 776 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 789
/* 780 */     MCD::OPC_CheckPredicate, 79, 144, 4, // Skip to: 1952
/* 784 */     MCD::OPC_Decode, 207, 12, 208, 1, // Opcode: MINA_S
/* 789 */     MCD::OPC_FilterValue, 31, 135, 4, // Skip to: 1952
/* 793 */     MCD::OPC_CheckPredicate, 79, 131, 4, // Skip to: 1952
/* 797 */     MCD::OPC_Decode, 152, 12, 208, 1, // Opcode: MAXA_S
/* 802 */     MCD::OPC_FilterValue, 17, 158, 0, // Skip to: 964
/* 806 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 809 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 822
/* 813 */     MCD::OPC_CheckPredicate, 79, 111, 4, // Skip to: 1952
/* 817 */     MCD::OPC_Decode, 201, 16, 221, 2, // Opcode: SEL_D
/* 822 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 835
/* 826 */     MCD::OPC_CheckPredicate, 79, 98, 4, // Skip to: 1952
/* 830 */     MCD::OPC_Decode, 189, 16, 222, 2, // Opcode: SELEQZ_D
/* 835 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 848
/* 839 */     MCD::OPC_CheckPredicate, 79, 85, 4, // Skip to: 1952
/* 843 */     MCD::OPC_Decode, 196, 16, 222, 2, // Opcode: SELNEZ_D
/* 848 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 861
/* 852 */     MCD::OPC_CheckPredicate, 79, 72, 4, // Skip to: 1952
/* 856 */     MCD::OPC_Decode, 246, 11, 221, 2, // Opcode: MADDF_D
/* 861 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 874
/* 865 */     MCD::OPC_CheckPredicate, 79, 59, 4, // Skip to: 1952
/* 869 */     MCD::OPC_Decode, 170, 13, 221, 2, // Opcode: MSUBF_D
/* 874 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 893
/* 878 */     MCD::OPC_CheckPredicate, 79, 46, 4, // Skip to: 1952
/* 882 */     MCD::OPC_CheckField, 16, 5, 0, 40, 4, // Skip to: 1952
/* 888 */     MCD::OPC_Decode, 223, 15, 220, 1, // Opcode: RINT_D
/* 893 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 912
/* 897 */     MCD::OPC_CheckPredicate, 79, 27, 4, // Skip to: 1952
/* 901 */     MCD::OPC_CheckField, 16, 5, 0, 21, 4, // Skip to: 1952
/* 907 */     MCD::OPC_Decode, 186, 4, 220, 1, // Opcode: CLASS_D
/* 912 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 925
/* 916 */     MCD::OPC_CheckPredicate, 79, 8, 4, // Skip to: 1952
/* 920 */     MCD::OPC_Decode, 221, 12, 222, 2, // Opcode: MIN_D
/* 925 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 938
/* 929 */     MCD::OPC_CheckPredicate, 79, 251, 3, // Skip to: 1952
/* 933 */     MCD::OPC_Decode, 166, 12, 222, 2, // Opcode: MAX_D
/* 938 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 951
/* 942 */     MCD::OPC_CheckPredicate, 79, 238, 3, // Skip to: 1952
/* 946 */     MCD::OPC_Decode, 205, 12, 222, 2, // Opcode: MINA_D
/* 951 */     MCD::OPC_FilterValue, 31, 229, 3, // Skip to: 1952
/* 955 */     MCD::OPC_CheckPredicate, 79, 225, 3, // Skip to: 1952
/* 959 */     MCD::OPC_Decode, 150, 12, 222, 2, // Opcode: MAXA_D
/* 964 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1179
/* 968 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 971 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 984
/* 975 */     MCD::OPC_CheckPredicate, 79, 205, 3, // Skip to: 1952
/* 979 */     MCD::OPC_Decode, 129, 5, 223, 2, // Opcode: CMP_F_S
/* 984 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 997
/* 988 */     MCD::OPC_CheckPredicate, 79, 192, 3, // Skip to: 1952
/* 992 */     MCD::OPC_Decode, 188, 5, 223, 2, // Opcode: CMP_UN_S
/* 997 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1010
/* 1001 */    MCD::OPC_CheckPredicate, 79, 179, 3, // Skip to: 1952
/* 1005 */    MCD::OPC_Decode, 254, 4, 223, 2, // Opcode: CMP_EQ_S
/* 1010 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1023
/* 1014 */    MCD::OPC_CheckPredicate, 79, 166, 3, // Skip to: 1952
/* 1018 */    MCD::OPC_Decode, 176, 5, 223, 2, // Opcode: CMP_UEQ_S
/* 1023 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1036
/* 1027 */    MCD::OPC_CheckPredicate, 79, 153, 3, // Skip to: 1952
/* 1031 */    MCD::OPC_Decode, 140, 5, 223, 2, // Opcode: CMP_LT_S
/* 1036 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1049
/* 1040 */    MCD::OPC_CheckPredicate, 79, 140, 3, // Skip to: 1952
/* 1044 */    MCD::OPC_Decode, 184, 5, 223, 2, // Opcode: CMP_ULT_S
/* 1049 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1062
/* 1053 */    MCD::OPC_CheckPredicate, 79, 127, 3, // Skip to: 1952
/* 1057 */    MCD::OPC_Decode, 134, 5, 223, 2, // Opcode: CMP_LE_S
/* 1062 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1075
/* 1066 */    MCD::OPC_CheckPredicate, 79, 114, 3, // Skip to: 1952
/* 1070 */    MCD::OPC_Decode, 180, 5, 223, 2, // Opcode: CMP_ULE_S
/* 1075 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1088
/* 1079 */    MCD::OPC_CheckPredicate, 79, 101, 3, // Skip to: 1952
/* 1083 */    MCD::OPC_Decode, 144, 5, 223, 2, // Opcode: CMP_SAF_S
/* 1088 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1101
/* 1092 */    MCD::OPC_CheckPredicate, 79, 88, 3, // Skip to: 1952
/* 1096 */    MCD::OPC_Decode, 172, 5, 223, 2, // Opcode: CMP_SUN_S
/* 1101 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1114
/* 1105 */    MCD::OPC_CheckPredicate, 79, 75, 3, // Skip to: 1952
/* 1109 */    MCD::OPC_Decode, 148, 5, 223, 2, // Opcode: CMP_SEQ_S
/* 1114 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1127
/* 1118 */    MCD::OPC_CheckPredicate, 79, 62, 3, // Skip to: 1952
/* 1122 */    MCD::OPC_Decode, 160, 5, 223, 2, // Opcode: CMP_SUEQ_S
/* 1127 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1140
/* 1131 */    MCD::OPC_CheckPredicate, 79, 49, 3, // Skip to: 1952
/* 1135 */    MCD::OPC_Decode, 156, 5, 223, 2, // Opcode: CMP_SLT_S
/* 1140 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1153
/* 1144 */    MCD::OPC_CheckPredicate, 79, 36, 3, // Skip to: 1952
/* 1148 */    MCD::OPC_Decode, 168, 5, 223, 2, // Opcode: CMP_SULT_S
/* 1153 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1166
/* 1157 */    MCD::OPC_CheckPredicate, 79, 23, 3, // Skip to: 1952
/* 1161 */    MCD::OPC_Decode, 152, 5, 223, 2, // Opcode: CMP_SLE_S
/* 1166 */    MCD::OPC_FilterValue, 15, 14, 3, // Skip to: 1952
/* 1170 */    MCD::OPC_CheckPredicate, 79, 10, 3, // Skip to: 1952
/* 1174 */    MCD::OPC_Decode, 164, 5, 223, 2, // Opcode: CMP_SULE_S
/* 1179 */    MCD::OPC_FilterValue, 21, 1, 3, // Skip to: 1952
/* 1183 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1186 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1199
/* 1190 */    MCD::OPC_CheckPredicate, 79, 246, 2, // Skip to: 1952
/* 1194 */    MCD::OPC_Decode, 128, 5, 224, 2, // Opcode: CMP_F_D
/* 1199 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1212
/* 1203 */    MCD::OPC_CheckPredicate, 79, 233, 2, // Skip to: 1952
/* 1207 */    MCD::OPC_Decode, 186, 5, 224, 2, // Opcode: CMP_UN_D
/* 1212 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1225
/* 1216 */    MCD::OPC_CheckPredicate, 79, 220, 2, // Skip to: 1952
/* 1220 */    MCD::OPC_Decode, 250, 4, 224, 2, // Opcode: CMP_EQ_D
/* 1225 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1238
/* 1229 */    MCD::OPC_CheckPredicate, 79, 207, 2, // Skip to: 1952
/* 1233 */    MCD::OPC_Decode, 174, 5, 224, 2, // Opcode: CMP_UEQ_D
/* 1238 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1251
/* 1242 */    MCD::OPC_CheckPredicate, 79, 194, 2, // Skip to: 1952
/* 1246 */    MCD::OPC_Decode, 136, 5, 224, 2, // Opcode: CMP_LT_D
/* 1251 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1264
/* 1255 */    MCD::OPC_CheckPredicate, 79, 181, 2, // Skip to: 1952
/* 1259 */    MCD::OPC_Decode, 182, 5, 224, 2, // Opcode: CMP_ULT_D
/* 1264 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1277
/* 1268 */    MCD::OPC_CheckPredicate, 79, 168, 2, // Skip to: 1952
/* 1272 */    MCD::OPC_Decode, 130, 5, 224, 2, // Opcode: CMP_LE_D
/* 1277 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1290
/* 1281 */    MCD::OPC_CheckPredicate, 79, 155, 2, // Skip to: 1952
/* 1285 */    MCD::OPC_Decode, 178, 5, 224, 2, // Opcode: CMP_ULE_D
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 79, 142, 2, // Skip to: 1952
/* 1298 */    MCD::OPC_Decode, 142, 5, 224, 2, // Opcode: CMP_SAF_D
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 79, 129, 2, // Skip to: 1952
/* 1311 */    MCD::OPC_Decode, 170, 5, 224, 2, // Opcode: CMP_SUN_D
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 79, 116, 2, // Skip to: 1952
/* 1324 */    MCD::OPC_Decode, 146, 5, 224, 2, // Opcode: CMP_SEQ_D
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 79, 103, 2, // Skip to: 1952
/* 1337 */    MCD::OPC_Decode, 158, 5, 224, 2, // Opcode: CMP_SUEQ_D
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 79, 90, 2, // Skip to: 1952
/* 1350 */    MCD::OPC_Decode, 154, 5, 224, 2, // Opcode: CMP_SLT_D
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 79, 77, 2, // Skip to: 1952
/* 1363 */    MCD::OPC_Decode, 166, 5, 224, 2, // Opcode: CMP_SULT_D
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 79, 64, 2, // Skip to: 1952
/* 1376 */    MCD::OPC_Decode, 150, 5, 224, 2, // Opcode: CMP_SLE_D
/* 1381 */    MCD::OPC_FilterValue, 15, 55, 2, // Skip to: 1952
/* 1385 */    MCD::OPC_CheckPredicate, 79, 51, 2, // Skip to: 1952
/* 1389 */    MCD::OPC_Decode, 162, 5, 224, 2, // Opcode: CMP_SULE_D
/* 1394 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1479
/* 1398 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1401 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1414
/* 1405 */    MCD::OPC_CheckPredicate, 76, 31, 2, // Skip to: 1952
/* 1409 */    MCD::OPC_Decode, 176, 2, 225, 2, // Opcode: BC2EQZ
/* 1414 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1427
/* 1418 */    MCD::OPC_CheckPredicate, 76, 18, 2, // Skip to: 1952
/* 1422 */    MCD::OPC_Decode, 185, 11, 226, 2, // Opcode: LWC2_R6
/* 1427 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1440
/* 1431 */    MCD::OPC_CheckPredicate, 76, 5, 2, // Skip to: 1952
/* 1435 */    MCD::OPC_Decode, 192, 18, 226, 2, // Opcode: SWC2_R6
/* 1440 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1453
/* 1444 */    MCD::OPC_CheckPredicate, 76, 248, 1, // Skip to: 1952
/* 1448 */    MCD::OPC_Decode, 178, 2, 225, 2, // Opcode: BC2NEZ
/* 1453 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1466
/* 1457 */    MCD::OPC_CheckPredicate, 76, 235, 1, // Skip to: 1952
/* 1461 */    MCD::OPC_Decode, 241, 10, 226, 2, // Opcode: LDC2_R6
/* 1466 */    MCD::OPC_FilterValue, 15, 226, 1, // Skip to: 1952
/* 1470 */    MCD::OPC_CheckPredicate, 76, 222, 1, // Skip to: 1952
/* 1474 */    MCD::OPC_Decode, 166, 16, 226, 2, // Opcode: SDC2_R6
/* 1479 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1492
/* 1483 */    MCD::OPC_CheckPredicate, 76, 209, 1, // Skip to: 1952
/* 1487 */    MCD::OPC_Decode, 227, 2, 227, 2, // Opcode: BGEZC
/* 1492 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1505
/* 1496 */    MCD::OPC_CheckPredicate, 76, 196, 1, // Skip to: 1952
/* 1500 */    MCD::OPC_Decode, 180, 3, 228, 2, // Opcode: BLTZC
/* 1505 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1518
/* 1509 */    MCD::OPC_CheckPredicate, 76, 183, 1, // Skip to: 1952
/* 1513 */    MCD::OPC_Decode, 191, 3, 229, 2, // Opcode: BNEC
/* 1518 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1531
/* 1522 */    MCD::OPC_CheckPredicate, 77, 170, 1, // Skip to: 1952
/* 1526 */    MCD::OPC_Decode, 221, 6, 230, 2, // Opcode: DAUI
/* 1531 */    MCD::OPC_FilterValue, 31, 183, 0, // Skip to: 1718
/* 1535 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1538 */    MCD::OPC_FilterValue, 32, 41, 0, // Skip to: 1583
/* 1542 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1570
/* 1549 */    MCD::OPC_CheckPredicate, 75, 143, 1, // Skip to: 1952
/* 1553 */    MCD::OPC_CheckField, 21, 5, 0, 137, 1, // Skip to: 1952
/* 1559 */    MCD::OPC_CheckField, 6, 2, 0, 131, 1, // Skip to: 1952
/* 1565 */    MCD::OPC_Decode, 139, 3, 196, 2, // Opcode: BITSWAP
/* 1570 */    MCD::OPC_FilterValue, 2, 122, 1, // Skip to: 1952
/* 1574 */    MCD::OPC_CheckPredicate, 75, 118, 1, // Skip to: 1952
/* 1578 */    MCD::OPC_Decode, 187, 1, 231, 2, // Opcode: ALIGN
/* 1583 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1628
/* 1587 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1590 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1615
/* 1594 */    MCD::OPC_CheckPredicate, 77, 98, 1, // Skip to: 1952
/* 1598 */    MCD::OPC_CheckField, 21, 5, 0, 92, 1, // Skip to: 1952
/* 1604 */    MCD::OPC_CheckField, 6, 3, 0, 86, 1, // Skip to: 1952
/* 1610 */    MCD::OPC_Decode, 223, 6, 232, 2, // Opcode: DBITSWAP
/* 1615 */    MCD::OPC_FilterValue, 1, 77, 1, // Skip to: 1952
/* 1619 */    MCD::OPC_CheckPredicate, 77, 73, 1, // Skip to: 1952
/* 1623 */    MCD::OPC_Decode, 217, 6, 233, 2, // Opcode: DALIGN
/* 1628 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1647
/* 1632 */    MCD::OPC_CheckPredicate, 75, 60, 1, // Skip to: 1952
/* 1636 */    MCD::OPC_CheckField, 6, 1, 0, 54, 1, // Skip to: 1952
/* 1642 */    MCD::OPC_Decode, 158, 4, 201, 2, // Opcode: CACHE_R6
/* 1647 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1660
/* 1651 */    MCD::OPC_CheckPredicate, 80, 41, 1, // Skip to: 1952
/* 1655 */    MCD::OPC_Decode, 152, 16, 234, 2, // Opcode: SC_R6
/* 1660 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1673
/* 1664 */    MCD::OPC_CheckPredicate, 75, 28, 1, // Skip to: 1952
/* 1668 */    MCD::OPC_Decode, 147, 16, 234, 2, // Opcode: SCD_R6
/* 1673 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1692
/* 1677 */    MCD::OPC_CheckPredicate, 75, 15, 1, // Skip to: 1952
/* 1681 */    MCD::OPC_CheckField, 6, 1, 0, 9, 1, // Skip to: 1952
/* 1687 */    MCD::OPC_Decode, 145, 15, 201, 2, // Opcode: PREF_R6
/* 1692 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1705
/* 1696 */    MCD::OPC_CheckPredicate, 80, 252, 0, // Skip to: 1952
/* 1700 */    MCD::OPC_Decode, 160, 11, 234, 2, // Opcode: LL_R6
/* 1705 */    MCD::OPC_FilterValue, 55, 243, 0, // Skip to: 1952
/* 1709 */    MCD::OPC_CheckPredicate, 77, 239, 0, // Skip to: 1952
/* 1713 */    MCD::OPC_Decode, 155, 11, 234, 2, // Opcode: LLD_R6
/* 1718 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1731
/* 1722 */    MCD::OPC_CheckPredicate, 75, 226, 0, // Skip to: 1952
/* 1726 */    MCD::OPC_Decode, 164, 2, 235, 2, // Opcode: BC
/* 1731 */    MCD::OPC_FilterValue, 53, 24, 0, // Skip to: 1759
/* 1735 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 1750
/* 1739 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1750
/* 1745 */    MCD::OPC_Decode, 246, 2, 172, 1, // Opcode: BGTZC_MMR6
/* 1750 */    MCD::OPC_CheckPredicate, 18, 198, 0, // Skip to: 1952
/* 1754 */    MCD::OPC_Decode, 182, 3, 172, 1, // Opcode: BLTZC_MMR6
/* 1759 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1786
/* 1763 */    MCD::OPC_CheckPredicate, 75, 10, 0, // Skip to: 1777
/* 1767 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 195, 10, 89, // Opcode: JIC
/* 1777 */    MCD::OPC_CheckPredicate, 76, 171, 0, // Skip to: 1952
/* 1781 */    MCD::OPC_Decode, 199, 2, 236, 2, // Opcode: BEQZC
/* 1786 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1799
/* 1790 */    MCD::OPC_CheckPredicate, 75, 158, 0, // Skip to: 1952
/* 1794 */    MCD::OPC_Decode, 155, 2, 235, 2, // Opcode: BALC
/* 1799 */    MCD::OPC_FilterValue, 59, 94, 0, // Skip to: 1897
/* 1803 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1806 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1818
/* 1810 */    MCD::OPC_CheckPredicate, 75, 138, 0, // Skip to: 1952
/* 1814 */    MCD::OPC_Decode, 112, 164, 1, // Opcode: ADDIUPC
/* 1818 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1831
/* 1822 */    MCD::OPC_CheckPredicate, 75, 126, 0, // Skip to: 1952
/* 1826 */    MCD::OPC_Decode, 200, 11, 164, 1, // Opcode: LWPC
/* 1831 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1844
/* 1835 */    MCD::OPC_CheckPredicate, 76, 113, 0, // Skip to: 1952
/* 1839 */    MCD::OPC_Decode, 210, 11, 164, 1, // Opcode: LWUPC
/* 1844 */    MCD::OPC_FilterValue, 3, 104, 0, // Skip to: 1952
/* 1848 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1851 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1864
/* 1855 */    MCD::OPC_CheckPredicate, 81, 93, 0, // Skip to: 1952
/* 1859 */    MCD::OPC_Decode, 249, 10, 166, 1, // Opcode: LDPC
/* 1864 */    MCD::OPC_FilterValue, 1, 84, 0, // Skip to: 1952
/* 1868 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1871 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1884
/* 1875 */    MCD::OPC_CheckPredicate, 75, 73, 0, // Skip to: 1952
/* 1879 */    MCD::OPC_Decode, 251, 1, 167, 1, // Opcode: AUIPC
/* 1884 */    MCD::OPC_FilterValue, 3, 64, 0, // Skip to: 1952
/* 1888 */    MCD::OPC_CheckPredicate, 75, 60, 0, // Skip to: 1952
/* 1892 */    MCD::OPC_Decode, 189, 1, 167, 1, // Opcode: ALUIPC
/* 1897 */    MCD::OPC_FilterValue, 61, 24, 0, // Skip to: 1925
/* 1901 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 1916
/* 1905 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1916
/* 1911 */    MCD::OPC_Decode, 155, 3, 175, 1, // Opcode: BLEZC_MMR6
/* 1916 */    MCD::OPC_CheckPredicate, 18, 32, 0, // Skip to: 1952
/* 1920 */    MCD::OPC_Decode, 229, 2, 175, 1, // Opcode: BGEZC_MMR6
/* 1925 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1952
/* 1929 */    MCD::OPC_CheckPredicate, 75, 10, 0, // Skip to: 1943
/* 1933 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1943
/* 1939 */    MCD::OPC_Decode, 192, 10, 89, // Opcode: JIALC
/* 1943 */    MCD::OPC_CheckPredicate, 76, 5, 0, // Skip to: 1952
/* 1947 */    MCD::OPC_Decode, 207, 3, 236, 2, // Opcode: BNEZC
/* 1952 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 151, 3, 215, 2, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 76, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 213, 2, 215, 2, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 242, 2, 216, 2, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 76, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 166, 3, 216, 2, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 197, 2, 229, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 76, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 220, 3, 217, 2, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 153, 3, 227, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 76, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 206, 2, 227, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 244, 2, 228, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 76, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 159, 3, 228, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 76, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 205, 3, 229, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 76, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 213, 3, 229, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_BranchZero32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 82, 18, 0, // Skip to: 29
/* 11 */      MCD::OPC_Decode, 228, 2, 227, 2, // Opcode: BGEZC64
/* 16 */      MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 82, 5, 0, // Skip to: 29
/* 24 */      MCD::OPC_Decode, 181, 3, 228, 2, // Opcode: BLTZC64
/* 29 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 83, 178, 0, // Skip to: 196
/* 18 */      MCD::OPC_Decode, 188, 16, 12, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 170, 0, // Skip to: 196
/* 26 */      MCD::OPC_CheckPredicate, 83, 166, 0, // Skip to: 196
/* 30 */      MCD::OPC_Decode, 195, 16, 12, // Opcode: SELNEZ64
/* 34 */      MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 82, 154, 0, // Skip to: 196
/* 42 */      MCD::OPC_Decode, 214, 2, 215, 2, // Opcode: BGEUC64
/* 47 */      MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 60
/* 51 */      MCD::OPC_CheckPredicate, 82, 141, 0, // Skip to: 196
/* 55 */      MCD::OPC_Decode, 167, 3, 216, 2, // Opcode: BLTUC64
/* 60 */      MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 82, 128, 0, // Skip to: 196
/* 68 */      MCD::OPC_Decode, 192, 2, 217, 2, // Opcode: BEQC64
/* 73 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 101
/* 77 */      MCD::OPC_CheckPredicate, 82, 11, 0, // Skip to: 92
/* 81 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 92
/* 87 */      MCD::OPC_Decode, 154, 3, 227, 2, // Opcode: BLEZC64
/* 92 */      MCD::OPC_CheckPredicate, 82, 100, 0, // Skip to: 196
/* 96 */      MCD::OPC_Decode, 207, 2, 227, 2, // Opcode: BGEC64
/* 101 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 129
/* 105 */     MCD::OPC_CheckPredicate, 82, 11, 0, // Skip to: 120
/* 109 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 120
/* 115 */     MCD::OPC_Decode, 245, 2, 228, 2, // Opcode: BGTZC64
/* 120 */     MCD::OPC_CheckPredicate, 82, 72, 0, // Skip to: 196
/* 124 */     MCD::OPC_Decode, 160, 3, 228, 2, // Opcode: BLTC64
/* 129 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 142
/* 133 */     MCD::OPC_CheckPredicate, 82, 59, 0, // Skip to: 196
/* 137 */     MCD::OPC_Decode, 192, 3, 229, 2, // Opcode: BNEC64
/* 142 */     MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 169
/* 146 */     MCD::OPC_CheckPredicate, 82, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 196, 10, 11, // Opcode: JIC64
/* 160 */     MCD::OPC_CheckPredicate, 82, 32, 0, // Skip to: 196
/* 164 */     MCD::OPC_Decode, 201, 2, 237, 2, // Opcode: BEQZC64
/* 169 */     MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 196
/* 173 */     MCD::OPC_CheckPredicate, 82, 10, 0, // Skip to: 187
/* 177 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 193, 10, 11, // Opcode: JIALC64
/* 187 */     MCD::OPC_CheckPredicate, 82, 5, 0, // Skip to: 196
/* 191 */     MCD::OPC_Decode, 209, 3, 237, 2, // Opcode: BNEZC64
/* 196 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 38, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 84, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 31, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 145, 16, 234, 2, // Opcode: SC64_R6
/* 22 */      MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 84, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 31, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 152, 11, 234, 2, // Opcode: LL64_R6
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 132, 1, // Skip to: 395
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 34
/* 14 */      MCD::OPC_CheckPredicate, 22, 164, 8, // Skip to: 2230
/* 18 */      MCD::OPC_CheckField, 16, 5, 0, 158, 8, // Skip to: 2230
/* 24 */      MCD::OPC_CheckField, 6, 5, 0, 152, 8, // Skip to: 2230
/* 30 */      MCD::OPC_Decode, 178, 10, 15, // Opcode: JALR64
/* 34 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 53
/* 38 */      MCD::OPC_CheckPredicate, 85, 140, 8, // Skip to: 2230
/* 42 */      MCD::OPC_CheckField, 6, 5, 0, 134, 8, // Skip to: 2230
/* 48 */      MCD::OPC_Decode, 247, 7, 238, 2, // Opcode: DSLLV
/* 53 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 86
/* 57 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 60 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 85, 114, 8, // Skip to: 2230
/* 68 */      MCD::OPC_Decode, 131, 8, 238, 2, // Opcode: DSRLV
/* 73 */      MCD::OPC_FilterValue, 1, 105, 8, // Skip to: 2230
/* 77 */      MCD::OPC_CheckPredicate, 86, 101, 8, // Skip to: 2230
/* 81 */      MCD::OPC_Decode, 233, 7, 238, 2, // Opcode: DROTRV
/* 86 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 105
/* 90 */      MCD::OPC_CheckPredicate, 85, 88, 8, // Skip to: 2230
/* 94 */      MCD::OPC_CheckField, 6, 5, 0, 82, 8, // Skip to: 2230
/* 100 */     MCD::OPC_Decode, 253, 7, 238, 2, // Opcode: DSRAV
/* 105 */     MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 124
/* 109 */     MCD::OPC_CheckPredicate, 87, 69, 8, // Skip to: 2230
/* 113 */     MCD::OPC_CheckField, 6, 10, 0, 63, 8, // Skip to: 2230
/* 119 */     MCD::OPC_Decode, 169, 7, 159, 1, // Opcode: DMULT
/* 124 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 143
/* 128 */     MCD::OPC_CheckPredicate, 87, 50, 8, // Skip to: 2230
/* 132 */     MCD::OPC_CheckField, 6, 10, 0, 44, 8, // Skip to: 2230
/* 138 */     MCD::OPC_Decode, 170, 7, 159, 1, // Opcode: DMULTu
/* 143 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 162
/* 147 */     MCD::OPC_CheckPredicate, 87, 31, 8, // Skip to: 2230
/* 151 */     MCD::OPC_CheckField, 6, 10, 0, 25, 8, // Skip to: 2230
/* 157 */     MCD::OPC_Decode, 238, 7, 159, 1, // Opcode: DSDIV
/* 162 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 181
/* 166 */     MCD::OPC_CheckPredicate, 87, 12, 8, // Skip to: 2230
/* 170 */     MCD::OPC_CheckField, 6, 10, 0, 6, 8, // Skip to: 2230
/* 176 */     MCD::OPC_Decode, 138, 8, 159, 1, // Opcode: DUDIV
/* 181 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 199
/* 185 */     MCD::OPC_CheckPredicate, 85, 249, 7, // Skip to: 2230
/* 189 */     MCD::OPC_CheckField, 6, 5, 0, 243, 7, // Skip to: 2230
/* 195 */     MCD::OPC_Decode, 208, 6, 12, // Opcode: DADD
/* 199 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 217
/* 203 */     MCD::OPC_CheckPredicate, 85, 231, 7, // Skip to: 2230
/* 207 */     MCD::OPC_CheckField, 6, 5, 0, 225, 7, // Skip to: 2230
/* 213 */     MCD::OPC_Decode, 214, 6, 12, // Opcode: DADDu
/* 217 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 235
/* 221 */     MCD::OPC_CheckPredicate, 85, 213, 7, // Skip to: 2230
/* 225 */     MCD::OPC_CheckField, 6, 5, 0, 207, 7, // Skip to: 2230
/* 231 */     MCD::OPC_Decode, 134, 8, 12, // Opcode: DSUB
/* 235 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 85, 195, 7, // Skip to: 2230
/* 243 */     MCD::OPC_CheckField, 6, 5, 0, 189, 7, // Skip to: 2230
/* 249 */     MCD::OPC_Decode, 137, 8, 12, // Opcode: DSUBu
/* 253 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 272
/* 257 */     MCD::OPC_CheckPredicate, 85, 177, 7, // Skip to: 2230
/* 261 */     MCD::OPC_CheckField, 21, 5, 0, 171, 7, // Skip to: 2230
/* 267 */     MCD::OPC_Decode, 243, 7, 239, 2, // Opcode: DSLL
/* 272 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 305
/* 276 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 279 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 292
/* 283 */     MCD::OPC_CheckPredicate, 85, 151, 7, // Skip to: 2230
/* 287 */     MCD::OPC_Decode, 128, 8, 239, 2, // Opcode: DSRL
/* 292 */     MCD::OPC_FilterValue, 1, 142, 7, // Skip to: 2230
/* 296 */     MCD::OPC_CheckPredicate, 86, 138, 7, // Skip to: 2230
/* 300 */     MCD::OPC_Decode, 230, 7, 239, 2, // Opcode: DROTR
/* 305 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 324
/* 309 */     MCD::OPC_CheckPredicate, 85, 125, 7, // Skip to: 2230
/* 313 */     MCD::OPC_CheckField, 21, 5, 0, 119, 7, // Skip to: 2230
/* 319 */     MCD::OPC_Decode, 250, 7, 239, 2, // Opcode: DSRA
/* 324 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 343
/* 328 */     MCD::OPC_CheckPredicate, 85, 106, 7, // Skip to: 2230
/* 332 */     MCD::OPC_CheckField, 21, 5, 0, 100, 7, // Skip to: 2230
/* 338 */     MCD::OPC_Decode, 244, 7, 239, 2, // Opcode: DSLL32
/* 343 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 376
/* 347 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 350 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 363
/* 354 */     MCD::OPC_CheckPredicate, 85, 80, 7, // Skip to: 2230
/* 358 */     MCD::OPC_Decode, 129, 8, 239, 2, // Opcode: DSRL32
/* 363 */     MCD::OPC_FilterValue, 1, 71, 7, // Skip to: 2230
/* 367 */     MCD::OPC_CheckPredicate, 86, 67, 7, // Skip to: 2230
/* 371 */     MCD::OPC_Decode, 231, 7, 239, 2, // Opcode: DROTR32
/* 376 */     MCD::OPC_FilterValue, 63, 58, 7, // Skip to: 2230
/* 380 */     MCD::OPC_CheckPredicate, 85, 54, 7, // Skip to: 2230
/* 384 */     MCD::OPC_CheckField, 21, 5, 0, 48, 7, // Skip to: 2230
/* 390 */     MCD::OPC_Decode, 251, 7, 239, 2, // Opcode: DSRA32
/* 395 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 440
/* 399 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 402 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 421
/* 406 */     MCD::OPC_CheckPredicate, 88, 28, 7, // Skip to: 2230
/* 410 */     MCD::OPC_CheckField, 3, 8, 0, 22, 7, // Skip to: 2230
/* 416 */     MCD::OPC_Decode, 141, 7, 240, 2, // Opcode: DMFC0
/* 421 */     MCD::OPC_FilterValue, 5, 13, 7, // Skip to: 2230
/* 425 */     MCD::OPC_CheckPredicate, 88, 9, 7, // Skip to: 2230
/* 429 */     MCD::OPC_CheckField, 3, 8, 0, 3, 7, // Skip to: 2230
/* 435 */     MCD::OPC_Decode, 153, 7, 241, 2, // Opcode: DMTC0
/* 440 */     MCD::OPC_FilterValue, 17, 19, 4, // Skip to: 1487
/* 444 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 447 */     MCD::OPC_FilterValue, 0, 92, 0, // Skip to: 543
/* 451 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 454 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 473
/* 458 */     MCD::OPC_CheckPredicate, 89, 232, 6, // Skip to: 2230
/* 462 */     MCD::OPC_CheckField, 6, 5, 0, 226, 6, // Skip to: 2230
/* 468 */     MCD::OPC_Decode, 181, 12, 242, 2, // Opcode: MFC1_D64
/* 473 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 492
/* 477 */     MCD::OPC_CheckPredicate, 90, 213, 6, // Skip to: 2230
/* 481 */     MCD::OPC_CheckField, 6, 5, 0, 207, 6, // Skip to: 2230
/* 487 */     MCD::OPC_Decode, 189, 12, 242, 2, // Opcode: MFHC1_D64
/* 492 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 511
/* 496 */     MCD::OPC_CheckPredicate, 89, 194, 6, // Skip to: 2230
/* 500 */     MCD::OPC_CheckField, 6, 5, 0, 188, 6, // Skip to: 2230
/* 506 */     MCD::OPC_Decode, 197, 13, 243, 2, // Opcode: MTC1_D64
/* 511 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 530
/* 515 */     MCD::OPC_CheckPredicate, 90, 175, 6, // Skip to: 2230
/* 519 */     MCD::OPC_CheckField, 6, 5, 0, 169, 6, // Skip to: 2230
/* 525 */     MCD::OPC_Decode, 205, 13, 244, 2, // Opcode: MTHC1_D64
/* 530 */     MCD::OPC_FilterValue, 17, 160, 6, // Skip to: 2230
/* 534 */     MCD::OPC_CheckPredicate, 89, 156, 6, // Skip to: 2230
/* 538 */     MCD::OPC_Decode, 202, 8, 222, 2, // Opcode: FADD_D64
/* 543 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 562
/* 547 */     MCD::OPC_CheckPredicate, 89, 143, 6, // Skip to: 2230
/* 551 */     MCD::OPC_CheckField, 21, 5, 17, 137, 6, // Skip to: 2230
/* 557 */     MCD::OPC_Decode, 219, 9, 222, 2, // Opcode: FSUB_D64
/* 562 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 581
/* 566 */     MCD::OPC_CheckPredicate, 89, 124, 6, // Skip to: 2230
/* 570 */     MCD::OPC_CheckField, 21, 5, 17, 118, 6, // Skip to: 2230
/* 576 */     MCD::OPC_Decode, 177, 9, 222, 2, // Opcode: FMUL_D64
/* 581 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 600
/* 585 */     MCD::OPC_CheckPredicate, 89, 105, 6, // Skip to: 2230
/* 589 */     MCD::OPC_CheckField, 21, 5, 17, 99, 6, // Skip to: 2230
/* 595 */     MCD::OPC_Decode, 240, 8, 222, 2, // Opcode: FDIV_D64
/* 600 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 620
/* 604 */     MCD::OPC_CheckPredicate, 91, 86, 6, // Skip to: 2230
/* 608 */     MCD::OPC_CheckField, 16, 10, 160, 4, 79, 6, // Skip to: 2230
/* 615 */     MCD::OPC_Decode, 212, 9, 220, 1, // Opcode: FSQRT_D64
/* 620 */     MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 640
/* 624 */     MCD::OPC_CheckPredicate, 89, 66, 6, // Skip to: 2230
/* 628 */     MCD::OPC_CheckField, 16, 10, 160, 4, 59, 6, // Skip to: 2230
/* 635 */     MCD::OPC_Decode, 195, 8, 220, 1, // Opcode: FABS_D64
/* 640 */     MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 660
/* 644 */     MCD::OPC_CheckPredicate, 89, 46, 6, // Skip to: 2230
/* 648 */     MCD::OPC_CheckField, 16, 10, 160, 4, 39, 6, // Skip to: 2230
/* 655 */     MCD::OPC_Decode, 168, 9, 220, 1, // Opcode: FMOV_D64
/* 660 */     MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 680
/* 664 */     MCD::OPC_CheckPredicate, 89, 26, 6, // Skip to: 2230
/* 668 */     MCD::OPC_CheckField, 16, 10, 160, 4, 19, 6, // Skip to: 2230
/* 675 */     MCD::OPC_Decode, 185, 9, 220, 1, // Opcode: FNEG_D64
/* 680 */     MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 715
/* 684 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 687 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 701
/* 692 */     MCD::OPC_CheckPredicate, 92, 254, 5, // Skip to: 2230
/* 696 */     MCD::OPC_Decode, 237, 15, 213, 1, // Opcode: ROUND_L_S
/* 701 */     MCD::OPC_FilterValue, 160, 4, 244, 5, // Skip to: 2230
/* 706 */     MCD::OPC_CheckPredicate, 92, 240, 5, // Skip to: 2230
/* 710 */     MCD::OPC_Decode, 235, 15, 220, 1, // Opcode: ROUND_L_D64
/* 715 */     MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 750
/* 719 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 722 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 736
/* 727 */     MCD::OPC_CheckPredicate, 92, 219, 5, // Skip to: 2230
/* 731 */     MCD::OPC_Decode, 187, 19, 213, 1, // Opcode: TRUNC_L_S
/* 736 */     MCD::OPC_FilterValue, 160, 4, 209, 5, // Skip to: 2230
/* 741 */     MCD::OPC_CheckPredicate, 92, 205, 5, // Skip to: 2230
/* 745 */     MCD::OPC_Decode, 185, 19, 220, 1, // Opcode: TRUNC_L_D64
/* 750 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 785
/* 754 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 757 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 771
/* 762 */     MCD::OPC_CheckPredicate, 92, 184, 5, // Skip to: 2230
/* 766 */     MCD::OPC_Decode, 161, 4, 213, 1, // Opcode: CEIL_L_S
/* 771 */     MCD::OPC_FilterValue, 160, 4, 174, 5, // Skip to: 2230
/* 776 */     MCD::OPC_CheckPredicate, 92, 170, 5, // Skip to: 2230
/* 780 */     MCD::OPC_Decode, 159, 4, 220, 1, // Opcode: CEIL_L_D64
/* 785 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 820
/* 789 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 792 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 806
/* 797 */     MCD::OPC_CheckPredicate, 92, 149, 5, // Skip to: 2230
/* 801 */     MCD::OPC_Decode, 147, 9, 213, 1, // Opcode: FLOOR_L_S
/* 806 */     MCD::OPC_FilterValue, 160, 4, 139, 5, // Skip to: 2230
/* 811 */     MCD::OPC_CheckPredicate, 92, 135, 5, // Skip to: 2230
/* 815 */     MCD::OPC_Decode, 145, 9, 220, 1, // Opcode: FLOOR_L_D64
/* 820 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 840
/* 824 */     MCD::OPC_CheckPredicate, 91, 122, 5, // Skip to: 2230
/* 828 */     MCD::OPC_CheckField, 16, 10, 160, 4, 115, 5, // Skip to: 2230
/* 835 */     MCD::OPC_Decode, 240, 15, 245, 2, // Opcode: ROUND_W_D64
/* 840 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 860
/* 844 */     MCD::OPC_CheckPredicate, 91, 102, 5, // Skip to: 2230
/* 848 */     MCD::OPC_CheckField, 16, 10, 160, 4, 95, 5, // Skip to: 2230
/* 855 */     MCD::OPC_Decode, 190, 19, 245, 2, // Opcode: TRUNC_W_D64
/* 860 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 880
/* 864 */     MCD::OPC_CheckPredicate, 91, 82, 5, // Skip to: 2230
/* 868 */     MCD::OPC_CheckField, 16, 10, 160, 4, 75, 5, // Skip to: 2230
/* 875 */     MCD::OPC_Decode, 164, 4, 245, 2, // Opcode: CEIL_W_D64
/* 880 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 900
/* 884 */     MCD::OPC_CheckPredicate, 91, 62, 5, // Skip to: 2230
/* 888 */     MCD::OPC_CheckField, 16, 10, 160, 4, 55, 5, // Skip to: 2230
/* 895 */     MCD::OPC_Decode, 150, 9, 245, 2, // Opcode: FLOOR_W_D64
/* 900 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 945
/* 904 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 907 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 926
/* 911 */     MCD::OPC_CheckPredicate, 93, 35, 5, // Skip to: 2230
/* 915 */     MCD::OPC_CheckField, 21, 5, 17, 29, 5, // Skip to: 2230
/* 921 */     MCD::OPC_Decode, 255, 12, 246, 2, // Opcode: MOVF_D64
/* 926 */     MCD::OPC_FilterValue, 1, 20, 5, // Skip to: 2230
/* 930 */     MCD::OPC_CheckPredicate, 93, 16, 5, // Skip to: 2230
/* 934 */     MCD::OPC_CheckField, 21, 5, 17, 10, 5, // Skip to: 2230
/* 940 */     MCD::OPC_Decode, 147, 13, 246, 2, // Opcode: MOVT_D64
/* 945 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 964
/* 949 */     MCD::OPC_CheckPredicate, 93, 253, 4, // Skip to: 2230
/* 953 */     MCD::OPC_CheckField, 21, 5, 17, 247, 4, // Skip to: 2230
/* 959 */     MCD::OPC_Decode, 159, 13, 247, 2, // Opcode: MOVZ_I_D64
/* 964 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 983
/* 968 */     MCD::OPC_CheckPredicate, 93, 234, 4, // Skip to: 2230
/* 972 */     MCD::OPC_CheckField, 21, 5, 17, 228, 4, // Skip to: 2230
/* 978 */     MCD::OPC_Decode, 139, 13, 247, 2, // Opcode: MOVN_I_D64
/* 983 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 1018
/* 987 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 990 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 1004
/* 995 */     MCD::OPC_CheckPredicate, 89, 207, 4, // Skip to: 2230
/* 999 */     MCD::OPC_Decode, 222, 5, 245, 2, // Opcode: CVT_S_D64
/* 1004 */    MCD::OPC_FilterValue, 160, 5, 197, 4, // Skip to: 2230
/* 1009 */    MCD::OPC_CheckPredicate, 92, 193, 4, // Skip to: 2230
/* 1013 */    MCD::OPC_Decode, 224, 5, 245, 2, // Opcode: CVT_S_L
/* 1018 */    MCD::OPC_FilterValue, 33, 45, 0, // Skip to: 1067
/* 1022 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1025 */    MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 1039
/* 1030 */    MCD::OPC_CheckPredicate, 89, 172, 4, // Skip to: 2230
/* 1034 */    MCD::OPC_Decode, 208, 5, 213, 1, // Opcode: CVT_D64_S
/* 1039 */    MCD::OPC_FilterValue, 128, 5, 9, 0, // Skip to: 1053
/* 1044 */    MCD::OPC_CheckPredicate, 89, 158, 4, // Skip to: 2230
/* 1048 */    MCD::OPC_Decode, 209, 5, 213, 1, // Opcode: CVT_D64_W
/* 1053 */    MCD::OPC_FilterValue, 160, 5, 148, 4, // Skip to: 2230
/* 1058 */    MCD::OPC_CheckPredicate, 89, 144, 4, // Skip to: 2230
/* 1062 */    MCD::OPC_Decode, 207, 5, 220, 1, // Opcode: CVT_D64_L
/* 1067 */    MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1087
/* 1071 */    MCD::OPC_CheckPredicate, 89, 131, 4, // Skip to: 2230
/* 1075 */    MCD::OPC_CheckField, 16, 10, 160, 4, 124, 4, // Skip to: 2230
/* 1082 */    MCD::OPC_Decode, 230, 5, 245, 2, // Opcode: CVT_W_D64
/* 1087 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1112
/* 1091 */    MCD::OPC_CheckPredicate, 94, 111, 4, // Skip to: 2230
/* 1095 */    MCD::OPC_CheckField, 21, 5, 17, 105, 4, // Skip to: 2230
/* 1101 */    MCD::OPC_CheckField, 6, 2, 0, 99, 4, // Skip to: 2230
/* 1107 */    MCD::OPC_Decode, 244, 5, 248, 2, // Opcode: C_F_D64
/* 1112 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1137
/* 1116 */    MCD::OPC_CheckPredicate, 94, 86, 4, // Skip to: 2230
/* 1120 */    MCD::OPC_CheckField, 21, 5, 17, 80, 4, // Skip to: 2230
/* 1126 */    MCD::OPC_CheckField, 6, 2, 0, 74, 4, // Skip to: 2230
/* 1132 */    MCD::OPC_Decode, 200, 6, 248, 2, // Opcode: C_UN_D64
/* 1137 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1162
/* 1141 */    MCD::OPC_CheckPredicate, 94, 61, 4, // Skip to: 2230
/* 1145 */    MCD::OPC_CheckField, 21, 5, 17, 55, 4, // Skip to: 2230
/* 1151 */    MCD::OPC_CheckField, 6, 2, 0, 49, 4, // Skip to: 2230
/* 1157 */    MCD::OPC_Decode, 238, 5, 248, 2, // Opcode: C_EQ_D64
/* 1162 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1187
/* 1166 */    MCD::OPC_CheckPredicate, 94, 36, 4, // Skip to: 2230
/* 1170 */    MCD::OPC_CheckField, 21, 5, 17, 30, 4, // Skip to: 2230
/* 1176 */    MCD::OPC_CheckField, 6, 2, 0, 24, 4, // Skip to: 2230
/* 1182 */    MCD::OPC_Decode, 182, 6, 248, 2, // Opcode: C_UEQ_D64
/* 1187 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1212
/* 1191 */    MCD::OPC_CheckPredicate, 94, 11, 4, // Skip to: 2230
/* 1195 */    MCD::OPC_CheckField, 21, 5, 17, 5, 4, // Skip to: 2230
/* 1201 */    MCD::OPC_CheckField, 6, 2, 0, 255, 3, // Skip to: 2230
/* 1207 */    MCD::OPC_Decode, 164, 6, 248, 2, // Opcode: C_OLT_D64
/* 1212 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1237
/* 1216 */    MCD::OPC_CheckPredicate, 94, 242, 3, // Skip to: 2230
/* 1220 */    MCD::OPC_CheckField, 21, 5, 17, 236, 3, // Skip to: 2230
/* 1226 */    MCD::OPC_CheckField, 6, 2, 0, 230, 3, // Skip to: 2230
/* 1232 */    MCD::OPC_Decode, 194, 6, 248, 2, // Opcode: C_ULT_D64
/* 1237 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1262
/* 1241 */    MCD::OPC_CheckPredicate, 94, 217, 3, // Skip to: 2230
/* 1245 */    MCD::OPC_CheckField, 21, 5, 17, 211, 3, // Skip to: 2230
/* 1251 */    MCD::OPC_CheckField, 6, 2, 0, 205, 3, // Skip to: 2230
/* 1257 */    MCD::OPC_Decode, 158, 6, 248, 2, // Opcode: C_OLE_D64
/* 1262 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1287
/* 1266 */    MCD::OPC_CheckPredicate, 94, 192, 3, // Skip to: 2230
/* 1270 */    MCD::OPC_CheckField, 21, 5, 17, 186, 3, // Skip to: 2230
/* 1276 */    MCD::OPC_CheckField, 6, 2, 0, 180, 3, // Skip to: 2230
/* 1282 */    MCD::OPC_Decode, 188, 6, 248, 2, // Opcode: C_ULE_D64
/* 1287 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1312
/* 1291 */    MCD::OPC_CheckPredicate, 94, 167, 3, // Skip to: 2230
/* 1295 */    MCD::OPC_CheckField, 21, 5, 17, 161, 3, // Skip to: 2230
/* 1301 */    MCD::OPC_CheckField, 6, 2, 0, 155, 3, // Skip to: 2230
/* 1307 */    MCD::OPC_Decode, 176, 6, 248, 2, // Opcode: C_SF_D64
/* 1312 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1337
/* 1316 */    MCD::OPC_CheckPredicate, 94, 142, 3, // Skip to: 2230
/* 1320 */    MCD::OPC_CheckField, 21, 5, 17, 136, 3, // Skip to: 2230
/* 1326 */    MCD::OPC_CheckField, 6, 2, 0, 130, 3, // Skip to: 2230
/* 1332 */    MCD::OPC_Decode, 140, 6, 248, 2, // Opcode: C_NGLE_D64
/* 1337 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1362
/* 1341 */    MCD::OPC_CheckPredicate, 94, 117, 3, // Skip to: 2230
/* 1345 */    MCD::OPC_CheckField, 21, 5, 17, 111, 3, // Skip to: 2230
/* 1351 */    MCD::OPC_CheckField, 6, 2, 0, 105, 3, // Skip to: 2230
/* 1357 */    MCD::OPC_Decode, 170, 6, 248, 2, // Opcode: C_SEQ_D64
/* 1362 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1387
/* 1366 */    MCD::OPC_CheckPredicate, 94, 92, 3, // Skip to: 2230
/* 1370 */    MCD::OPC_CheckField, 21, 5, 17, 86, 3, // Skip to: 2230
/* 1376 */    MCD::OPC_CheckField, 6, 2, 0, 80, 3, // Skip to: 2230
/* 1382 */    MCD::OPC_Decode, 146, 6, 248, 2, // Opcode: C_NGL_D64
/* 1387 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1412
/* 1391 */    MCD::OPC_CheckPredicate, 94, 67, 3, // Skip to: 2230
/* 1395 */    MCD::OPC_CheckField, 21, 5, 17, 61, 3, // Skip to: 2230
/* 1401 */    MCD::OPC_CheckField, 6, 2, 0, 55, 3, // Skip to: 2230
/* 1407 */    MCD::OPC_Decode, 128, 6, 248, 2, // Opcode: C_LT_D64
/* 1412 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1437
/* 1416 */    MCD::OPC_CheckPredicate, 94, 42, 3, // Skip to: 2230
/* 1420 */    MCD::OPC_CheckField, 21, 5, 17, 36, 3, // Skip to: 2230
/* 1426 */    MCD::OPC_CheckField, 6, 2, 0, 30, 3, // Skip to: 2230
/* 1432 */    MCD::OPC_Decode, 134, 6, 248, 2, // Opcode: C_NGE_D64
/* 1437 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1462
/* 1441 */    MCD::OPC_CheckPredicate, 94, 17, 3, // Skip to: 2230
/* 1445 */    MCD::OPC_CheckField, 21, 5, 17, 11, 3, // Skip to: 2230
/* 1451 */    MCD::OPC_CheckField, 6, 2, 0, 5, 3, // Skip to: 2230
/* 1457 */    MCD::OPC_Decode, 250, 5, 248, 2, // Opcode: C_LE_D64
/* 1462 */    MCD::OPC_FilterValue, 63, 252, 2, // Skip to: 2230
/* 1466 */    MCD::OPC_CheckPredicate, 94, 248, 2, // Skip to: 2230
/* 1470 */    MCD::OPC_CheckField, 21, 5, 17, 242, 2, // Skip to: 2230
/* 1476 */    MCD::OPC_CheckField, 6, 2, 0, 236, 2, // Skip to: 2230
/* 1482 */    MCD::OPC_Decode, 152, 6, 248, 2, // Opcode: C_NGT_D64
/* 1487 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1532
/* 1491 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1494 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1513
/* 1498 */    MCD::OPC_CheckPredicate, 88, 216, 2, // Skip to: 2230
/* 1502 */    MCD::OPC_CheckField, 3, 8, 0, 210, 2, // Skip to: 2230
/* 1508 */    MCD::OPC_Decode, 145, 7, 249, 2, // Opcode: DMFC2
/* 1513 */    MCD::OPC_FilterValue, 5, 201, 2, // Skip to: 2230
/* 1517 */    MCD::OPC_CheckPredicate, 88, 197, 2, // Skip to: 2230
/* 1521 */    MCD::OPC_CheckField, 3, 8, 0, 191, 2, // Skip to: 2230
/* 1527 */    MCD::OPC_Decode, 157, 7, 250, 2, // Opcode: DMTC2
/* 1532 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1667
/* 1536 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1539 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1558
/* 1543 */    MCD::OPC_CheckPredicate, 95, 171, 2, // Skip to: 2230
/* 1547 */    MCD::OPC_CheckField, 11, 5, 0, 165, 2, // Skip to: 2230
/* 1553 */    MCD::OPC_Decode, 253, 10, 251, 2, // Opcode: LDXC164
/* 1558 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1577
/* 1562 */    MCD::OPC_CheckPredicate, 96, 152, 2, // Skip to: 2230
/* 1566 */    MCD::OPC_CheckField, 11, 5, 0, 146, 2, // Skip to: 2230
/* 1572 */    MCD::OPC_Decode, 173, 11, 251, 2, // Opcode: LUXC164
/* 1577 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1596
/* 1581 */    MCD::OPC_CheckPredicate, 95, 133, 2, // Skip to: 2230
/* 1585 */    MCD::OPC_CheckField, 6, 5, 0, 127, 2, // Skip to: 2230
/* 1591 */    MCD::OPC_Decode, 175, 16, 252, 2, // Opcode: SDXC164
/* 1596 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1615
/* 1600 */    MCD::OPC_CheckPredicate, 96, 114, 2, // Skip to: 2230
/* 1604 */    MCD::OPC_CheckField, 6, 5, 0, 108, 2, // Skip to: 2230
/* 1610 */    MCD::OPC_Decode, 182, 18, 252, 2, // Opcode: SUXC164
/* 1615 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1628
/* 1619 */    MCD::OPC_CheckPredicate, 97, 95, 2, // Skip to: 2230
/* 1623 */    MCD::OPC_Decode, 134, 12, 253, 2, // Opcode: MADD_D64
/* 1628 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1641
/* 1632 */    MCD::OPC_CheckPredicate, 97, 82, 2, // Skip to: 2230
/* 1636 */    MCD::OPC_Decode, 186, 13, 253, 2, // Opcode: MSUB_D64
/* 1641 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1654
/* 1645 */    MCD::OPC_CheckPredicate, 97, 69, 2, // Skip to: 2230
/* 1649 */    MCD::OPC_Decode, 170, 14, 253, 2, // Opcode: NMADD_D64
/* 1654 */    MCD::OPC_FilterValue, 57, 60, 2, // Skip to: 2230
/* 1658 */    MCD::OPC_CheckPredicate, 97, 56, 2, // Skip to: 2230
/* 1662 */    MCD::OPC_Decode, 175, 14, 253, 2, // Opcode: NMSUB_D64
/* 1667 */    MCD::OPC_FilterValue, 21, 227, 0, // Skip to: 1898
/* 1671 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1674 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 1688
/* 1679 */    MCD::OPC_CheckPredicate, 98, 35, 2, // Skip to: 2230
/* 1683 */    MCD::OPC_Decode, 245, 5, 254, 2, // Opcode: C_F_D64_MM
/* 1688 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 1702
/* 1693 */    MCD::OPC_CheckPredicate, 98, 21, 2, // Skip to: 2230
/* 1697 */    MCD::OPC_Decode, 201, 6, 254, 2, // Opcode: C_UN_D64_MM
/* 1702 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 1716
/* 1707 */    MCD::OPC_CheckPredicate, 98, 7, 2, // Skip to: 2230
/* 1711 */    MCD::OPC_Decode, 239, 5, 254, 2, // Opcode: C_EQ_D64_MM
/* 1716 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 1730
/* 1721 */    MCD::OPC_CheckPredicate, 98, 249, 1, // Skip to: 2230
/* 1725 */    MCD::OPC_Decode, 183, 6, 254, 2, // Opcode: C_UEQ_D64_MM
/* 1730 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 1744
/* 1735 */    MCD::OPC_CheckPredicate, 98, 235, 1, // Skip to: 2230
/* 1739 */    MCD::OPC_Decode, 165, 6, 254, 2, // Opcode: C_OLT_D64_MM
/* 1744 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 1758
/* 1749 */    MCD::OPC_CheckPredicate, 98, 221, 1, // Skip to: 2230
/* 1753 */    MCD::OPC_Decode, 195, 6, 254, 2, // Opcode: C_ULT_D64_MM
/* 1758 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 1772
/* 1763 */    MCD::OPC_CheckPredicate, 98, 207, 1, // Skip to: 2230
/* 1767 */    MCD::OPC_Decode, 159, 6, 254, 2, // Opcode: C_OLE_D64_MM
/* 1772 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 1786
/* 1777 */    MCD::OPC_CheckPredicate, 98, 193, 1, // Skip to: 2230
/* 1781 */    MCD::OPC_Decode, 189, 6, 254, 2, // Opcode: C_ULE_D64_MM
/* 1786 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 1800
/* 1791 */    MCD::OPC_CheckPredicate, 98, 179, 1, // Skip to: 2230
/* 1795 */    MCD::OPC_Decode, 177, 6, 254, 2, // Opcode: C_SF_D64_MM
/* 1800 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 1814
/* 1805 */    MCD::OPC_CheckPredicate, 98, 165, 1, // Skip to: 2230
/* 1809 */    MCD::OPC_Decode, 141, 6, 254, 2, // Opcode: C_NGLE_D64_MM
/* 1814 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 1828
/* 1819 */    MCD::OPC_CheckPredicate, 98, 151, 1, // Skip to: 2230
/* 1823 */    MCD::OPC_Decode, 171, 6, 254, 2, // Opcode: C_SEQ_D64_MM
/* 1828 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 1842
/* 1833 */    MCD::OPC_CheckPredicate, 98, 137, 1, // Skip to: 2230
/* 1837 */    MCD::OPC_Decode, 147, 6, 254, 2, // Opcode: C_NGL_D64_MM
/* 1842 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 1856
/* 1847 */    MCD::OPC_CheckPredicate, 98, 123, 1, // Skip to: 2230
/* 1851 */    MCD::OPC_Decode, 129, 6, 254, 2, // Opcode: C_LT_D64_MM
/* 1856 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 1870
/* 1861 */    MCD::OPC_CheckPredicate, 98, 109, 1, // Skip to: 2230
/* 1865 */    MCD::OPC_Decode, 135, 6, 254, 2, // Opcode: C_NGE_D64_MM
/* 1870 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 1884
/* 1875 */    MCD::OPC_CheckPredicate, 98, 95, 1, // Skip to: 2230
/* 1879 */    MCD::OPC_Decode, 251, 5, 254, 2, // Opcode: C_LE_D64_MM
/* 1884 */    MCD::OPC_FilterValue, 252, 15, 85, 1, // Skip to: 2230
/* 1889 */    MCD::OPC_CheckPredicate, 98, 81, 1, // Skip to: 2230
/* 1893 */    MCD::OPC_Decode, 153, 6, 254, 2, // Opcode: C_NGT_D64_MM
/* 1898 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1911
/* 1902 */    MCD::OPC_CheckPredicate, 99, 68, 1, // Skip to: 2230
/* 1906 */    MCD::OPC_Decode, 212, 6, 255, 2, // Opcode: DADDi
/* 1911 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1924
/* 1915 */    MCD::OPC_CheckPredicate, 85, 55, 1, // Skip to: 2230
/* 1919 */    MCD::OPC_Decode, 213, 6, 255, 2, // Opcode: DADDiu
/* 1924 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1937
/* 1928 */    MCD::OPC_CheckPredicate, 99, 42, 1, // Skip to: 2230
/* 1932 */    MCD::OPC_Decode, 247, 10, 210, 2, // Opcode: LDL
/* 1937 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1950
/* 1941 */    MCD::OPC_CheckPredicate, 99, 29, 1, // Skip to: 2230
/* 1945 */    MCD::OPC_Decode, 251, 10, 210, 2, // Opcode: LDR
/* 1950 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1983
/* 1954 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1957 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1970
/* 1961 */    MCD::OPC_CheckPredicate, 100, 9, 1, // Skip to: 2230
/* 1965 */    MCD::OPC_Decode, 228, 6, 128, 3, // Opcode: DCLZ
/* 1970 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 2230
/* 1974 */    MCD::OPC_CheckPredicate, 100, 252, 0, // Skip to: 2230
/* 1978 */    MCD::OPC_Decode, 225, 6, 128, 3, // Opcode: DCLO
/* 1983 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 2113
/* 1987 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1990 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2003
/* 1994 */    MCD::OPC_CheckPredicate, 86, 232, 0, // Skip to: 2230
/* 1998 */    MCD::OPC_Decode, 240, 6, 129, 3, // Opcode: DEXTM
/* 2003 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2016
/* 2007 */    MCD::OPC_CheckPredicate, 86, 219, 0, // Skip to: 2230
/* 2011 */    MCD::OPC_Decode, 242, 6, 129, 3, // Opcode: DEXTU
/* 2016 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2029
/* 2020 */    MCD::OPC_CheckPredicate, 86, 206, 0, // Skip to: 2230
/* 2024 */    MCD::OPC_Decode, 238, 6, 129, 3, // Opcode: DEXT
/* 2029 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2042
/* 2033 */    MCD::OPC_CheckPredicate, 86, 193, 0, // Skip to: 2230
/* 2037 */    MCD::OPC_Decode, 247, 6, 130, 3, // Opcode: DINSM
/* 2042 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2055
/* 2046 */    MCD::OPC_CheckPredicate, 86, 180, 0, // Skip to: 2230
/* 2050 */    MCD::OPC_Decode, 249, 6, 130, 3, // Opcode: DINSU
/* 2055 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2068
/* 2059 */    MCD::OPC_CheckPredicate, 86, 167, 0, // Skip to: 2230
/* 2063 */    MCD::OPC_Decode, 246, 6, 130, 3, // Opcode: DINS
/* 2068 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 2230
/* 2072 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2075 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 2094
/* 2079 */    MCD::OPC_CheckPredicate, 86, 147, 0, // Skip to: 2230
/* 2083 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 2230
/* 2089 */    MCD::OPC_Decode, 236, 7, 232, 2, // Opcode: DSBH
/* 2094 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 2230
/* 2098 */    MCD::OPC_CheckPredicate, 86, 128, 0, // Skip to: 2230
/* 2102 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 2230
/* 2108 */    MCD::OPC_Decode, 241, 7, 232, 2, // Opcode: DSHD
/* 2113 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 2126
/* 2117 */    MCD::OPC_CheckPredicate, 85, 109, 0, // Skip to: 2230
/* 2121 */    MCD::OPC_Decode, 221, 11, 210, 2, // Opcode: LWu
/* 2126 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 2139
/* 2130 */    MCD::OPC_CheckPredicate, 99, 96, 0, // Skip to: 2230
/* 2134 */    MCD::OPC_Decode, 171, 16, 210, 2, // Opcode: SDL
/* 2139 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2152
/* 2143 */    MCD::OPC_CheckPredicate, 99, 83, 0, // Skip to: 2230
/* 2147 */    MCD::OPC_Decode, 173, 16, 210, 2, // Opcode: SDR
/* 2152 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 2165
/* 2156 */    MCD::OPC_CheckPredicate, 87, 70, 0, // Skip to: 2230
/* 2160 */    MCD::OPC_Decode, 153, 11, 210, 2, // Opcode: LLD
/* 2165 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2178
/* 2169 */    MCD::OPC_CheckPredicate, 101, 57, 0, // Skip to: 2230
/* 2173 */    MCD::OPC_Decode, 236, 10, 212, 2, // Opcode: LDC164
/* 2178 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 2191
/* 2182 */    MCD::OPC_CheckPredicate, 85, 44, 0, // Skip to: 2230
/* 2186 */    MCD::OPC_Decode, 234, 10, 210, 2, // Opcode: LD
/* 2191 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 2204
/* 2195 */    MCD::OPC_CheckPredicate, 99, 31, 0, // Skip to: 2230
/* 2199 */    MCD::OPC_Decode, 146, 16, 210, 2, // Opcode: SCD
/* 2204 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 2217
/* 2208 */    MCD::OPC_CheckPredicate, 101, 18, 0, // Skip to: 2230
/* 2212 */    MCD::OPC_Decode, 161, 16, 212, 2, // Opcode: SDC164
/* 2217 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 2230
/* 2221 */    MCD::OPC_CheckPredicate, 85, 5, 0, // Skip to: 2230
/* 2225 */    MCD::OPC_Decode, 153, 16, 210, 2, // Opcode: SD
/* 2230 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMips64] && Bits[Mips::FeatureCnMips] && !Bits[Mips::FeatureMicroMips]);
  case 5:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 6:
    return (Bits[Mips::FeatureMicroMips]);
  case 7:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 8:
    return (Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 9:
    return (Bits[Mips::FeatureDSPR2] && Bits[Mips::FeatureMicroMips]);
  case 10:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 11:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips]);
  case 12:
    return (Bits[Mips::FeatureDSPR3] && Bits[Mips::FeatureMicroMips]);
  case 13:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureMicroMips]);
  case 14:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 15:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 16:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 17:
    return (Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips64r6]);
  case 20:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 21:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 22:
    return (!Bits[Mips::FeatureMips16]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 30:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 31:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 32:
    return (Bits[Mips::FeatureDSP]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 34:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 35:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 36:
    return (Bits[Mips::FeatureDSP] && !Bits[Mips::FeatureMicroMips]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMicroMips]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMT] && !Bits[Mips::FeatureMicroMips]);
  case 39:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 41:
    return (!Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 62:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 63:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 64:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 65:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 66:
    return (Bits[Mips::FeatureDSPR2]);
  case 67:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 68:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2]);
  case 69:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 70:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 71:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 72:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 73:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && !Bits[Mips::FeatureMicroMips]);
  case 74:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 75:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 76:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 77:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 78:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 79:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 80:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 81:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 82:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips64r6]);
  case 83:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 84:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 85:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMicroMips]);
  case 86:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2] && !Bits[Mips::FeatureMicroMips]);
  case 87:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 88:
    return (Bits[Mips::FeatureMips64]);
  case 89:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 90:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 91:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 92:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 93:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 94:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 95:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 96:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 97:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 98:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 99:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 100:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 101:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
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
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodePOOL16BEncodedField(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSImmWithOffsetAndScale<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImmWithOffsetAndScale<6, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLi16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget1SImm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    if (DecodePrefeOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    if (DecodeFMemMMR2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    if (DecodeLoadByte15(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    if (DecodeFMemCop2MMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    if (DecodeSynciR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    if (DecodeDAHIDATIMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    if (DecodeLoadByte9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    if (DecodeStoreEvaOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    if (DecodePOP35GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    if (DecodePOP37GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    if (DecodeBlezGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    if (DecodePOP65GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    if (DecodeBgtzGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 175:
    if (DecodePOP75GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 192:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 236:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 285:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 288:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 289:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 290:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 291:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 292:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 293:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 294:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 295:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 296:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 297:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 298:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 299:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 300:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 301:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 302:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 303:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 304:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 305:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 306:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 307:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 308:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 309:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 310:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 311:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 312:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 313:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 314:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 315:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 316:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 317:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 318:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 319:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 320:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 321:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 322:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 323:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 324:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 325:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 326:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 327:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 328:
    if (DecodeMemEVA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 329:
    if (DecodeCacheeOp_CacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 330:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 331:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 332:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 333:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 334:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 335:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 336:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 337:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 338:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 339:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 340:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 341:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 342:
    if (DecodeDAHIDATI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 343:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 344:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 345:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 346:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 347:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 348:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 349:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 350:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 351:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 352:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 353:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 354:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 355:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 356:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 357:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 358:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 359:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 360:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 361:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 362:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 363:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 364:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 365:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 366:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 367:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 368:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 369:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 370:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 371:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 372:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 373:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 374:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 375:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 376:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 377:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 378:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 379:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 380:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 381:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 382:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 383:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 384:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 385:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 386:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
