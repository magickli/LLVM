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

namespace Lanai {
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
    ADDC_F_I_HI	= 102,
    ADDC_F_I_LO	= 103,
    ADDC_F_R	= 104,
    ADDC_I_HI	= 105,
    ADDC_I_LO	= 106,
    ADDC_R	= 107,
    ADD_F_I_HI	= 108,
    ADD_F_I_LO	= 109,
    ADD_F_R	= 110,
    ADD_I_HI	= 111,
    ADD_I_LO	= 112,
    ADD_R	= 113,
    ADJCALLSTACKDOWN	= 114,
    ADJCALLSTACKUP	= 115,
    ADJDYNALLOC	= 116,
    AND_F_I_HI	= 117,
    AND_F_I_LO	= 118,
    AND_F_R	= 119,
    AND_I_HI	= 120,
    AND_I_LO	= 121,
    AND_R	= 122,
    BRCC	= 123,
    BRIND_CC	= 124,
    BRIND_CCA	= 125,
    BRR	= 126,
    BT	= 127,
    CALL	= 128,
    CALLR	= 129,
    JR	= 130,
    LDADDR	= 131,
    LDBs_RI	= 132,
    LDBs_RR	= 133,
    LDBz_RI	= 134,
    LDBz_RR	= 135,
    LDHs_RI	= 136,
    LDHs_RR	= 137,
    LDHz_RI	= 138,
    LDHz_RR	= 139,
    LDW_RI	= 140,
    LDW_RR	= 141,
    LDWz_RR	= 142,
    LEADZ	= 143,
    LOG0	= 144,
    LOG1	= 145,
    LOG2	= 146,
    LOG3	= 147,
    LOG4	= 148,
    MOVHI	= 149,
    NOP	= 150,
    OR_F_I_HI	= 151,
    OR_F_I_LO	= 152,
    OR_F_R	= 153,
    OR_I_HI	= 154,
    OR_I_LO	= 155,
    OR_R	= 156,
    POPC	= 157,
    RET	= 158,
    SA_F_I	= 159,
    SA_I	= 160,
    SCC	= 161,
    SELECT	= 162,
    SFSUB_F_RI_HI	= 163,
    SFSUB_F_RI_LO	= 164,
    SFSUB_F_RR	= 165,
    SHL_F_R	= 166,
    SHL_R	= 167,
    SLI	= 168,
    SL_F_I	= 169,
    SL_I	= 170,
    SRA_F_R	= 171,
    SRA_R	= 172,
    SRL_F_R	= 173,
    SRL_R	= 174,
    STADDR	= 175,
    STB_RI	= 176,
    STB_RR	= 177,
    STH_RI	= 178,
    STH_RR	= 179,
    SUBB_F_I_HI	= 180,
    SUBB_F_I_LO	= 181,
    SUBB_F_R	= 182,
    SUBB_I_HI	= 183,
    SUBB_I_LO	= 184,
    SUBB_R	= 185,
    SUB_F_I_HI	= 186,
    SUB_F_I_LO	= 187,
    SUB_F_R	= 188,
    SUB_I_HI	= 189,
    SUB_I_LO	= 190,
    SUB_R	= 191,
    SW_RI	= 192,
    SW_RR	= 193,
    TRAILZ	= 194,
    XOR_F_I_HI	= 195,
    XOR_F_I_LO	= 196,
    XOR_F_R	= 197,
    XOR_I_HI	= 198,
    XOR_I_LO	= 199,
    XOR_R	= 200,
    INSTRUCTION_LIST_END = 201
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end Sched namespace
} // end Lanai namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SR, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::RCA, 0 };

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
static const MCOperandInfo OperandInfo28[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
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
  { 102,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #102 = ADDC_F_I_HI
  { 103,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #103 = ADDC_F_I_LO
  { 104,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #104 = ADDC_F_R
  { 105,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #105 = ADDC_I_HI
  { 106,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #106 = ADDC_I_LO
  { 107,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #107 = ADDC_R
  { 108,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #108 = ADD_F_I_HI
  { 109,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #109 = ADD_F_I_LO
  { 110,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #110 = ADD_F_R
  { 111,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #111 = ADD_I_HI
  { 112,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #112 = ADD_I_LO
  { 113,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #113 = ADD_R
  { 114,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #114 = ADJCALLSTACKDOWN
  { 115,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #115 = ADJCALLSTACKUP
  { 116,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo30, -1 ,nullptr },  // Inst #116 = ADJDYNALLOC
  { 117,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #117 = AND_F_I_HI
  { 118,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #118 = AND_F_I_LO
  { 119,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #119 = AND_F_R
  { 120,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #120 = AND_I_HI
  { 121,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #121 = AND_I_LO
  { 122,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #122 = AND_R
  { 123,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #123 = BRCC
  { 124,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #124 = BRIND_CC
  { 125,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #125 = BRIND_CCA
  { 126,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #126 = BRR
  { 127,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #127 = BT
  { 128,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #128 = CALL
  { 129,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo33, -1 ,nullptr },  // Inst #129 = CALLR
  { 130,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #130 = JR
  { 131,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #131 = LDADDR
  { 132,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #132 = LDBs_RI
  { 133,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #133 = LDBs_RR
  { 134,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #134 = LDBz_RI
  { 135,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #135 = LDBz_RR
  { 136,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #136 = LDHs_RI
  { 137,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #137 = LDHs_RR
  { 138,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #138 = LDHz_RI
  { 139,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #139 = LDHz_RR
  { 140,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #140 = LDW_RI
  { 141,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #141 = LDW_RR
  { 142,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #142 = LDWz_RR
  { 143,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #143 = LEADZ
  { 144,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #144 = LOG0
  { 145,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #145 = LOG1
  { 146,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #146 = LOG2
  { 147,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #147 = LOG3
  { 148,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #148 = LOG4
  { 149,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #149 = MOVHI
  { 150,	0,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #150 = NOP
  { 151,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #151 = OR_F_I_HI
  { 152,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #152 = OR_F_I_LO
  { 153,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #153 = OR_F_R
  { 154,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #154 = OR_I_HI
  { 155,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #155 = OR_I_LO
  { 156,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #156 = OR_R
  { 157,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #157 = POPC
  { 158,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #158 = RET
  { 159,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #159 = SA_F_I
  { 160,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #160 = SA_I
  { 161,	2,	1,	4,	2,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #161 = SCC
  { 162,	4,	1,	4,	1,	0|(1ULL<<MCID::Select), 0x0ULL, ImplicitList1, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #162 = SELECT
  { 163,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #163 = SFSUB_F_RI_HI
  { 164,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #164 = SFSUB_F_RI_LO
  { 165,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #165 = SFSUB_F_RR
  { 166,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #166 = SHL_F_R
  { 167,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #167 = SHL_R
  { 168,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #168 = SLI
  { 169,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #169 = SL_F_I
  { 170,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #170 = SL_I
  { 171,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #171 = SRA_F_R
  { 172,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #172 = SRA_R
  { 173,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #173 = SRL_F_R
  { 174,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #174 = SRL_R
  { 175,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #175 = STADDR
  { 176,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #176 = STB_RI
  { 177,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #177 = STB_RR
  { 178,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #178 = STH_RI
  { 179,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #179 = STH_RR
  { 180,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #180 = SUBB_F_I_HI
  { 181,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #181 = SUBB_F_I_LO
  { 182,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #182 = SUBB_F_R
  { 183,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #183 = SUBB_I_HI
  { 184,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #184 = SUBB_I_LO
  { 185,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, ImplicitList1, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #185 = SUBB_R
  { 186,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #186 = SUB_F_I_HI
  { 187,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #187 = SUB_F_I_LO
  { 188,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #188 = SUB_F_R
  { 189,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #189 = SUB_I_HI
  { 190,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #190 = SUB_I_LO
  { 191,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #191 = SUB_R
  { 192,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #192 = SW_RI
  { 193,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #193 = SW_RR
  { 194,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #194 = TRAILZ
  { 195,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #195 = XOR_F_I_HI
  { 196,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #196 = XOR_F_I_LO
  { 197,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #197 = XOR_F_R
  { 198,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #198 = XOR_I_HI
  { 199,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #199 = XOR_I_LO
  { 200,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #200 = XOR_R
};

extern const char LanaiInstrNameData[] = {
  /* 0 */ 'L', 'O', 'G', '0', 0,
  /* 5 */ 'L', 'O', 'G', '1', 0,
  /* 10 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 18 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 26 */ 'L', 'O', 'G', '3', 0,
  /* 31 */ 'L', 'O', 'G', '4', 0,
  /* 36 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 'A', 0,
  /* 46 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 52 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 59 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 65 */ 'B', 'R', 'C', 'C', 0,
  /* 70 */ 'S', 'C', 'C', 0,
  /* 74 */ 'B', 'R', 'I', 'N', 'D', '_', 'C', 'C', 0,
  /* 83 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 95 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 105 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 113 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 125 */ 'P', 'O', 'P', 'C', 0,
  /* 130 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 137 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 144 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 150 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 156 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 169 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 178 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 195 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 203 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 216 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 224 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 231 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 244 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 252 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 262 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 277 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 292 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 299 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 314 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 328 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 342 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 349 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 357 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 365 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 373 */ 'P', 'H', 'I', 0,
  /* 377 */ 'M', 'O', 'V', 'H', 'I', 0,
  /* 383 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'H', 'I', 0,
  /* 397 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 407 */ 'S', 'U', 'B', '_', 'I', '_', 'H', 'I', 0,
  /* 416 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'H', 'I', 0,
  /* 426 */ 'A', 'D', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 435 */ 'A', 'N', 'D', '_', 'I', '_', 'H', 'I', 0,
  /* 444 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 456 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 467 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 479 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 490 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 501 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'H', 'I', 0,
  /* 512 */ 'X', 'O', 'R', '_', 'I', '_', 'H', 'I', 0,
  /* 521 */ 'S', 'L', 'I', 0,
  /* 525 */ 'S', 'T', 'B', '_', 'R', 'I', 0,
  /* 532 */ 'S', 'T', 'H', '_', 'R', 'I', 0,
  /* 539 */ 'L', 'D', 'W', '_', 'R', 'I', 0,
  /* 546 */ 'S', 'W', '_', 'R', 'I', 0,
  /* 552 */ 'L', 'D', 'B', 's', '_', 'R', 'I', 0,
  /* 560 */ 'L', 'D', 'H', 's', '_', 'R', 'I', 0,
  /* 568 */ 'L', 'D', 'B', 'z', '_', 'R', 'I', 0,
  /* 576 */ 'L', 'D', 'H', 'z', '_', 'R', 'I', 0,
  /* 584 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 593 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 602 */ 'S', 'A', '_', 'I', 0,
  /* 607 */ 'S', 'A', '_', 'F', '_', 'I', 0,
  /* 614 */ 'S', 'L', '_', 'F', '_', 'I', 0,
  /* 621 */ 'S', 'L', '_', 'I', 0,
  /* 626 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 637 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 646 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 655 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 661 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 681 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 702 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 714 */ 'K', 'I', 'L', 'L', 0,
  /* 719 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 726 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 732 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 739 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 746 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 753 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 763 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 779 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 796 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 804 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 812 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 820 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 828 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'I', '_', 'L', 'O', 0,
  /* 842 */ 'S', 'U', 'B', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 852 */ 'S', 'U', 'B', '_', 'I', '_', 'L', 'O', 0,
  /* 861 */ 'A', 'D', 'D', 'C', '_', 'I', '_', 'L', 'O', 0,
  /* 871 */ 'A', 'D', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 880 */ 'A', 'N', 'D', '_', 'I', '_', 'L', 'O', 0,
  /* 889 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 901 */ 'S', 'U', 'B', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 912 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 924 */ 'A', 'D', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 935 */ 'A', 'N', 'D', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 946 */ 'X', 'O', 'R', '_', 'F', '_', 'I', '_', 'L', 'O', 0,
  /* 957 */ 'X', 'O', 'R', '_', 'I', '_', 'L', 'O', 0,
  /* 966 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 975 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 981 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 990 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 999 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1006 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1013 */ 'N', 'O', 'P', 0,
  /* 1017 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1030 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1042 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1057 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1064 */ 'G', '_', 'B', 'R', 0,
  /* 1069 */ 'L', 'D', 'A', 'D', 'D', 'R', 0,
  /* 1076 */ 'S', 'T', 'A', 'D', 'D', 'R', 0,
  /* 1083 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1108 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1115 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1122 */ 'J', 'R', 0,
  /* 1125 */ 'C', 'A', 'L', 'L', 'R', 0,
  /* 1131 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1148 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1154 */ 'G', '_', 'O', 'R', 0,
  /* 1159 */ 'B', 'R', 'R', 0,
  /* 1163 */ 'S', 'T', 'B', '_', 'R', 'R', 0,
  /* 1170 */ 'S', 'F', 'S', 'U', 'B', '_', 'F', '_', 'R', 'R', 0,
  /* 1181 */ 'S', 'T', 'H', '_', 'R', 'R', 0,
  /* 1188 */ 'L', 'D', 'W', '_', 'R', 'R', 0,
  /* 1195 */ 'S', 'W', '_', 'R', 'R', 0,
  /* 1201 */ 'L', 'D', 'B', 's', '_', 'R', 'R', 0,
  /* 1209 */ 'L', 'D', 'H', 's', '_', 'R', 'R', 0,
  /* 1217 */ 'L', 'D', 'B', 'z', '_', 'R', 'R', 0,
  /* 1225 */ 'L', 'D', 'H', 'z', '_', 'R', 'R', 0,
  /* 1233 */ 'L', 'D', 'W', 'z', '_', 'R', 'R', 0,
  /* 1241 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1252 */ 'S', 'R', 'A', '_', 'R', 0,
  /* 1258 */ 'S', 'U', 'B', 'B', '_', 'R', 0,
  /* 1265 */ 'S', 'U', 'B', '_', 'R', 0,
  /* 1271 */ 'A', 'D', 'D', 'C', '_', 'R', 0,
  /* 1278 */ 'A', 'D', 'D', '_', 'R', 0,
  /* 1284 */ 'A', 'N', 'D', '_', 'R', 0,
  /* 1290 */ 'S', 'R', 'A', '_', 'F', '_', 'R', 0,
  /* 1298 */ 'S', 'U', 'B', 'B', '_', 'F', '_', 'R', 0,
  /* 1307 */ 'S', 'U', 'B', '_', 'F', '_', 'R', 0,
  /* 1315 */ 'A', 'D', 'D', 'C', '_', 'F', '_', 'R', 0,
  /* 1324 */ 'A', 'D', 'D', '_', 'F', '_', 'R', 0,
  /* 1332 */ 'A', 'N', 'D', '_', 'F', '_', 'R', 0,
  /* 1340 */ 'S', 'H', 'L', '_', 'F', '_', 'R', 0,
  /* 1348 */ 'S', 'R', 'L', '_', 'F', '_', 'R', 0,
  /* 1356 */ 'X', 'O', 'R', '_', 'F', '_', 'R', 0,
  /* 1364 */ 'S', 'H', 'L', '_', 'R', 0,
  /* 1370 */ 'S', 'R', 'L', '_', 'R', 0,
  /* 1376 */ 'X', 'O', 'R', '_', 'R', 0,
  /* 1382 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1399 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1414 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1431 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1458 */ 'B', 'T', 0,
  /* 1461 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1471 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1480 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1493 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1507 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1531 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1552 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1572 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1584 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1595 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1606 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1617 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1628 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1638 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1653 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1662 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1672 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1680 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1687 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1696 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1703 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1710 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1717 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1724 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1731 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1745 */ 'C', 'O', 'P', 'Y', 0,
  /* 1750 */ 'L', 'E', 'A', 'D', 'Z', 0,
  /* 1756 */ 'T', 'R', 'A', 'I', 'L', 'Z', 0,
};

extern const unsigned LanaiInstrNameIndices[] = {
    373U, 753U, 763U, 646U, 637U, 714U, 299U, 314U, 
    279U, 328U, 1414U, 252U, 203U, 1745U, 224U, 1638U, 
    156U, 966U, 702U, 1606U, 178U, 1595U, 231U, 1030U, 
    1017U, 1083U, 1493U, 1507U, 661U, 681U, 144U, 59U, 
    726U, 1710U, 1717U, 739U, 746U, 150U, 1154U, 1148U, 
    277U, 1731U, 262U, 1461U, 1382U, 1653U, 1399U, 1617U, 
    1241U, 1662U, 130U, 244U, 169U, 1480U, 83U, 1431U, 
    1687U, 105U, 1584U, 1572U, 1628U, 349U, 1680U, 1696U, 
    655U, 1115U, 1108U, 1006U, 999U, 1471U, 216U, 195U, 
    804U, 796U, 820U, 812U, 365U, 357U, 137U, 52U, 
    719U, 46U, 1703U, 732U, 1724U, 1057U, 18U, 342U, 
    10U, 292U, 1672U, 95U, 584U, 593U, 981U, 990U, 
    975U, 626U, 1064U, 1552U, 1531U, 1131U, 467U, 912U, 
    1315U, 416U, 861U, 1271U, 479U, 924U, 1324U, 426U, 
    871U, 1278U, 779U, 1042U, 113U, 490U, 935U, 1332U, 
    435U, 880U, 1284U, 65U, 74U, 36U, 1159U, 1458U, 
    676U, 1125U, 1122U, 1069U, 552U, 1201U, 568U, 1217U, 
    560U, 1209U, 576U, 1225U, 539U, 1188U, 1233U, 1750U, 
    0U, 5U, 13U, 26U, 31U, 377U, 1013U, 502U, 
    947U, 1357U, 513U, 958U, 1377U, 125U, 1503U, 607U, 
    602U, 70U, 1473U, 383U, 828U, 1170U, 1340U, 1364U, 
    521U, 614U, 621U, 1290U, 1252U, 1348U, 1370U, 1076U, 
    525U, 1163U, 532U, 1181U, 444U, 889U, 1298U, 397U, 
    842U, 1258U, 456U, 901U, 1307U, 407U, 852U, 1265U, 
    546U, 1195U, 1756U, 501U, 946U, 1356U, 512U, 957U, 
    1376U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 201);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, 201);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  type0 = 25,
  type1 = 26,
  type2 = 27,
  type3 = 28,
  type4 = 29,
  type5 = 30,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // End Lanai namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

