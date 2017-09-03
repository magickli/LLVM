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

namespace MSP430 {
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
    ADC16mi	= 102,
    ADC16mm	= 103,
    ADC16mr	= 104,
    ADC16ri	= 105,
    ADC16rm	= 106,
    ADC16rr	= 107,
    ADC8mi	= 108,
    ADC8mm	= 109,
    ADC8mr	= 110,
    ADC8ri	= 111,
    ADC8rm	= 112,
    ADC8rr	= 113,
    ADD16mi	= 114,
    ADD16mm	= 115,
    ADD16mr	= 116,
    ADD16ri	= 117,
    ADD16rm	= 118,
    ADD16rm_POST	= 119,
    ADD16rr	= 120,
    ADD8mi	= 121,
    ADD8mm	= 122,
    ADD8mr	= 123,
    ADD8ri	= 124,
    ADD8rm	= 125,
    ADD8rm_POST	= 126,
    ADD8rr	= 127,
    ADDframe	= 128,
    ADJCALLSTACKDOWN	= 129,
    ADJCALLSTACKUP	= 130,
    AND16mi	= 131,
    AND16mm	= 132,
    AND16mr	= 133,
    AND16ri	= 134,
    AND16rm	= 135,
    AND16rm_POST	= 136,
    AND16rr	= 137,
    AND8mi	= 138,
    AND8mm	= 139,
    AND8mr	= 140,
    AND8ri	= 141,
    AND8rm	= 142,
    AND8rm_POST	= 143,
    AND8rr	= 144,
    BIC16mm	= 145,
    BIC16mr	= 146,
    BIC16rm	= 147,
    BIC16rr	= 148,
    BIC8mm	= 149,
    BIC8mr	= 150,
    BIC8rm	= 151,
    BIC8rr	= 152,
    BIT16mi	= 153,
    BIT16mm	= 154,
    BIT16mr	= 155,
    BIT16ri	= 156,
    BIT16rm	= 157,
    BIT16rr	= 158,
    BIT8mi	= 159,
    BIT8mm	= 160,
    BIT8mr	= 161,
    BIT8ri	= 162,
    BIT8rm	= 163,
    BIT8rr	= 164,
    Bi	= 165,
    Bm	= 166,
    Br	= 167,
    CALLi	= 168,
    CALLm	= 169,
    CALLr	= 170,
    CMP16mi	= 171,
    CMP16mr	= 172,
    CMP16ri	= 173,
    CMP16rm	= 174,
    CMP16rr	= 175,
    CMP8mi	= 176,
    CMP8mr	= 177,
    CMP8ri	= 178,
    CMP8rm	= 179,
    CMP8rr	= 180,
    JCC	= 181,
    JMP	= 182,
    MOV16mi	= 183,
    MOV16mm	= 184,
    MOV16mr	= 185,
    MOV16ri	= 186,
    MOV16rm	= 187,
    MOV16rm_POST	= 188,
    MOV16rr	= 189,
    MOV8mi	= 190,
    MOV8mm	= 191,
    MOV8mr	= 192,
    MOV8ri	= 193,
    MOV8rm	= 194,
    MOV8rm_POST	= 195,
    MOV8rr	= 196,
    MOVZX16rm8	= 197,
    MOVZX16rr8	= 198,
    NOP	= 199,
    OR16mi	= 200,
    OR16mm	= 201,
    OR16mr	= 202,
    OR16ri	= 203,
    OR16rm	= 204,
    OR16rm_POST	= 205,
    OR16rr	= 206,
    OR8mi	= 207,
    OR8mm	= 208,
    OR8mr	= 209,
    OR8ri	= 210,
    OR8rm	= 211,
    OR8rm_POST	= 212,
    OR8rr	= 213,
    POP16r	= 214,
    PUSH16r	= 215,
    RET	= 216,
    RETI	= 217,
    SAR16r1	= 218,
    SAR16r1c	= 219,
    SAR8r1	= 220,
    SAR8r1c	= 221,
    SBC16mi	= 222,
    SBC16mm	= 223,
    SBC16mr	= 224,
    SBC16ri	= 225,
    SBC16rm	= 226,
    SBC16rr	= 227,
    SBC8mi	= 228,
    SBC8mm	= 229,
    SBC8mr	= 230,
    SBC8ri	= 231,
    SBC8rm	= 232,
    SBC8rr	= 233,
    SEXT16r	= 234,
    SHL16r1	= 235,
    SHL8r1	= 236,
    SUB16mi	= 237,
    SUB16mm	= 238,
    SUB16mr	= 239,
    SUB16ri	= 240,
    SUB16rm	= 241,
    SUB16rm_POST	= 242,
    SUB16rr	= 243,
    SUB8mi	= 244,
    SUB8mm	= 245,
    SUB8mr	= 246,
    SUB8ri	= 247,
    SUB8rm	= 248,
    SUB8rm_POST	= 249,
    SUB8rr	= 250,
    SWPB16r	= 251,
    Select16	= 252,
    Select8	= 253,
    Shl16	= 254,
    Shl8	= 255,
    Sra16	= 256,
    Sra8	= 257,
    Srl16	= 258,
    Srl8	= 259,
    XOR16mi	= 260,
    XOR16mm	= 261,
    XOR16mr	= 262,
    XOR16ri	= 263,
    XOR16rm	= 264,
    XOR16rm_POST	= 265,
    XOR16rr	= 266,
    XOR8mi	= 267,
    XOR8mm	= 268,
    XOR8mr	= 269,
    XOR8ri	= 270,
    XOR8rm	= 271,
    XOR8rm_POST	= 272,
    XOR8rr	= 273,
    ZEXT16r	= 274,
    INSTRUCTION_LIST_END = 275
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end MSP430 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

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
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
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
  { 102,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #102 = ADC16mi
  { 103,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #103 = ADC16mm
  { 104,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #104 = ADC16mr
  { 105,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #105 = ADC16ri
  { 106,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #106 = ADC16rm
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #107 = ADC16rr
  { 108,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #108 = ADC8mi
  { 109,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #109 = ADC8mm
  { 110,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #110 = ADC8mr
  { 111,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #111 = ADC8ri
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #112 = ADC8rm
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #113 = ADC8rr
  { 114,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #114 = ADD16mi
  { 115,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #115 = ADD16mm
  { 116,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #116 = ADD16mr
  { 117,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #117 = ADD16ri
  { 118,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #118 = ADD16rm
  { 119,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #119 = ADD16rm_POST
  { 120,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #120 = ADD16rr
  { 121,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #121 = ADD8mi
  { 122,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #122 = ADD8mm
  { 123,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #123 = ADD8mr
  { 124,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #124 = ADD8ri
  { 125,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #125 = ADD8rm
  { 126,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #126 = ADD8rm_POST
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #127 = ADD8rr
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, ImplicitList2, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #128 = ADDframe
  { 129,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #129 = ADJCALLSTACKDOWN
  { 130,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #130 = ADJCALLSTACKUP
  { 131,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #131 = AND16mi
  { 132,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #132 = AND16mm
  { 133,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #133 = AND16mr
  { 134,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #134 = AND16ri
  { 135,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #135 = AND16rm
  { 136,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #136 = AND16rm_POST
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #137 = AND16rr
  { 138,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #138 = AND8mi
  { 139,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #139 = AND8mm
  { 140,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #140 = AND8mr
  { 141,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #141 = AND8ri
  { 142,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #142 = AND8rm
  { 143,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #143 = AND8rm_POST
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #144 = AND8rr
  { 145,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #145 = BIC16mm
  { 146,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #146 = BIC16mr
  { 147,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #147 = BIC16rm
  { 148,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #148 = BIC16rr
  { 149,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #149 = BIC8mm
  { 150,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #150 = BIC8mr
  { 151,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #151 = BIC8rm
  { 152,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #152 = BIC8rr
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #153 = BIT16mi
  { 154,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #154 = BIT16mm
  { 155,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #155 = BIT16mr
  { 156,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #156 = BIT16ri
  { 157,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #157 = BIT16rm
  { 158,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #158 = BIT16rr
  { 159,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #159 = BIT8mi
  { 160,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #160 = BIT8mm
  { 161,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #161 = BIT8mr
  { 162,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #162 = BIT8ri
  { 163,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #163 = BIT8rm
  { 164,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #164 = BIT8rr
  { 165,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #165 = Bi
  { 166,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #166 = Bm
  { 167,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #167 = Br
  { 168,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #168 = CALLi
  { 169,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #169 = CALLm
  { 170,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo48, -1 ,nullptr },  // Inst #170 = CALLr
  { 171,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #171 = CMP16mi
  { 172,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #172 = CMP16mr
  { 173,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #173 = CMP16ri
  { 174,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #174 = CMP16rm
  { 175,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #175 = CMP16rr
  { 176,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #176 = CMP8mi
  { 177,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #177 = CMP8mr
  { 178,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #178 = CMP8ri
  { 179,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #179 = CMP8rm
  { 180,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #180 = CMP8rr
  { 181,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #181 = JCC
  { 182,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #182 = JMP
  { 183,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #183 = MOV16mi
  { 184,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #184 = MOV16mm
  { 185,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #185 = MOV16mr
  { 186,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #186 = MOV16ri
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #187 = MOV16rm
  { 188,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #188 = MOV16rm_POST
  { 189,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #189 = MOV16rr
  { 190,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #190 = MOV8mi
  { 191,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #191 = MOV8mm
  { 192,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #192 = MOV8mr
  { 193,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #193 = MOV8ri
  { 194,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #194 = MOV8rm
  { 195,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #195 = MOV8rm_POST
  { 196,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #196 = MOV8rr
  { 197,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #197 = MOVZX16rm8
  { 198,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #198 = MOVZX16rr8
  { 199,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #199 = NOP
  { 200,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #200 = OR16mi
  { 201,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #201 = OR16mm
  { 202,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #202 = OR16mr
  { 203,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #203 = OR16ri
  { 204,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #204 = OR16rm
  { 205,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #205 = OR16rm_POST
  { 206,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #206 = OR16rr
  { 207,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #207 = OR8mi
  { 208,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #208 = OR8mm
  { 209,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #209 = OR8mr
  { 210,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #210 = OR8ri
  { 211,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #211 = OR8rm
  { 212,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #212 = OR8rm_POST
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #213 = OR8rr
  { 214,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo48, -1 ,nullptr },  // Inst #214 = POP16r
  { 215,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo48, -1 ,nullptr },  // Inst #215 = PUSH16r
  { 216,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #216 = RET
  { 217,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #217 = RETI
  { 218,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #218 = SAR16r1
  { 219,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #219 = SAR16r1c
  { 220,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #220 = SAR8r1
  { 221,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #221 = SAR8r1c
  { 222,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #222 = SBC16mi
  { 223,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #223 = SBC16mm
  { 224,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #224 = SBC16mr
  { 225,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #225 = SBC16ri
  { 226,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #226 = SBC16rm
  { 227,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #227 = SBC16rr
  { 228,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #228 = SBC8mi
  { 229,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #229 = SBC8mm
  { 230,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #230 = SBC8mr
  { 231,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #231 = SBC8ri
  { 232,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #232 = SBC8rm
  { 233,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #233 = SBC8rr
  { 234,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #234 = SEXT16r
  { 235,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #235 = SHL16r1
  { 236,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #236 = SHL8r1
  { 237,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #237 = SUB16mi
  { 238,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #238 = SUB16mm
  { 239,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #239 = SUB16mr
  { 240,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #240 = SUB16ri
  { 241,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #241 = SUB16rm
  { 242,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #242 = SUB16rm_POST
  { 243,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #243 = SUB16rr
  { 244,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #244 = SUB8mi
  { 245,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #245 = SUB8mm
  { 246,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #246 = SUB8mr
  { 247,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #247 = SUB8ri
  { 248,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #248 = SUB8rm
  { 249,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #249 = SUB8rm_POST
  { 250,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #250 = SUB8rr
  { 251,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #251 = SWPB16r
  { 252,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, ImplicitList1, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #252 = Select16
  { 253,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, ImplicitList1, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #253 = Select8
  { 254,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #254 = Shl16
  { 255,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #255 = Shl8
  { 256,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #256 = Sra16
  { 257,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #257 = Sra8
  { 258,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #258 = Srl16
  { 259,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #259 = Srl8
  { 260,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #260 = XOR16mi
  { 261,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #261 = XOR16mm
  { 262,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #262 = XOR16mr
  { 263,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #263 = XOR16ri
  { 264,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #264 = XOR16rm
  { 265,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #265 = XOR16rm_POST
  { 266,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #266 = XOR16rr
  { 267,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #267 = XOR8mi
  { 268,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #268 = XOR8mm
  { 269,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #269 = XOR8mr
  { 270,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #270 = XOR8ri
  { 271,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #271 = XOR8rm
  { 272,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #272 = XOR8rm_POST
  { 273,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #273 = XOR8rr
  { 274,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #274 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 38 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 46 */ 'S', 'r', 'a', '1', '6', 0,
  /* 52 */ 'S', 'h', 'l', '1', '6', 0,
  /* 58 */ 'S', 'r', 'l', '1', '6', 0,
  /* 64 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 73 */ 'S', 'r', 'a', '8', 0,
  /* 78 */ 'S', 'h', 'l', '8', 0,
  /* 83 */ 'S', 'r', 'l', '8', 0,
  /* 88 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 99 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 110 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 118 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 124 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 131 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 137 */ 'J', 'C', 'C', 0,
  /* 141 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 153 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 163 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 171 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 178 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 185 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 191 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 197 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 210 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 219 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 236 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 244 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 257 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 265 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 272 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 285 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 293 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 303 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 318 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 333 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 340 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 355 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 369 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 383 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 390 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 398 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 406 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 414 */ 'P', 'H', 'I', 0,
  /* 418 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 427 */ 'R', 'E', 'T', 'I', 0,
  /* 432 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 441 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
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
  /* 1115 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1128 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1141 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1154 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1167 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1180 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1192 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1204 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1216 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1228 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1240 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1248 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1255 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1264 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1271 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1278 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1285 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1292 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1299 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1313 */ 'C', 'O', 'P', 'Y', 0,
  /* 1318 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 1327 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 1335 */ 'A', 'D', 'D', 'f', 'r', 'a', 'm', 'e', 0,
  /* 1344 */ 'B', 'i', 0,
  /* 1347 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 1353 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 1361 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 1369 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 1377 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 1385 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 1393 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 1401 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 1409 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 1417 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 1425 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 1432 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 1439 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 1446 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 1453 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 1460 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 1467 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 1474 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 1481 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 1488 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 1496 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 1504 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 1512 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 1520 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 1528 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 1536 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 1544 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 1552 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 1560 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 1567 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 1574 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 1581 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 1588 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 1595 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 1602 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 1609 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 1616 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 1623 */ 'B', 'm', 0,
  /* 1626 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 1632 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 1640 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 1648 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 1656 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 1664 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 1672 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 1680 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 1688 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 1696 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 1704 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 1711 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 1718 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 1725 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 1732 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 1739 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 1746 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 1753 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 1760 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 1767 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 1775 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 1783 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 1791 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 1799 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 1807 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 1815 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1823 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1831 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1839 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1847 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1854 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1861 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1868 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1875 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1882 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1889 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1896 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1903 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1910 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1917 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1925 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1933 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1940 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1948 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1956 */ 'B', 'r', 0,
  /* 1959 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1965 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1973 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1981 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1989 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1997 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 2005 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 2013 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 2021 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 2029 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 2037 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 2045 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 2052 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 2059 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 2066 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 2073 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 2080 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 2087 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 2094 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 2101 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 2108 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 2115 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 2123 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 2131 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 2139 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 2147 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 2155 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 2163 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 2171 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 2179 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 2187 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 2195 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 2202 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 2209 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 2216 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 2223 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 2230 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 2237 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 2244 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 2251 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 2258 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    414U, 568U, 578U, 461U, 452U, 529U, 340U, 355U, 
    320U, 369U, 860U, 293U, 244U, 1313U, 265U, 1081U, 
    197U, 643U, 517U, 1049U, 219U, 1038U, 272U, 711U, 
    698U, 750U, 936U, 950U, 476U, 496U, 185U, 131U, 
    541U, 1278U, 1285U, 554U, 561U, 191U, 812U, 806U, 
    318U, 1299U, 303U, 904U, 828U, 1096U, 845U, 1060U, 
    817U, 1105U, 171U, 285U, 210U, 923U, 141U, 877U, 
    1255U, 163U, 1027U, 1015U, 1071U, 390U, 1248U, 1264U, 
    470U, 782U, 775U, 683U, 676U, 914U, 257U, 236U, 
    619U, 611U, 635U, 627U, 406U, 398U, 178U, 124U, 
    534U, 118U, 1271U, 547U, 1292U, 738U, 38U, 383U, 
    30U, 333U, 1240U, 153U, 418U, 432U, 658U, 667U, 
    652U, 441U, 745U, 995U, 974U, 789U, 1369U, 1648U, 
    1981U, 1504U, 1783U, 2131U, 1439U, 1718U, 2059U, 1574U, 
    1861U, 2209U, 1377U, 1664U, 1997U, 1512U, 1799U, 1128U, 
    2147U, 1446U, 1732U, 2073U, 1581U, 1875U, 1192U, 2223U, 
    1335U, 594U, 723U, 1385U, 1672U, 2005U, 1520U, 1807U, 
    1141U, 2155U, 1453U, 1739U, 2080U, 1588U, 1882U, 1204U, 
    2230U, 1656U, 1989U, 1791U, 2139U, 1725U, 2066U, 1868U, 
    2216U, 1409U, 1688U, 2029U, 1544U, 1831U, 2179U, 1474U, 
    1753U, 2101U, 1609U, 1903U, 2251U, 1344U, 1623U, 1956U, 
    1347U, 1626U, 1959U, 1393U, 2013U, 1528U, 1815U, 2163U, 
    1460U, 2087U, 1595U, 1889U, 2237U, 137U, 690U, 1417U, 
    1696U, 2037U, 1552U, 1839U, 1167U, 2187U, 1481U, 1760U, 
    2108U, 1616U, 1910U, 1228U, 2258U, 88U, 99U, 694U, 
    1402U, 1681U, 2022U, 1537U, 1824U, 1155U, 2172U, 1468U, 
    1747U, 2095U, 1603U, 1897U, 1217U, 2245U, 1933U, 1925U, 
    946U, 427U, 8U, 1318U, 23U, 1327U, 1361U, 1640U, 
    1973U, 1496U, 1775U, 2123U, 1432U, 1711U, 2052U, 1567U, 
    1854U, 2202U, 1940U, 0U, 16U, 1353U, 1632U, 1965U, 
    1488U, 1767U, 1115U, 2115U, 1425U, 1704U, 2045U, 1560U, 
    1847U, 1180U, 2195U, 1917U, 64U, 110U, 52U, 78U, 
    46U, 73U, 58U, 83U, 1401U, 1680U, 2021U, 1536U, 
    1823U, 1154U, 2171U, 1467U, 1746U, 2094U, 1602U, 1896U, 
    1216U, 2244U, 1948U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 275);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 275);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  type0 = 11,
  type1 = 12,
  type2 = 13,
  type3 = 14,
  type4 = 15,
  type5 = 16,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

