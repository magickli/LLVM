/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace BPF {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    FENTRY_CALL	= 18,
    PATCHPOINT	= 19,
    LOAD_STACK_GUARD	= 20,
    STATEPOINT	= 21,
    LOCAL_ESCAPE	= 22,
    FAULTING_OP	= 23,
    PATCHABLE_OP	= 24,
    PATCHABLE_FUNCTION_ENTER	= 25,
    PATCHABLE_RET	= 26,
    PATCHABLE_FUNCTION_EXIT	= 27,
    PATCHABLE_TAIL_CALL	= 28,
    PATCHABLE_EVENT_CALL	= 29,
    G_ADD	= 30,
    G_SUB	= 31,
    G_MUL	= 32,
    G_SDIV	= 33,
    G_UDIV	= 34,
    G_SREM	= 35,
    G_UREM	= 36,
    G_AND	= 37,
    G_OR	= 38,
    G_XOR	= 39,
    G_IMPLICIT_DEF	= 40,
    G_FRAME_INDEX	= 41,
    G_GLOBAL_VALUE	= 42,
    G_EXTRACT	= 43,
    G_UNMERGE_VALUES	= 44,
    G_INSERT	= 45,
    G_MERGE_VALUES	= 46,
    G_PTRTOINT	= 47,
    G_INTTOPTR	= 48,
    G_BITCAST	= 49,
    G_LOAD	= 50,
    G_STORE	= 51,
    G_BRCOND	= 52,
    G_BRINDIRECT	= 53,
    G_INTRINSIC	= 54,
    G_INTRINSIC_W_SIDE_EFFECTS	= 55,
    G_ANYEXT	= 56,
    G_TRUNC	= 57,
    G_CONSTANT	= 58,
    G_FCONSTANT	= 59,
    G_VASTART	= 60,
    G_VAARG	= 61,
    G_SEXT	= 62,
    G_ZEXT	= 63,
    G_SHL	= 64,
    G_LSHR	= 65,
    G_ASHR	= 66,
    G_ICMP	= 67,
    G_FCMP	= 68,
    G_SELECT	= 69,
    G_UADDE	= 70,
    G_USUBE	= 71,
    G_SADDO	= 72,
    G_SSUBO	= 73,
    G_UMULO	= 74,
    G_SMULO	= 75,
    G_UMULH	= 76,
    G_SMULH	= 77,
    G_FADD	= 78,
    G_FSUB	= 79,
    G_FMUL	= 80,
    G_FMA	= 81,
    G_FDIV	= 82,
    G_FREM	= 83,
    G_FPOW	= 84,
    G_FEXP	= 85,
    G_FEXP2	= 86,
    G_FLOG	= 87,
    G_FLOG2	= 88,
    G_FNEG	= 89,
    G_FPEXT	= 90,
    G_FPTRUNC	= 91,
    G_FPTOSI	= 92,
    G_FPTOUI	= 93,
    G_SITOFP	= 94,
    G_UITOFP	= 95,
    G_GEP	= 96,
    G_PTR_MASK	= 97,
    G_BR	= 98,
    G_INSERT_VECTOR_ELT	= 99,
    G_EXTRACT_VECTOR_ELT	= 100,
    G_SHUFFLE_VECTOR	= 101,
    ADD_ri	= 102,
    ADD_rr	= 103,
    ADJCALLSTACKDOWN	= 104,
    ADJCALLSTACKUP	= 105,
    AND_ri	= 106,
    AND_rr	= 107,
    BSWAP16	= 108,
    BSWAP32	= 109,
    BSWAP64	= 110,
    DIV_ri	= 111,
    DIV_rr	= 112,
    FI_ri	= 113,
    JAL	= 114,
    JEQ_ri	= 115,
    JEQ_rr	= 116,
    JMP	= 117,
    JNE_ri	= 118,
    JNE_rr	= 119,
    JSGE_ri	= 120,
    JSGE_rr	= 121,
    JSGT_ri	= 122,
    JSGT_rr	= 123,
    JUGE_ri	= 124,
    JUGE_rr	= 125,
    JUGT_ri	= 126,
    JUGT_rr	= 127,
    LDB	= 128,
    LDD	= 129,
    LDH	= 130,
    LDW	= 131,
    LD_ABS_B	= 132,
    LD_ABS_H	= 133,
    LD_ABS_W	= 134,
    LD_IND_B	= 135,
    LD_IND_H	= 136,
    LD_IND_W	= 137,
    LD_imm64	= 138,
    LD_pseudo	= 139,
    MOV_ri	= 140,
    MOV_rr	= 141,
    MUL_ri	= 142,
    MUL_rr	= 143,
    NOP	= 144,
    OR_ri	= 145,
    OR_rr	= 146,
    RET	= 147,
    SLL_ri	= 148,
    SLL_rr	= 149,
    SRA_ri	= 150,
    SRA_rr	= 151,
    SRL_ri	= 152,
    SRL_rr	= 153,
    STB	= 154,
    STD	= 155,
    STH	= 156,
    STW	= 157,
    SUB_ri	= 158,
    SUB_rr	= 159,
    Select	= 160,
    Select_Ri	= 161,
    XADD32	= 162,
    XADD64	= 163,
    XOR_ri	= 164,
    XOR_rr	= 165,
    INSTRUCTION_LIST_END = 166
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end BPF namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { BPF::R11, 0 };
static const MCPhysReg ImplicitList2[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const MCPhysReg ImplicitList3[] = { BPF::R6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo31[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };

extern const MCInstrDesc BPFInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #18 = FENTRY_CALL
  { 19,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #19 = PATCHPOINT
  { 20,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #20 = LOAD_STACK_GUARD
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = STATEPOINT
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #22 = LOCAL_ESCAPE
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = FAULTING_OP
  { 24,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #24 = PATCHABLE_OP
  { 25,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #25 = PATCHABLE_FUNCTION_ENTER
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = PATCHABLE_RET
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_FUNCTION_EXIT
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #28 = PATCHABLE_TAIL_CALL
  { 29,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #29 = PATCHABLE_EVENT_CALL
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_ADD
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_SUB
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_MUL
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_SDIV
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_UDIV
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_SREM
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_UREM
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_AND
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_OR
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #39 = G_XOR
  { 40,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_IMPLICIT_DEF
  { 41,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_FRAME_INDEX
  { 42,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_GLOBAL_VALUE
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #43 = G_EXTRACT
  { 44,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #44 = G_UNMERGE_VALUES
  { 45,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_INSERT
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #46 = G_MERGE_VALUES
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_PTRTOINT
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = G_INTTOPTR
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_BITCAST
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_LOAD
  { 51,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = G_STORE
  { 52,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #52 = G_BRCOND
  { 53,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #53 = G_BRINDIRECT
  { 54,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #54 = G_INTRINSIC
  { 55,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #55 = G_INTRINSIC_W_SIDE_EFFECTS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_ANYEXT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = G_TRUNC
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #58 = G_CONSTANT
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #59 = G_FCONSTANT
  { 60,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #60 = G_VASTART
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = G_VAARG
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_SEXT
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #63 = G_ZEXT
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #64 = G_SHL
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #65 = G_LSHR
  { 66,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #66 = G_ASHR
  { 67,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_ICMP
  { 68,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_FCMP
  { 69,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #69 = G_SELECT
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #70 = G_UADDE
  { 71,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #71 = G_USUBE
  { 72,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #72 = G_SADDO
  { 73,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #73 = G_SSUBO
  { 74,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #74 = G_UMULO
  { 75,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #75 = G_SMULO
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #76 = G_UMULH
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #77 = G_SMULH
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #78 = G_FADD
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_FSUB
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_FMUL
  { 81,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #81 = G_FMA
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #82 = G_FDIV
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #83 = G_FREM
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #84 = G_FPOW
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #85 = G_FEXP
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #86 = G_FEXP2
  { 87,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #87 = G_FLOG
  { 88,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #88 = G_FLOG2
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #89 = G_FNEG
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #90 = G_FPEXT
  { 91,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #91 = G_FPTRUNC
  { 92,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #92 = G_FPTOSI
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #93 = G_FPTOUI
  { 94,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #94 = G_SITOFP
  { 95,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #95 = G_UITOFP
  { 96,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #96 = G_GEP
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #97 = G_PTR_MASK
  { 98,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #98 = G_BR
  { 99,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #99 = G_INSERT_VECTOR_ELT
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #100 = G_EXTRACT_VECTOR_ELT
  { 101,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #101 = G_SHUFFLE_VECTOR
  { 102,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = ADD_ri
  { 103,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #103 = ADD_rr
  { 104,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #104 = ADJCALLSTACKDOWN
  { 105,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #105 = ADJCALLSTACKUP
  { 106,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #106 = AND_ri
  { 107,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #107 = AND_rr
  { 108,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #108 = BSWAP16
  { 109,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #109 = BSWAP32
  { 110,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #110 = BSWAP64
  { 111,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #111 = DIV_ri
  { 112,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = DIV_rr
  { 113,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #113 = FI_ri
  { 114,	1,	0,	8,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #114 = JAL
  { 115,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #115 = JEQ_ri
  { 116,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #116 = JEQ_rr
  { 117,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #117 = JMP
  { 118,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #118 = JNE_ri
  { 119,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #119 = JNE_rr
  { 120,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #120 = JSGE_ri
  { 121,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #121 = JSGE_rr
  { 122,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #122 = JSGT_ri
  { 123,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #123 = JSGT_rr
  { 124,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #124 = JUGE_ri
  { 125,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #125 = JUGE_rr
  { 126,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #126 = JUGT_ri
  { 127,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #127 = JUGT_rr
  { 128,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #128 = LDB
  { 129,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #129 = LDD
  { 130,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #130 = LDH
  { 131,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #131 = LDW
  { 132,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #132 = LD_ABS_B
  { 133,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #133 = LD_ABS_H
  { 134,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo34, -1 ,nullptr },  // Inst #134 = LD_ABS_W
  { 135,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo35, -1 ,nullptr },  // Inst #135 = LD_IND_B
  { 136,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo35, -1 ,nullptr },  // Inst #136 = LD_IND_H
  { 137,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo35, -1 ,nullptr },  // Inst #137 = LD_IND_W
  { 138,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #138 = LD_imm64
  { 139,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #139 = LD_pseudo
  { 140,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #140 = MOV_ri
  { 141,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #141 = MOV_rr
  { 142,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #142 = MUL_ri
  { 143,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #143 = MUL_rr
  { 144,	1,	0,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #144 = NOP
  { 145,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #145 = OR_ri
  { 146,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #146 = OR_rr
  { 147,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #147 = RET
  { 148,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #148 = SLL_ri
  { 149,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #149 = SLL_rr
  { 150,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #150 = SRA_ri
  { 151,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #151 = SRA_rr
  { 152,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #152 = SRL_ri
  { 153,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #153 = SRL_rr
  { 154,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #154 = STB
  { 155,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #155 = STD
  { 156,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #156 = STH
  { 157,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #157 = STW
  { 158,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #158 = SUB_ri
  { 159,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #159 = SUB_rr
  { 160,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #160 = Select
  { 161,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #161 = Select_Ri
  { 162,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #162 = XADD32
  { 163,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #163 = XADD64
  { 164,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #164 = XOR_ri
  { 165,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #165 = XOR_rr
};

extern const char BPFInstrNameData[] = {
  /* 0 */ 'X', 'A', 'D', 'D', '3', '2', 0,
  /* 7 */ 'B', 'S', 'W', 'A', 'P', '3', '2', 0,
  /* 15 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 23 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 31 */ 'X', 'A', 'D', 'D', '6', '4', 0,
  /* 38 */ 'B', 'S', 'W', 'A', 'P', '6', '4', 0,
  /* 46 */ 'L', 'D', '_', 'i', 'm', 'm', '6', '4', 0,
  /* 55 */ 'B', 'S', 'W', 'A', 'P', '1', '6', 0,
  /* 63 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 69 */ 'L', 'D', 'B', 0,
  /* 73 */ 'S', 'T', 'B', 0,
  /* 77 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 84 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 90 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'B', 0,
  /* 99 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'B', 0,
  /* 108 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 120 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 130 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 138 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 145 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 152 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 158 */ 'L', 'D', 'D', 0,
  /* 162 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 168 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 181 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 190 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 207 */ 'S', 'T', 'D', 0,
  /* 211 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 219 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 232 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 240 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 247 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 260 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 268 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 278 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 293 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 308 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 315 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 330 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 344 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 358 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 365 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 373 */ 'L', 'D', 'H', 0,
  /* 377 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 385 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 393 */ 'S', 'T', 'H', 0,
  /* 397 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'H', 0,
  /* 406 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'H', 0,
  /* 415 */ 'P', 'H', 'I', 0,
  /* 419 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 428 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 437 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 448 */ 'J', 'A', 'L', 0,
  /* 452 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 461 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 470 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 476 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 496 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 517 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 529 */ 'K', 'I', 'L', 'L', 0,
  /* 534 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 541 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 547 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 554 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 561 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 568 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 578 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 594 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 611 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 619 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 627 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 635 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 643 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 652 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 658 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 667 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 676 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 683 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 690 */ 'J', 'M', 'P', 0,
  /* 694 */ 'N', 'O', 'P', 0,
  /* 698 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 711 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 723 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 738 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 745 */ 'G', '_', 'B', 'R', 0,
  /* 750 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 775 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 782 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 789 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 806 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 812 */ 'G', '_', 'O', 'R', 0,
  /* 817 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 828 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 845 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 860 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 877 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 904 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 914 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 923 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 936 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 950 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 974 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 995 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1015 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1027 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1038 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1049 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1060 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1071 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1081 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1096 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1105 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1115 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1123 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1130 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1139 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1146 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1153 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1160 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1167 */ 'L', 'D', 'W', 0,
  /* 1171 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1178 */ 'S', 'T', 'W', 0,
  /* 1182 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'W', 0,
  /* 1191 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'W', 0,
  /* 1200 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1214 */ 'C', 'O', 'P', 'Y', 0,
  /* 1219 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'R', 'i', 0,
  /* 1229 */ 'S', 'R', 'A', '_', 'r', 'i', 0,
  /* 1236 */ 'S', 'U', 'B', '_', 'r', 'i', 0,
  /* 1243 */ 'A', 'D', 'D', '_', 'r', 'i', 0,
  /* 1250 */ 'A', 'N', 'D', '_', 'r', 'i', 0,
  /* 1257 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', 0,
  /* 1265 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', 0,
  /* 1273 */ 'J', 'N', 'E', '_', 'r', 'i', 0,
  /* 1280 */ 'F', 'I', '_', 'r', 'i', 0,
  /* 1286 */ 'S', 'L', 'L', '_', 'r', 'i', 0,
  /* 1293 */ 'S', 'R', 'L', '_', 'r', 'i', 0,
  /* 1300 */ 'M', 'U', 'L', '_', 'r', 'i', 0,
  /* 1307 */ 'J', 'E', 'Q', '_', 'r', 'i', 0,
  /* 1314 */ 'X', 'O', 'R', '_', 'r', 'i', 0,
  /* 1321 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', 0,
  /* 1329 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', 0,
  /* 1337 */ 'D', 'I', 'V', '_', 'r', 'i', 0,
  /* 1344 */ 'M', 'O', 'V', '_', 'r', 'i', 0,
  /* 1351 */ 'L', 'D', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 1361 */ 'S', 'R', 'A', '_', 'r', 'r', 0,
  /* 1368 */ 'S', 'U', 'B', '_', 'r', 'r', 0,
  /* 1375 */ 'A', 'D', 'D', '_', 'r', 'r', 0,
  /* 1382 */ 'A', 'N', 'D', '_', 'r', 'r', 0,
  /* 1389 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', 0,
  /* 1397 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', 0,
  /* 1405 */ 'J', 'N', 'E', '_', 'r', 'r', 0,
  /* 1412 */ 'S', 'L', 'L', '_', 'r', 'r', 0,
  /* 1419 */ 'S', 'R', 'L', '_', 'r', 'r', 0,
  /* 1426 */ 'M', 'U', 'L', '_', 'r', 'r', 0,
  /* 1433 */ 'J', 'E', 'Q', '_', 'r', 'r', 0,
  /* 1440 */ 'X', 'O', 'R', '_', 'r', 'r', 0,
  /* 1447 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', 0,
  /* 1455 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', 0,
  /* 1463 */ 'D', 'I', 'V', '_', 'r', 'r', 0,
  /* 1470 */ 'M', 'O', 'V', '_', 'r', 'r', 0,
  /* 1477 */ 'S', 'e', 'l', 'e', 'c', 't', 0,
};

extern const unsigned BPFInstrNameIndices[] = {
    415U, 568U, 578U, 461U, 452U, 529U, 315U, 330U, 
    295U, 344U, 860U, 268U, 219U, 1214U, 240U, 1081U, 
    168U, 643U, 517U, 1049U, 190U, 1038U, 247U, 711U, 
    698U, 750U, 936U, 950U, 476U, 496U, 152U, 84U, 
    541U, 1153U, 1160U, 554U, 561U, 162U, 812U, 806U, 
    293U, 1200U, 278U, 904U, 828U, 1096U, 845U, 1060U, 
    817U, 1105U, 138U, 260U, 181U, 923U, 108U, 877U, 
    1130U, 130U, 1027U, 1015U, 1071U, 365U, 1123U, 1139U, 
    470U, 782U, 775U, 683U, 676U, 914U, 232U, 211U, 
    619U, 611U, 635U, 627U, 385U, 377U, 145U, 77U, 
    534U, 63U, 1146U, 547U, 1171U, 738U, 23U, 358U, 
    15U, 308U, 1115U, 120U, 419U, 428U, 658U, 667U, 
    652U, 437U, 745U, 995U, 974U, 789U, 1243U, 1375U, 
    594U, 723U, 1250U, 1382U, 55U, 7U, 38U, 1337U, 
    1463U, 1280U, 448U, 1307U, 1433U, 690U, 1273U, 1405U, 
    1257U, 1389U, 1321U, 1447U, 1265U, 1397U, 1329U, 1455U, 
    69U, 158U, 373U, 1167U, 99U, 406U, 1191U, 90U, 
    397U, 1182U, 46U, 1351U, 1344U, 1470U, 1300U, 1426U, 
    694U, 1315U, 1441U, 946U, 1286U, 1412U, 1229U, 1361U, 
    1293U, 1419U, 73U, 207U, 393U, 1178U, 1236U, 1368U, 
    1477U, 1219U, 0U, 31U, 1314U, 1440U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 166);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~BPFGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 166);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes {
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  type0 = 10,
  type1 = 11,
  type2 = 12,
  type3 = 13,
  type4 = 14,
  type5 = 15,
  u64imm = 16,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

