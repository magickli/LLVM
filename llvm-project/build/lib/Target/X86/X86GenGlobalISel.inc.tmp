/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the X86 target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 90;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MatcherState State;
  typedef ComplexRendererFn(X86InstructionSelector::*ComplexMatcherMemFn)(MachineOperand &) const;
const MatcherInfoTy<PredicateBitset, ComplexMatcherMemFn> MatcherInfo;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, State(0),
MatcherInfo({TypeObjects, FeatureBitsets, {
  nullptr, // GICP_Invalid
}})
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_TruePredicateBit = 38,
  Feature_HasCMovBit = 15,
  Feature_NoCMovBit = 75,
  Feature_HasMMXBit = 61,
  Feature_Has3DNowBit = 63,
  Feature_HasSSE1Bit = 26,
  Feature_UseSSE1Bit = 32,
  Feature_HasSSE2Bit = 27,
  Feature_UseSSE2Bit = 33,
  Feature_HasSSE3Bit = 19,
  Feature_UseSSE3Bit = 41,
  Feature_HasSSSE3Bit = 62,
  Feature_UseSSSE3Bit = 42,
  Feature_NoSSE41Bit = 80,
  Feature_UseSSE41Bit = 39,
  Feature_HasSSE42Bit = 46,
  Feature_UseSSE42Bit = 45,
  Feature_HasSSE4ABit = 50,
  Feature_HasAVXBit = 34,
  Feature_HasAVX2Bit = 30,
  Feature_HasAVX1OnlyBit = 28,
  Feature_HasAVX512Bit = 52,
  Feature_UseAVXBit = 31,
  Feature_NoAVX512Bit = 23,
  Feature_HasCDIBit = 56,
  Feature_HasVPOPCNTDQBit = 60,
  Feature_HasERIBit = 59,
  Feature_HasDQIBit = 54,
  Feature_NoDQIBit = 43,
  Feature_HasBWIBit = 55,
  Feature_NoBWIBit = 40,
  Feature_HasVLXBit = 53,
  Feature_NoVLXBit = 22,
  Feature_NoVLX_Or_NoBWIBit = 37,
  Feature_NoVLX_Or_NoDQIBit = 82,
  Feature_HasPOPCNTBit = 44,
  Feature_HasAESBit = 48,
  Feature_HasFXSRBit = 20,
  Feature_HasXSAVEBit = 66,
  Feature_HasXSAVEOPTBit = 67,
  Feature_HasXSAVECBit = 68,
  Feature_HasXSAVESBit = 69,
  Feature_HasPCLMULBit = 49,
  Feature_HasFMABit = 21,
  Feature_HasFMA4Bit = 24,
  Feature_HasXOPBit = 25,
  Feature_HasTBMBit = 9,
  Feature_NoTBMBit = 78,
  Feature_HasLWPBit = 10,
  Feature_HasMOVBEBit = 3,
  Feature_HasRDRANDBit = 4,
  Feature_HasF16CBit = 51,
  Feature_NoF16CBit = 83,
  Feature_HasFSGSBaseBit = 70,
  Feature_HasLZCNTBit = 6,
  Feature_HasBMIBit = 7,
  Feature_HasBMI2Bit = 8,
  Feature_NoBMI2Bit = 77,
  Feature_HasVBMIBit = 57,
  Feature_HasIFMABit = 58,
  Feature_HasRTMBit = 65,
  Feature_HasADXBit = 14,
  Feature_HasSHABit = 47,
  Feature_HasRDSEEDBit = 5,
  Feature_HasPrefetchWBit = 64,
  Feature_HasLAHFSAHFBit = 2,
  Feature_HasMWAITXBit = 11,
  Feature_HasCLZEROBit = 12,
  Feature_FPStackf32Bit = 17,
  Feature_FPStackf64Bit = 18,
  Feature_HasCLFLUSHOPTBit = 13,
  Feature_HasCmpxchg16bBit = 76,
  Feature_Not64BitModeBit = 0,
  Feature_In64BitModeBit = 1,
  Feature_IsLP64Bit = 72,
  Feature_NotLP64Bit = 71,
  Feature_NotWin64WithoutFPBit = 74,
  Feature_IsPS4Bit = 85,
  Feature_NotPS4Bit = 84,
  Feature_KernelCodeBit = 86,
  Feature_NearDataBit = 87,
  Feature_IsNotPICBit = 88,
  Feature_OptForSizeBit = 35,
  Feature_OptForMinSizeBit = 29,
  Feature_OptForSpeedBit = 81,
  Feature_CallImmAddrBit = 89,
  Feature_FavorMemIndirectCallBit = 16,
  Feature_NotSlowIncDecBit = 73,
  Feature_HasFastSHLDRotateBit = 79,
  Feature_HasMFenceBit = 36,
};

PredicateBitset X86InstructionSelector::
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const {
  PredicateBitset Features;
  if (true)
    Features[Feature_TruePredicateBit] = 1;
  if (Subtarget->hasCMov())
    Features[Feature_HasCMovBit] = 1;
  if (!Subtarget->hasCMov())
    Features[Feature_NoCMovBit] = 1;
  if (Subtarget->hasMMX())
    Features[Feature_HasMMXBit] = 1;
  if (Subtarget->has3DNow())
    Features[Feature_Has3DNowBit] = 1;
  if (Subtarget->hasSSE1())
    Features[Feature_HasSSE1Bit] = 1;
  if (Subtarget->hasSSE1() && !Subtarget->hasAVX())
    Features[Feature_UseSSE1Bit] = 1;
  if (Subtarget->hasSSE2())
    Features[Feature_HasSSE2Bit] = 1;
  if (Subtarget->hasSSE2() && !Subtarget->hasAVX())
    Features[Feature_UseSSE2Bit] = 1;
  if (Subtarget->hasSSE3())
    Features[Feature_HasSSE3Bit] = 1;
  if (Subtarget->hasSSE3() && !Subtarget->hasAVX())
    Features[Feature_UseSSE3Bit] = 1;
  if (Subtarget->hasSSSE3())
    Features[Feature_HasSSSE3Bit] = 1;
  if (Subtarget->hasSSSE3() && !Subtarget->hasAVX())
    Features[Feature_UseSSSE3Bit] = 1;
  if (!Subtarget->hasSSE41())
    Features[Feature_NoSSE41Bit] = 1;
  if (Subtarget->hasSSE41() && !Subtarget->hasAVX())
    Features[Feature_UseSSE41Bit] = 1;
  if (Subtarget->hasSSE42())
    Features[Feature_HasSSE42Bit] = 1;
  if (Subtarget->hasSSE42() && !Subtarget->hasAVX())
    Features[Feature_UseSSE42Bit] = 1;
  if (Subtarget->hasSSE4A())
    Features[Feature_HasSSE4ABit] = 1;
  if (Subtarget->hasAVX())
    Features[Feature_HasAVXBit] = 1;
  if (Subtarget->hasAVX2())
    Features[Feature_HasAVX2Bit] = 1;
  if (Subtarget->hasAVX() && !Subtarget->hasAVX2())
    Features[Feature_HasAVX1OnlyBit] = 1;
  if (Subtarget->hasAVX512())
    Features[Feature_HasAVX512Bit] = 1;
  if (Subtarget->hasAVX() && !Subtarget->hasAVX512())
    Features[Feature_UseAVXBit] = 1;
  if (!Subtarget->hasAVX512())
    Features[Feature_NoAVX512Bit] = 1;
  if (Subtarget->hasCDI())
    Features[Feature_HasCDIBit] = 1;
  if (Subtarget->hasVPOPCNTDQ())
    Features[Feature_HasVPOPCNTDQBit] = 1;
  if (Subtarget->hasERI())
    Features[Feature_HasERIBit] = 1;
  if (Subtarget->hasDQI())
    Features[Feature_HasDQIBit] = 1;
  if (!Subtarget->hasDQI())
    Features[Feature_NoDQIBit] = 1;
  if (Subtarget->hasBWI())
    Features[Feature_HasBWIBit] = 1;
  if (!Subtarget->hasBWI())
    Features[Feature_NoBWIBit] = 1;
  if (Subtarget->hasVLX())
    Features[Feature_HasVLXBit] = 1;
  if (!Subtarget->hasVLX())
    Features[Feature_NoVLXBit] = 1;
  if (!Subtarget->hasVLX() || !Subtarget->hasBWI())
    Features[Feature_NoVLX_Or_NoBWIBit] = 1;
  if (!Subtarget->hasVLX() || !Subtarget->hasDQI())
    Features[Feature_NoVLX_Or_NoDQIBit] = 1;
  if (Subtarget->hasPOPCNT())
    Features[Feature_HasPOPCNTBit] = 1;
  if (Subtarget->hasAES())
    Features[Feature_HasAESBit] = 1;
  if (Subtarget->hasFXSR())
    Features[Feature_HasFXSRBit] = 1;
  if (Subtarget->hasXSAVE())
    Features[Feature_HasXSAVEBit] = 1;
  if (Subtarget->hasXSAVEOPT())
    Features[Feature_HasXSAVEOPTBit] = 1;
  if (Subtarget->hasXSAVEC())
    Features[Feature_HasXSAVECBit] = 1;
  if (Subtarget->hasXSAVES())
    Features[Feature_HasXSAVESBit] = 1;
  if (Subtarget->hasPCLMUL())
    Features[Feature_HasPCLMULBit] = 1;
  if (Subtarget->hasFMA())
    Features[Feature_HasFMABit] = 1;
  if (Subtarget->hasFMA4())
    Features[Feature_HasFMA4Bit] = 1;
  if (Subtarget->hasXOP())
    Features[Feature_HasXOPBit] = 1;
  if (Subtarget->hasTBM())
    Features[Feature_HasTBMBit] = 1;
  if (!Subtarget->hasTBM())
    Features[Feature_NoTBMBit] = 1;
  if (Subtarget->hasLWP())
    Features[Feature_HasLWPBit] = 1;
  if (Subtarget->hasMOVBE())
    Features[Feature_HasMOVBEBit] = 1;
  if (Subtarget->hasRDRAND())
    Features[Feature_HasRDRANDBit] = 1;
  if (Subtarget->hasF16C())
    Features[Feature_HasF16CBit] = 1;
  if (!Subtarget->hasF16C())
    Features[Feature_NoF16CBit] = 1;
  if (Subtarget->hasFSGSBase())
    Features[Feature_HasFSGSBaseBit] = 1;
  if (Subtarget->hasLZCNT())
    Features[Feature_HasLZCNTBit] = 1;
  if (Subtarget->hasBMI())
    Features[Feature_HasBMIBit] = 1;
  if (Subtarget->hasBMI2())
    Features[Feature_HasBMI2Bit] = 1;
  if (!Subtarget->hasBMI2())
    Features[Feature_NoBMI2Bit] = 1;
  if (Subtarget->hasVBMI())
    Features[Feature_HasVBMIBit] = 1;
  if (Subtarget->hasIFMA())
    Features[Feature_HasIFMABit] = 1;
  if (Subtarget->hasRTM())
    Features[Feature_HasRTMBit] = 1;
  if (Subtarget->hasADX())
    Features[Feature_HasADXBit] = 1;
  if (Subtarget->hasSHA())
    Features[Feature_HasSHABit] = 1;
  if (Subtarget->hasRDSEED())
    Features[Feature_HasRDSEEDBit] = 1;
  if (Subtarget->hasPRFCHW())
    Features[Feature_HasPrefetchWBit] = 1;
  if (Subtarget->hasLAHFSAHF())
    Features[Feature_HasLAHFSAHFBit] = 1;
  if (Subtarget->hasMWAITX())
    Features[Feature_HasMWAITXBit] = 1;
  if (Subtarget->hasCLZERO())
    Features[Feature_HasCLZEROBit] = 1;
  if (!Subtarget->hasSSE1())
    Features[Feature_FPStackf32Bit] = 1;
  if (!Subtarget->hasSSE2())
    Features[Feature_FPStackf64Bit] = 1;
  if (Subtarget->hasCLFLUSHOPT())
    Features[Feature_HasCLFLUSHOPTBit] = 1;
  if (Subtarget->hasCmpxchg16b())
    Features[Feature_HasCmpxchg16bBit] = 1;
  if (!Subtarget->is64Bit())
    Features[Feature_Not64BitModeBit] = 1;
  if (Subtarget->is64Bit())
    Features[Feature_In64BitModeBit] = 1;
  if (Subtarget->isTarget64BitLP64())
    Features[Feature_IsLP64Bit] = 1;
  if (!Subtarget->isTarget64BitLP64())
    Features[Feature_NotLP64Bit] = 1;
  if (Subtarget->isTargetPS4())
    Features[Feature_IsPS4Bit] = 1;
  if (!Subtarget->isTargetPS4())
    Features[Feature_NotPS4Bit] = 1;
  if (TM.getCodeModel() == CodeModel::Kernel)
    Features[Feature_KernelCodeBit] = 1;
  if (TM.getCodeModel() == CodeModel::Small ||TM.getCodeModel() == CodeModel::Kernel)
    Features[Feature_NearDataBit] = 1;
  if (!TM.isPositionIndependent())
    Features[Feature_IsNotPICBit] = 1;
  if (Subtarget->isLegalToCallImmediateAddr())
    Features[Feature_CallImmAddrBit] = 1;
  if (!Subtarget->callRegIndirect())
    Features[Feature_FavorMemIndirectCallBit] = 1;
  if (!Subtarget->slowIncDec())
    Features[Feature_NotSlowIncDecBit] = 1;
  if (Subtarget->hasFastSHLDRotate())
    Features[Feature_HasFastSHLDRotateBit] = 1;
  if (Subtarget->hasMFence())
    Features[Feature_HasMFenceBit] = 1;
  return Features;
}

PredicateBitset X86InstructionSelector::
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  if (!Subtarget->isTargetWin64() ||Subtarget->getFrameLowering()->hasFP(*MF))
    Features[Feature_NotWin64WithoutFPBit] = 1;
  if (MF->getFunction()->optForSize())
    Features[Feature_OptForSizeBit] = 1;
  if (MF->getFunction()->optForMinSize())
    Features[Feature_OptForMinSizeBit] = 1;
  if (!MF->getFunction()->optForSize())
    Features[Feature_OptForSpeedBit] = 1;
  return Features;
}

enum {
  GILLT_s1,
  GILLT_s8,
  GILLT_s16,
  GILLT_s32,
  GILLT_s64,
  GILLT_s80,
  GILLT_s128,
  GILLT_v2s1,
  GILLT_v2s64,
  GILLT_v4s1,
  GILLT_v4s32,
  GILLT_v4s64,
  GILLT_v8s1,
  GILLT_v8s16,
  GILLT_v8s32,
  GILLT_v8s64,
  GILLT_v16s1,
  GILLT_v16s8,
  GILLT_v16s16,
  GILLT_v16s32,
  GILLT_v32s1,
  GILLT_v32s8,
  GILLT_v32s16,
  GILLT_v64s1,
  GILLT_v64s8,
};
const static LLT TypeObjects[] = {
  LLT::scalar(1),
  LLT::scalar(8),
  LLT::scalar(16),
  LLT::scalar(32),
  LLT::scalar(64),
  LLT::scalar(80),
  LLT::scalar(128),
  LLT::vector(2, 1),
  LLT::vector(2, 64),
  LLT::vector(4, 1),
  LLT::vector(4, 32),
  LLT::vector(4, 64),
  LLT::vector(8, 1),
  LLT::vector(8, 16),
  LLT::vector(8, 32),
  LLT::vector(8, 64),
  LLT::vector(16, 1),
  LLT::vector(16, 8),
  LLT::vector(16, 16),
  LLT::vector(16, 32),
  LLT::vector(32, 1),
  LLT::vector(32, 8),
  LLT::vector(32, 16),
  LLT::vector(64, 1),
  LLT::vector(64, 8),
};

enum {
  GIFBS_Invalid,
  GIFBS_FPStackf32,
  GIFBS_FPStackf64,
  GIFBS_HasAES,
  GIFBS_HasAVX,
  GIFBS_HasAVX1Only,
  GIFBS_HasAVX2,
  GIFBS_HasAVX512,
  GIFBS_HasBMI,
  GIFBS_HasBMI2,
  GIFBS_HasBWI,
  GIFBS_HasDQI,
  GIFBS_HasF16C,
  GIFBS_HasFMA4,
  GIFBS_HasPCLMUL,
  GIFBS_HasSHA,
  GIFBS_HasSSE42,
  GIFBS_HasSSE4A,
  GIFBS_HasTBM,
  GIFBS_HasVLX,
  GIFBS_HasXOP,
  GIFBS_In64BitMode,
  GIFBS_NotSlowIncDec,
  GIFBS_UseAVX,
  GIFBS_UseSSE1,
  GIFBS_UseSSE2,
  GIFBS_UseSSE41,
  GIFBS_UseSSE42,
  GIFBS_UseSSSE3,
  GIFBS_HasAVX_HasAES,
  GIFBS_HasAVX_HasPCLMUL,
  GIFBS_HasAVX_NoVLX,
  GIFBS_HasAVX_NoVLX_Or_NoBWI,
  GIFBS_HasAVX2_NoVLX,
  GIFBS_HasAVX2_NoVLX_Or_NoBWI,
  GIFBS_HasAVX512_HasVLX,
  GIFBS_HasBWI_HasVLX,
  GIFBS_HasDQI_HasVLX,
  GIFBS_HasVLX_HasBWI,
  GIFBS_OptForSize_NotSlowIncDec_Not64BitMode,
};
const static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_FPStackf32Bit, },
  {Feature_FPStackf64Bit, },
  {Feature_HasAESBit, },
  {Feature_HasAVXBit, },
  {Feature_HasAVX1OnlyBit, },
  {Feature_HasAVX2Bit, },
  {Feature_HasAVX512Bit, },
  {Feature_HasBMIBit, },
  {Feature_HasBMI2Bit, },
  {Feature_HasBWIBit, },
  {Feature_HasDQIBit, },
  {Feature_HasF16CBit, },
  {Feature_HasFMA4Bit, },
  {Feature_HasPCLMULBit, },
  {Feature_HasSHABit, },
  {Feature_HasSSE42Bit, },
  {Feature_HasSSE4ABit, },
  {Feature_HasTBMBit, },
  {Feature_HasVLXBit, },
  {Feature_HasXOPBit, },
  {Feature_In64BitModeBit, },
  {Feature_NotSlowIncDecBit, },
  {Feature_UseAVXBit, },
  {Feature_UseSSE1Bit, },
  {Feature_UseSSE2Bit, },
  {Feature_UseSSE41Bit, },
  {Feature_UseSSE42Bit, },
  {Feature_UseSSSE3Bit, },
  {Feature_HasAVXBit, Feature_HasAESBit, },
  {Feature_HasAVXBit, Feature_HasPCLMULBit, },
  {Feature_HasAVXBit, Feature_NoVLXBit, },
  {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit, },
  {Feature_HasAVX2Bit, Feature_NoVLXBit, },
  {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit, },
  {Feature_HasAVX512Bit, Feature_HasVLXBit, },
  {Feature_HasBWIBit, Feature_HasVLXBit, },
  {Feature_HasDQIBit, Feature_HasVLXBit, },
  {Feature_HasVLXBit, Feature_HasBWIBit, },
  {Feature_OptForSizeBit, Feature_NotSlowIncDecBit, Feature_Not64BitModeBit, },
};

enum {
  GICP_Invalid,
};
// See constructor for table contents

bool X86InstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  NewMIVector OutMIs;
  State.MIs.clear();
  State.MIs.push_back(&I);

  constexpr static int64_t MatchTable0[] = {
    GIM_Try, /*On fail goto*//*Label 0*/ 81,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5962:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i32):$src3)  =>  (VROUNDSSr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i32):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 0: @81
    GIM_Try, /*On fail goto*//*Label 1*/ 162,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5961:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i32):$src3)  =>  (VROUNDSDr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i32):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDSDr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 1: @162
    GIM_Try, /*On fail goto*//*Label 2*/ 243,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5962:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i32):$src3)  =>  (ROUNDSSr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i32):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ROUNDSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 2: @243
    GIM_Try, /*On fail goto*//*Label 3*/ 324,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5961:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i32):$src3)  =>  (ROUNDSDr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i32):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ROUNDSDr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 3: @324
    GIM_Try, /*On fail goto*//*Label 4*/ 405,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_mpsadbw,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8i16 5951:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)  =>  (VMPSADBWrri:v8i16 VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VMPSADBWrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 4: @405
    GIM_Try, /*On fail goto*//*Label 5*/ 486,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_dpps,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5949:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i8):$src3)  =>  (VDPPSrri:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VDPPSrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 5: @486
    GIM_Try, /*On fail goto*//*Label 6*/ 567,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_dppd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5948:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i8):$src3)  =>  (VDPPDrri:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VDPPDrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 6: @567
    GIM_Try, /*On fail goto*//*Label 7*/ 648,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_dp_ps_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8f32 4677:iPTR, VR256:v8f32:$src1, VR256:v8f32:$src2, (imm:i8):$src3)  =>  (VDPPSYrri:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VDPPSYrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 7: @648
    GIM_Try, /*On fail goto*//*Label 8*/ 729,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_mpsadbw,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v16i16 4751:iPTR, VR256:v32i8:$src1, VR256:v32i8:$src2, (imm:i8):$src3)  =>  (VMPSADBWYrri:v16i16 VR256:v32i8:$src1, VR256:v32i8:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VMPSADBWYrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 8: @729
    GIM_Try, /*On fail goto*//*Label 9*/ 810,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_mpsadbw,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8i16 5951:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)  =>  (MPSADBWrri:v8i16 VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MPSADBWrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 9: @810
    GIM_Try, /*On fail goto*//*Label 10*/ 891,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_dpps,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5949:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i8):$src3)  =>  (DPPSrri:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DPPSrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 10: @891
    GIM_Try, /*On fail goto*//*Label 11*/ 972,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_dppd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5948:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i8):$src3)  =>  (DPPDrri:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DPPDrri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 11: @972
    GIM_Try, /*On fail goto*//*Label 12*/ 1053,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_pcmpistrm128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v16i8 5980:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)  =>  (VPCMPISTRM128REG:v16i8:i32 VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPCMPISTRM128REG,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 12: @1053
    GIM_Try, /*On fail goto*//*Label 13*/ 1134,
      GIM_CheckFeatures, GIFBS_UseSSE42,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_pcmpistrm128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v16i8 5980:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)  =>  (PCMPISTRM128REG:v16i8:i32 VR128:v16i8:$src1, VR128:v16i8:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PCMPISTRM128REG,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 13: @1134
    GIM_Try, /*On fail goto*//*Label 14*/ 1215,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha1rnds4,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4i32 5816:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, (imm:i8):$src3)  =>  (SHA1RNDS4rri:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA1RNDS4rri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 14: @1215
    GIM_Try, /*On fail goto*//*Label 15*/ 1296,
      GIM_CheckFeatures, GIFBS_HasAVX_HasPCLMUL,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_pclmulqdq,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2i64 5794:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2, (imm:i8):$src3)  =>  (VPCLMULQDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPCLMULQDQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 15: @1296
    GIM_Try, /*On fail goto*//*Label 16*/ 1377,
      GIM_CheckFeatures, GIFBS_HasPCLMUL,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_pclmulqdq,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2i64 5794:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2, (imm:i8):$src3)  =>  (PCLMULQDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2, (imm:i8):$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PCLMULQDQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 16: @1377
    GIM_Try, /*On fail goto*//*Label 17*/ 1447,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfmadd_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5684:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)  =>  (VFMADDSS4rr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFMADDSS4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 17: @1447
    GIM_Try, /*On fail goto*//*Label 18*/ 1517,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfmsub_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5694:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)  =>  (VFMSUBSS4rr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFMSUBSS4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 18: @1517
    GIM_Try, /*On fail goto*//*Label 19*/ 1587,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfnmadd_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5704:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)  =>  (VFNMADDSS4rr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFNMADDSS4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 19: @1587
    GIM_Try, /*On fail goto*//*Label 20*/ 1657,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfnmsub_ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5710:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)  =>  (VFNMSUBSS4rr_Int:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFNMSUBSS4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 20: @1657
    GIM_Try, /*On fail goto*//*Label 21*/ 1727,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfmadd_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5683:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)  =>  (VFMADDSD4rr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFMADDSD4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 21: @1727
    GIM_Try, /*On fail goto*//*Label 22*/ 1797,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfmsub_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5693:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)  =>  (VFMSUBSD4rr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFMSUBSD4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 22: @1797
    GIM_Try, /*On fail goto*//*Label 23*/ 1867,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfnmadd_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5703:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)  =>  (VFNMADDSD4rr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFNMADDSD4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 23: @1867
    GIM_Try, /*On fail goto*//*Label 24*/ 1937,
      GIM_CheckFeatures, GIFBS_HasFMA4,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_fma_vfnmsub_sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5709:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)  =>  (VFNMSUBSD4rr_Int:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFNMSUBSD4rr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 24: @1937
    GIM_Try, /*On fail goto*//*Label 25*/ 2007,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmadcswd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6076:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)  =>  (VPMADCSWDrr:v4i32 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMADCSWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 25: @2007
    GIM_Try, /*On fail goto*//*Label 26*/ 2077,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmadcsswd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6075:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)  =>  (VPMADCSSWDrr:v4i32 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMADCSSWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 26: @2077
    GIM_Try, /*On fail goto*//*Label 27*/ 2147,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacsww,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6074:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)  =>  (VPMACSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSWWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 27: @2147
    GIM_Try, /*On fail goto*//*Label 28*/ 2217,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacswd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6073:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)  =>  (VPMACSWDrr:v4i32 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 28: @2217
    GIM_Try, /*On fail goto*//*Label 29*/ 2287,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacssww,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6072:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)  =>  (VPMACSSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSSWWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 29: @2287
    GIM_Try, /*On fail goto*//*Label 30*/ 2357,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacsswd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6071:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)  =>  (VPMACSSWDrr:v4i32 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSSWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 30: @2357
    GIM_Try, /*On fail goto*//*Label 31*/ 2427,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacssdql,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6070:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)  =>  (VPMACSSDQLrr:v2i64 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSSDQLrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 31: @2427
    GIM_Try, /*On fail goto*//*Label 32*/ 2497,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacssdqh,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6069:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)  =>  (VPMACSSDQHrr:v2i64 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSSDQHrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 32: @2497
    GIM_Try, /*On fail goto*//*Label 33*/ 2567,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacssdd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6068:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)  =>  (VPMACSSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSSDDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 33: @2567
    GIM_Try, /*On fail goto*//*Label 34*/ 2637,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacsdql,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6067:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)  =>  (VPMACSDQLrr:v2i64 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSDQLrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 34: @2637
    GIM_Try, /*On fail goto*//*Label 35*/ 2707,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacsdqh,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6066:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)  =>  (VPMACSDQHrr:v2i64 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v2i64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSDQHrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 35: @2707
    GIM_Try, /*On fail goto*//*Label 36*/ 2777,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vpmacsdd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6065:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)  =>  (VPMACSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSDDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 36: @2777
    GIM_Try, /*On fail goto*//*Label 37*/ 2847,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_blendvpd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5946:iPTR, VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)  =>  (VBLENDVPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2, VR128:v2f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VBLENDVPDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 37: @2847
    GIM_Try, /*On fail goto*//*Label 38*/ 2917,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_blendv_pd_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v4f64 4667:iPTR, VR256:v4f64:$src1, VR256:v4f64:$src2, VR256:v4f64:$src3)  =>  (VBLENDVPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2, VR256:v4f64:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VBLENDVPDYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 38: @2917
    GIM_Try, /*On fail goto*//*Label 39*/ 2987,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_blendvps,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5947:iPTR, VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)  =>  (VBLENDVPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2, VR128:v4f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VBLENDVPSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 39: @2987
    GIM_Try, /*On fail goto*//*Label 40*/ 3057,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_blendv_ps_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v8f32 4668:iPTR, VR256:v8f32:$src1, VR256:v8f32:$src2, VR256:v8f32:$src3)  =>  (VBLENDVPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2, VR256:v8f32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VBLENDVPSYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 40: @3057
    GIM_Try, /*On fail goto*//*Label 41*/ 3127,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_pblendvb,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v16i8 5953:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2, VR128:v16i8:$src3)  =>  (VPBLENDVBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2, VR128:v16i8:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPBLENDVBrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 41: @3127
    GIM_Try, /*On fail goto*//*Label 42*/ 3197,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_pblendvb,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/4, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v32i8 4765:iPTR, VR256:v32i8:$src1, VR256:v32i8:$src2, VR256:v32i8:$src3)  =>  (VPBLENDVBYrr:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2, VR256:v32i8:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPBLENDVBYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 42: @3197
    GIM_Try, /*On fail goto*//*Label 43*/ 3266,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_tbm_bextri_u32,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] cntl
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:i32 6017:iPTR, GR32:i32:$src1, (imm:i32):$cntl)  =>  (BEXTRI32ri:i32:i32 GR32:i32:$src1, (imm:i32):$cntl)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BEXTRI32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cntl
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 43: @3266
    GIM_Try, /*On fail goto*//*Label 44*/ 3335,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_ps,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5960:iPTR, VR128:v4f32:$src1, (imm:i32):$src2)  =>  (VROUNDPSr:v4f32 VR128:v4f32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDPSr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 44: @3335
    GIM_Try, /*On fail goto*//*Label 45*/ 3404,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_pd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5959:iPTR, VR128:v2f64:$src1, (imm:i32):$src2)  =>  (VROUNDPDr:v2f64 VR128:v2f64:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDPDr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 45: @3404
    GIM_Try, /*On fail goto*//*Label 46*/ 3473,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_round_ps_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8f32 4702:iPTR, VR256:v8f32:$src1, (imm:i32):$src2)  =>  (VROUNDYPSr:v8f32 VR256:v8f32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDYPSr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 46: @3473
    GIM_Try, /*On fail goto*//*Label 47*/ 3542,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_round_pd_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f64 4701:iPTR, VR256:v4f64:$src1, (imm:i32):$src2)  =>  (VROUNDYPDr:v4f64 VR256:v4f64:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VROUNDYPDr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 47: @3542
    GIM_Try, /*On fail goto*//*Label 48*/ 3611,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_ps,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v4f32 5960:iPTR, VR128:v4f32:$src1, (imm:i32):$src2)  =>  (ROUNDPSr:v4f32 VR128:v4f32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ROUNDPSr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 48: @3611
    GIM_Try, /*On fail goto*//*Label 49*/ 3680,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_round_pd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2f64 5959:iPTR, VR128:v2f64:$src1, (imm:i32):$src2)  =>  (ROUNDPDr:v2f64 VR128:v2f64:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ROUNDPDr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 49: @3680
    GIM_Try, /*On fail goto*//*Label 50*/ 3749,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aeskeygenassist,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2i64 4664:iPTR, VR128:v2i64:$src1, (imm:i8):$src2)  =>  (VAESKEYGENASSIST128rr:v2i64 VR128:v2i64:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESKEYGENASSIST128rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 50: @3749
    GIM_Try, /*On fail goto*//*Label 51*/ 3818,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aeskeygenassist,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v2i64 4664:iPTR, VR128:v2i64:$src1, (imm:i8):$src2)  =>  (AESKEYGENASSIST128rr:v2i64 VR128:v2i64:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESKEYGENASSIST128rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 51: @3818
    GIM_Try, /*On fail goto*//*Label 52*/ 3887,
      GIM_CheckFeatures, GIFBS_HasF16C,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_vcvtps2ph_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8i16 6021:iPTR, VR128:v4f32:$src1, (imm:i32):$src2)  =>  (VCVTPS2PHrr:v8i16 VR128:v4f32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPS2PHrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 52: @3887
    GIM_Try, /*On fail goto*//*Label 53*/ 3956,
      GIM_CheckFeatures, GIFBS_HasF16C,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_vcvtps2ph_256,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (intrinsic_wo_chain:v8i16 6022:iPTR, VR256:v8f32:$src1, (imm:i32):$src2)  =>  (VCVTPS2PHYrr:v8i16 VR256:v8f32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPS2PHYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 53: @3956
    GIM_Try, /*On fail goto*//*Label 54*/ 4014,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_bmi_pdep_32,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:i32 5669:iPTR, GR32:i32:$src1, GR32:i32:$src2)  =>  (PDEP32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PDEP32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 54: @4014
    GIM_Try, /*On fail goto*//*Label 55*/ 4072,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_bmi_pdep_64,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:i64 5670:iPTR, GR64:i64:$src1, GR64:i64:$src2)  =>  (PDEP64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PDEP64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 55: @4072
    GIM_Try, /*On fail goto*//*Label 56*/ 4130,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_bmi_pext_32,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:i32 5671:iPTR, GR32:i32:$src1, GR32:i32:$src2)  =>  (PEXT32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PEXT32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 56: @4130
    GIM_Try, /*On fail goto*//*Label 57*/ 4188,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_bmi_pext_64,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:i64 5672:iPTR, GR64:i64:$src1, GR64:i64:$src2)  =>  (PEXT64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PEXT64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 57: @4188
    GIM_Try, /*On fail goto*//*Label 58*/ 4246,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi2ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v4f32 5833:iPTR, VR128:v4f32:$src1, GR32:i32:$src2)  =>  (Int_VCVTSI2SSrr:v4f32 VR128:v4f32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSI2SSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 58: @4246
    GIM_Try, /*On fail goto*//*Label 59*/ 4304,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi642ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v4f32 5834:iPTR, VR128:v4f32:$src1, GR64:i64:$src2)  =>  (Int_VCVTSI2SS64rr:v4f32 VR128:v4f32:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSI2SS64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 59: @4304
    GIM_Try, /*On fail goto*//*Label 60*/ 4362,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v2f64 5878:iPTR, VR128:v2f64:$src1, GR32:i32:$src2)  =>  (Int_VCVTSI2SDrr:v2f64 VR128:v2f64:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSI2SDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 60: @4362
    GIM_Try, /*On fail goto*//*Label 61*/ 4420,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi642sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v2f64 5879:iPTR, VR128:v2f64:$src1, GR64:i64:$src2)  =>  (Int_VCVTSI2SD64rr:v2f64 VR128:v2f64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSI2SD64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 61: @4420
    GIM_Try, /*On fail goto*//*Label 62*/ 4478,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi2ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v4f32 5833:iPTR, VR128:v4f32:$src1, GR32:i32:$src2)  =>  (Int_CVTSI2SSrr:v4f32 VR128:v4f32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSI2SSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 62: @4478
    GIM_Try, /*On fail goto*//*Label 63*/ 4536,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi642ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v4f32 5834:iPTR, VR128:v4f32:$src1, GR64:i64:$src2)  =>  (Int_CVTSI2SS64rr:v4f32 VR128:v4f32:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSI2SS64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 63: @4536
    GIM_Try, /*On fail goto*//*Label 64*/ 4594,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v2f64 5878:iPTR, VR128:v2f64:$src1, GR32:i32:$src2)  =>  (Int_CVTSI2SDrr:v2f64 VR128:v2f64:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSI2SDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 64: @4594
    GIM_Try, /*On fail goto*//*Label 65*/ 4652,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi642sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v2f64 5879:iPTR, VR128:v2f64:$src1, GR64:i64:$src2)  =>  (Int_CVTSI2SD64rr:v2f64 VR128:v2f64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSI2SD64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 65: @4652
    GIM_Try, /*On fail goto*//*Label 66*/ 4710,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5877:iPTR, VR128:v4f32:$src1, VR128:v2f64:$src2)  =>  (Int_VCVTSD2SSrr:v4f32 VR128:v4f32:$src1, VR128:v2f64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSD2SSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 66: @4710
    GIM_Try, /*On fail goto*//*Label 67*/ 4768,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5877:iPTR, VR128:v4f32:$src1, VR128:v2f64:$src2)  =>  (Int_CVTSD2SSrr:v4f32 VR128:v4f32:$src1, VR128:v2f64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSD2SSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 67: @4768
    GIM_Try, /*On fail goto*//*Label 68*/ 4826,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtss2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5880:iPTR, VR128:v2f64:$src1, VR128:v4f32:$src2)  =>  (Int_VCVTSS2SDrr:v2f64 VR128:v2f64:$src1, VR128:v4f32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTSS2SDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 68: @4826
    GIM_Try, /*On fail goto*//*Label 69*/ 4884,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtss2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5880:iPTR, VR128:v2f64:$src1, VR128:v4f32:$src2)  =>  (Int_CVTSS2SDrr:v2f64 VR128:v2f64:$src1, VR128:v4f32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTSS2SDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 69: @4884
    GIM_Try, /*On fail goto*//*Label 70*/ 4942,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_b_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v16i8 6010:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (VPSIGNBrr128:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNBrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 70: @4942
    GIM_Try, /*On fail goto*//*Label 71*/ 5000,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_w_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6014:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPSIGNWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 71: @5000
    GIM_Try, /*On fail goto*//*Label 72*/ 5058,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_d_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6012:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSIGNDrr128:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNDrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 72: @5058
    GIM_Try, /*On fail goto*//*Label 73*/ 5116,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_phadd_sw_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 5994:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPHADDSWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDSWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 73: @5116
    GIM_Try, /*On fail goto*//*Label 74*/ 5174,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_phsub_sw_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6000:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPHSUBSWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHSUBSWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 74: @5174
    GIM_Try, /*On fail goto*//*Label 75*/ 5232,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_psign_b,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v32i8 4784:iPTR, VR256:v32i8:$src1, VR256:v32i8:$src2)  =>  (VPSIGNBYrr256:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNBYrr256,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 75: @5232
    GIM_Try, /*On fail goto*//*Label 76*/ 5290,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_psign_w,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v16i16 4786:iPTR, VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPSIGNWYrr256:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNWYrr256,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 76: @5290
    GIM_Try, /*On fail goto*//*Label 77*/ 5348,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_psign_d,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v8i32 4785:iPTR, VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSIGNDYrr256:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPSIGNDYrr256,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 77: @5348
    GIM_Try, /*On fail goto*//*Label 78*/ 5406,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_phadd_sw,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v16i16 4769:iPTR, VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPHADDSWrr256:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDSWrr256,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 78: @5406
    GIM_Try, /*On fail goto*//*Label 79*/ 5464,
      GIM_CheckFeatures, GIFBS_HasAVX2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx2_phsub_sw,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v16i16 4772:iPTR, VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPHSUBSWrr256:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHSUBSWrr256,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 79: @5464
    GIM_Try, /*On fail goto*//*Label 80*/ 5522,
      GIM_CheckFeatures, GIFBS_UseSSSE3,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_b_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v16i8 6010:iPTR, VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (PSIGNBrr128:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PSIGNBrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 80: @5522
    GIM_Try, /*On fail goto*//*Label 81*/ 5580,
      GIM_CheckFeatures, GIFBS_UseSSSE3,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_w_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6014:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PSIGNWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PSIGNWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 81: @5580
    GIM_Try, /*On fail goto*//*Label 82*/ 5638,
      GIM_CheckFeatures, GIFBS_UseSSSE3,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_psign_d_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6012:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PSIGNDrr128:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PSIGNDrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 82: @5638
    GIM_Try, /*On fail goto*//*Label 83*/ 5696,
      GIM_CheckFeatures, GIFBS_UseSSSE3,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_phadd_sw_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 5994:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PHADDSWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PHADDSWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 83: @5696
    GIM_Try, /*On fail goto*//*Label 84*/ 5754,
      GIM_CheckFeatures, GIFBS_UseSSSE3,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_ssse3_phsub_sw_128,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6000:iPTR, VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PHSUBSWrr128:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PHSUBSWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 84: @5754
    GIM_Try, /*On fail goto*//*Label 85*/ 5812,
      GIM_CheckFeatures, GIFBS_HasSSE42,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_crc32_32_8,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR8RegClassID,
      // (intrinsic_wo_chain:i32 5965:iPTR, GR32:i32:$src1, GR8:i8:$src2)  =>  (CRC32r32r8:i32 GR32:i32:$src1, GR8:i8:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CRC32r32r8,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 85: @5812
    GIM_Try, /*On fail goto*//*Label 86*/ 5870,
      GIM_CheckFeatures, GIFBS_HasSSE42,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_crc32_32_16,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR16RegClassID,
      // (intrinsic_wo_chain:i32 5963:iPTR, GR32:i32:$src1, GR16:i16:$src2)  =>  (CRC32r32r16:i32 GR32:i32:$src1, GR16:i16:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CRC32r32r16,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 86: @5870
    GIM_Try, /*On fail goto*//*Label 87*/ 5928,
      GIM_CheckFeatures, GIFBS_HasSSE42,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_crc32_32_32,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:i32 5964:iPTR, GR32:i32:$src1, GR32:i32:$src2)  =>  (CRC32r32r32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CRC32r32r32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 87: @5928
    GIM_Try, /*On fail goto*//*Label 88*/ 5986,
      GIM_CheckFeatures, GIFBS_HasSSE42,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse42_crc32_64_64,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:i64 5966:iPTR, GR64:i64:$src1, GR64:i64:$src2)  =>  (CRC32r64r64:i64 GR64:i64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CRC32r64r64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 88: @5986
    GIM_Try, /*On fail goto*//*Label 89*/ 6044,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha1nexte,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5815:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (SHA1NEXTErr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA1NEXTErr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 89: @6044
    GIM_Try, /*On fail goto*//*Label 90*/ 6102,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha1msg1,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5813:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (SHA1MSG1rr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA1MSG1rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 90: @6102
    GIM_Try, /*On fail goto*//*Label 91*/ 6160,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha1msg2,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5814:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (SHA1MSG2rr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA1MSG2rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 91: @6160
    GIM_Try, /*On fail goto*//*Label 92*/ 6218,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha256msg1,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5817:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (SHA256MSG1rr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA256MSG1rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 92: @6218
    GIM_Try, /*On fail goto*//*Label 93*/ 6276,
      GIM_CheckFeatures, GIFBS_HasSHA,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sha256msg2,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5818:iPTR, VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (SHA256MSG2rr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHA256MSG2rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 93: @6276
    GIM_Try, /*On fail goto*//*Label 94*/ 6334,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesenc,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4661:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VAESENCrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESENCrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 94: @6334
    GIM_Try, /*On fail goto*//*Label 95*/ 6392,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesenclast,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4662:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VAESENCLASTrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESENCLASTrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 95: @6392
    GIM_Try, /*On fail goto*//*Label 96*/ 6450,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesdec,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4659:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VAESDECrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESDECrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 96: @6450
    GIM_Try, /*On fail goto*//*Label 97*/ 6508,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesdeclast,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4660:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VAESDECLASTrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESDECLASTrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 97: @6508
    GIM_Try, /*On fail goto*//*Label 98*/ 6566,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesenc,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4661:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (AESENCrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESENCrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 98: @6566
    GIM_Try, /*On fail goto*//*Label 99*/ 6624,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesenclast,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4662:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (AESENCLASTrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESENCLASTrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 99: @6624
    GIM_Try, /*On fail goto*//*Label 100*/ 6682,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesdec,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4659:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (AESDECrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESDECrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 100: @6682
    GIM_Try, /*On fail goto*//*Label 101*/ 6740,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesdeclast,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4660:iPTR, VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (AESDECLASTrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESDECLASTrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 101: @6740
    GIM_Try, /*On fail goto*//*Label 102*/ 6798,
      GIM_CheckFeatures, GIFBS_HasSSE4A,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse4a_extrq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] mask
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 5981:iPTR, VR128:v2i64:$src, VR128:v16i8:$mask)  =>  (EXTRQ:v2i64 VR128:v2i64:$src, VR128:v16i8:$mask)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::EXTRQ,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // mask
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 102: @6798
    GIM_Try, /*On fail goto*//*Label 103*/ 6856,
      GIM_CheckFeatures, GIFBS_HasSSE4A,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse4a_insertq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] mask
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 5983:iPTR, VR128:v2i64:$src, VR128:v2i64:$mask)  =>  (INSERTQ:v2i64 VR128:v2i64:$src, VR128:v2i64:$mask)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::INSERTQ,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // mask
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 103: @6856
    GIM_Try, /*On fail goto*//*Label 104*/ 6914,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi2ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v4f32 5833:iPTR, VR128X:v4f32:$src1, GR32:i32:$src2)  =>  (VCVTSI2SSZrr_Int:v4f32 VR128X:v4f32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSI2SSZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 104: @6914
    GIM_Try, /*On fail goto*//*Label 105*/ 6972,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtsi642ss,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v4f32 5834:iPTR, VR128X:v4f32:$src1, GR64:i64:$src2)  =>  (VCVTSI642SSZrr_Int:v4f32 VR128X:v4f32:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSI642SSZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 105: @6972
    GIM_Try, /*On fail goto*//*Label 106*/ 7030,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v2f64 5878:iPTR, VR128X:v2f64:$src1, GR32:i32:$src2)  =>  (VCVTSI2SDZrr_Int:v2f64 VR128X:v2f64:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSI2SDZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 106: @7030
    GIM_Try, /*On fail goto*//*Label 107*/ 7088,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsi642sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR64RegClassID,
      // (intrinsic_wo_chain:v2f64 5879:iPTR, VR128X:v2f64:$src1, GR64:i64:$src2)  =>  (VCVTSI642SDZrr_Int:v2f64 VR128X:v2f64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSI642SDZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 107: @7088
    GIM_Try, /*On fail goto*//*Label 108*/ 7146,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx512_cvtusi2sd,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/X86::GR32RegClassID,
      // (intrinsic_wo_chain:v2f64 4844:iPTR, VR128X:v2f64:$src1, GR32:i32:$src2)  =>  (VCVTUSI2SDZrr_Int:v2f64 VR128X:v2f64:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTUSI2SDZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 108: @7146
    GIM_Try, /*On fail goto*//*Label 109*/ 7232,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v8s16,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[1] src2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:v8i16 (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2), VR128:v8i16:$src3)  =>  (VPMACSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSWWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 109: @7232
    GIM_Try, /*On fail goto*//*Label 110*/ 7318,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v4s32,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[1] src2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:v4i32 (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2), VR128:v4i32:$src3)  =>  (VPMACSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSDDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 110: @7318
    GIM_Try, /*On fail goto*//*Label 111*/ 7404,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v8s16,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[1] src2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::VR128RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:v8i16 VR128:v8i16:$src3, (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2))  =>  (VPMACSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSWWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 111: @7404
    GIM_Try, /*On fail goto*//*Label 112*/ 7490,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src3
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v4s32,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[1] src2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::VR128RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:v4i32 VR128:v4i32:$src3, (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2))  =>  (VPMACSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPMACSDDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src2
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src3
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 112: @7490
    GIM_Try, /*On fail goto*//*Label 113*/ 7540,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (add:i8 GR8:i8:$src, 1:i8)  =>  (INC8r:i8:i32 GR8:i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::INC8r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 113: @7540
    GIM_Try, /*On fail goto*//*Label 114*/ 7590,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (add:i16 GR16:i16:$src, 1:i16)  =>  (INC16r:i16:i32 GR16:i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::INC16r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 114: @7590
    GIM_Try, /*On fail goto*//*Label 115*/ 7640,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (add:i32 GR32:i32:$src, 1:i32)  =>  (INC32r:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::INC32r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 115: @7640
    GIM_Try, /*On fail goto*//*Label 116*/ 7690,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (add:i64 GR64:i64:$src, 1:i64)  =>  (INC64r:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::INC64r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 116: @7690
    GIM_Try, /*On fail goto*//*Label 117*/ 7740,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (add:i8 GR8:i8:$src, -1:i8)  =>  (DEC8r:i8:i32 GR8:i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DEC8r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 117: @7740
    GIM_Try, /*On fail goto*//*Label 118*/ 7790,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (add:i16 GR16:i16:$src, -1:i16)  =>  (DEC16r:i16:i32 GR16:i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DEC16r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 118: @7790
    GIM_Try, /*On fail goto*//*Label 119*/ 7840,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (add:i32 GR32:i32:$src, -1:i32)  =>  (DEC32r:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DEC32r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 119: @7840
    GIM_Try, /*On fail goto*//*Label 120*/ 7890,
      GIM_CheckFeatures, GIFBS_NotSlowIncDec,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (add:i64 GR64:i64:$src, -1:i64)  =>  (DEC64r:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::DEC64r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 120: @7890
    GIM_Try, /*On fail goto*//*Label 121*/ 7953,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (ADD8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 121: @7953
    GIM_Try, /*On fail goto*//*Label 122*/ 8016,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (ADD16ri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 122: @8016
    GIM_Try, /*On fail goto*//*Label 123*/ 8079,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (add:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (ADD32ri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 123: @8079
    GIM_Try, /*On fail goto*//*Label 124*/ 8120,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (VPADDBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 124: @8120
    GIM_Try, /*On fail goto*//*Label 125*/ 8161,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (PADDBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PADDBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 125: @8161
    GIM_Try, /*On fail goto*//*Label 126*/ 8202,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (add:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)  =>  (VPADDBYrr:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDBYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 126: @8202
    GIM_Try, /*On fail goto*//*Label 127*/ 8243,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPADDWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 127: @8243
    GIM_Try, /*On fail goto*//*Label 128*/ 8284,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PADDWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PADDWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 128: @8284
    GIM_Try, /*On fail goto*//*Label 129*/ 8325,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (add:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPADDWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDWYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 129: @8325
    GIM_Try, /*On fail goto*//*Label 130*/ 8366,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPADDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 130: @8366
    GIM_Try, /*On fail goto*//*Label 131*/ 8407,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PADDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PADDDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 131: @8407
    GIM_Try, /*On fail goto*//*Label 132*/ 8448,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (add:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPADDDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 132: @8448
    GIM_Try, /*On fail goto*//*Label 133*/ 8489,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPADDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 133: @8489
    GIM_Try, /*On fail goto*//*Label 134*/ 8530,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (add:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PADDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PADDQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 134: @8530
    GIM_Try, /*On fail goto*//*Label 135*/ 8571,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (add:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPADDQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 135: @8571
    GIM_Try, /*On fail goto*//*Label 136*/ 8612,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK8RegClassID,
      // (add:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KADDBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KADDBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 136: @8612
    GIM_Try, /*On fail goto*//*Label 137*/ 8653,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK16RegClassID,
      // (add:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KADDWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KADDWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 137: @8653
    GIM_Try, /*On fail goto*//*Label 138*/ 8694,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK32RegClassID,
      // (add:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KADDDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KADDDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 138: @8694
    GIM_Try, /*On fail goto*//*Label 139*/ 8735,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK64RegClassID,
      // (add:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KADDQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KADDQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 139: @8735
    GIM_Try, /*On fail goto*//*Label 140*/ 8776,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (add:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPADDQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 140: @8776
    GIM_Try, /*On fail goto*//*Label 141*/ 8817,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (add:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPADDQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 141: @8817
    GIM_Try, /*On fail goto*//*Label 142*/ 8858,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (add:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPADDQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 142: @8858
    GIM_Try, /*On fail goto*//*Label 143*/ 8899,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (add:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPADDDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 143: @8899
    GIM_Try, /*On fail goto*//*Label 144*/ 8940,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (add:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPADDDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 144: @8940
    GIM_Try, /*On fail goto*//*Label 145*/ 8981,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (add:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPADDDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 145: @8981
    GIM_Try, /*On fail goto*//*Label 146*/ 9022,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (add:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPADDWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 146: @9022
    GIM_Try, /*On fail goto*//*Label 147*/ 9063,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (add:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPADDWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 147: @9063
    GIM_Try, /*On fail goto*//*Label 148*/ 9104,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (add:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPADDWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 148: @9104
    GIM_Try, /*On fail goto*//*Label 149*/ 9145,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (add:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)  =>  (VPADDBZrr:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDBZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 149: @9145
    GIM_Try, /*On fail goto*//*Label 150*/ 9186,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (add:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)  =>  (VPADDBZ256rr:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDBZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 150: @9186
    GIM_Try, /*On fail goto*//*Label 151*/ 9227,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (add:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)  =>  (VPADDBZ128rr:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPADDBZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 151: @9227
    GIM_Try, /*On fail goto*//*Label 152*/ 9269,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR8RegClassID,
      // (add:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (ADD8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD8rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 152: @9269
    GIM_Try, /*On fail goto*//*Label 153*/ 9311,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (add:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (ADD16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 153: @9311
    GIM_Try, /*On fail goto*//*Label 154*/ 9353,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (add:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (ADD32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 154: @9353
    GIM_Try, /*On fail goto*//*Label 155*/ 9395,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (add:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (ADD64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 155: @9395
    GIM_Try, /*On fail goto*//*Label 156*/ 9489,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR512RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPANDDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPANDDZrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 156: @9489
    GIM_Try, /*On fail goto*//*Label 157*/ 9583,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPANDDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPANDDZ256rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 157: @9583
    GIM_Try, /*On fail goto*//*Label 158*/ 9677,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPANDDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPANDDZ128rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 158: @9677
    GIM_Try, /*On fail goto*//*Label 159*/ 9783,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCIC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCIC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 159: @9783
    GIM_Try, /*On fail goto*//*Label 160*/ 9889,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCIC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCIC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 160: @9889
    GIM_Try, /*On fail goto*//*Label 161*/ 9995,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, -1:i32))  =>  (TZMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::TZMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 161: @9995
    GIM_Try, /*On fail goto*//*Label 162*/ 10101,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, -1:i64))  =>  (TZMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::TZMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 162: @10101
    GIM_Try, /*On fail goto*//*Label 163*/ 10207,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i32 (add:i32 GR32:i32:$src, 1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (BLCIC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCIC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 163: @10207
    GIM_Try, /*On fail goto*//*Label 164*/ 10313,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i64 (add:i64 GR64:i64:$src, 1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (BLCIC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCIC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 164: @10313
    GIM_Try, /*On fail goto*//*Label 165*/ 10419,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i32 (add:i32 GR32:i32:$src, -1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (TZMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::TZMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 165: @10419
    GIM_Try, /*On fail goto*//*Label 166*/ 10525,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (and:i64 (add:i64 GR64:i64:$src, -1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (TZMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::TZMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 166: @10525
    GIM_Try, /*On fail goto*//*Label 167*/ 10607,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 (xor:i32 GR32:i32:$src1, -1:i32), GR32:i32:$src2)  =>  (ANDN32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ANDN32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 167: @10607
    GIM_Try, /*On fail goto*//*Label 168*/ 10689,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 (xor:i64 GR64:i64:$src1, -1:i64), GR64:i64:$src2)  =>  (ANDN64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ANDN64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 168: @10689
    GIM_Try, /*On fail goto*//*Label 169*/ 10767,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSR32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSR32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 169: @10767
    GIM_Try, /*On fail goto*//*Label 170*/ 10845,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSR64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSR64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 170: @10845
    GIM_Try, /*On fail goto*//*Label 171*/ 10923,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, 0,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 (sub:i32 0:i32, GR32:i32:$src), GR32:i32:$src)  =>  (BLSI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 171: @10923
    GIM_Try, /*On fail goto*//*Label 172*/ 11001,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, 0,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 (sub:i64 0:i64, GR64:i64:$src), GR64:i64:$src)  =>  (BLSI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 172: @11001
    GIM_Try, /*On fail goto*//*Label 173*/ 11131,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
      GIM_CheckNumOperands, /*MI*/3, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_LSHR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_TRUNC,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[2] Operand 1
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_SUB,
      // MIs[3] Operand 0
      GIM_CheckType, /*MI*/3, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[3] Operand 1
      GIM_CheckType, /*MI*/3, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/3, /*Op*/1, 32,
      // MIs[3] lz
      GIM_CheckType, /*MI*/3, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/3, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      GIM_CheckIsSafeToFold, /*InsnID*/3,
      // (and:i32 (srl:i32 -1:i32, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))), GR32:i32:$src)  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BZHI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/2, // lz
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 173: @11131
    GIM_Try, /*On fail goto*//*Label 174*/ 11209,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCFILL32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCFILL32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 174: @11209
    GIM_Try, /*On fail goto*//*Label 175*/ 11287,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCFILL64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCFILL64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 175: @11287
    GIM_Try, /*On fail goto*//*Label 176*/ 11365,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSR32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSR32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 176: @11365
    GIM_Try, /*On fail goto*//*Label 177*/ 11443,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSR64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSR64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 177: @11443
    GIM_Try, /*On fail goto*//*Label 178*/ 11521,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, 0,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 GR32:i32:$src, (sub:i32 0:i32, GR32:i32:$src))  =>  (BLSI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 178: @11521
    GIM_Try, /*On fail goto*//*Label 179*/ 11599,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, 0,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 GR64:i64:$src, (sub:i64 0:i64, GR64:i64:$src))  =>  (BLSI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 179: @11599
    GIM_Try, /*On fail goto*//*Label 180*/ 11729,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
      GIM_CheckNumOperands, /*MI*/3, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_LSHR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_TRUNC,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[2] Operand 1
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_SUB,
      // MIs[3] Operand 0
      GIM_CheckType, /*MI*/3, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[3] Operand 1
      GIM_CheckType, /*MI*/3, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/3, /*Op*/1, 32,
      // MIs[3] lz
      GIM_CheckType, /*MI*/3, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/3, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      GIM_CheckIsSafeToFold, /*InsnID*/3,
      // (and:i32 GR32:i32:$src, (srl:i32 -1:i32, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))))  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BZHI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/2, // lz
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 180: @11729
    GIM_Try, /*On fail goto*//*Label 181*/ 11807,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCFILL32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCFILL32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 181: @11807
    GIM_Try, /*On fail goto*//*Label 182*/ 11885,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCFILL64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCFILL64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 182: @11885
    GIM_Try, /*On fail goto*//*Label 183*/ 11967,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 GR32:i32:$src2, (xor:i32 GR32:i32:$src1, -1:i32))  =>  (ANDN32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ANDN32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 183: @11967
    GIM_Try, /*On fail goto*//*Label 184*/ 12049,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i64 GR64:i64:$src2, (xor:i64 GR64:i64:$src1, -1:i64))  =>  (ANDN64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ANDN64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 184: @12049
    GIM_Try, /*On fail goto*//*Label 185*/ 12112,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (AND8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AND8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 185: @12112
    GIM_Try, /*On fail goto*//*Label 186*/ 12175,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (AND16ri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AND16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 186: @12175
    GIM_Try, /*On fail goto*//*Label 187*/ 12238,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (and:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (AND32ri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AND32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 187: @12238
    GIM_Try, /*On fail goto*//*Label 188*/ 12279,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (and:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPANDrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPANDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 188: @12279
    GIM_Try, /*On fail goto*//*Label 189*/ 12320,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (and:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PANDrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PANDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 189: @12320
    GIM_Try, /*On fail goto*//*Label 190*/ 12361,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (and:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPANDYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPANDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 190: @12361
    GIM_Try, /*On fail goto*//*Label 191*/ 12402,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK8RegClassID,
      // (and:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KANDBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KANDBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 191: @12402
    GIM_Try, /*On fail goto*//*Label 192*/ 12443,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK16RegClassID,
      // (and:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KANDWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KANDWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 192: @12443
    GIM_Try, /*On fail goto*//*Label 193*/ 12484,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK32RegClassID,
      // (and:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KANDDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KANDDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 193: @12484
    GIM_Try, /*On fail goto*//*Label 194*/ 12525,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK64RegClassID,
      // (and:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KANDQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KANDQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 194: @12525
    GIM_Try, /*On fail goto*//*Label 195*/ 12566,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (and:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPANDQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPANDQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 195: @12566
    GIM_Try, /*On fail goto*//*Label 196*/ 12607,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (and:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPANDQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPANDQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 196: @12607
    GIM_Try, /*On fail goto*//*Label 197*/ 12648,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (and:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPANDQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPANDQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 197: @12648
    GIM_Try, /*On fail goto*//*Label 198*/ 12689,
      GIM_CheckFeatures, GIFBS_HasAVX1Only,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (and:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VANDPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VANDPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 198: @12689
    GIM_Try, /*On fail goto*//*Label 199*/ 12731,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR8RegClassID,
      // (and:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (AND8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::AND8rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 199: @12731
    GIM_Try, /*On fail goto*//*Label 200*/ 12773,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (and:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (AND16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::AND16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 200: @12773
    GIM_Try, /*On fail goto*//*Label 201*/ 12815,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (and:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (AND32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::AND32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 201: @12815
    GIM_Try, /*On fail goto*//*Label 202*/ 12857,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_AND,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (and:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (AND64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::AND64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 202: @12857
    GIM_Try, /*On fail goto*//*Label 203*/ 12905,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (sra:i8 GR8:i8:$src1, 1:i8)  =>  (SAR8r1:i8:i32 GR8:i8:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR8r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 203: @12905
    GIM_Try, /*On fail goto*//*Label 204*/ 12953,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (sra:i16 GR16:i16:$src1, 1:i8)  =>  (SAR16r1:i16:i32 GR16:i16:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR16r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 204: @12953
    GIM_Try, /*On fail goto*//*Label 205*/ 13001,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (sra:i32 GR32:i32:$src1, 1:i8)  =>  (SAR32r1:i32:i32 GR32:i32:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR32r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 205: @13001
    GIM_Try, /*On fail goto*//*Label 206*/ 13049,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (sra:i64 GR64:i64:$src1, 1:i8)  =>  (SAR64r1:i64:i32 GR64:i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR64r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 206: @13049
    GIM_Try, /*On fail goto*//*Label 207*/ 13112,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (SAR8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 207: @13112
    GIM_Try, /*On fail goto*//*Label 208*/ 13175,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:i16 GR16:i16:$src1, (imm:i8):$src2)  =>  (SAR16ri:i16:i32 GR16:i16:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 208: @13175
    GIM_Try, /*On fail goto*//*Label 209*/ 13238,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:i32 GR32:i32:$src1, (imm:i8):$src2)  =>  (SAR32ri:i32:i32 GR32:i32:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 209: @13238
    GIM_Try, /*On fail goto*//*Label 210*/ 13301,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:i64 GR64:i64:$src1, (imm:i8):$src2)  =>  (SAR64ri:i64:i32 GR64:i64:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SAR64ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 210: @13301
    GIM_Try, /*On fail goto*//*Label 211*/ 13342,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sra:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSRAVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 211: @13342
    GIM_Try, /*On fail goto*//*Label 212*/ 13383,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (sra:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSRAVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 212: @13383
    GIM_Try, /*On fail goto*//*Label 213*/ 13424,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sra:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSRAVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 213: @13424
    GIM_Try, /*On fail goto*//*Label 214*/ 13465,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sra:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSRAVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 214: @13465
    GIM_Try, /*On fail goto*//*Label 215*/ 13506,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sra:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSRAVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 215: @13506
    GIM_Try, /*On fail goto*//*Label 216*/ 13547,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sra:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSRAVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 216: @13547
    GIM_Try, /*On fail goto*//*Label 217*/ 13588,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sra:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSRAVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 217: @13588
    GIM_Try, /*On fail goto*//*Label 218*/ 13629,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sra:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSRAVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 218: @13629
    GIM_Try, /*On fail goto*//*Label 219*/ 13670,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sra:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSRAVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 219: @13670
    GIM_Try, /*On fail goto*//*Label 220*/ 13711,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sra:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSRAVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 220: @13711
    GIM_Try, /*On fail goto*//*Label 221*/ 13752,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ASHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sra:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSRAVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRAVWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 221: @13752
    GIM_Try, /*On fail goto*//*Label 222*/ 13796,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP32RegClassID,
      // (fadd:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (ADD_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD_Fp32,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 222: @13796
    GIM_Try, /*On fail goto*//*Label 223*/ 13840,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP64RegClassID,
      // (fadd:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (ADD_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD_Fp64,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 223: @13840
    GIM_Try, /*On fail goto*//*Label 224*/ 13882,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP80RegClassID,
      // (fadd:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (ADD_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADD_Fp80,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 224: @13882
    GIM_Try, /*On fail goto*//*Label 225*/ 13923,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fadd:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VADDPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 225: @13923
    GIM_Try, /*On fail goto*//*Label 226*/ 13964,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fadd:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VADDPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 226: @13964
    GIM_Try, /*On fail goto*//*Label 227*/ 14005,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fadd:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VADDPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 227: @14005
    GIM_Try, /*On fail goto*//*Label 228*/ 14046,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fadd:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VADDPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 228: @14046
    GIM_Try, /*On fail goto*//*Label 229*/ 14087,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fadd:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (ADDPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADDPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 229: @14087
    GIM_Try, /*On fail goto*//*Label 230*/ 14128,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fadd:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (ADDPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADDPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 230: @14128
    GIM_Try, /*On fail goto*//*Label 231*/ 14169,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fadd:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VADDSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 231: @14169
    GIM_Try, /*On fail goto*//*Label 232*/ 14210,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fadd:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VADDSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 232: @14210
    GIM_Try, /*On fail goto*//*Label 233*/ 14251,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fadd:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (ADDSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADDSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 233: @14251
    GIM_Try, /*On fail goto*//*Label 234*/ 14292,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fadd:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (ADDSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::ADDSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 234: @14292
    GIM_Try, /*On fail goto*//*Label 235*/ 14333,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32XRegClassID,
      // (fadd:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VADDSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDSSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 235: @14333
    GIM_Try, /*On fail goto*//*Label 236*/ 14374,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64XRegClassID,
      // (fadd:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VADDSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDSDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 236: @14374
    GIM_Try, /*On fail goto*//*Label 237*/ 14415,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fadd:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VADDPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 237: @14415
    GIM_Try, /*On fail goto*//*Label 238*/ 14456,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fadd:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VADDPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 238: @14456
    GIM_Try, /*On fail goto*//*Label 239*/ 14497,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fadd:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VADDPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 239: @14497
    GIM_Try, /*On fail goto*//*Label 240*/ 14538,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fadd:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VADDPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 240: @14538
    GIM_Try, /*On fail goto*//*Label 241*/ 14579,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fadd:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VADDPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 241: @14579
    GIM_Try, /*On fail goto*//*Label 242*/ 14620,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FADD,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fadd:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VADDPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VADDPDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 242: @14620
    GIM_Try, /*On fail goto*//*Label 243*/ 14664,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP32RegClassID,
      // (fdiv:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (DIV_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIV_Fp32,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 243: @14664
    GIM_Try, /*On fail goto*//*Label 244*/ 14708,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP64RegClassID,
      // (fdiv:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (DIV_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIV_Fp64,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 244: @14708
    GIM_Try, /*On fail goto*//*Label 245*/ 14750,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP80RegClassID,
      // (fdiv:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (DIV_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIV_Fp80,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 245: @14750
    GIM_Try, /*On fail goto*//*Label 246*/ 14791,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fdiv:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VDIVPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 246: @14791
    GIM_Try, /*On fail goto*//*Label 247*/ 14832,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fdiv:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VDIVPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 247: @14832
    GIM_Try, /*On fail goto*//*Label 248*/ 14873,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fdiv:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VDIVPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 248: @14873
    GIM_Try, /*On fail goto*//*Label 249*/ 14914,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fdiv:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VDIVPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 249: @14914
    GIM_Try, /*On fail goto*//*Label 250*/ 14955,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fdiv:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (DIVPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIVPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 250: @14955
    GIM_Try, /*On fail goto*//*Label 251*/ 14996,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fdiv:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (DIVPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIVPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 251: @14996
    GIM_Try, /*On fail goto*//*Label 252*/ 15037,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fdiv:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VDIVSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 252: @15037
    GIM_Try, /*On fail goto*//*Label 253*/ 15078,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fdiv:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VDIVSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 253: @15078
    GIM_Try, /*On fail goto*//*Label 254*/ 15119,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fdiv:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (DIVSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIVSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 254: @15119
    GIM_Try, /*On fail goto*//*Label 255*/ 15160,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fdiv:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (DIVSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::DIVSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 255: @15160
    GIM_Try, /*On fail goto*//*Label 256*/ 15201,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32XRegClassID,
      // (fdiv:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VDIVSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVSSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 256: @15201
    GIM_Try, /*On fail goto*//*Label 257*/ 15242,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64XRegClassID,
      // (fdiv:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VDIVSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVSDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 257: @15242
    GIM_Try, /*On fail goto*//*Label 258*/ 15283,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fdiv:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VDIVPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 258: @15283
    GIM_Try, /*On fail goto*//*Label 259*/ 15324,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fdiv:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VDIVPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 259: @15324
    GIM_Try, /*On fail goto*//*Label 260*/ 15365,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fdiv:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VDIVPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 260: @15365
    GIM_Try, /*On fail goto*//*Label 261*/ 15406,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fdiv:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VDIVPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 261: @15406
    GIM_Try, /*On fail goto*//*Label 262*/ 15447,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fdiv:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VDIVPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 262: @15447
    GIM_Try, /*On fail goto*//*Label 263*/ 15488,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FDIV,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fdiv:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VDIVPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VDIVPDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 263: @15488
    GIM_Try, /*On fail goto*//*Label 264*/ 15532,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP32RegClassID,
      // (fmul:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (MUL_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MUL_Fp32,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 264: @15532
    GIM_Try, /*On fail goto*//*Label 265*/ 15576,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP64RegClassID,
      // (fmul:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (MUL_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MUL_Fp64,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 265: @15576
    GIM_Try, /*On fail goto*//*Label 266*/ 15618,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP80RegClassID,
      // (fmul:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (MUL_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MUL_Fp80,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 266: @15618
    GIM_Try, /*On fail goto*//*Label 267*/ 15659,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fmul:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VMULPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 267: @15659
    GIM_Try, /*On fail goto*//*Label 268*/ 15700,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fmul:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VMULPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 268: @15700
    GIM_Try, /*On fail goto*//*Label 269*/ 15741,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fmul:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VMULPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 269: @15741
    GIM_Try, /*On fail goto*//*Label 270*/ 15782,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fmul:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VMULPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 270: @15782
    GIM_Try, /*On fail goto*//*Label 271*/ 15823,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fmul:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (MULPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MULPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 271: @15823
    GIM_Try, /*On fail goto*//*Label 272*/ 15864,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fmul:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (MULPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MULPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 272: @15864
    GIM_Try, /*On fail goto*//*Label 273*/ 15905,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fmul:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VMULSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 273: @15905
    GIM_Try, /*On fail goto*//*Label 274*/ 15946,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fmul:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VMULSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 274: @15946
    GIM_Try, /*On fail goto*//*Label 275*/ 15987,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fmul:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (MULSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MULSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 275: @15987
    GIM_Try, /*On fail goto*//*Label 276*/ 16028,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fmul:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (MULSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MULSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 276: @16028
    GIM_Try, /*On fail goto*//*Label 277*/ 16069,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32XRegClassID,
      // (fmul:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VMULSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULSSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 277: @16069
    GIM_Try, /*On fail goto*//*Label 278*/ 16110,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64XRegClassID,
      // (fmul:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VMULSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULSDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 278: @16110
    GIM_Try, /*On fail goto*//*Label 279*/ 16151,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fmul:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VMULPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 279: @16151
    GIM_Try, /*On fail goto*//*Label 280*/ 16192,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fmul:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VMULPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 280: @16192
    GIM_Try, /*On fail goto*//*Label 281*/ 16233,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fmul:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VMULPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 281: @16233
    GIM_Try, /*On fail goto*//*Label 282*/ 16274,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fmul:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VMULPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 282: @16274
    GIM_Try, /*On fail goto*//*Label 283*/ 16315,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fmul:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VMULPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 283: @16315
    GIM_Try, /*On fail goto*//*Label 284*/ 16356,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FMUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fmul:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VMULPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMULPDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 284: @16356
    GIM_Try, /*On fail goto*//*Label 285*/ 16400,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP32RegClassID,
      // (fsub:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (SUB_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB_Fp32,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 285: @16400
    GIM_Try, /*On fail goto*//*Label 286*/ 16444,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP64RegClassID,
      // (fsub:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (SUB_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB_Fp64,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 286: @16444
    GIM_Try, /*On fail goto*//*Label 287*/ 16486,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::RFP80RegClassID,
      // (fsub:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (SUB_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB_Fp80,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 287: @16486
    GIM_Try, /*On fail goto*//*Label 288*/ 16527,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fsub:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VSUBPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 288: @16527
    GIM_Try, /*On fail goto*//*Label 289*/ 16568,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fsub:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VSUBPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 289: @16568
    GIM_Try, /*On fail goto*//*Label 290*/ 16609,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fsub:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VSUBPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 290: @16609
    GIM_Try, /*On fail goto*//*Label 291*/ 16650,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (fsub:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VSUBPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 291: @16650
    GIM_Try, /*On fail goto*//*Label 292*/ 16691,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fsub:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (SUBPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUBPSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 292: @16691
    GIM_Try, /*On fail goto*//*Label 293*/ 16732,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (fsub:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (SUBPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUBPDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 293: @16732
    GIM_Try, /*On fail goto*//*Label 294*/ 16773,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fsub:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VSUBSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 294: @16773
    GIM_Try, /*On fail goto*//*Label 295*/ 16814,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fsub:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VSUBSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 295: @16814
    GIM_Try, /*On fail goto*//*Label 296*/ 16855,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32RegClassID,
      // (fsub:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (SUBSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUBSSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 296: @16855
    GIM_Try, /*On fail goto*//*Label 297*/ 16896,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64RegClassID,
      // (fsub:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (SUBSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUBSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 297: @16896
    GIM_Try, /*On fail goto*//*Label 298*/ 16937,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR32XRegClassID,
      // (fsub:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VSUBSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBSSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 298: @16937
    GIM_Try, /*On fail goto*//*Label 299*/ 16978,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::FR64XRegClassID,
      // (fsub:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VSUBSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBSDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 299: @16978
    GIM_Try, /*On fail goto*//*Label 300*/ 17019,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fsub:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VSUBPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 300: @17019
    GIM_Try, /*On fail goto*//*Label 301*/ 17060,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (fsub:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VSUBPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 301: @17060
    GIM_Try, /*On fail goto*//*Label 302*/ 17101,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fsub:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VSUBPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 302: @17101
    GIM_Try, /*On fail goto*//*Label 303*/ 17142,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fsub:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VSUBPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 303: @17142
    GIM_Try, /*On fail goto*//*Label 304*/ 17183,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (fsub:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VSUBPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 304: @17183
    GIM_Try, /*On fail goto*//*Label 305*/ 17224,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FSUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (fsub:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VSUBPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VSUBPDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 305: @17224
    GIM_Try, /*On fail goto*//*Label 306*/ 17270,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphsubwd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6064:iPTR, VR128:v8i16:$src)  =>  (VPHSUBWDrr:v4i32 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHSUBWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 306: @17270
    GIM_Try, /*On fail goto*//*Label 307*/ 17316,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphsubdq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6063:iPTR, VR128:v4i32:$src)  =>  (VPHSUBDQrr:v2i64 VR128:v4i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHSUBDQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 307: @17316
    GIM_Try, /*On fail goto*//*Label 308*/ 17362,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphsubbw,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6062:iPTR, VR128:v16i8:$src)  =>  (VPHSUBBWrr:v8i16 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHSUBBWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 308: @17362
    GIM_Try, /*On fail goto*//*Label 309*/ 17408,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddwq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6061:iPTR, VR128:v8i16:$src)  =>  (VPHADDWQrr:v2i64 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDWQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 309: @17408
    GIM_Try, /*On fail goto*//*Label 310*/ 17454,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddwd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6060:iPTR, VR128:v8i16:$src)  =>  (VPHADDWDrr:v4i32 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 310: @17454
    GIM_Try, /*On fail goto*//*Label 311*/ 17500,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphadduwq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6059:iPTR, VR128:v8i16:$src)  =>  (VPHADDUWQrr:v2i64 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUWQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 311: @17500
    GIM_Try, /*On fail goto*//*Label 312*/ 17546,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphadduwd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6058:iPTR, VR128:v8i16:$src)  =>  (VPHADDUWDrr:v4i32 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUWDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 312: @17546
    GIM_Try, /*On fail goto*//*Label 313*/ 17592,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddudq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6057:iPTR, VR128:v4i32:$src)  =>  (VPHADDUDQrr:v2i64 VR128:v4i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUDQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 313: @17592
    GIM_Try, /*On fail goto*//*Label 314*/ 17638,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddubw,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6056:iPTR, VR128:v16i8:$src)  =>  (VPHADDUBWrr:v8i16 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUBWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 314: @17638
    GIM_Try, /*On fail goto*//*Label 315*/ 17684,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddubq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6055:iPTR, VR128:v16i8:$src)  =>  (VPHADDUBQrr:v2i64 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUBQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 315: @17684
    GIM_Try, /*On fail goto*//*Label 316*/ 17730,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddubd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6054:iPTR, VR128:v16i8:$src)  =>  (VPHADDUBDrr:v4i32 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDUBDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 316: @17730
    GIM_Try, /*On fail goto*//*Label 317*/ 17776,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphadddq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6053:iPTR, VR128:v4i32:$src)  =>  (VPHADDDQrr:v2i64 VR128:v4i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDDQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 317: @17776
    GIM_Try, /*On fail goto*//*Label 318*/ 17822,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddbw,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 6052:iPTR, VR128:v16i8:$src)  =>  (VPHADDBWrr:v8i16 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDBWrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 318: @17822
    GIM_Try, /*On fail goto*//*Label 319*/ 17868,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddbq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 6051:iPTR, VR128:v16i8:$src)  =>  (VPHADDBQrr:v2i64 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDBQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 319: @17868
    GIM_Try, /*On fail goto*//*Label 320*/ 17914,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vphaddbd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 6050:iPTR, VR128:v16i8:$src)  =>  (VPHADDBDrr:v4i32 VR128:v16i8:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHADDBDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 320: @17914
    GIM_Try, /*On fail goto*//*Label 321*/ 17960,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 6037:iPTR, VR128:v4f32:$src)  =>  (VFRCZSSrr:v4f32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZSSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 321: @17960
    GIM_Try, /*On fail goto*//*Label 322*/ 18006,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_ps,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 6034:iPTR, VR128:v4f32:$src)  =>  (VFRCZPSrr:v4f32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZPSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 322: @18006
    GIM_Try, /*On fail goto*//*Label 323*/ 18052,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_ps_256,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v8f32 6035:iPTR, VR256:v8f32:$src)  =>  (VFRCZPSrrY:v8f32 VR256:v8f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZPSrrY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 323: @18052
    GIM_Try, /*On fail goto*//*Label 324*/ 18098,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_sd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 6036:iPTR, VR128:v2f64:$src)  =>  (VFRCZSDrr:v2f64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZSDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 324: @18098
    GIM_Try, /*On fail goto*//*Label 325*/ 18144,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_pd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 6032:iPTR, VR128:v2f64:$src)  =>  (VFRCZPDrr:v2f64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZPDrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 325: @18144
    GIM_Try, /*On fail goto*//*Label 326*/ 18190,
      GIM_CheckFeatures, GIFBS_HasXOP,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_xop_vfrcz_pd_256,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v4f64 6033:iPTR, VR256:v4f64:$src)  =>  (VFRCZPDrrY:v4f64 VR256:v4f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VFRCZPDrrY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 326: @18190
    GIM_Try, /*On fail goto*//*Label 327*/ 18236,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5875:iPTR, VR128:v2f64:$src)  =>  (VCVTSD2SIrr:i32 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSD2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 327: @18236
    GIM_Try, /*On fail goto*//*Label 328*/ 18282,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5876:iPTR, VR128:v2f64:$src)  =>  (VCVTSD2SI64rr:i64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSD2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 328: @18282
    GIM_Try, /*On fail goto*//*Label 329*/ 18328,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5875:iPTR, VR128:v2f64:$src)  =>  (CVTSD2SIrr:i32 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CVTSD2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 329: @18328
    GIM_Try, /*On fail goto*//*Label 330*/ 18374,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5876:iPTR, VR128:v2f64:$src)  =>  (CVTSD2SI64rr:i64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CVTSD2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 330: @18374
    GIM_Try, /*On fail goto*//*Label 331*/ 18420,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5839:iPTR, VR128:v4f32:$src)  =>  (Int_VCVTTSS2SIrr:i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTTSS2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 331: @18420
    GIM_Try, /*On fail goto*//*Label 332*/ 18466,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5840:iPTR, VR128:v4f32:$src)  =>  (Int_VCVTTSS2SI64rr:i64 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTTSS2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 332: @18466
    GIM_Try, /*On fail goto*//*Label 333*/ 18512,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5883:iPTR, VR128:v2f64:$src)  =>  (Int_VCVTTSD2SIrr:i32 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTTSD2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 333: @18512
    GIM_Try, /*On fail goto*//*Label 334*/ 18558,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5884:iPTR, VR128:v2f64:$src)  =>  (Int_VCVTTSD2SI64rr:i64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_VCVTTSD2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 334: @18558
    GIM_Try, /*On fail goto*//*Label 335*/ 18604,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5839:iPTR, VR128:v4f32:$src)  =>  (Int_CVTTSS2SIrr:i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTTSS2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 335: @18604
    GIM_Try, /*On fail goto*//*Label 336*/ 18650,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5840:iPTR, VR128:v4f32:$src)  =>  (Int_CVTTSS2SI64rr:i64 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTTSS2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 336: @18650
    GIM_Try, /*On fail goto*//*Label 337*/ 18696,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5883:iPTR, VR128:v2f64:$src)  =>  (Int_CVTTSD2SIrr:i32 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTTSD2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 337: @18696
    GIM_Try, /*On fail goto*//*Label 338*/ 18742,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5884:iPTR, VR128:v2f64:$src)  =>  (Int_CVTTSD2SI64rr:i64 VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::Int_CVTTSD2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 338: @18742
    GIM_Try, /*On fail goto*//*Label 339*/ 18788,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5835:iPTR, VR128:v4f32:$src)  =>  (VCVTSS2SIrr:i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSS2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 339: @18788
    GIM_Try, /*On fail goto*//*Label 340*/ 18834,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5836:iPTR, VR128:v4f32:$src)  =>  (VCVTSS2SI64rr:i64 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSS2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 340: @18834
    GIM_Try, /*On fail goto*//*Label 341*/ 18880,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i32 5835:iPTR, VR128:v4f32:$src)  =>  (CVTSS2SIrr:i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CVTSS2SIrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 341: @18880
    GIM_Try, /*On fail goto*//*Label 342*/ 18926,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:i64 5836:iPTR, VR128:v4f32:$src)  =>  (CVTSS2SI64rr:i64 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CVTSS2SI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 342: @18926
    GIM_Try, /*On fail goto*//*Label 343*/ 18972,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtps2dq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5874:iPTR, VR128:v4f32:$src)  =>  (VCVTPS2DQrr:v4i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPS2DQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 343: @18972
    GIM_Try, /*On fail goto*//*Label 344*/ 19018,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_avx_cvt_ps2dq_256,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (intrinsic_wo_chain:v8i32 4673:iPTR, VR256:v8f32:$src)  =>  (VCVTPS2DQYrr:v8i32 VR256:v8f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPS2DQYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 344: @19018
    GIM_Try, /*On fail goto*//*Label 345*/ 19064,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtps2dq,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4i32 5874:iPTR, VR128:v4f32:$src)  =>  (CVTPS2DQrr:v4i32 VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::CVTPS2DQrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 345: @19064
    GIM_Try, /*On fail goto*//*Label 346*/ 19110,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_phminposuw,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 5954:iPTR, VR128:v8i16:$src)  =>  (VPHMINPOSUWrr128:v8i16 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPHMINPOSUWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 346: @19110
    GIM_Try, /*On fail goto*//*Label 347*/ 19156,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse41_phminposuw,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8i16 5954:iPTR, VR128:v8i16:$src)  =>  (PHMINPOSUWrr128:v8i16 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::PHMINPOSUWrr128,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 347: @19156
    GIM_Try, /*On fail goto*//*Label 348*/ 19202,
      GIM_CheckFeatures, GIFBS_HasAVX_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesimc,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4663:iPTR, VR128:v2i64:$src1)  =>  (VAESIMCrr:v2i64 VR128:v2i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VAESIMCrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 348: @19202
    GIM_Try, /*On fail goto*//*Label 349*/ 19248,
      GIM_CheckFeatures, GIFBS_HasAES,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_aesni_aesimc,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2i64 4663:iPTR, VR128:v2i64:$src1)  =>  (AESIMCrr:v2i64 VR128:v2i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::AESIMCrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 349: @19248
    GIM_Try, /*On fail goto*//*Label 350*/ 19294,
      GIM_CheckFeatures, GIFBS_HasF16C,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_vcvtph2ps_128,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 6019:iPTR, VR128:v8i16:$src)  =>  (VCVTPH2PSrr:v4f32 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPH2PSrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 350: @19294
    GIM_Try, /*On fail goto*//*Label 351*/ 19340,
      GIM_CheckFeatures, GIFBS_HasF16C,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_vcvtph2ps_256,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v8f32 6020:iPTR, VR128:v8i16:$src)  =>  (VCVTPH2PSYrr:v8f32 VR128:v8i16:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTPH2PSYrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 351: @19340
    GIM_Try, /*On fail goto*//*Label 352*/ 19390,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_rcp_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5849:iPTR, VR128:v4f32:$src)  =>  (RCPSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::RCPSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 352: @19390
    GIM_Try, /*On fail goto*//*Label 353*/ 19440,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_rsqrt_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5851:iPTR, VR128:v4f32:$src)  =>  (RSQRTSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::RSQRTSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 353: @19440
    GIM_Try, /*On fail goto*//*Label 354*/ 19490,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_sqrt_sd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5930:iPTR, VR128:v2f64:$src)  =>  (SQRTSDr_Int:v2f64 VR128:v2f64:$src, VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SQRTSDr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 354: @19490
    GIM_Try, /*On fail goto*//*Label 355*/ 19540,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_sqrt_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5854:iPTR, VR128:v4f32:$src)  =>  (SQRTSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SQRTSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 355: @19540
    GIM_Try, /*On fail goto*//*Label 356*/ 19590,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_rcp_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5849:iPTR, VR128:v4f32:$src)  =>  (VRCPSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VRCPSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 356: @19590
    GIM_Try, /*On fail goto*//*Label 357*/ 19640,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_rsqrt_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5851:iPTR, VR128:v4f32:$src)  =>  (VRSQRTSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VRSQRTSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 357: @19640
    GIM_Try, /*On fail goto*//*Label 358*/ 19690,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_sqrt_sd,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v2f64 5930:iPTR, VR128:v2f64:$src)  =>  (VSQRTSDr_Int:v2f64 VR128:v2f64:$src, VR128:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VSQRTSDr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 358: @19690
    GIM_Try, /*On fail goto*//*Label 359*/ 19740,
      GIM_CheckFeatures, GIFBS_HasAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_sqrt_ss,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (intrinsic_wo_chain:v4f32 5854:iPTR, VR128:v4f32:$src)  =>  (VSQRTSSr_Int:v4f32 VR128:v4f32:$src, VR128:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VSQRTSSr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 359: @19740
    GIM_Try, /*On fail goto*//*Label 360*/ 19786,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i32 5835:iPTR, VR128X:v4f32:$src)  =>  (VCVTSS2SIZrr:i32 VR128X:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSS2SIZrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 360: @19786
    GIM_Try, /*On fail goto*//*Label 361*/ 19832,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvtss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i64 5836:iPTR, VR128X:v4f32:$src)  =>  (VCVTSS2SI64Zrr:i64 VR128X:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSS2SI64Zrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 361: @19832
    GIM_Try, /*On fail goto*//*Label 362*/ 19878,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i32 5875:iPTR, VR128X:v2f64:$src)  =>  (VCVTSD2SIZrr:i32 VR128X:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSD2SIZrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 362: @19878
    GIM_Try, /*On fail goto*//*Label 363*/ 19924,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvtsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i64 5876:iPTR, VR128X:v2f64:$src)  =>  (VCVTSD2SI64Zrr:i64 VR128X:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTSD2SI64Zrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 363: @19924
    GIM_Try, /*On fail goto*//*Label 364*/ 19970,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i32 5839:iPTR, VR128X:v4f32:$src)  =>  (VCVTTSS2SIZrr_Int:i32 VR128X:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTTSS2SIZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 364: @19970
    GIM_Try, /*On fail goto*//*Label 365*/ 20016,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse_cvttss2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i64 5840:iPTR, VR128X:v4f32:$src)  =>  (VCVTTSS2SI64Zrr_Int:i64 VR128X:v4f32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTTSS2SI64Zrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 365: @20016
    GIM_Try, /*On fail goto*//*Label 366*/ 20062,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i32 5883:iPTR, VR128X:v2f64:$src)  =>  (VCVTTSD2SIZrr_Int:i32 VR128X:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTTSD2SIZrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 366: @20062
    GIM_Try, /*On fail goto*//*Label 367*/ 20108,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_INTRINSIC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::x86_sse2_cvttsd2si64,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (intrinsic_wo_chain:i64 5884:iPTR, VR128X:v2f64:$src)  =>  (VCVTTSD2SI64Zrr_Int:i64 VR128X:v2f64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VCVTTSD2SI64Zrr_Int,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 367: @20108
    GIM_Try, /*On fail goto*//*Label 368*/ 20286,
      GIM_CheckFeatures, GIFBS_HasBMI2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
      GIM_CheckNumOperands, /*MI*/3, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/4, /*MI*/0, /*OpIdx*/2, // MIs[4]
      GIM_CheckNumOperands, /*MI*/4, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/5, /*MI*/4, /*OpIdx*/1, // MIs[5]
      GIM_CheckNumOperands, /*MI*/5, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SHL,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_TRUNC,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[2] Operand 1
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_SUB,
      // MIs[3] Operand 0
      GIM_CheckType, /*MI*/3, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[3] Operand 1
      GIM_CheckType, /*MI*/3, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/3, /*Op*/1, 32,
      // MIs[3] lz
      GIM_CheckType, /*MI*/3, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/3, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/4, TargetOpcode::G_TRUNC,
      // MIs[4] Operand 0
      GIM_CheckType, /*MI*/4, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[4] Operand 1
      GIM_CheckType, /*MI*/4, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/5, TargetOpcode::G_SUB,
      // MIs[5] Operand 0
      GIM_CheckType, /*MI*/5, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[5] Operand 1
      GIM_CheckType, /*MI*/5, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/5, /*Op*/1, 32,
      // MIs[5] lz
      GIM_CheckType, /*MI*/5, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/5, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      GIM_CheckIsSafeToFold, /*InsnID*/3,
      GIM_CheckIsSafeToFold, /*InsnID*/4,
      GIM_CheckIsSafeToFold, /*InsnID*/5,
      // (srl:i32 (shl:i32 GR32:i32:$src, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))), (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz)))  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BZHI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/3, /*OpIdx*/2, // lz
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 368: @20286
    GIM_Try, /*On fail goto*//*Label 369*/ 20334,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (srl:i8 GR8:i8:$src1, 1:i8)  =>  (SHR8r1:i8:i32 GR8:i8:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR8r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 369: @20334
    GIM_Try, /*On fail goto*//*Label 370*/ 20382,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (srl:i16 GR16:i16:$src1, 1:i8)  =>  (SHR16r1:i16:i32 GR16:i16:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR16r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 370: @20382
    GIM_Try, /*On fail goto*//*Label 371*/ 20430,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (srl:i32 GR32:i32:$src1, 1:i8)  =>  (SHR32r1:i32:i32 GR32:i32:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR32r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 371: @20430
    GIM_Try, /*On fail goto*//*Label 372*/ 20478,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (srl:i64 GR64:i64:$src1, 1:i8)  =>  (SHR64r1:i64:i32 GR64:i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR64r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 372: @20478
    GIM_Try, /*On fail goto*//*Label 373*/ 20541,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (srl:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (SHR8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 373: @20541
    GIM_Try, /*On fail goto*//*Label 374*/ 20604,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (srl:i16 GR16:i16:$src1, (imm:i8):$src2)  =>  (SHR16ri:i16:i32 GR16:i16:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 374: @20604
    GIM_Try, /*On fail goto*//*Label 375*/ 20667,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (srl:i32 GR32:i32:$src1, (imm:i8):$src2)  =>  (SHR32ri:i32:i32 GR32:i32:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 375: @20667
    GIM_Try, /*On fail goto*//*Label 376*/ 20730,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (srl:i64 GR64:i64:$src1, (imm:i8):$src2)  =>  (SHR64ri:i64:i32 GR64:i64:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHR64ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 376: @20730
    GIM_Try, /*On fail goto*//*Label 377*/ 20771,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (srl:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSRLVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 377: @20771
    GIM_Try, /*On fail goto*//*Label 378*/ 20812,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (srl:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSRLVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 378: @20812
    GIM_Try, /*On fail goto*//*Label 379*/ 20853,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (srl:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSRLVQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 379: @20853
    GIM_Try, /*On fail goto*//*Label 380*/ 20894,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (srl:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSRLVQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 380: @20894
    GIM_Try, /*On fail goto*//*Label 381*/ 20935,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (srl:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSRLVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 381: @20935
    GIM_Try, /*On fail goto*//*Label 382*/ 20976,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (srl:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSRLVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 382: @20976
    GIM_Try, /*On fail goto*//*Label 383*/ 21017,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (srl:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSRLVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 383: @21017
    GIM_Try, /*On fail goto*//*Label 384*/ 21058,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (srl:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSRLVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 384: @21058
    GIM_Try, /*On fail goto*//*Label 385*/ 21099,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (srl:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSRLVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 385: @21099
    GIM_Try, /*On fail goto*//*Label 386*/ 21140,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (srl:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSRLVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 386: @21140
    GIM_Try, /*On fail goto*//*Label 387*/ 21181,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (srl:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSRLVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 387: @21181
    GIM_Try, /*On fail goto*//*Label 388*/ 21222,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (srl:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSRLVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 388: @21222
    GIM_Try, /*On fail goto*//*Label 389*/ 21263,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_LSHR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (srl:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSRLVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSRLVWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 389: @21263
    GIM_Try, /*On fail goto*//*Label 390*/ 21326,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (mul:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (IMUL16rri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::IMUL16rri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 390: @21326
    GIM_Try, /*On fail goto*//*Label 391*/ 21389,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (mul:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (IMUL32rri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::IMUL32rri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 391: @21389
    GIM_Try, /*On fail goto*//*Label 392*/ 21430,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPMULLWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 392: @21430
    GIM_Try, /*On fail goto*//*Label 393*/ 21471,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PMULLWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PMULLWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 393: @21471
    GIM_Try, /*On fail goto*//*Label 394*/ 21512,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (mul:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPMULLWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLWYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 394: @21512
    GIM_Try, /*On fail goto*//*Label 395*/ 21553,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPMULLDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 395: @21553
    GIM_Try, /*On fail goto*//*Label 396*/ 21594,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (mul:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPMULLDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 396: @21594
    GIM_Try, /*On fail goto*//*Label 397*/ 21635,
      GIM_CheckFeatures, GIFBS_UseSSE41,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PMULLDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PMULLDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 397: @21635
    GIM_Try, /*On fail goto*//*Label 398*/ 21676,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (mul:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPMULLDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 398: @21676
    GIM_Try, /*On fail goto*//*Label 399*/ 21717,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (mul:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPMULLDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 399: @21717
    GIM_Try, /*On fail goto*//*Label 400*/ 21758,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (mul:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPMULLDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 400: @21758
    GIM_Try, /*On fail goto*//*Label 401*/ 21799,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (mul:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPMULLWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 401: @21799
    GIM_Try, /*On fail goto*//*Label 402*/ 21840,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (mul:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPMULLWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 402: @21840
    GIM_Try, /*On fail goto*//*Label 403*/ 21881,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (mul:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPMULLWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 403: @21881
    GIM_Try, /*On fail goto*//*Label 404*/ 21922,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (mul:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPMULLQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 404: @21922
    GIM_Try, /*On fail goto*//*Label 405*/ 21963,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (mul:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPMULLQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 405: @21963
    GIM_Try, /*On fail goto*//*Label 406*/ 22004,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (mul:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPMULLQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPMULLQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 406: @22004
    GIM_Try, /*On fail goto*//*Label 407*/ 22046,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (mul:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (IMUL16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::IMUL16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 407: @22046
    GIM_Try, /*On fail goto*//*Label 408*/ 22088,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (mul:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (IMUL32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::IMUL32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 408: @22088
    GIM_Try, /*On fail goto*//*Label 409*/ 22130,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_MUL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (mul:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (IMUL64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::IMUL64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 409: @22130
    GIM_Try, /*On fail goto*//*Label 410*/ 22224,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR512RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPORDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPORDZrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 410: @22224
    GIM_Try, /*On fail goto*//*Label 411*/ 22318,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPORDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPORDZ256rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 411: @22318
    GIM_Try, /*On fail goto*//*Label 412*/ 22412,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPORDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPORDZ128rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 412: @22412
    GIM_Try, /*On fail goto*//*Label 413*/ 22518,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSIC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSIC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 413: @22518
    GIM_Try, /*On fail goto*//*Label 414*/ 22624,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSIC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSIC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 414: @22624
    GIM_Try, /*On fail goto*//*Label 415*/ 22730,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, 1:i32))  =>  (T1MSKC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::T1MSKC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 415: @22730
    GIM_Try, /*On fail goto*//*Label 416*/ 22836,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, 1:i64))  =>  (T1MSKC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::T1MSKC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 416: @22836
    GIM_Try, /*On fail goto*//*Label 417*/ 22942,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 (add:i32 GR32:i32:$src, -1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (BLSIC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSIC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 417: @22942
    GIM_Try, /*On fail goto*//*Label 418*/ 23048,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 (add:i64 GR64:i64:$src, -1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (BLSIC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSIC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 418: @23048
    GIM_Try, /*On fail goto*//*Label 419*/ 23154,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 (add:i32 GR32:i32:$src, 1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (T1MSKC32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::T1MSKC32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 419: @23154
    GIM_Try, /*On fail goto*//*Label 420*/ 23260,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_XOR,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 (add:i64 GR64:i64:$src, 1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (T1MSKC64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::T1MSKC64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 420: @23260
    GIM_Try, /*On fail goto*//*Label 421*/ 23366,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 (xor:i32 (add:i32 GR32:i32:$src, 1:i32), -1:i32), GR32:i32:$src)  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 421: @23366
    GIM_Try, /*On fail goto*//*Label 422*/ 23472,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 (xor:i64 (add:i64 GR64:i64:$src, 1:i64), -1:i64), GR64:i64:$src)  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 422: @23472
    GIM_Try, /*On fail goto*//*Label 423*/ 23550,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -2,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 (sub:i32 -2:i32, GR32:i32:$src), GR32:i32:$src)  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 423: @23550
    GIM_Try, /*On fail goto*//*Label 424*/ 23628,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -2,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 (sub:i64 -2:i64, GR64:i64:$src), GR64:i64:$src)  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 424: @23628
    GIM_Try, /*On fail goto*//*Label 425*/ 23706,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCS32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCS32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 425: @23706
    GIM_Try, /*On fail goto*//*Label 426*/ 23784,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCS64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCS64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 426: @23784
    GIM_Try, /*On fail goto*//*Label 427*/ 23862,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSFILL32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSFILL32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 427: @23862
    GIM_Try, /*On fail goto*//*Label 428*/ 23940,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSFILL64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSFILL64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 428: @23940
    GIM_Try, /*On fail goto*//*Label 429*/ 24046,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i32 GR32:i32:$src, (xor:i32 (add:i32 GR32:i32:$src, 1:i32), -1:i32))  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 429: @24046
    GIM_Try, /*On fail goto*//*Label 430*/ 24152,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_ADD,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[2] src
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[2] Operand 2
      GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/2, /*Op*/2, 1,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (or:i64 GR64:i64:$src, (xor:i64 (add:i64 GR64:i64:$src, 1:i64), -1:i64))  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 430: @24152
    GIM_Try, /*On fail goto*//*Label 431*/ 24230,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -2,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 GR32:i32:$src, (sub:i32 -2:i32, GR32:i32:$src))  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 431: @24230
    GIM_Try, /*On fail goto*//*Label 432*/ 24308,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_SUB,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] Operand 1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/1, -2,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 GR64:i64:$src, (sub:i64 -2:i64, GR64:i64:$src))  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCI64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 432: @24308
    GIM_Try, /*On fail goto*//*Label 433*/ 24386,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCS32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCS32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 433: @24386
    GIM_Try, /*On fail goto*//*Label 434*/ 24464,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCS64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCS64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 434: @24464
    GIM_Try, /*On fail goto*//*Label 435*/ 24542,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSFILL32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSFILL32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 435: @24542
    GIM_Try, /*On fail goto*//*Label 436*/ 24620,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSFILL64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSFILL64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 436: @24620
    GIM_Try, /*On fail goto*//*Label 437*/ 24683,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (OR8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::OR8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 437: @24683
    GIM_Try, /*On fail goto*//*Label 438*/ 24746,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (OR16ri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::OR16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 438: @24746
    GIM_Try, /*On fail goto*//*Label 439*/ 24809,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (or:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (OR32ri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::OR32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 439: @24809
    GIM_Try, /*On fail goto*//*Label 440*/ 24850,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (or:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPORrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 440: @24850
    GIM_Try, /*On fail goto*//*Label 441*/ 24891,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (or:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PORrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 441: @24891
    GIM_Try, /*On fail goto*//*Label 442*/ 24932,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (or:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPORYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPORYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 442: @24932
    GIM_Try, /*On fail goto*//*Label 443*/ 24973,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK8RegClassID,
      // (or:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KORBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KORBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 443: @24973
    GIM_Try, /*On fail goto*//*Label 444*/ 25014,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK16RegClassID,
      // (or:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KORWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KORWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 444: @25014
    GIM_Try, /*On fail goto*//*Label 445*/ 25055,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK32RegClassID,
      // (or:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KORDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KORDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 445: @25055
    GIM_Try, /*On fail goto*//*Label 446*/ 25096,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK64RegClassID,
      // (or:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KORQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KORQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 446: @25096
    GIM_Try, /*On fail goto*//*Label 447*/ 25137,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (or:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPORQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPORQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 447: @25137
    GIM_Try, /*On fail goto*//*Label 448*/ 25178,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (or:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPORQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPORQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 448: @25178
    GIM_Try, /*On fail goto*//*Label 449*/ 25219,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (or:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPORQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPORQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 449: @25219
    GIM_Try, /*On fail goto*//*Label 450*/ 25260,
      GIM_CheckFeatures, GIFBS_HasAVX1Only,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (or:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VORPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VORPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 450: @25260
    GIM_Try, /*On fail goto*//*Label 451*/ 25302,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR8RegClassID,
      // (or:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (OR8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::OR8rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 451: @25302
    GIM_Try, /*On fail goto*//*Label 452*/ 25344,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (or:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (OR16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::OR16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 452: @25344
    GIM_Try, /*On fail goto*//*Label 453*/ 25386,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (or:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (OR32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::OR32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 453: @25386
    GIM_Try, /*On fail goto*//*Label 454*/ 25428,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_OR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (or:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (OR64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::OR64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 454: @25428
    GIM_Try, /*On fail goto*//*Label 455*/ 25480,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (shl:i8 GR8:i8:$src1, 1:i8)  =>  (ADD8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD8rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 455: @25480
    GIM_Try, /*On fail goto*//*Label 456*/ 25532,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (shl:i16 GR16:i16:$src1, 1:i8)  =>  (ADD16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD16rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 456: @25532
    GIM_Try, /*On fail goto*//*Label 457*/ 25584,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (shl:i32 GR32:i32:$src1, 1:i8)  =>  (ADD32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 457: @25584
    GIM_Try, /*On fail goto*//*Label 458*/ 25636,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, 1,
      // (shl:i64 GR64:i64:$src1, 1:i8)  =>  (ADD64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::ADD64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 458: @25636
    GIM_Try, /*On fail goto*//*Label 459*/ 25699,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (shl:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (SHL8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHL8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 459: @25699
    GIM_Try, /*On fail goto*//*Label 460*/ 25762,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (shl:i16 GR16:i16:$src1, (imm:i8):$src2)  =>  (SHL16ri:i16:i32 GR16:i16:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHL16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 460: @25762
    GIM_Try, /*On fail goto*//*Label 461*/ 25825,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (shl:i32 GR32:i32:$src1, (imm:i8):$src2)  =>  (SHL32ri:i32:i32 GR32:i32:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHL32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 461: @25825
    GIM_Try, /*On fail goto*//*Label 462*/ 25888,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (shl:i64 GR64:i64:$src1, (imm:i8):$src2)  =>  (SHL64ri:i64:i32 GR64:i64:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SHL64ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 462: @25888
    GIM_Try, /*On fail goto*//*Label 463*/ 25929,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (shl:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSLLVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 463: @25929
    GIM_Try, /*On fail goto*//*Label 464*/ 25970,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (shl:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSLLVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 464: @25970
    GIM_Try, /*On fail goto*//*Label 465*/ 26011,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (shl:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSLLVQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 465: @26011
    GIM_Try, /*On fail goto*//*Label 466*/ 26052,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (shl:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSLLVQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 466: @26052
    GIM_Try, /*On fail goto*//*Label 467*/ 26093,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (shl:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSLLVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 467: @26093
    GIM_Try, /*On fail goto*//*Label 468*/ 26134,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (shl:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSLLVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 468: @26134
    GIM_Try, /*On fail goto*//*Label 469*/ 26175,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (shl:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSLLVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 469: @26175
    GIM_Try, /*On fail goto*//*Label 470*/ 26216,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (shl:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSLLVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 470: @26216
    GIM_Try, /*On fail goto*//*Label 471*/ 26257,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (shl:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSLLVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 471: @26257
    GIM_Try, /*On fail goto*//*Label 472*/ 26298,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (shl:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSLLVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 472: @26298
    GIM_Try, /*On fail goto*//*Label 473*/ 26339,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (shl:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSLLVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 473: @26339
    GIM_Try, /*On fail goto*//*Label 474*/ 26380,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (shl:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSLLVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 474: @26380
    GIM_Try, /*On fail goto*//*Label 475*/ 26421,
      GIM_CheckFeatures, GIFBS_HasVLX_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SHL,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (shl:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSLLVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSLLVWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 475: @26421
    GIM_Try, /*On fail goto*//*Label 476*/ 26484,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sub:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (SUB8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SUB8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 476: @26484
    GIM_Try, /*On fail goto*//*Label 477*/ 26547,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sub:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (SUB16ri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SUB16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 477: @26547
    GIM_Try, /*On fail goto*//*Label 478*/ 26610,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sub:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (SUB32ri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::SUB32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 478: @26610
    GIM_Try, /*On fail goto*//*Label 479*/ 26651,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (VPSUBBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 479: @26651
    GIM_Try, /*On fail goto*//*Label 480*/ 26692,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (PSUBBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PSUBBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 480: @26692
    GIM_Try, /*On fail goto*//*Label 481*/ 26733,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (sub:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)  =>  (VPSUBBYrr:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBBYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 481: @26733
    GIM_Try, /*On fail goto*//*Label 482*/ 26774,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPSUBWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 482: @26774
    GIM_Try, /*On fail goto*//*Label 483*/ 26815,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PSUBWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PSUBWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 483: @26815
    GIM_Try, /*On fail goto*//*Label 484*/ 26856,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX_Or_NoBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (sub:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPSUBWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBWYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 484: @26856
    GIM_Try, /*On fail goto*//*Label 485*/ 26897,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSUBDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 485: @26897
    GIM_Try, /*On fail goto*//*Label 486*/ 26938,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PSUBDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PSUBDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 486: @26938
    GIM_Try, /*On fail goto*//*Label 487*/ 26979,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (sub:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSUBDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 487: @26979
    GIM_Try, /*On fail goto*//*Label 488*/ 27020,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSUBQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 488: @27020
    GIM_Try, /*On fail goto*//*Label 489*/ 27061,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (sub:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PSUBQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PSUBQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 489: @27061
    GIM_Try, /*On fail goto*//*Label 490*/ 27102,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (sub:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSUBQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 490: @27102
    GIM_Try, /*On fail goto*//*Label 491*/ 27143,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sub:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSUBQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 491: @27143
    GIM_Try, /*On fail goto*//*Label 492*/ 27184,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sub:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSUBQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 492: @27184
    GIM_Try, /*On fail goto*//*Label 493*/ 27225,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sub:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSUBQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 493: @27225
    GIM_Try, /*On fail goto*//*Label 494*/ 27266,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sub:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSUBDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 494: @27266
    GIM_Try, /*On fail goto*//*Label 495*/ 27307,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sub:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSUBDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 495: @27307
    GIM_Try, /*On fail goto*//*Label 496*/ 27348,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sub:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSUBDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 496: @27348
    GIM_Try, /*On fail goto*//*Label 497*/ 27389,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sub:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSUBWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBWZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 497: @27389
    GIM_Try, /*On fail goto*//*Label 498*/ 27430,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sub:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSUBWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBWZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 498: @27430
    GIM_Try, /*On fail goto*//*Label 499*/ 27471,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sub:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSUBWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBWZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 499: @27471
    GIM_Try, /*On fail goto*//*Label 500*/ 27512,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (sub:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)  =>  (VPSUBBZrr:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBBZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 500: @27512
    GIM_Try, /*On fail goto*//*Label 501*/ 27553,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (sub:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)  =>  (VPSUBBZ256rr:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBBZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 501: @27553
    GIM_Try, /*On fail goto*//*Label 502*/ 27594,
      GIM_CheckFeatures, GIFBS_HasBWI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (sub:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)  =>  (VPSUBBZ128rr:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPSUBBZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 502: @27594
    GIM_Try, /*On fail goto*//*Label 503*/ 27636,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR8RegClassID,
      // (sub:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (SUB8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB8rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 503: @27636
    GIM_Try, /*On fail goto*//*Label 504*/ 27678,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (sub:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (SUB16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 504: @27678
    GIM_Try, /*On fail goto*//*Label 505*/ 27720,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (sub:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (SUB32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 505: @27720
    GIM_Try, /*On fail goto*//*Label 506*/ 27762,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SUB,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (sub:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (SUB64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::SUB64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 506: @27762
    GIM_Try, /*On fail goto*//*Label 507*/ 27856,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v8s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR512RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (xor:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPXORDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPXORDZrr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 507: @27856
    GIM_Try, /*On fail goto*//*Label 508*/ 27950,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v4s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (xor:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPXORDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPXORDZ256rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 508: @27950
    GIM_Try, /*On fail goto*//*Label 509*/ 28044,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckNumOperands, /*MI*/2, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[1] src1
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_BITCAST,
      // MIs[2] Operand 0
      GIM_CheckType, /*MI*/2, /*Op*/0, /*Type*/GILLT_v2s64,
      // MIs[2] src2
      GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/2, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (xor:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPXORDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::VPXORDZ128rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 509: @28044
    GIM_Try, /*On fail goto*//*Label 510*/ 28122,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 510: @28122
    GIM_Try, /*On fail goto*//*Label 511*/ 28200,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 511: @28200
    GIM_Try, /*On fail goto*//*Label 512*/ 28278,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 512: @28278
    GIM_Try, /*On fail goto*//*Label 513*/ 28356,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 513: @28356
    GIM_Try, /*On fail goto*//*Label 514*/ 28434,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 514: @28434
    GIM_Try, /*On fail goto*//*Label 515*/ 28512,
      GIM_CheckFeatures, GIFBS_HasBMI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLSMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 515: @28512
    GIM_Try, /*On fail goto*//*Label 516*/ 28590,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCMSK32rr:i32:i32 GR32:i32:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCMSK32rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 516: @28590
    GIM_Try, /*On fail goto*//*Label 517*/ 28668,
      GIM_CheckFeatures, GIFBS_HasTBM,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_ADD,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s64,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[1] Operand 2
      GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/1, /*Op*/2, 1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCMSK64rr:i64:i32 GR64:i64:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::BLCMSK64rr,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 517: @28668
    GIM_Try, /*On fail goto*//*Label 518*/ 28716,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:i8 GR8:i8:$src1, -1:i8)  =>  (NOT8r:i8 GR8:i8:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::NOT8r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 518: @28716
    GIM_Try, /*On fail goto*//*Label 519*/ 28764,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:i16 GR16:i16:$src1, -1:i16)  =>  (NOT16r:i16 GR16:i16:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::NOT16r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 519: @28764
    GIM_Try, /*On fail goto*//*Label 520*/ 28812,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:i32 GR32:i32:$src1, -1:i32)  =>  (NOT32r:i32 GR32:i32:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::NOT32r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 520: @28812
    GIM_Try, /*On fail goto*//*Label 521*/ 28860,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] Operand 2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:i64 GR64:i64:$src1, -1:i64)  =>  (NOT64r:i64 GR64:i64:$src1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::NOT64r,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 521: @28860
    GIM_Try, /*On fail goto*//*Label 522*/ 28923,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i8 GR8:i8:$src1, (imm:i8):$src2)  =>  (XOR8ri:i8:i32 GR8:i8:$src1, (imm:i8):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::XOR8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 522: @28923
    GIM_Try, /*On fail goto*//*Label 523*/ 28986,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i16 GR16:i16:$src1, (imm:i16):$src2)  =>  (XOR16ri:i16:i32 GR16:i16:$src1, (imm:i16):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::XOR16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 523: @28986
    GIM_Try, /*On fail goto*//*Label 524*/ 29049,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s32,
      // MIs[1] Operand 1
      // No predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (xor:i32 GR32:i32:$src1, (imm:i32):$src2)  =>  (XOR32ri:i32:i32 GR32:i32:$src1, (imm:i32):$src2)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::XOR32ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // src2
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 524: @29049
    GIM_Try, /*On fail goto*//*Label 525*/ 29090,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (xor:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPXORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPXORrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 525: @29090
    GIM_Try, /*On fail goto*//*Label 526*/ 29131,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128RegClassID,
      // (xor:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PXORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::PXORrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 526: @29131
    GIM_Try, /*On fail goto*//*Label 527*/ 29172,
      GIM_CheckFeatures, GIFBS_HasAVX2_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (xor:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPXORYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPXORYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 527: @29172
    GIM_Try, /*On fail goto*//*Label 528*/ 29213,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK8RegClassID,
      // (xor:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KXORBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KXORBrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 528: @29213
    GIM_Try, /*On fail goto*//*Label 529*/ 29254,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK16RegClassID,
      // (xor:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KXORWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KXORWrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 529: @29254
    GIM_Try, /*On fail goto*//*Label 530*/ 29295,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK32RegClassID,
      // (xor:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KXORDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KXORDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 530: @29295
    GIM_Try, /*On fail goto*//*Label 531*/ 29336,
      GIM_CheckFeatures, GIFBS_HasBWI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VK64RegClassID,
      // (xor:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KXORQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::KXORQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 531: @29336
    GIM_Try, /*On fail goto*//*Label 532*/ 29377,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR512RegClassID,
      // (xor:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPXORQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPXORQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 532: @29377
    GIM_Try, /*On fail goto*//*Label 533*/ 29418,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256XRegClassID,
      // (xor:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPXORQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPXORQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 533: @29418
    GIM_Try, /*On fail goto*//*Label 534*/ 29459,
      GIM_CheckFeatures, GIFBS_HasAVX512_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR128XRegClassID,
      // (xor:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPXORQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VPXORQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 534: @29459
    GIM_Try, /*On fail goto*//*Label 535*/ 29500,
      GIM_CheckFeatures, GIFBS_HasAVX1Only,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::VR256RegClassID,
      // (xor:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VXORPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VXORPSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 535: @29500
    GIM_Try, /*On fail goto*//*Label 536*/ 29542,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR8RegClassID,
      // (xor:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (XOR8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::XOR8rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 536: @29542
    GIM_Try, /*On fail goto*//*Label 537*/ 29584,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR16RegClassID,
      // (xor:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (XOR16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::XOR16rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 537: @29584
    GIM_Try, /*On fail goto*//*Label 538*/ 29626,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR32RegClassID,
      // (xor:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (XOR32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::XOR32rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 538: @29626
    GIM_Try, /*On fail goto*//*Label 539*/ 29668,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_XOR,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // MIs[0] src2
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/X86::GR64RegClassID,
      // (xor:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (XOR64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::XOR64rr,
      GIR_AddImplicitDef, /*InsnID*/0, X86::EFLAGS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 539: @29668
    GIM_Try, /*On fail goto*//*Label 540*/ 29730,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ANYEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VK16RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (anyext:i32 (bitconvert:i16 VK16:v16i1:$src))  =>  (COPY_TO_REGCLASS:i32 VK16:v16i1:$src, GR32:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR32*/24,
      GIR_Done,
    // Label 540: @29730
    GIM_Try, /*On fail goto*//*Label 541*/ 29792,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ANYEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VK8RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (anyext:i32 (bitconvert:i8 VK8:v8i1:$src))  =>  (COPY_TO_REGCLASS:i32 VK8:v8i1:$src, GR32:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR32*/24,
      GIR_Done,
    // Label 541: @29792
    GIM_Try, /*On fail goto*//*Label 542*/ 29823,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ANYEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // (anyext:i32 GR8:i8:$src)  =>  (MOVZX32rr8:i32 GR8:i8:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVZX32rr8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 542: @29823
    GIM_Try, /*On fail goto*//*Label 543*/ 29856,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (bitconvert:f64 GR64:i64:$src)  =>  (VMOV64toSDrr:f64 GR64:i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOV64toSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 543: @29856
    GIM_Try, /*On fail goto*//*Label 544*/ 29889,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (bitconvert:f64 GR64:i64:$src)  =>  (MOV64toSDrr:f64 GR64:i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOV64toSDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 544: @29889
    GIM_Try, /*On fail goto*//*Label 545*/ 29922,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (bitconvert:f32 GR32:i32:$src)  =>  (VMOVDI2SSrr:f32 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVDI2SSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 545: @29922
    GIM_Try, /*On fail goto*//*Label 546*/ 29955,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (bitconvert:f32 GR32:i32:$src)  =>  (MOVDI2SSrr:f32 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVDI2SSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 546: @29955
    GIM_Try, /*On fail goto*//*Label 547*/ 29988,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (bitconvert:i64 FR64:f64:$src)  =>  (VMOVSDto64rr:i64 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVSDto64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 547: @29988
    GIM_Try, /*On fail goto*//*Label 548*/ 30021,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (bitconvert:i64 FR64:f64:$src)  =>  (MOVSDto64rr:i64 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSDto64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 548: @30021
    GIM_Try, /*On fail goto*//*Label 549*/ 30054,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (bitconvert:i32 FR32:f32:$src)  =>  (VMOVSS2DIrr:i32 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVSS2DIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 549: @30054
    GIM_Try, /*On fail goto*//*Label 550*/ 30087,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (bitconvert:i32 FR32:f32:$src)  =>  (MOVSS2DIrr:i32 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSS2DIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 550: @30087
    GIM_Try, /*On fail goto*//*Label 551*/ 30120,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (bitconvert:f64 GR64:i64:$src)  =>  (VMOV64toSDZrr:f64 GR64:i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOV64toSDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 551: @30120
    GIM_Try, /*On fail goto*//*Label 552*/ 30153,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // (bitconvert:i64 FR64X:f64:$src)  =>  (VMOVSDto64Zrr:i64 FR64X:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVSDto64Zrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 552: @30153
    GIM_Try, /*On fail goto*//*Label 553*/ 30186,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (bitconvert:f32 GR32:i32:$src)  =>  (VMOVDI2SSZrr:f32 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVDI2SSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 553: @30186
    GIM_Try, /*On fail goto*//*Label 554*/ 30219,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // (bitconvert:i32 FR32X:f32:$src)  =>  (VMOVSS2DIZrr:i32 FR32X:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VMOVSS2DIZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 554: @30219
    GIM_Try, /*On fail goto*//*Label 555*/ 30252,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2i64 VR128:v4i32:$src)  =>  VR128:v2i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 555: @30252
    GIM_Try, /*On fail goto*//*Label 556*/ 30285,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2i64 VR128:v8i16:$src)  =>  VR128:v2i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 556: @30285
    GIM_Try, /*On fail goto*//*Label 557*/ 30318,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2i64 VR128:v16i8:$src)  =>  VR128:v2i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 557: @30318
    GIM_Try, /*On fail goto*//*Label 558*/ 30351,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2i64 VR128:v2f64:$src)  =>  VR128:v2i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 558: @30351
    GIM_Try, /*On fail goto*//*Label 559*/ 30384,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2i64 VR128:v4f32:$src)  =>  VR128:v2i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 559: @30384
    GIM_Try, /*On fail goto*//*Label 560*/ 30417,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4i32 VR128:v2i64:$src)  =>  VR128:v4i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 560: @30417
    GIM_Try, /*On fail goto*//*Label 561*/ 30450,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4i32 VR128:v8i16:$src)  =>  VR128:v4i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 561: @30450
    GIM_Try, /*On fail goto*//*Label 562*/ 30483,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4i32 VR128:v16i8:$src)  =>  VR128:v4i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 562: @30483
    GIM_Try, /*On fail goto*//*Label 563*/ 30516,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4i32 VR128:v2f64:$src)  =>  VR128:v4i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 563: @30516
    GIM_Try, /*On fail goto*//*Label 564*/ 30549,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4i32 VR128:v4f32:$src)  =>  VR128:v4i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 564: @30549
    GIM_Try, /*On fail goto*//*Label 565*/ 30582,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v8i16 VR128:v2i64:$src)  =>  VR128:v8i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 565: @30582
    GIM_Try, /*On fail goto*//*Label 566*/ 30615,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v8i16 VR128:v4i32:$src)  =>  VR128:v8i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 566: @30615
    GIM_Try, /*On fail goto*//*Label 567*/ 30648,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v8i16 VR128:v16i8:$src)  =>  VR128:v8i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 567: @30648
    GIM_Try, /*On fail goto*//*Label 568*/ 30681,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v8i16 VR128:v2f64:$src)  =>  VR128:v8i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 568: @30681
    GIM_Try, /*On fail goto*//*Label 569*/ 30714,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v8i16 VR128:v4f32:$src)  =>  VR128:v8i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 569: @30714
    GIM_Try, /*On fail goto*//*Label 570*/ 30747,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v16i8 VR128:v2i64:$src)  =>  VR128:v16i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 570: @30747
    GIM_Try, /*On fail goto*//*Label 571*/ 30780,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v16i8 VR128:v4i32:$src)  =>  VR128:v16i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 571: @30780
    GIM_Try, /*On fail goto*//*Label 572*/ 30813,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v16i8 VR128:v8i16:$src)  =>  VR128:v16i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 572: @30813
    GIM_Try, /*On fail goto*//*Label 573*/ 30846,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v16i8 VR128:v2f64:$src)  =>  VR128:v16i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 573: @30846
    GIM_Try, /*On fail goto*//*Label 574*/ 30879,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v16i8 VR128:v4f32:$src)  =>  VR128:v16i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 574: @30879
    GIM_Try, /*On fail goto*//*Label 575*/ 30912,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4f32 VR128:v2i64:$src)  =>  VR128:v4f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 575: @30912
    GIM_Try, /*On fail goto*//*Label 576*/ 30945,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4f32 VR128:v4i32:$src)  =>  VR128:v4f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 576: @30945
    GIM_Try, /*On fail goto*//*Label 577*/ 30978,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4f32 VR128:v8i16:$src)  =>  VR128:v4f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 577: @30978
    GIM_Try, /*On fail goto*//*Label 578*/ 31011,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4f32 VR128:v16i8:$src)  =>  VR128:v4f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 578: @31011
    GIM_Try, /*On fail goto*//*Label 579*/ 31044,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v4f32 VR128:v2f64:$src)  =>  VR128:v4f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 579: @31044
    GIM_Try, /*On fail goto*//*Label 580*/ 31077,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2f64 VR128:v2i64:$src)  =>  VR128:v2f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 580: @31077
    GIM_Try, /*On fail goto*//*Label 581*/ 31110,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2f64 VR128:v4i32:$src)  =>  VR128:v2f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 581: @31110
    GIM_Try, /*On fail goto*//*Label 582*/ 31143,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2f64 VR128:v8i16:$src)  =>  VR128:v2f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 582: @31143
    GIM_Try, /*On fail goto*//*Label 583*/ 31176,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2f64 VR128:v16i8:$src)  =>  VR128:v2f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 583: @31176
    GIM_Try, /*On fail goto*//*Label 584*/ 31209,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (bitconvert:v2f64 VR128:v4f32:$src)  =>  VR128:v2f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR128*/90,
      GIR_Done,
    // Label 584: @31209
    GIM_Try, /*On fail goto*//*Label 585*/ 31242,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR128RegClassID,
      // (bitconvert:f128 FR128:i128:$src)  =>  FR128:f128:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC FR128*/89,
      GIR_Done,
    // Label 585: @31242
    GIM_Try, /*On fail goto*//*Label 586*/ 31275,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR128RegClassID,
      // (bitconvert:i128 FR128:f128:$src)  =>  FR128:i128:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC FR128*/89,
      GIR_Done,
    // Label 586: @31275
    GIM_Try, /*On fail goto*//*Label 587*/ 31308,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4i64 VR256:v8i32:$src)  =>  VR256:v4i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 587: @31308
    GIM_Try, /*On fail goto*//*Label 588*/ 31341,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4i64 VR256:v16i16:$src)  =>  VR256:v4i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 588: @31341
    GIM_Try, /*On fail goto*//*Label 589*/ 31374,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4i64 VR256:v32i8:$src)  =>  VR256:v4i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 589: @31374
    GIM_Try, /*On fail goto*//*Label 590*/ 31407,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4i64 VR256:v8f32:$src)  =>  VR256:v4i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 590: @31407
    GIM_Try, /*On fail goto*//*Label 591*/ 31440,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4i64 VR256:v4f64:$src)  =>  VR256:v4i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 591: @31440
    GIM_Try, /*On fail goto*//*Label 592*/ 31473,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8i32 VR256:v4i64:$src)  =>  VR256:v8i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 592: @31473
    GIM_Try, /*On fail goto*//*Label 593*/ 31506,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8i32 VR256:v16i16:$src)  =>  VR256:v8i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 593: @31506
    GIM_Try, /*On fail goto*//*Label 594*/ 31539,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8i32 VR256:v32i8:$src)  =>  VR256:v8i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 594: @31539
    GIM_Try, /*On fail goto*//*Label 595*/ 31572,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8i32 VR256:v4f64:$src)  =>  VR256:v8i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 595: @31572
    GIM_Try, /*On fail goto*//*Label 596*/ 31605,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8i32 VR256:v8f32:$src)  =>  VR256:v8i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 596: @31605
    GIM_Try, /*On fail goto*//*Label 597*/ 31638,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v16i16 VR256:v4i64:$src)  =>  VR256:v16i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 597: @31638
    GIM_Try, /*On fail goto*//*Label 598*/ 31671,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v16i16 VR256:v8i32:$src)  =>  VR256:v16i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 598: @31671
    GIM_Try, /*On fail goto*//*Label 599*/ 31704,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v16i16 VR256:v32i8:$src)  =>  VR256:v16i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 599: @31704
    GIM_Try, /*On fail goto*//*Label 600*/ 31737,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v16i16 VR256:v4f64:$src)  =>  VR256:v16i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 600: @31737
    GIM_Try, /*On fail goto*//*Label 601*/ 31770,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v16i16 VR256:v8f32:$src)  =>  VR256:v16i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 601: @31770
    GIM_Try, /*On fail goto*//*Label 602*/ 31803,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v32i8 VR256:v4i64:$src)  =>  VR256:v32i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 602: @31803
    GIM_Try, /*On fail goto*//*Label 603*/ 31836,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v32i8 VR256:v8i32:$src)  =>  VR256:v32i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 603: @31836
    GIM_Try, /*On fail goto*//*Label 604*/ 31869,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v32i8 VR256:v16i16:$src)  =>  VR256:v32i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 604: @31869
    GIM_Try, /*On fail goto*//*Label 605*/ 31902,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v32i8 VR256:v4f64:$src)  =>  VR256:v32i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 605: @31902
    GIM_Try, /*On fail goto*//*Label 606*/ 31935,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v32i8 VR256:v8f32:$src)  =>  VR256:v32i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 606: @31935
    GIM_Try, /*On fail goto*//*Label 607*/ 31968,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8f32 VR256:v4i64:$src)  =>  VR256:v8f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 607: @31968
    GIM_Try, /*On fail goto*//*Label 608*/ 32001,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8f32 VR256:v8i32:$src)  =>  VR256:v8f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 608: @32001
    GIM_Try, /*On fail goto*//*Label 609*/ 32034,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8f32 VR256:v16i16:$src)  =>  VR256:v8f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 609: @32034
    GIM_Try, /*On fail goto*//*Label 610*/ 32067,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8f32 VR256:v32i8:$src)  =>  VR256:v8f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 610: @32067
    GIM_Try, /*On fail goto*//*Label 611*/ 32100,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v8f32 VR256:v4f64:$src)  =>  VR256:v8f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 611: @32100
    GIM_Try, /*On fail goto*//*Label 612*/ 32133,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4f64 VR256:v4i64:$src)  =>  VR256:v4f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 612: @32133
    GIM_Try, /*On fail goto*//*Label 613*/ 32166,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4f64 VR256:v8i32:$src)  =>  VR256:v4f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 613: @32166
    GIM_Try, /*On fail goto*//*Label 614*/ 32199,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4f64 VR256:v16i16:$src)  =>  VR256:v4f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 614: @32199
    GIM_Try, /*On fail goto*//*Label 615*/ 32232,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4f64 VR256:v32i8:$src)  =>  VR256:v4f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 615: @32232
    GIM_Try, /*On fail goto*//*Label 616*/ 32265,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (bitconvert:v4f64 VR256:v8f32:$src)  =>  VR256:v4f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR256*/95,
      GIR_Done,
    // Label 616: @32265
    GIM_Try, /*On fail goto*//*Label 617*/ 32298,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8f64 VR512:v8i64:$src)  =>  VR512:v8f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 617: @32298
    GIM_Try, /*On fail goto*//*Label 618*/ 32331,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8f64 VR512:v16i32:$src)  =>  VR512:v8f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 618: @32331
    GIM_Try, /*On fail goto*//*Label 619*/ 32364,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8f64 VR512:v32i16:$src)  =>  VR512:v8f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 619: @32364
    GIM_Try, /*On fail goto*//*Label 620*/ 32397,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8f64 VR512:v64i8:$src)  =>  VR512:v8f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 620: @32397
    GIM_Try, /*On fail goto*//*Label 621*/ 32430,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8f64 VR512:v16f32:$src)  =>  VR512:v8f64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 621: @32430
    GIM_Try, /*On fail goto*//*Label 622*/ 32463,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16f32 VR512:v8i64:$src)  =>  VR512:v16f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 622: @32463
    GIM_Try, /*On fail goto*//*Label 623*/ 32496,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16f32 VR512:v16i32:$src)  =>  VR512:v16f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 623: @32496
    GIM_Try, /*On fail goto*//*Label 624*/ 32529,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16f32 VR512:v32i16:$src)  =>  VR512:v16f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 624: @32529
    GIM_Try, /*On fail goto*//*Label 625*/ 32562,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16f32 VR512:v64i8:$src)  =>  VR512:v16f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 625: @32562
    GIM_Try, /*On fail goto*//*Label 626*/ 32595,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16f32 VR512:v8f64:$src)  =>  VR512:v16f32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 626: @32595
    GIM_Try, /*On fail goto*//*Label 627*/ 32628,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8i64 VR512:v16i32:$src)  =>  VR512:v8i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 627: @32628
    GIM_Try, /*On fail goto*//*Label 628*/ 32661,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8i64 VR512:v32i16:$src)  =>  VR512:v8i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 628: @32661
    GIM_Try, /*On fail goto*//*Label 629*/ 32694,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8i64 VR512:v64i8:$src)  =>  VR512:v8i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 629: @32694
    GIM_Try, /*On fail goto*//*Label 630*/ 32727,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8i64 VR512:v8f64:$src)  =>  VR512:v8i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 630: @32727
    GIM_Try, /*On fail goto*//*Label 631*/ 32760,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v8i64 VR512:v16f32:$src)  =>  VR512:v8i64:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 631: @32760
    GIM_Try, /*On fail goto*//*Label 632*/ 32793,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16i32 VR512:v8i64:$src)  =>  VR512:v16i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 632: @32793
    GIM_Try, /*On fail goto*//*Label 633*/ 32826,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16i32 VR512:v16f32:$src)  =>  VR512:v16i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 633: @32826
    GIM_Try, /*On fail goto*//*Label 634*/ 32859,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16i32 VR512:v32i16:$src)  =>  VR512:v16i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 634: @32859
    GIM_Try, /*On fail goto*//*Label 635*/ 32892,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16i32 VR512:v64i8:$src)  =>  VR512:v16i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 635: @32892
    GIM_Try, /*On fail goto*//*Label 636*/ 32925,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v16i32 VR512:v8f64:$src)  =>  VR512:v16i32:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 636: @32925
    GIM_Try, /*On fail goto*//*Label 637*/ 32958,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v8i64:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 637: @32958
    GIM_Try, /*On fail goto*//*Label 638*/ 32991,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v16i32:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 638: @32991
    GIM_Try, /*On fail goto*//*Label 639*/ 33024,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v64i8:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 639: @33024
    GIM_Try, /*On fail goto*//*Label 640*/ 33057,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v8f64:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 640: @33057
    GIM_Try, /*On fail goto*//*Label 641*/ 33090,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v16f32:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 641: @33090
    GIM_Try, /*On fail goto*//*Label 642*/ 33123,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v32i16 VR512:v16f32:$src)  =>  VR512:v32i16:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 642: @33123
    GIM_Try, /*On fail goto*//*Label 643*/ 33156,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v64i8 VR512:v8i64:$src)  =>  VR512:v64i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 643: @33156
    GIM_Try, /*On fail goto*//*Label 644*/ 33189,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v64i8 VR512:v16i32:$src)  =>  VR512:v64i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 644: @33189
    GIM_Try, /*On fail goto*//*Label 645*/ 33222,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v64i8 VR512:v32i16:$src)  =>  VR512:v64i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 645: @33222
    GIM_Try, /*On fail goto*//*Label 646*/ 33255,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v64i8 VR512:v8f64:$src)  =>  VR512:v64i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 646: @33255
    GIM_Try, /*On fail goto*//*Label 647*/ 33288,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (bitconvert:v64i8 VR512:v16f32:$src)  =>  VR512:v64i8:$src
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VR512*/98,
      GIR_Done,
    // Label 647: @33288
    GIM_Try, /*On fail goto*//*Label 648*/ 33321,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (bitconvert:v32i1 GR32:i32:$src)  =>  (COPY_TO_REGCLASS:v32i1 GR32:i32:$src, VK32:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VK32*/31,
      GIR_Done,
    // Label 648: @33321
    GIM_Try, /*On fail goto*//*Label 649*/ 33354,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK32RegClassID,
      // (bitconvert:i32 VK32:v32i1:$src)  =>  (COPY_TO_REGCLASS:i32 VK32:v32i1:$src, GR32:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR32*/24,
      GIR_Done,
    // Label 649: @33354
    GIM_Try, /*On fail goto*//*Label 650*/ 33387,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VK64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (bitconvert:v64i1 GR64:i64:$src)  =>  (COPY_TO_REGCLASS:v64i1 GR64:i64:$src, VK64:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VK64*/61,
      GIR_Done,
    // Label 650: @33387
    GIM_Try, /*On fail goto*//*Label 651*/ 33420,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BITCAST,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v64s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VK64RegClassID,
      // (bitconvert:i64 VK64:v64i1:$src)  =>  (COPY_TO_REGCLASS:i64 VK64:v64i1:$src, GR64:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR64*/49,
      GIR_Done,
    // Label 651: @33420
    GIM_Try, /*On fail goto*//*Label 652*/ 33452,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_CONSTANT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 0,
      // 0:i32  =>  (MOV32r0:i32:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MOV32r0,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 652: @33452
    GIM_Try, /*On fail goto*//*Label 653*/ 33486,
      GIM_CheckFeatures, GIFBS_OptForSize_NotSlowIncDec_Not64BitMode,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_CONSTANT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 1,
      // 1:i32  =>  (MOV32r1:i32:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MOV32r1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 653: @33486
    GIM_Try, /*On fail goto*//*Label 654*/ 33520,
      GIM_CheckFeatures, GIFBS_OptForSize_NotSlowIncDec_Not64BitMode,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_CONSTANT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, -1,
      // -1:i32  =>  (MOV32r_1:i32:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MOV32r_1,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 654: @33520
    GIM_Try, /*On fail goto*//*Label 655*/ 33551,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_CONSTANT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR8RegClassID,
      // MIs[0] Operand 1
      // No predicates
      // (imm:i8):$src  =>  (MOV8ri:i8 (imm:i8):$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MOV8ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 655: @33551
    GIM_Try, /*On fail goto*//*Label 656*/ 33582,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_CONSTANT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] Operand 1
      // No predicates
      // (imm:i16):$src  =>  (MOV16ri:i16 (imm:i16):$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::MOV16ri,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 656: @33582
    GIM_Try, /*On fail goto*//*Label 657*/ 33618,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FNEG,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // (fneg:f32 RFP32:f32:$src)  =>  (CHS_Fp32:f32:i16 RFP32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CHS_Fp32,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 657: @33618
    GIM_Try, /*On fail goto*//*Label 658*/ 33654,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FNEG,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // (fneg:f64 RFP64:f64:$src)  =>  (CHS_Fp64:f64:i16 RFP64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CHS_Fp64,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 658: @33654
    GIM_Try, /*On fail goto*//*Label 659*/ 33688,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FNEG,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP80RegClassID,
      // (fneg:f80 RFP80:f80:$src)  =>  (CHS_Fp80:f80:i16 RFP80:f80:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CHS_Fp80,
      GIR_AddImplicitDef, /*InsnID*/0, X86::FPSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 659: @33688
    GIM_Try, /*On fail goto*//*Label 660*/ 33721,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (fpextend:f64 FR32:f32:$src)  =>  (CVTSS2SDrr:f64 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTSS2SDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 660: @33721
    GIM_Try, /*On fail goto*//*Label 661*/ 33754,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (fpextend:v4f64 VR128:v4f32:$src)  =>  (VCVTPS2PDYrr:v4f64 VR128:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTPS2PDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 661: @33754
    GIM_Try, /*On fail goto*//*Label 662*/ 33787,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fpextend:v8f64 VR256X:v8f32:$src)  =>  (VCVTPS2PDZrr:v8f64 VR256X:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTPS2PDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 662: @33787
    GIM_Try, /*On fail goto*//*Label 663*/ 33820,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fpextend:v4f64 VR128X:v4f32:$src)  =>  (VCVTPS2PDZ256rr:v4f64 VR128X:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTPS2PDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 663: @33820
    GIM_Try, /*On fail goto*//*Label 664*/ 33855,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // (fpextend:f64 RFP32:f32:$src)  =>  (COPY_TO_REGCLASS:f64 RFP32:f32:$src, RFP64:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC RFP64*/47,
      GIR_Done,
    // Label 664: @33855
    GIM_Try, /*On fail goto*//*Label 665*/ 33890,
      GIM_CheckFeatures, GIFBS_FPStackf32,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP32RegClassID,
      // (fpextend:f80 RFP32:f32:$src)  =>  (COPY_TO_REGCLASS:f80 RFP32:f32:$src, RFP80:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC RFP80*/87,
      GIR_Done,
    // Label 665: @33890
    GIM_Try, /*On fail goto*//*Label 666*/ 33925,
      GIM_CheckFeatures, GIFBS_FPStackf64,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s80,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::RFP80RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::RFP64RegClassID,
      // (fpextend:f80 RFP64:f64:$src)  =>  (COPY_TO_REGCLASS:f80 RFP64:f64:$src, RFP80:i32)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC RFP80*/87,
      GIR_Done,
    // Label 666: @33925
    GIM_Try, /*On fail goto*//*Label 667*/ 33958,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (fp_to_sint:i32 FR32:f32:$src)  =>  (VCVTTSS2SIrr:i32 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2SIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 667: @33958
    GIM_Try, /*On fail goto*//*Label 668*/ 33991,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (fp_to_sint:i64 FR32:f32:$src)  =>  (VCVTTSS2SI64rr:i64 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2SI64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 668: @33991
    GIM_Try, /*On fail goto*//*Label 669*/ 34024,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (fp_to_sint:i32 FR64:f64:$src)  =>  (VCVTTSD2SIrr:i32 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2SIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 669: @34024
    GIM_Try, /*On fail goto*//*Label 670*/ 34057,
      GIM_CheckFeatures, GIFBS_UseAVX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (fp_to_sint:i64 FR64:f64:$src)  =>  (VCVTTSD2SI64rr:i64 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2SI64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 670: @34057
    GIM_Try, /*On fail goto*//*Label 671*/ 34090,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (fp_to_sint:i32 FR32:f32:$src)  =>  (CVTTSS2SIrr:i32 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTTSS2SIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 671: @34090
    GIM_Try, /*On fail goto*//*Label 672*/ 34123,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32RegClassID,
      // (fp_to_sint:i64 FR32:f32:$src)  =>  (CVTTSS2SI64rr:i64 FR32:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTTSS2SI64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 672: @34123
    GIM_Try, /*On fail goto*//*Label 673*/ 34156,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (fp_to_sint:i32 FR64:f64:$src)  =>  (CVTTSD2SIrr:i32 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTTSD2SIrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 673: @34156
    GIM_Try, /*On fail goto*//*Label 674*/ 34189,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64RegClassID,
      // (fp_to_sint:i64 FR64:f64:$src)  =>  (CVTTSD2SI64rr:i64 FR64:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTTSD2SI64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 674: @34189
    GIM_Try, /*On fail goto*//*Label 675*/ 34222,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (fp_to_sint:v4i32 VR128:v4f32:$src)  =>  (VCVTTPS2DQrr:v4i32 VR128:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2DQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 675: @34222
    GIM_Try, /*On fail goto*//*Label 676*/ 34255,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (fp_to_sint:v8i32 VR256:v8f32:$src)  =>  (VCVTTPS2DQYrr:v8i32 VR256:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2DQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 676: @34255
    GIM_Try, /*On fail goto*//*Label 677*/ 34288,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (fp_to_sint:v4i32 VR128:v4f32:$src)  =>  (CVTTPS2DQrr:v4i32 VR128:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTTPS2DQrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 677: @34288
    GIM_Try, /*On fail goto*//*Label 678*/ 34321,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (fp_to_sint:v4i32 VR256:v4f64:$src)  =>  (VCVTTPD2DQYrr:v4i32 VR256:v4f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2DQYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 678: @34321
    GIM_Try, /*On fail goto*//*Label 679*/ 34354,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // (fp_to_sint:i32 FR32X:f32:$src)  =>  (VCVTTSS2SIZrr:i32 FR32X:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2SIZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 679: @34354
    GIM_Try, /*On fail goto*//*Label 680*/ 34387,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // (fp_to_sint:i64 FR32X:f32:$src)  =>  (VCVTTSS2SI64Zrr:i64 FR32X:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2SI64Zrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 680: @34387
    GIM_Try, /*On fail goto*//*Label 681*/ 34420,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // (fp_to_sint:i32 FR64X:f64:$src)  =>  (VCVTTSD2SIZrr:i32 FR64X:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2SIZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 681: @34420
    GIM_Try, /*On fail goto*//*Label 682*/ 34453,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // (fp_to_sint:i64 FR64X:f64:$src)  =>  (VCVTTSD2SI64Zrr:i64 FR64X:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2SI64Zrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 682: @34453
    GIM_Try, /*On fail goto*//*Label 683*/ 34486,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_sint:v16i32 VR512:v16f32:$src)  =>  (VCVTTPS2DQZrr:v16i32 VR512:v16f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2DQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 683: @34486
    GIM_Try, /*On fail goto*//*Label 684*/ 34519,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_sint:v4i32 VR128X:v4f32:$src)  =>  (VCVTTPS2DQZ128rr:v4i32 VR128X:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2DQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 684: @34519
    GIM_Try, /*On fail goto*//*Label 685*/ 34552,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_sint:v8i32 VR256X:v8f32:$src)  =>  (VCVTTPS2DQZ256rr:v8i32 VR256X:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2DQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 685: @34552
    GIM_Try, /*On fail goto*//*Label 686*/ 34585,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_sint:v8i32 VR512:v8f64:$src)  =>  (VCVTTPD2DQZrr:v8i32 VR512:v8f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2DQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 686: @34585
    GIM_Try, /*On fail goto*//*Label 687*/ 34618,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_sint:v4i32 VR256X:v4f64:$src)  =>  (VCVTTPD2DQZ256rr:v4i32 VR256X:v4f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2DQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 687: @34618
    GIM_Try, /*On fail goto*//*Label 688*/ 34651,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_sint:v8i64 VR512:v8f64:$src)  =>  (VCVTTPD2QQZrr:v8i64 VR512:v8f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2QQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 688: @34651
    GIM_Try, /*On fail goto*//*Label 689*/ 34684,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_sint:v2i64 VR128X:v2f64:$src)  =>  (VCVTTPD2QQZ128rr:v2i64 VR128X:v2f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2QQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 689: @34684
    GIM_Try, /*On fail goto*//*Label 690*/ 34717,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_sint:v4i64 VR256X:v4f64:$src)  =>  (VCVTTPD2QQZ256rr:v4i64 VR256X:v4f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2QQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 690: @34717
    GIM_Try, /*On fail goto*//*Label 691*/ 34750,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_sint:v8i64 VR256X:v8f32:$src)  =>  (VCVTTPS2QQZrr:v8i64 VR256X:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2QQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 691: @34750
    GIM_Try, /*On fail goto*//*Label 692*/ 34783,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOSI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_sint:v4i64 VR128X:v4f32:$src)  =>  (VCVTTPS2QQZ256rr:v4i64 VR128X:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2QQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 692: @34783
    GIM_Try, /*On fail goto*//*Label 693*/ 34816,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // (fp_to_uint:i32 FR32X:f32:$src)  =>  (VCVTTSS2USIZrr:i32 FR32X:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2USIZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 693: @34816
    GIM_Try, /*On fail goto*//*Label 694*/ 34849,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR32XRegClassID,
      // (fp_to_uint:i64 FR32X:f32:$src)  =>  (VCVTTSS2USI64Zrr:i64 FR32X:f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSS2USI64Zrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 694: @34849
    GIM_Try, /*On fail goto*//*Label 695*/ 34882,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // (fp_to_uint:i32 FR64X:f64:$src)  =>  (VCVTTSD2USIZrr:i32 FR64X:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2USIZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 695: @34882
    GIM_Try, /*On fail goto*//*Label 696*/ 34915,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::FR64XRegClassID,
      // (fp_to_uint:i64 FR64X:f64:$src)  =>  (VCVTTSD2USI64Zrr:i64 FR64X:f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTSD2USI64Zrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 696: @34915
    GIM_Try, /*On fail goto*//*Label 697*/ 34948,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_uint:v16i32 VR512:v16f32:$src)  =>  (VCVTTPS2UDQZrr:v16i32 VR512:v16f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2UDQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 697: @34948
    GIM_Try, /*On fail goto*//*Label 698*/ 34981,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_uint:v4i32 VR128X:v4f32:$src)  =>  (VCVTTPS2UDQZ128rr:v4i32 VR128X:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2UDQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 698: @34981
    GIM_Try, /*On fail goto*//*Label 699*/ 35014,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_uint:v8i32 VR256X:v8f32:$src)  =>  (VCVTTPS2UDQZ256rr:v8i32 VR256X:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2UDQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 699: @35014
    GIM_Try, /*On fail goto*//*Label 700*/ 35047,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_uint:v8i32 VR512:v8f64:$src)  =>  (VCVTTPD2UDQZrr:v8i32 VR512:v8f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2UDQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 700: @35047
    GIM_Try, /*On fail goto*//*Label 701*/ 35080,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_uint:v4i32 VR256X:v4f64:$src)  =>  (VCVTTPD2UDQZ256rr:v4i32 VR256X:v4f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2UDQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 701: @35080
    GIM_Try, /*On fail goto*//*Label 702*/ 35113,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (fp_to_uint:v8i64 VR512:v8f64:$src)  =>  (VCVTTPD2UQQZrr:v8i64 VR512:v8f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2UQQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 702: @35113
    GIM_Try, /*On fail goto*//*Label 703*/ 35146,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_uint:v2i64 VR128X:v2f64:$src)  =>  (VCVTTPD2UQQZ128rr:v2i64 VR128X:v2f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2UQQZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 703: @35146
    GIM_Try, /*On fail goto*//*Label 704*/ 35179,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_uint:v4i64 VR256X:v4f64:$src)  =>  (VCVTTPD2UQQZ256rr:v4i64 VR256X:v4f64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPD2UQQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 704: @35179
    GIM_Try, /*On fail goto*//*Label 705*/ 35212,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (fp_to_uint:v8i64 VR256X:v8f32:$src)  =>  (VCVTTPS2UQQZrr:v8i64 VR256X:v8f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2UQQZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 705: @35212
    GIM_Try, /*On fail goto*//*Label 706*/ 35245,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_FPTOUI,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (fp_to_uint:v4i64 VR128X:v4f32:$src)  =>  (VCVTTPS2UQQZ256rr:v4i64 VR128X:v4f32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTTPS2UQQZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 706: @35245
    GIM_Try, /*On fail goto*//*Label 707*/ 35276,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // (sext:i32 GR8:i8:$src)  =>  (MOVSX32rr8:i32 GR8:i8:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSX32rr8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 707: @35276
    GIM_Try, /*On fail goto*//*Label 708*/ 35307,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // (sext:i32 GR16:i16:$src)  =>  (MOVSX32rr16:i32 GR16:i16:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSX32rr16,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 708: @35307
    GIM_Try, /*On fail goto*//*Label 709*/ 35338,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // (sext:i64 GR8:i8:$src)  =>  (MOVSX64rr8:i64 GR8:i8:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSX64rr8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 709: @35338
    GIM_Try, /*On fail goto*//*Label 710*/ 35369,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // (sext:i64 GR16:i16:$src)  =>  (MOVSX64rr16:i64 GR16:i16:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSX64rr16,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 710: @35369
    GIM_Try, /*On fail goto*//*Label 711*/ 35402,
      GIM_CheckFeatures, GIFBS_In64BitMode,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (sext:i64 GR32:i32:$src)  =>  (MOVSX64rr32:i64 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVSX64rr32,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 711: @35402
    GIM_Try, /*On fail goto*//*Label 712*/ 35435,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (sint_to_fp:f32 GR32:i32:$src)  =>  (CVTSI2SSrr:f32 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTSI2SSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 712: @35435
    GIM_Try, /*On fail goto*//*Label 713*/ 35468,
      GIM_CheckFeatures, GIFBS_UseSSE1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (sint_to_fp:f32 GR64:i64:$src)  =>  (CVTSI2SS64rr:f32 GR64:i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTSI2SS64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 713: @35468
    GIM_Try, /*On fail goto*//*Label 714*/ 35501,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (sint_to_fp:f64 GR32:i32:$src)  =>  (CVTSI2SDrr:f64 GR32:i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTSI2SDrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 714: @35501
    GIM_Try, /*On fail goto*//*Label 715*/ 35534,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::FR64RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR64RegClassID,
      // (sint_to_fp:f64 GR64:i64:$src)  =>  (CVTSI2SD64rr:f64 GR64:i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTSI2SD64rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 715: @35534
    GIM_Try, /*On fail goto*//*Label 716*/ 35567,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (sint_to_fp:v4f32 VR128:v4i32:$src)  =>  (VCVTDQ2PSrr:v4f32 VR128:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 716: @35567
    GIM_Try, /*On fail goto*//*Label 717*/ 35600,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256RegClassID,
      // (sint_to_fp:v8f32 VR256:v8i32:$src)  =>  (VCVTDQ2PSYrr:v8f32 VR256:v8i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PSYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 717: @35600
    GIM_Try, /*On fail goto*//*Label 718*/ 35633,
      GIM_CheckFeatures, GIFBS_UseSSE2,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (sint_to_fp:v4f32 VR128:v4i32:$src)  =>  (CVTDQ2PSrr:v4f32 VR128:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::CVTDQ2PSrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 718: @35633
    GIM_Try, /*On fail goto*//*Label 719*/ 35666,
      GIM_CheckFeatures, GIFBS_HasAVX_NoVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128RegClassID,
      // (sint_to_fp:v4f64 VR128:v4i32:$src)  =>  (VCVTDQ2PDYrr:v4f64 VR128:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PDYrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 719: @35666
    GIM_Try, /*On fail goto*//*Label 720*/ 35699,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (sint_to_fp:v8f64 VR256X:v8i32:$src)  =>  (VCVTDQ2PDZrr:v8f64 VR256X:v8i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 720: @35699
    GIM_Try, /*On fail goto*//*Label 721*/ 35732,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (sint_to_fp:v4f64 VR128X:v4i32:$src)  =>  (VCVTDQ2PDZ256rr:v4f64 VR128X:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 721: @35732
    GIM_Try, /*On fail goto*//*Label 722*/ 35765,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (sint_to_fp:v16f32 VR512:v16i32:$src)  =>  (VCVTDQ2PSZrr:v16f32 VR512:v16i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 722: @35765
    GIM_Try, /*On fail goto*//*Label 723*/ 35798,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (sint_to_fp:v4f32 VR128X:v4i32:$src)  =>  (VCVTDQ2PSZ128rr:v4f32 VR128X:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 723: @35798
    GIM_Try, /*On fail goto*//*Label 724*/ 35831,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (sint_to_fp:v8f32 VR256X:v8i32:$src)  =>  (VCVTDQ2PSZ256rr:v8f32 VR256X:v8i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTDQ2PSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 724: @35831
    GIM_Try, /*On fail goto*//*Label 725*/ 35864,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (sint_to_fp:v8f64 VR512:v8i64:$src)  =>  (VCVTQQ2PDZrr:v8f64 VR512:v8i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTQQ2PDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 725: @35864
    GIM_Try, /*On fail goto*//*Label 726*/ 35897,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (sint_to_fp:v2f64 VR128X:v2i64:$src)  =>  (VCVTQQ2PDZ128rr:v2f64 VR128X:v2i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTQQ2PDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 726: @35897
    GIM_Try, /*On fail goto*//*Label 727*/ 35930,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (sint_to_fp:v4f64 VR256X:v4i64:$src)  =>  (VCVTQQ2PDZ256rr:v4f64 VR256X:v4i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTQQ2PDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 727: @35930
    GIM_Try, /*On fail goto*//*Label 728*/ 35963,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (sint_to_fp:v8f32 VR512:v8i64:$src)  =>  (VCVTQQ2PSZrr:v8f32 VR512:v8i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTQQ2PSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 728: @35963
    GIM_Try, /*On fail goto*//*Label 729*/ 35996,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_SITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (sint_to_fp:v4f32 VR256X:v4i64:$src)  =>  (VCVTQQ2PSZ256rr:v4f32 VR256X:v4i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTQQ2PSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 729: @35996
    GIM_Try, /*On fail goto*//*Label 730*/ 36043,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_TRUNC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (trunc:i16 GR32:i32:$src)  =>  (EXTRACT_SUBREG:i16 GR32:i32:$src, sub_16bit:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_CopySubReg, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, /*SubRegIdx*/3, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR16*/4,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/1, /*RC GR32*/24,
      GIR_Done,
    // Label 730: @36043
    GIM_Try, /*On fail goto*//*Label 731*/ 36092,
      GIM_CheckFeatures, GIFBS_In64BitMode,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_TRUNC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR32RegClassID,
      // (trunc:i8 GR32:i32:$src)  =>  (EXTRACT_SUBREG:i8 GR32:i32:$src, sub_8bit:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_CopySubReg, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, /*SubRegIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR8*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/1, /*RC GR32*/24,
      GIR_Done,
    // Label 731: @36092
    GIM_Try, /*On fail goto*//*Label 732*/ 36141,
      GIM_CheckFeatures, GIFBS_In64BitMode,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_TRUNC,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR16RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // (trunc:i8 GR16:i16:$src)  =>  (EXTRACT_SUBREG:i8 GR16:i16:$src, sub_8bit:i32)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_CopySubReg, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, /*SubRegIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC GR8*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/1, /*RC GR16*/4,
      GIR_Done,
    // Label 732: @36141
    GIM_Try, /*On fail goto*//*Label 733*/ 36174,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (uint_to_fp:v8f64 VR256X:v8i32:$src)  =>  (VCVTUDQ2PDZrr:v8f64 VR256X:v8i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUDQ2PDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 733: @36174
    GIM_Try, /*On fail goto*//*Label 734*/ 36207,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (uint_to_fp:v4f64 VR128X:v4i32:$src)  =>  (VCVTUDQ2PDZ256rr:v4f64 VR128X:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUDQ2PDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 734: @36207
    GIM_Try, /*On fail goto*//*Label 735*/ 36240,
      GIM_CheckFeatures, GIFBS_HasAVX512,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (uint_to_fp:v16f32 VR512:v16i32:$src)  =>  (VCVTUDQ2PSZrr:v16f32 VR512:v16i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUDQ2PSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 735: @36240
    GIM_Try, /*On fail goto*//*Label 736*/ 36273,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (uint_to_fp:v4f32 VR128X:v4i32:$src)  =>  (VCVTUDQ2PSZ128rr:v4f32 VR128X:v4i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUDQ2PSZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 736: @36273
    GIM_Try, /*On fail goto*//*Label 737*/ 36306,
      GIM_CheckFeatures, GIFBS_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (uint_to_fp:v8f32 VR256X:v8i32:$src)  =>  (VCVTUDQ2PSZ256rr:v8f32 VR256X:v8i32:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUDQ2PSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 737: @36306
    GIM_Try, /*On fail goto*//*Label 738*/ 36339,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR512RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (uint_to_fp:v8f64 VR512:v8i64:$src)  =>  (VCVTUQQ2PDZrr:v8f64 VR512:v8i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUQQ2PDZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 738: @36339
    GIM_Try, /*On fail goto*//*Label 739*/ 36372,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR128XRegClassID,
      // (uint_to_fp:v2f64 VR128X:v2i64:$src)  =>  (VCVTUQQ2PDZ128rr:v2f64 VR128X:v2i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUQQ2PDZ128rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 739: @36372
    GIM_Try, /*On fail goto*//*Label 740*/ 36405,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (uint_to_fp:v4f64 VR256X:v4i64:$src)  =>  (VCVTUQQ2PDZ256rr:v4f64 VR256X:v4i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUQQ2PDZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 740: @36405
    GIM_Try, /*On fail goto*//*Label 741*/ 36438,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR256XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR512RegClassID,
      // (uint_to_fp:v8f32 VR512:v8i64:$src)  =>  (VCVTUQQ2PSZrr:v8f32 VR512:v8i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUQQ2PSZrr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 741: @36438
    GIM_Try, /*On fail goto*//*Label 742*/ 36471,
      GIM_CheckFeatures, GIFBS_HasDQI_HasVLX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_UITOFP,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::VR128XRegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::VR256XRegClassID,
      // (uint_to_fp:v4f32 VR256X:v4i64:$src)  =>  (VCVTUQQ2PSZ256rr:v4f32 VR256X:v4i64:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::VCVTUQQ2PSZ256rr,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 742: @36471
    GIM_Try, /*On fail goto*//*Label 743*/ 36531,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ZEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s16,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v16s1,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VK16RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (zext:i32 (bitconvert:i16 VK16:v16i1:$src))  =>  (KMOVWrk:i32 VK16:v16i1:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::KMOVWrk,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 743: @36531
    GIM_Try, /*On fail goto*//*Label 744*/ 36593,
      GIM_CheckFeatures, GIFBS_HasDQI,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ZEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] Operand 1
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_BITCAST,
      // MIs[1] Operand 0
      GIM_CheckType, /*MI*/1, /*Op*/0, /*Type*/GILLT_s8,
      // MIs[1] src
      GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v8s1,
      GIM_CheckRegBankForClass, /*MI*/1, /*Op*/1, /*RC*/X86::VK8RegClassID,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (zext:i32 (bitconvert:i8 VK8:v8i1:$src))  =>  (KMOVBrk:i32 VK8:v8i1:$src)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/X86::KMOVBrk,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 744: @36593
    GIM_Try, /*On fail goto*//*Label 745*/ 36624,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ZEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR8RegClassID,
      // (zext:i32 GR8:i8:$src)  =>  (MOVZX32rr8:i32 GR8:i8:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVZX32rr8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 745: @36624
    GIM_Try, /*On fail goto*//*Label 746*/ 36655,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_ZEXT,
      // MIs[0] dst
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/X86::GR32RegClassID,
      // MIs[0] src
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/X86::GR16RegClassID,
      // (zext:i32 GR16:i16:$src)  =>  (MOVZX32rr16:i32 GR16:i16:$src)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::MOVZX32rr16,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 746: @36655
    GIM_Try, /*On fail goto*//*Label 747*/ 36673,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/1,
      GIM_CheckOpcode, /*MI*/0, TargetOpcode::G_BR,
      // MIs[0] dst
      GIM_CheckIsMBB, /*MI*/0, /*Op*/0,
      // (br (bb:Other):$dst)  =>  (JMP_1 (bb:Other):$dst)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/X86::JMP_1,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      GIR_Done,
    // Label 747: @36673
    GIM_Reject,
    };
  if (executeMatchTable(*this, OutMIs, State, MatcherInfo, MatchTable0, TII, MRI, TRI, RBI, AvailableFeatures)) {
    return true;
  }

  return false;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
