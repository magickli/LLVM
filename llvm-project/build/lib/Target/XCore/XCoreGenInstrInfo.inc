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

namespace XCore {
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
    ADD_2rus	= 102,
    ADD_3r	= 103,
    ADJCALLSTACKDOWN	= 104,
    ADJCALLSTACKUP	= 105,
    ANDNOT_2r	= 106,
    AND_3r	= 107,
    ASHR_l2rus	= 108,
    ASHR_l3r	= 109,
    BAU_1r	= 110,
    BITREV_l2r	= 111,
    BLACP_lu10	= 112,
    BLACP_u10	= 113,
    BLAT_lu6	= 114,
    BLAT_u6	= 115,
    BLA_1r	= 116,
    BLRB_lu10	= 117,
    BLRB_u10	= 118,
    BLRF_lu10	= 119,
    BLRF_u10	= 120,
    BRBF_lru6	= 121,
    BRBF_ru6	= 122,
    BRBT_lru6	= 123,
    BRBT_ru6	= 124,
    BRBU_lu6	= 125,
    BRBU_u6	= 126,
    BRFF_lru6	= 127,
    BRFF_ru6	= 128,
    BRFT_lru6	= 129,
    BRFT_ru6	= 130,
    BRFU_lu6	= 131,
    BRFU_u6	= 132,
    BRU_1r	= 133,
    BR_JT	= 134,
    BR_JT32	= 135,
    BYTEREV_l2r	= 136,
    CHKCT_2r	= 137,
    CHKCT_rus	= 138,
    CLRE_0R	= 139,
    CLRPT_1R	= 140,
    CLRSR_branch_lu6	= 141,
    CLRSR_branch_u6	= 142,
    CLRSR_lu6	= 143,
    CLRSR_u6	= 144,
    CLZ_l2r	= 145,
    CRC8_l4r	= 146,
    CRC_l3r	= 147,
    DCALL_0R	= 148,
    DENTSP_0R	= 149,
    DGETREG_1r	= 150,
    DIVS_l3r	= 151,
    DIVU_l3r	= 152,
    DRESTSP_0R	= 153,
    DRET_0R	= 154,
    ECALLF_1r	= 155,
    ECALLT_1r	= 156,
    EDU_1r	= 157,
    EEF_2r	= 158,
    EET_2r	= 159,
    EEU_1r	= 160,
    EH_RETURN	= 161,
    ENDIN_2r	= 162,
    ENTSP_lu6	= 163,
    ENTSP_u6	= 164,
    EQ_2rus	= 165,
    EQ_3r	= 166,
    EXTDP_lu6	= 167,
    EXTDP_u6	= 168,
    EXTSP_lu6	= 169,
    EXTSP_u6	= 170,
    FRAME_TO_ARGS_OFFSET	= 171,
    FREER_1r	= 172,
    FREET_0R	= 173,
    GETD_l2r	= 174,
    GETED_0R	= 175,
    GETET_0R	= 176,
    GETID_0R	= 177,
    GETKEP_0R	= 178,
    GETKSP_0R	= 179,
    GETN_l2r	= 180,
    GETPS_l2r	= 181,
    GETR_rus	= 182,
    GETSR_lu6	= 183,
    GETSR_u6	= 184,
    GETST_2r	= 185,
    GETTS_2r	= 186,
    INCT_2r	= 187,
    INITCP_2r	= 188,
    INITDP_2r	= 189,
    INITLR_l2r	= 190,
    INITPC_2r	= 191,
    INITSP_2r	= 192,
    INPW_l2rus	= 193,
    INSHR_2r	= 194,
    INT_2r	= 195,
    IN_2r	= 196,
    Int_MemBarrier	= 197,
    KCALL_1r	= 198,
    KCALL_lu6	= 199,
    KCALL_u6	= 200,
    KENTSP_lu6	= 201,
    KENTSP_u6	= 202,
    KRESTSP_lu6	= 203,
    KRESTSP_u6	= 204,
    KRET_0R	= 205,
    LADD_l5r	= 206,
    LD16S_3r	= 207,
    LD8U_3r	= 208,
    LDA16B_l3r	= 209,
    LDA16F_l3r	= 210,
    LDAPB_lu10	= 211,
    LDAPB_u10	= 212,
    LDAPF_lu10	= 213,
    LDAPF_lu10_ba	= 214,
    LDAPF_u10	= 215,
    LDAWB_l2rus	= 216,
    LDAWB_l3r	= 217,
    LDAWCP_lu6	= 218,
    LDAWCP_u6	= 219,
    LDAWDP_lru6	= 220,
    LDAWDP_ru6	= 221,
    LDAWFI	= 222,
    LDAWF_l2rus	= 223,
    LDAWF_l3r	= 224,
    LDAWSP_lru6	= 225,
    LDAWSP_ru6	= 226,
    LDC_lru6	= 227,
    LDC_ru6	= 228,
    LDET_0R	= 229,
    LDIVU_l5r	= 230,
    LDSED_0R	= 231,
    LDSPC_0R	= 232,
    LDSSR_0R	= 233,
    LDWCP_lru6	= 234,
    LDWCP_lu10	= 235,
    LDWCP_ru6	= 236,
    LDWCP_u10	= 237,
    LDWDP_lru6	= 238,
    LDWDP_ru6	= 239,
    LDWFI	= 240,
    LDWSP_lru6	= 241,
    LDWSP_ru6	= 242,
    LDW_2rus	= 243,
    LDW_3r	= 244,
    LMUL_l6r	= 245,
    LSS_3r	= 246,
    LSUB_l5r	= 247,
    LSU_3r	= 248,
    MACCS_l4r	= 249,
    MACCU_l4r	= 250,
    MJOIN_1r	= 251,
    MKMSK_2r	= 252,
    MKMSK_rus	= 253,
    MSYNC_1r	= 254,
    MUL_l3r	= 255,
    NEG	= 256,
    NOT	= 257,
    OR_3r	= 258,
    OUTCT_2r	= 259,
    OUTCT_rus	= 260,
    OUTPW_l2rus	= 261,
    OUTSHR_2r	= 262,
    OUTT_2r	= 263,
    OUT_2r	= 264,
    PEEK_2r	= 265,
    REMS_l3r	= 266,
    REMU_l3r	= 267,
    RETSP_lu6	= 268,
    RETSP_u6	= 269,
    SELECT_CC	= 270,
    SETCLK_l2r	= 271,
    SETCP_1r	= 272,
    SETC_l2r	= 273,
    SETC_lru6	= 274,
    SETC_ru6	= 275,
    SETDP_1r	= 276,
    SETD_2r	= 277,
    SETEV_1r	= 278,
    SETKEP_0R	= 279,
    SETN_l2r	= 280,
    SETPSC_2r	= 281,
    SETPS_l2r	= 282,
    SETPT_2r	= 283,
    SETRDY_l2r	= 284,
    SETSP_1r	= 285,
    SETSR_branch_lu6	= 286,
    SETSR_branch_u6	= 287,
    SETSR_lu6	= 288,
    SETSR_u6	= 289,
    SETTW_l2r	= 290,
    SETV_1r	= 291,
    SEXT_2r	= 292,
    SEXT_rus	= 293,
    SHL_2rus	= 294,
    SHL_3r	= 295,
    SHR_2rus	= 296,
    SHR_3r	= 297,
    SSYNC_0r	= 298,
    ST16_l3r	= 299,
    ST8_l3r	= 300,
    STET_0R	= 301,
    STSED_0R	= 302,
    STSPC_0R	= 303,
    STSSR_0R	= 304,
    STWDP_lru6	= 305,
    STWDP_ru6	= 306,
    STWFI	= 307,
    STWSP_lru6	= 308,
    STWSP_ru6	= 309,
    STW_2rus	= 310,
    STW_l3r	= 311,
    SUB_2rus	= 312,
    SUB_3r	= 313,
    SYNCR_1r	= 314,
    TESTCT_2r	= 315,
    TESTLCL_l2r	= 316,
    TESTWCT_2r	= 317,
    TSETMR_2r	= 318,
    TSETR_3r	= 319,
    TSTART_1R	= 320,
    WAITEF_1R	= 321,
    WAITET_1R	= 322,
    WAITEU_0R	= 323,
    XOR_l3r	= 324,
    ZEXT_2r	= 325,
    ZEXT_rus	= 326,
    INSTRUCTION_LIST_END = 327
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end XCore namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { XCore::SP, 0 };
static const MCPhysReg ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const MCPhysReg ImplicitList3[] = { XCore::R11, 0 };

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
static const MCOperandInfo OperandInfo28[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
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
  { 102,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = ADD_2rus
  { 103,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #103 = ADD_3r
  { 104,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #104 = ADJCALLSTACKDOWN
  { 105,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #105 = ADJCALLSTACKUP
  { 106,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #106 = ANDNOT_2r
  { 107,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #107 = AND_3r
  { 108,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #108 = ASHR_l2rus
  { 109,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #109 = ASHR_l3r
  { 110,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #110 = BAU_1r
  { 111,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #111 = BITREV_l2r
  { 112,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo3, -1 ,nullptr },  // Inst #112 = BLACP_lu10
  { 113,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo3, -1 ,nullptr },  // Inst #113 = BLACP_u10
  { 114,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #114 = BLAT_lu6
  { 115,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #115 = BLAT_u6
  { 116,	1,	0,	2,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo31, -1 ,nullptr },  // Inst #116 = BLA_1r
  { 117,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #117 = BLRB_lu10
  { 118,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #118 = BLRB_u10
  { 119,	1,	0,	4,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #119 = BLRF_lu10
  { 120,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #120 = BLRF_u10
  { 121,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #121 = BRBF_lru6
  { 122,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #122 = BRBF_ru6
  { 123,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #123 = BRBT_lru6
  { 124,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #124 = BRBT_ru6
  { 125,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #125 = BRBU_lu6
  { 126,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #126 = BRBU_u6
  { 127,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #127 = BRFF_lru6
  { 128,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #128 = BRFF_ru6
  { 129,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #129 = BRFT_lru6
  { 130,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #130 = BRFT_ru6
  { 131,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #131 = BRFU_lu6
  { 132,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #132 = BRFU_u6
  { 133,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #133 = BRU_1r
  { 134,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #134 = BR_JT
  { 135,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #135 = BR_JT32
  { 136,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #136 = BYTEREV_l2r
  { 137,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #137 = CHKCT_2r
  { 138,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #138 = CHKCT_rus
  { 139,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #139 = CLRE_0R
  { 140,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #140 = CLRPT_1R
  { 141,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #141 = CLRSR_branch_lu6
  { 142,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #142 = CLRSR_branch_u6
  { 143,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #143 = CLRSR_lu6
  { 144,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #144 = CLRSR_u6
  { 145,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #145 = CLZ_l2r
  { 146,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #146 = CRC8_l4r
  { 147,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #147 = CRC_l3r
  { 148,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #148 = DCALL_0R
  { 149,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #149 = DENTSP_0R
  { 150,	1,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #150 = DGETREG_1r
  { 151,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #151 = DIVS_l3r
  { 152,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #152 = DIVU_l3r
  { 153,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #153 = DRESTSP_0R
  { 154,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #154 = DRET_0R
  { 155,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #155 = ECALLF_1r
  { 156,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #156 = ECALLT_1r
  { 157,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #157 = EDU_1r
  { 158,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #158 = EEF_2r
  { 159,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #159 = EET_2r
  { 160,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #160 = EEU_1r
  { 161,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #161 = EH_RETURN
  { 162,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #162 = ENDIN_2r
  { 163,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #163 = ENTSP_lu6
  { 164,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #164 = ENTSP_u6
  { 165,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #165 = EQ_2rus
  { 166,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #166 = EQ_3r
  { 167,	1,	0,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #167 = EXTDP_lu6
  { 168,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #168 = EXTDP_u6
  { 169,	1,	0,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #169 = EXTSP_lu6
  { 170,	1,	0,	2,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #170 = EXTSP_u6
  { 171,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #171 = FRAME_TO_ARGS_OFFSET
  { 172,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #172 = FREER_1r
  { 173,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #173 = FREET_0R
  { 174,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #174 = GETD_l2r
  { 175,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #175 = GETED_0R
  { 176,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #176 = GETET_0R
  { 177,	0,	0,	2,	0,	0, 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #177 = GETID_0R
  { 178,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #178 = GETKEP_0R
  { 179,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #179 = GETKSP_0R
  { 180,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #180 = GETN_l2r
  { 181,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #181 = GETPS_l2r
  { 182,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #182 = GETR_rus
  { 183,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #183 = GETSR_lu6
  { 184,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #184 = GETSR_u6
  { 185,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #185 = GETST_2r
  { 186,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #186 = GETTS_2r
  { 187,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #187 = INCT_2r
  { 188,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #188 = INITCP_2r
  { 189,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #189 = INITDP_2r
  { 190,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #190 = INITLR_l2r
  { 191,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #191 = INITPC_2r
  { 192,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #192 = INITSP_2r
  { 193,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #193 = INPW_l2rus
  { 194,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #194 = INSHR_2r
  { 195,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #195 = INT_2r
  { 196,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #196 = IN_2r
  { 197,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #197 = Int_MemBarrier
  { 198,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #198 = KCALL_1r
  { 199,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #199 = KCALL_lu6
  { 200,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #200 = KCALL_u6
  { 201,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #201 = KENTSP_lu6
  { 202,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #202 = KENTSP_u6
  { 203,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #203 = KRESTSP_lu6
  { 204,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #204 = KRESTSP_u6
  { 205,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #205 = KRET_0R
  { 206,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #206 = LADD_l5r
  { 207,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #207 = LD16S_3r
  { 208,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #208 = LD8U_3r
  { 209,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #209 = LDA16B_l3r
  { 210,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #210 = LDA16F_l3r
  { 211,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #211 = LDAPB_lu10
  { 212,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #212 = LDAPB_u10
  { 213,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #213 = LDAPF_lu10
  { 214,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #214 = LDAPF_lu10_ba
  { 215,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #215 = LDAPF_u10
  { 216,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #216 = LDAWB_l2rus
  { 217,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #217 = LDAWB_l3r
  { 218,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #218 = LDAWCP_lu6
  { 219,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #219 = LDAWCP_u6
  { 220,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #220 = LDAWDP_lru6
  { 221,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #221 = LDAWDP_ru6
  { 222,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #222 = LDAWFI
  { 223,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #223 = LDAWF_l2rus
  { 224,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #224 = LDAWF_l3r
  { 225,	2,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #225 = LDAWSP_lru6
  { 226,	2,	1,	2,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #226 = LDAWSP_ru6
  { 227,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #227 = LDC_lru6
  { 228,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #228 = LDC_ru6
  { 229,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #229 = LDET_0R
  { 230,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #230 = LDIVU_l5r
  { 231,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #231 = LDSED_0R
  { 232,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #232 = LDSPC_0R
  { 233,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #233 = LDSSR_0R
  { 234,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #234 = LDWCP_lru6
  { 235,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #235 = LDWCP_lu10
  { 236,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #236 = LDWCP_ru6
  { 237,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #237 = LDWCP_u10
  { 238,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #238 = LDWDP_lru6
  { 239,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #239 = LDWDP_ru6
  { 240,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #240 = LDWFI
  { 241,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #241 = LDWSP_lru6
  { 242,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #242 = LDWSP_ru6
  { 243,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #243 = LDW_2rus
  { 244,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #244 = LDW_3r
  { 245,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #245 = LMUL_l6r
  { 246,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #246 = LSS_3r
  { 247,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #247 = LSUB_l5r
  { 248,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #248 = LSU_3r
  { 249,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #249 = MACCS_l4r
  { 250,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #250 = MACCU_l4r
  { 251,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #251 = MJOIN_1r
  { 252,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #252 = MKMSK_2r
  { 253,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #253 = MKMSK_rus
  { 254,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #254 = MSYNC_1r
  { 255,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #255 = MUL_l3r
  { 256,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #256 = NEG
  { 257,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #257 = NOT
  { 258,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #258 = OR_3r
  { 259,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #259 = OUTCT_2r
  { 260,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #260 = OUTCT_rus
  { 261,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #261 = OUTPW_l2rus
  { 262,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #262 = OUTSHR_2r
  { 263,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #263 = OUTT_2r
  { 264,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #264 = OUT_2r
  { 265,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #265 = PEEK_2r
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #266 = REMS_l3r
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #267 = REMU_l3r
  { 268,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #268 = RETSP_lu6
  { 269,	1,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #269 = RETSP_u6
  { 270,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #270 = SELECT_CC
  { 271,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #271 = SETCLK_l2r
  { 272,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #272 = SETCP_1r
  { 273,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #273 = SETC_l2r
  { 274,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #274 = SETC_lru6
  { 275,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #275 = SETC_ru6
  { 276,	1,	0,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #276 = SETDP_1r
  { 277,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #277 = SETD_2r
  { 278,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #278 = SETEV_1r
  { 279,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, nullptr, -1 ,nullptr },  // Inst #279 = SETKEP_0R
  { 280,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #280 = SETN_l2r
  { 281,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #281 = SETPSC_2r
  { 282,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #282 = SETPS_l2r
  { 283,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #283 = SETPT_2r
  { 284,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #284 = SETRDY_l2r
  { 285,	1,	0,	2,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #285 = SETSP_1r
  { 286,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #286 = SETSR_branch_lu6
  { 287,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #287 = SETSR_branch_u6
  { 288,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #288 = SETSR_lu6
  { 289,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #289 = SETSR_u6
  { 290,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #290 = SETTW_l2r
  { 291,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #291 = SETV_1r
  { 292,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #292 = SEXT_2r
  { 293,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #293 = SEXT_rus
  { 294,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #294 = SHL_2rus
  { 295,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #295 = SHL_3r
  { 296,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #296 = SHR_2rus
  { 297,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #297 = SHR_3r
  { 298,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #298 = SSYNC_0r
  { 299,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #299 = ST16_l3r
  { 300,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #300 = ST8_l3r
  { 301,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #301 = STET_0R
  { 302,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #302 = STSED_0R
  { 303,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #303 = STSPC_0R
  { 304,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, nullptr, -1 ,nullptr },  // Inst #304 = STSSR_0R
  { 305,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #305 = STWDP_lru6
  { 306,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #306 = STWDP_ru6
  { 307,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #307 = STWFI
  { 308,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #308 = STWSP_lru6
  { 309,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList1, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #309 = STWSP_ru6
  { 310,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #310 = STW_2rus
  { 311,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #311 = STW_l3r
  { 312,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #312 = SUB_2rus
  { 313,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #313 = SUB_3r
  { 314,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #314 = SYNCR_1r
  { 315,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #315 = TESTCT_2r
  { 316,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #316 = TESTLCL_l2r
  { 317,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #317 = TESTWCT_2r
  { 318,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #318 = TSETMR_2r
  { 319,	3,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #319 = TSETR_3r
  { 320,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #320 = TSTART_1R
  { 321,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #321 = WAITEF_1R
  { 322,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #322 = WAITET_1R
  { 323,	0,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #323 = WAITEU_0R
  { 324,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #324 = XOR_l3r
  { 325,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #325 = ZEXT_2r
  { 326,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #326 = ZEXT_rus
};

extern const char XCoreInstrNameData[] = {
  /* 0 */ 'L', 'D', 'A', 'P', 'B', '_', 'u', '1', '0', 0,
  /* 10 */ 'B', 'L', 'R', 'B', '_', 'u', '1', '0', 0,
  /* 19 */ 'L', 'D', 'A', 'P', 'F', '_', 'u', '1', '0', 0,
  /* 29 */ 'B', 'L', 'R', 'F', '_', 'u', '1', '0', 0,
  /* 38 */ 'B', 'L', 'A', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 48 */ 'L', 'D', 'W', 'C', 'P', '_', 'u', '1', '0', 0,
  /* 58 */ 'L', 'D', 'A', 'P', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 69 */ 'B', 'L', 'R', 'B', '_', 'l', 'u', '1', '0', 0,
  /* 79 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 90 */ 'B', 'L', 'R', 'F', '_', 'l', 'u', '1', '0', 0,
  /* 100 */ 'B', 'L', 'A', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 111 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 122 */ 'B', 'R', '_', 'J', 'T', '3', '2', 0,
  /* 130 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 138 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 146 */ 'K', 'C', 'A', 'L', 'L', '_', 'u', '6', 0,
  /* 155 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'u', '6', 0,
  /* 165 */ 'E', 'X', 'T', 'D', 'P', '_', 'u', '6', 0,
  /* 174 */ 'R', 'E', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 183 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 193 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 204 */ 'E', 'X', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 213 */ 'C', 'L', 'R', 'S', 'R', '_', 'u', '6', 0,
  /* 222 */ 'G', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 231 */ 'S', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 240 */ 'B', 'L', 'A', 'T', '_', 'u', '6', 0,
  /* 248 */ 'B', 'R', 'B', 'U', '_', 'u', '6', 0,
  /* 256 */ 'B', 'R', 'F', 'U', '_', 'u', '6', 0,
  /* 264 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 280 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 296 */ 'K', 'C', 'A', 'L', 'L', '_', 'l', 'u', '6', 0,
  /* 306 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'l', 'u', '6', 0,
  /* 317 */ 'E', 'X', 'T', 'D', 'P', '_', 'l', 'u', '6', 0,
  /* 327 */ 'R', 'E', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 337 */ 'K', 'E', 'N', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 348 */ 'K', 'R', 'E', 'S', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 360 */ 'E', 'X', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 370 */ 'C', 'L', 'R', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 380 */ 'G', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 390 */ 'S', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 400 */ 'B', 'L', 'A', 'T', '_', 'l', 'u', '6', 0,
  /* 409 */ 'B', 'R', 'B', 'U', '_', 'l', 'u', '6', 0,
  /* 418 */ 'B', 'R', 'F', 'U', '_', 'l', 'u', '6', 0,
  /* 427 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 444 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 461 */ 'L', 'D', 'C', '_', 'r', 'u', '6', 0,
  /* 469 */ 'S', 'E', 'T', 'C', '_', 'r', 'u', '6', 0,
  /* 478 */ 'B', 'R', 'B', 'F', '_', 'r', 'u', '6', 0,
  /* 487 */ 'B', 'R', 'F', 'F', '_', 'r', 'u', '6', 0,
  /* 496 */ 'L', 'D', 'W', 'C', 'P', '_', 'r', 'u', '6', 0,
  /* 506 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 517 */ 'L', 'D', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 527 */ 'S', 'T', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 537 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 548 */ 'L', 'D', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 558 */ 'S', 'T', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 568 */ 'B', 'R', 'B', 'T', '_', 'r', 'u', '6', 0,
  /* 577 */ 'B', 'R', 'F', 'T', '_', 'r', 'u', '6', 0,
  /* 586 */ 'L', 'D', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 595 */ 'S', 'E', 'T', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 605 */ 'B', 'R', 'B', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 615 */ 'B', 'R', 'F', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 625 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 636 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 648 */ 'L', 'D', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 659 */ 'S', 'T', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 670 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 682 */ 'L', 'D', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 693 */ 'S', 'T', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 704 */ 'B', 'R', 'B', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 714 */ 'B', 'R', 'F', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 724 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 730 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 737 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 743 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 0,
  /* 753 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 765 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 775 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 783 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 790 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 797 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 803 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 809 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 822 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 831 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 848 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 856 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 869 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 877 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 884 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 897 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 905 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 915 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 930 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 945 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 952 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 967 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 981 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 995 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1002 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1010 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1018 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1026 */ 'L', 'D', 'A', 'W', 'F', 'I', 0,
  /* 1033 */ 'L', 'D', 'W', 'F', 'I', 0,
  /* 1039 */ 'S', 'T', 'W', 'F', 'I', 0,
  /* 1045 */ 'P', 'H', 'I', 0,
  /* 1049 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1058 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1067 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1078 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1087 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1096 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1102 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1122 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1143 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1155 */ 'K', 'I', 'L', 'L', 0,
  /* 1160 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1167 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1173 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1180 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1187 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1194 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1204 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1220 */ 'E', 'H', '_', 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 1230 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1247 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 1255 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 1263 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1271 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1279 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1288 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 1294 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1303 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1312 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1319 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1326 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1339 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1351 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1366 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1373 */ 'L', 'D', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 1382 */ 'S', 'T', 'S', 'P', 'C', '_', '0', 'R', 0,
  /* 1391 */ 'L', 'D', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 1400 */ 'S', 'T', 'S', 'E', 'D', '_', '0', 'R', 0,
  /* 1409 */ 'G', 'E', 'T', 'E', 'D', '_', '0', 'R', 0,
  /* 1418 */ 'G', 'E', 'T', 'I', 'D', '_', '0', 'R', 0,
  /* 1427 */ 'C', 'L', 'R', 'E', '_', '0', 'R', 0,
  /* 1435 */ 'D', 'C', 'A', 'L', 'L', '_', '0', 'R', 0,
  /* 1444 */ 'G', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1454 */ 'S', 'E', 'T', 'K', 'E', 'P', '_', '0', 'R', 0,
  /* 1464 */ 'G', 'E', 'T', 'K', 'S', 'P', '_', '0', 'R', 0,
  /* 1474 */ 'D', 'E', 'N', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1484 */ 'D', 'R', 'E', 'S', 'T', 'S', 'P', '_', '0', 'R', 0,
  /* 1495 */ 'L', 'D', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1504 */ 'S', 'T', 'S', 'S', 'R', '_', '0', 'R', 0,
  /* 1513 */ 'L', 'D', 'E', 'T', '_', '0', 'R', 0,
  /* 1521 */ 'F', 'R', 'E', 'E', 'T', '_', '0', 'R', 0,
  /* 1530 */ 'D', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1538 */ 'K', 'R', 'E', 'T', '_', '0', 'R', 0,
  /* 1546 */ 'G', 'E', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1555 */ 'S', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 1563 */ 'W', 'A', 'I', 'T', 'E', 'U', '_', '0', 'R', 0,
  /* 1573 */ 'W', 'A', 'I', 'T', 'E', 'F', '_', '1', 'R', 0,
  /* 1583 */ 'W', 'A', 'I', 'T', 'E', 'T', '_', '1', 'R', 0,
  /* 1593 */ 'C', 'L', 'R', 'P', 'T', '_', '1', 'R', 0,
  /* 1602 */ 'T', 'S', 'T', 'A', 'R', 'T', '_', '1', 'R', 0,
  /* 1612 */ 'G', '_', 'B', 'R', 0,
  /* 1617 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1642 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1649 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1656 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1673 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1679 */ 'G', '_', 'O', 'R', 0,
  /* 1684 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1695 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1712 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1727 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1744 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1771 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1781 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1790 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1803 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1817 */ 'F', 'R', 'A', 'M', 'E', '_', 'T', 'O', '_', 'A', 'R', 'G', 'S', '_', 'O', 'F', 'F', 'S', 'E', 'T', 0,
  /* 1838 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1862 */ 'B', 'R', '_', 'J', 'T', 0,
  /* 1868 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1889 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1909 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1921 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1932 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1943 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1954 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1965 */ 'N', 'O', 'T', 0,
  /* 1969 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1979 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1994 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 2003 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 2013 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 2021 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 2028 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 2037 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 2044 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 2051 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 2058 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 2065 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 2072 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 2086 */ 'C', 'O', 'P', 'Y', 0,
  /* 2091 */ 'L', 'D', 'A', 'P', 'F', '_', 'l', 'u', '1', '0', '_', 'b', 'a', 0,
  /* 2105 */ 'S', 'S', 'Y', 'N', 'C', '_', '0', 'r', 0,
  /* 2114 */ 'B', 'L', 'A', '_', '1', 'r', 0,
  /* 2121 */ 'M', 'S', 'Y', 'N', 'C', '_', '1', 'r', 0,
  /* 2130 */ 'E', 'C', 'A', 'L', 'L', 'F', '_', '1', 'r', 0,
  /* 2140 */ 'D', 'G', 'E', 'T', 'R', 'E', 'G', '_', '1', 'r', 0,
  /* 2151 */ 'K', 'C', 'A', 'L', 'L', '_', '1', 'r', 0,
  /* 2160 */ 'M', 'J', 'O', 'I', 'N', '_', '1', 'r', 0,
  /* 2169 */ 'S', 'E', 'T', 'C', 'P', '_', '1', 'r', 0,
  /* 2178 */ 'S', 'E', 'T', 'D', 'P', '_', '1', 'r', 0,
  /* 2187 */ 'S', 'E', 'T', 'S', 'P', '_', '1', 'r', 0,
  /* 2196 */ 'S', 'Y', 'N', 'C', 'R', '_', '1', 'r', 0,
  /* 2205 */ 'F', 'R', 'E', 'E', 'R', '_', '1', 'r', 0,
  /* 2214 */ 'E', 'C', 'A', 'L', 'L', 'T', '_', '1', 'r', 0,
  /* 2224 */ 'B', 'A', 'U', '_', '1', 'r', 0,
  /* 2231 */ 'E', 'D', 'U', '_', '1', 'r', 0,
  /* 2238 */ 'E', 'E', 'U', '_', '1', 'r', 0,
  /* 2245 */ 'B', 'R', 'U', '_', '1', 'r', 0,
  /* 2252 */ 'S', 'E', 'T', 'E', 'V', '_', '1', 'r', 0,
  /* 2261 */ 'S', 'E', 'T', 'V', '_', '1', 'r', 0,
  /* 2269 */ 'I', 'N', 'I', 'T', 'P', 'C', '_', '2', 'r', 0,
  /* 2279 */ 'S', 'E', 'T', 'P', 'S', 'C', '_', '2', 'r', 0,
  /* 2289 */ 'S', 'E', 'T', 'D', '_', '2', 'r', 0,
  /* 2297 */ 'E', 'E', 'F', '_', '2', 'r', 0,
  /* 2304 */ 'P', 'E', 'E', 'K', '_', '2', 'r', 0,
  /* 2312 */ 'M', 'K', 'M', 'S', 'K', '_', '2', 'r', 0,
  /* 2321 */ 'E', 'N', 'D', 'I', 'N', '_', '2', 'r', 0,
  /* 2330 */ 'I', 'N', 'I', 'T', 'C', 'P', '_', '2', 'r', 0,
  /* 2340 */ 'I', 'N', 'I', 'T', 'D', 'P', '_', '2', 'r', 0,
  /* 2350 */ 'I', 'N', 'I', 'T', 'S', 'P', '_', '2', 'r', 0,
  /* 2360 */ 'I', 'N', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 2369 */ 'O', 'U', 'T', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 2379 */ 'T', 'S', 'E', 'T', 'M', 'R', '_', '2', 'r', 0,
  /* 2389 */ 'G', 'E', 'T', 'T', 'S', '_', '2', 'r', 0,
  /* 2398 */ 'C', 'H', 'K', 'C', 'T', '_', '2', 'r', 0,
  /* 2407 */ 'I', 'N', 'C', 'T', '_', '2', 'r', 0,
  /* 2415 */ 'T', 'E', 'S', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 2425 */ 'O', 'U', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 2434 */ 'T', 'E', 'S', 'T', 'W', 'C', 'T', '_', '2', 'r', 0,
  /* 2445 */ 'E', 'E', 'T', '_', '2', 'r', 0,
  /* 2452 */ 'I', 'N', 'T', '_', '2', 'r', 0,
  /* 2459 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', '2', 'r', 0,
  /* 2469 */ 'S', 'E', 'T', 'P', 'T', '_', '2', 'r', 0,
  /* 2478 */ 'G', 'E', 'T', 'S', 'T', '_', '2', 'r', 0,
  /* 2487 */ 'O', 'U', 'T', 'T', '_', '2', 'r', 0,
  /* 2495 */ 'O', 'U', 'T', '_', '2', 'r', 0,
  /* 2502 */ 'S', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 2510 */ 'Z', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 2518 */ 'S', 'E', 'T', 'C', '_', 'l', '2', 'r', 0,
  /* 2527 */ 'G', 'E', 'T', 'D', '_', 'l', '2', 'r', 0,
  /* 2536 */ 'S', 'E', 'T', 'C', 'L', 'K', '_', 'l', '2', 'r', 0,
  /* 2547 */ 'T', 'E', 'S', 'T', 'L', 'C', 'L', '_', 'l', '2', 'r', 0,
  /* 2559 */ 'G', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 2568 */ 'S', 'E', 'T', 'N', '_', 'l', '2', 'r', 0,
  /* 2577 */ 'I', 'N', 'I', 'T', 'L', 'R', '_', 'l', '2', 'r', 0,
  /* 2588 */ 'G', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 2598 */ 'S', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 2608 */ 'B', 'Y', 'T', 'E', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 2620 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 2631 */ 'S', 'E', 'T', 'T', 'W', '_', 'l', '2', 'r', 0,
  /* 2641 */ 'S', 'E', 'T', 'R', 'D', 'Y', '_', 'l', '2', 'r', 0,
  /* 2652 */ 'C', 'L', 'Z', '_', 'l', '2', 'r', 0,
  /* 2660 */ 'S', 'U', 'B', '_', '3', 'r', 0,
  /* 2667 */ 'A', 'D', 'D', '_', '3', 'r', 0,
  /* 2674 */ 'A', 'N', 'D', '_', '3', 'r', 0,
  /* 2681 */ 'S', 'H', 'L', '_', '3', 'r', 0,
  /* 2688 */ 'E', 'Q', '_', '3', 'r', 0,
  /* 2694 */ 'S', 'H', 'R', '_', '3', 'r', 0,
  /* 2701 */ 'O', 'R', '_', '3', 'r', 0,
  /* 2707 */ 'T', 'S', 'E', 'T', 'R', '_', '3', 'r', 0,
  /* 2716 */ 'L', 'D', '1', '6', 'S', '_', '3', 'r', 0,
  /* 2725 */ 'L', 'S', 'S', '_', '3', 'r', 0,
  /* 2732 */ 'L', 'D', '8', 'U', '_', '3', 'r', 0,
  /* 2740 */ 'L', 'S', 'U', '_', '3', 'r', 0,
  /* 2747 */ 'L', 'D', 'W', '_', '3', 'r', 0,
  /* 2754 */ 'S', 'T', '1', '6', '_', 'l', '3', 'r', 0,
  /* 2763 */ 'S', 'T', '8', '_', 'l', '3', 'r', 0,
  /* 2771 */ 'L', 'D', 'A', '1', '6', 'B', '_', 'l', '3', 'r', 0,
  /* 2782 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '3', 'r', 0,
  /* 2792 */ 'C', 'R', 'C', '_', 'l', '3', 'r', 0,
  /* 2800 */ 'L', 'D', 'A', '1', '6', 'F', '_', 'l', '3', 'r', 0,
  /* 2811 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '3', 'r', 0,
  /* 2821 */ 'M', 'U', 'L', '_', 'l', '3', 'r', 0,
  /* 2829 */ 'A', 'S', 'H', 'R', '_', 'l', '3', 'r', 0,
  /* 2838 */ 'X', 'O', 'R', '_', 'l', '3', 'r', 0,
  /* 2846 */ 'R', 'E', 'M', 'S', '_', 'l', '3', 'r', 0,
  /* 2855 */ 'D', 'I', 'V', 'S', '_', 'l', '3', 'r', 0,
  /* 2864 */ 'R', 'E', 'M', 'U', '_', 'l', '3', 'r', 0,
  /* 2873 */ 'D', 'I', 'V', 'U', '_', 'l', '3', 'r', 0,
  /* 2882 */ 'S', 'T', 'W', '_', 'l', '3', 'r', 0,
  /* 2890 */ 'C', 'R', 'C', '8', '_', 'l', '4', 'r', 0,
  /* 2899 */ 'M', 'A', 'C', 'C', 'S', '_', 'l', '4', 'r', 0,
  /* 2909 */ 'M', 'A', 'C', 'C', 'U', '_', 'l', '4', 'r', 0,
  /* 2919 */ 'L', 'S', 'U', 'B', '_', 'l', '5', 'r', 0,
  /* 2928 */ 'L', 'A', 'D', 'D', '_', 'l', '5', 'r', 0,
  /* 2937 */ 'L', 'D', 'I', 'V', 'U', '_', 'l', '5', 'r', 0,
  /* 2947 */ 'L', 'M', 'U', 'L', '_', 'l', '6', 'r', 0,
  /* 2956 */ 'I', 'n', 't', '_', 'M', 'e', 'm', 'B', 'a', 'r', 'r', 'i', 'e', 'r', 0,
  /* 2971 */ 'S', 'U', 'B', '_', '2', 'r', 'u', 's', 0,
  /* 2980 */ 'A', 'D', 'D', '_', '2', 'r', 'u', 's', 0,
  /* 2989 */ 'S', 'H', 'L', '_', '2', 'r', 'u', 's', 0,
  /* 2998 */ 'E', 'Q', '_', '2', 'r', 'u', 's', 0,
  /* 3006 */ 'S', 'H', 'R', '_', '2', 'r', 'u', 's', 0,
  /* 3015 */ 'L', 'D', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 3024 */ 'S', 'T', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 3033 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 3045 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 3057 */ 'A', 'S', 'H', 'R', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 3068 */ 'I', 'N', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 3079 */ 'O', 'U', 'T', 'P', 'W', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 3091 */ 'M', 'K', 'M', 'S', 'K', '_', 'r', 'u', 's', 0,
  /* 3101 */ 'G', 'E', 'T', 'R', '_', 'r', 'u', 's', 0,
  /* 3110 */ 'C', 'H', 'K', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 3120 */ 'O', 'U', 'T', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 3130 */ 'S', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
  /* 3139 */ 'Z', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
};

extern const unsigned XCoreInstrNameIndices[] = {
    1045U, 1194U, 1204U, 1087U, 1078U, 1155U, 952U, 967U, 
    932U, 981U, 1727U, 905U, 856U, 2086U, 877U, 1979U, 
    809U, 1279U, 1143U, 1943U, 831U, 1932U, 884U, 1339U, 
    1326U, 1617U, 1803U, 1838U, 1102U, 1122U, 797U, 737U, 
    1167U, 2051U, 2058U, 1180U, 1187U, 803U, 1679U, 1673U, 
    930U, 2072U, 915U, 1771U, 1695U, 1994U, 1712U, 1954U, 
    1684U, 2003U, 783U, 897U, 822U, 1790U, 753U, 1744U, 
    2028U, 775U, 1921U, 1909U, 1969U, 1002U, 2021U, 2037U, 
    1096U, 1649U, 1642U, 1319U, 1312U, 1781U, 869U, 848U, 
    1255U, 1247U, 1271U, 1263U, 1018U, 1010U, 790U, 730U, 
    1160U, 724U, 2044U, 1173U, 2065U, 1366U, 138U, 995U, 
    130U, 945U, 2013U, 765U, 1049U, 1058U, 1294U, 1303U, 
    1288U, 1067U, 1612U, 1889U, 1868U, 1656U, 2980U, 2667U, 
    1230U, 1351U, 2459U, 2674U, 3057U, 2829U, 2224U, 2620U, 
    100U, 38U, 400U, 240U, 2114U, 69U, 10U, 90U, 
    29U, 605U, 478U, 704U, 568U, 409U, 248U, 615U, 
    487U, 714U, 577U, 418U, 256U, 2245U, 1862U, 122U, 
    2608U, 2398U, 3110U, 1427U, 1593U, 427U, 264U, 370U, 
    213U, 2652U, 2890U, 2792U, 1435U, 1474U, 2140U, 2855U, 
    2873U, 1484U, 1530U, 2130U, 2214U, 2231U, 2297U, 2445U, 
    2238U, 1220U, 2321U, 338U, 184U, 2998U, 2688U, 317U, 
    165U, 360U, 204U, 1817U, 2205U, 1521U, 2527U, 1409U, 
    1546U, 1418U, 1444U, 1464U, 2559U, 2588U, 3101U, 380U, 
    222U, 2478U, 2389U, 2407U, 2330U, 2340U, 2577U, 2269U, 
    2350U, 3068U, 2360U, 2452U, 2324U, 2956U, 2151U, 296U, 
    146U, 337U, 183U, 348U, 193U, 1538U, 2928U, 2716U, 
    2732U, 2771U, 2800U, 58U, 0U, 79U, 2091U, 19U, 
    3033U, 2782U, 306U, 155U, 636U, 506U, 1026U, 3045U, 
    2811U, 670U, 537U, 586U, 461U, 1513U, 2937U, 1391U, 
    1373U, 1495U, 625U, 111U, 496U, 48U, 648U, 517U, 
    1033U, 682U, 548U, 3015U, 2747U, 2947U, 2725U, 2919U, 
    2740U, 2899U, 2909U, 2160U, 2312U, 3091U, 2121U, 2821U, 
    948U, 1965U, 2701U, 2425U, 3120U, 3079U, 2369U, 2487U, 
    2495U, 2304U, 2846U, 2864U, 327U, 174U, 743U, 2536U, 
    2169U, 2518U, 595U, 469U, 2178U, 2289U, 2252U, 1454U, 
    2568U, 2279U, 2598U, 2469U, 2641U, 2187U, 444U, 280U, 
    390U, 231U, 2631U, 2261U, 2502U, 3130U, 2989U, 2681U, 
    3006U, 2694U, 2105U, 2754U, 2763U, 1555U, 1400U, 1382U, 
    1504U, 659U, 527U, 1039U, 693U, 558U, 3024U, 2882U, 
    2971U, 2660U, 2196U, 2415U, 2547U, 2434U, 2379U, 2707U, 
    1602U, 1573U, 1583U, 1563U, 2838U, 2510U, 3139U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 327);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~XCoreGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 327);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace XCore {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace XCore {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace XCore {
namespace OpTypes {
enum OperandType {
  InlineJT = 0,
  InlineJT32 = 1,
  MEMii = 2,
  brtarget = 3,
  brtarget_neg = 4,
  f32imm = 5,
  f64imm = 6,
  i16imm = 7,
  i1imm = 8,
  i32imm = 9,
  i64imm = 10,
  i8imm = 11,
  pcrel_imm = 12,
  pcrel_imm_neg = 13,
  type0 = 14,
  type1 = 15,
  type2 = 16,
  type3 = 17,
  type4 = 18,
  type5 = 19,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

