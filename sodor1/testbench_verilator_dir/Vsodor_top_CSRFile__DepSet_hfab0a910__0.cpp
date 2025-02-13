// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_CSRFile.h"
#include "Vsodor_top__Syms.h"

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__0(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__0\n"); );
    // Body
    vlSelf->__Vdly__reg_medeleg = vlSelf->__PVT__reg_medeleg;
    vlSelf->__Vdly__reg_dscratch = vlSelf->__PVT__reg_dscratch;
    vlSelf->__Vdly__reg_dcsr_step = vlSelf->__PVT__reg_dcsr_step;
    vlSelf->__Vdly__reg_dcsr_ebreakm = vlSelf->__PVT__reg_dcsr_ebreakm;
    vlSelf->__Vdly__reg_mtval = vlSelf->__PVT__reg_mtval;
    vlSelf->__Vdly__reg_mscratch = vlSelf->__PVT__reg_mscratch;
    vlSelf->__Vdly__reg_mcause = vlSelf->__PVT__reg_mcause;
    vlSelf->__Vdly__reg_mie_msip = vlSelf->__PVT__reg_mie_msip;
    vlSelf->__Vdly__reg_mie_mtip = vlSelf->__PVT__reg_mie_mtip;
    vlSelf->__Vdly__reg_dpc = vlSelf->__PVT__reg_dpc;
    vlSelf->__Vdly__reg_mip_msip = vlSelf->__PVT__reg_mip_msip;
    vlSelf->__Vdly__reg_mip_mtip = vlSelf->__PVT__reg_mip_mtip;
    vlSelf->__Vdly__reg_mepc = vlSelf->__PVT__reg_mepc;
    vlSelf->__Vdly__reg_mstatus_mpie = vlSelf->__PVT__reg_mstatus_mpie;
    vlSelf->__Vdly__reg_mstatus_mie = vlSelf->__PVT__reg_mstatus_mie;
    vlSelf->__Vdly__REG_3 = vlSelf->__PVT__REG_3;
    vlSelf->__Vdly__REG_1 = vlSelf->__PVT__REG_1;
    vlSelf->__Vdly__REG_2 = vlSelf->__PVT__REG_2;
    vlSelf->__Vdly__REG = vlSelf->__PVT__REG;
    vlSelf->__Vdly__REG_35 = vlSelf->__PVT__REG_35;
    vlSelf->__Vdly__REG_34 = vlSelf->__PVT__REG_34;
    vlSelf->__Vdly__REG_33 = vlSelf->__PVT__REG_33;
    vlSelf->__Vdly__REG_32 = vlSelf->__PVT__REG_32;
    vlSelf->__Vdly__REG_31 = vlSelf->__PVT__REG_31;
    vlSelf->__Vdly__REG_30 = vlSelf->__PVT__REG_30;
    vlSelf->__Vdly__REG_29 = vlSelf->__PVT__REG_29;
    vlSelf->__Vdly__REG_28 = vlSelf->__PVT__REG_28;
    vlSelf->__Vdly__REG_27 = vlSelf->__PVT__REG_27;
    vlSelf->__Vdly__REG_26 = vlSelf->__PVT__REG_26;
    vlSelf->__Vdly__REG_25 = vlSelf->__PVT__REG_25;
    vlSelf->__Vdly__REG_24 = vlSelf->__PVT__REG_24;
    vlSelf->__Vdly__REG_23 = vlSelf->__PVT__REG_23;
    vlSelf->__Vdly__REG_22 = vlSelf->__PVT__REG_22;
    vlSelf->__Vdly__REG_21 = vlSelf->__PVT__REG_21;
    vlSelf->__Vdly__REG_20 = vlSelf->__PVT__REG_20;
    vlSelf->__Vdly__REG_19 = vlSelf->__PVT__REG_19;
    vlSelf->__Vdly__REG_18 = vlSelf->__PVT__REG_18;
    vlSelf->__Vdly__REG_17 = vlSelf->__PVT__REG_17;
    vlSelf->__Vdly__REG_16 = vlSelf->__PVT__REG_16;
    vlSelf->__Vdly__REG_15 = vlSelf->__PVT__REG_15;
    vlSelf->__Vdly__REG_14 = vlSelf->__PVT__REG_14;
    vlSelf->__Vdly__REG_13 = vlSelf->__PVT__REG_13;
    vlSelf->__Vdly__REG_12 = vlSelf->__PVT__REG_12;
    vlSelf->__Vdly__REG_11 = vlSelf->__PVT__REG_11;
    vlSelf->__Vdly__REG_10 = vlSelf->__PVT__REG_10;
    vlSelf->__Vdly__REG_9 = vlSelf->__PVT__REG_9;
    vlSelf->__Vdly__REG_8 = vlSelf->__PVT__REG_8;
    vlSelf->__Vdly__REG_7 = vlSelf->__PVT__REG_7;
    vlSelf->__Vdly__REG_6 = vlSelf->__PVT__REG_6;
    vlSelf->__Vdly__REG_5 = vlSelf->__PVT__REG_5;
    vlSelf->__Vdly__REG_4 = vlSelf->__PVT__REG_4;
    vlSelf->__Vdly__reg_mstatus_mpie = (1U & ((~ (IData)(vlSelf->__PVT__reset)) 
                                              & ((IData)(vlSelf->__PVT__wen)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT___T_81)
                                                   ? 
                                                  VL_BITSEL_IQII(35, vlSelf->__PVT___WIRE_8, 7U)
                                                   : (IData)(vlSelf->__PVT___GEN_8))
                                                  : (IData)(vlSelf->__PVT___GEN_8))));
    vlSelf->__Vdly__reg_mstatus_mie = (1U & ((~ (IData)(vlSelf->__PVT__reset)) 
                                             & ((IData)(vlSelf->__PVT__wen)
                                                 ? 
                                                ((IData)(vlSelf->__PVT___T_81)
                                                  ? 
                                                 VL_BITSEL_IQII(35, vlSelf->__PVT___WIRE_8, 3U)
                                                  : (IData)(vlSelf->__PVT___GEN_7))
                                                 : (IData)(vlSelf->__PVT___GEN_7))));
    vlSelf->__Vdly__reg_mepc = VL_SEL_IQII(35, vlSelf->__PVT___GEN_145, 0U, 0x20U);
    vlSelf->__Vdly__reg_mcause = ((IData)(vlSelf->__PVT__wen)
                                   ? ((IData)(vlSelf->__PVT___T_88)
                                       ? vlSelf->__PVT___T_801
                                       : vlSelf->__PVT___GEN_12)
                                   : vlSelf->__PVT___GEN_12);
    if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_87) {
            vlSelf->__Vdly__reg_mtval = vlSelf->__PVT__wdata;
        }
    }
    if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_85) {
            vlSelf->__Vdly__reg_mscratch = vlSelf->__PVT__wdata;
        }
    }
    if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_93) {
            vlSelf->__Vdly__reg_medeleg = vlSelf->__PVT__wdata;
        }
    }
    vlSelf->__Vdly__reg_mip_mtip = (1U & (~ (IData)(vlSelf->__PVT__reset)));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__reg_mip_msip = 0U;
    } else if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_83) {
            vlSelf->__Vdly__reg_mip_msip = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wdata, 3U));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__reg_mie_mtip = 0U;
    } else if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_84) {
            vlSelf->__Vdly__reg_mie_mtip = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wdata, 7U));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__reg_mie_msip = 0U;
    } else if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_84) {
            vlSelf->__Vdly__reg_mie_msip = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wdata, 3U));
        }
    }
    vlSelf->__Vdly__REG = (0x3fU & ((IData)(vlSelf->__PVT__reset)
                                     ? 0U : VL_SEL_IQII(64, vlSelf->__PVT___GEN_139, 0U, 6U)));
    vlSelf->__Vdly__REG_1 = (0x3ffffffffffffffULL & 
                             ((IData)(vlSelf->__PVT__reset)
                               ? 0ULL : ((IData)(vlSelf->__PVT__wen)
                                          ? ((IData)(vlSelf->__PVT___T_75)
                                              ? VL_SEL_QQII(64, vlSelf->__PVT___T_789, 6U, 0x3aU)
                                              : ((IData)(vlSelf->__PVT___T_158)
                                                  ? 
                                                 VL_SEL_QQII(64, vlSelf->__PVT___T_786, 6U, 0x3aU)
                                                  : vlSelf->__PVT___GEN_0))
                                          : vlSelf->__PVT___GEN_0)));
    vlSelf->__Vdly__REG_2 = (0x3fU & ((IData)(vlSelf->__PVT__reset)
                                       ? 0U : VL_SEL_IQII(64, vlSelf->__PVT___GEN_141, 0U, 6U)));
    vlSelf->__Vdly__REG_3 = (0x3ffffffffffffffULL & 
                             ((IData)(vlSelf->__PVT__reset)
                               ? 0ULL : ((IData)(vlSelf->__PVT__wen)
                                          ? ((IData)(vlSelf->__PVT___T_76)
                                              ? VL_SEL_QQII(64, vlSelf->__PVT___T_796, 6U, 0x3aU)
                                              : ((IData)(vlSelf->__PVT___T_159)
                                                  ? 
                                                 VL_SEL_QQII(64, vlSelf->__PVT___T_793, 6U, 0x3aU)
                                                  : vlSelf->__PVT___GEN_1))
                                          : vlSelf->__PVT___GEN_1)));
    vlSelf->__Vdly__REG_4 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_107, 0U, 0x28U));
    vlSelf->__Vdly__REG_5 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_108, 0U, 0x28U));
    vlSelf->__Vdly__REG_6 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_109, 0U, 0x28U));
    vlSelf->__Vdly__REG_7 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_110, 0U, 0x28U));
    vlSelf->__Vdly__REG_8 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_111, 0U, 0x28U));
    vlSelf->__Vdly__REG_9 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_112, 0U, 0x28U));
    vlSelf->__Vdly__REG_10 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_113, 0U, 0x28U));
    vlSelf->__Vdly__REG_11 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_114, 0U, 0x28U));
    vlSelf->__Vdly__REG_12 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_115, 0U, 0x28U));
    vlSelf->__Vdly__REG_13 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_116, 0U, 0x28U));
    vlSelf->__Vdly__REG_14 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_117, 0U, 0x28U));
    vlSelf->__Vdly__REG_15 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_118, 0U, 0x28U));
    vlSelf->__Vdly__REG_16 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_119, 0U, 0x28U));
    vlSelf->__Vdly__REG_17 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_120, 0U, 0x28U));
    vlSelf->__Vdly__REG_18 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_121, 0U, 0x28U));
    vlSelf->__Vdly__REG_19 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_122, 0U, 0x28U));
    vlSelf->__Vdly__REG_20 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_123, 0U, 0x28U));
    vlSelf->__Vdly__REG_21 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_124, 0U, 0x28U));
    vlSelf->__Vdly__REG_22 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_125, 0U, 0x28U));
    vlSelf->__Vdly__REG_23 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_126, 0U, 0x28U));
    vlSelf->__Vdly__REG_24 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_127, 0U, 0x28U));
    vlSelf->__Vdly__REG_25 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_128, 0U, 0x28U));
    vlSelf->__Vdly__REG_26 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_129, 0U, 0x28U));
    vlSelf->__Vdly__REG_27 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_130, 0U, 0x28U));
    vlSelf->__Vdly__REG_28 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_131, 0U, 0x28U));
    vlSelf->__Vdly__REG_29 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_132, 0U, 0x28U));
    vlSelf->__Vdly__REG_30 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_133, 0U, 0x28U));
    vlSelf->__Vdly__REG_31 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_134, 0U, 0x28U));
    vlSelf->__Vdly__REG_32 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_135, 0U, 0x28U));
    vlSelf->__Vdly__REG_33 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_136, 0U, 0x28U));
    vlSelf->__Vdly__REG_34 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_137, 0U, 0x28U));
    vlSelf->__Vdly__REG_35 = (0xffffffffffULL & VL_SEL_QQII(41, vlSelf->__PVT___GEN_138, 0U, 0x28U));
    if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_91) {
            vlSelf->__Vdly__reg_dpc = vlSelf->__PVT__wdata;
        }
    }
    if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_92) {
            vlSelf->__Vdly__reg_dscratch = vlSelf->__PVT__wdata;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__reg_dcsr_ebreakm = 0U;
    } else if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_90) {
            vlSelf->__Vdly__reg_dcsr_ebreakm = (1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__wdata, 0xfU));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__reg_dcsr_step = 0U;
    } else if (vlSelf->__PVT__wen) {
        if (vlSelf->__PVT___T_90) {
            vlSelf->__Vdly__reg_dcsr_step = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wdata, 2U));
        }
    }
    if (VL_UNLIKELY((1U & (~ ((1U >= (IData)(vlSelf->__PVT___T_369)) 
                              | (IData)(vlSelf->__PVT__reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: these conditions must be mutually exclusive\n    at csr.scala:290 assert(PopCount(insn_ret :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n");
    }
    if (VL_UNLIKELY((1U & (~ ((1U >= (IData)(vlSelf->__PVT___T_369)) 
                              | (IData)(vlSelf->__PVT__reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: sodor_core_1stage.v:1336: Assertion failed in %Nsodor_top.sodor_core.d.csr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sodor_core_1stage.v", 1336, "");
    }
    vlSelf->__PVT__reg_medeleg = vlSelf->__Vdly__reg_medeleg;
    vlSelf->__PVT__reg_dscratch = vlSelf->__Vdly__reg_dscratch;
    vlSelf->__PVT__reg_dcsr_ebreakm = vlSelf->__Vdly__reg_dcsr_ebreakm;
    vlSelf->__PVT__reg_dcsr_step = vlSelf->__Vdly__reg_dcsr_step;
    vlSelf->__PVT__reg_mtval = vlSelf->__Vdly__reg_mtval;
    vlSelf->__PVT__reg_mcause = vlSelf->__Vdly__reg_mcause;
    vlSelf->__PVT__reg_mscratch = vlSelf->__Vdly__reg_mscratch;
    vlSelf->__PVT__reg_mie_mtip = vlSelf->__Vdly__reg_mie_mtip;
    vlSelf->__PVT__reg_mie_msip = vlSelf->__Vdly__reg_mie_msip;
    vlSelf->__PVT__reg_mip_mtip = vlSelf->__Vdly__reg_mip_mtip;
    vlSelf->__PVT__reg_mip_msip = vlSelf->__Vdly__reg_mip_msip;
    vlSelf->__PVT__reg_dpc = vlSelf->__Vdly__reg_dpc;
    vlSelf->__PVT__reg_mepc = vlSelf->__Vdly__reg_mepc;
    vlSelf->__PVT__reg_mstatus_mpie = vlSelf->__Vdly__reg_mstatus_mpie;
    vlSelf->__PVT__reg_mstatus_mie = vlSelf->__Vdly__reg_mstatus_mie;
    vlSelf->__PVT__REG_3 = vlSelf->__Vdly__REG_3;
    vlSelf->__PVT__REG_1 = vlSelf->__Vdly__REG_1;
    vlSelf->__PVT__REG_2 = vlSelf->__Vdly__REG_2;
    vlSelf->__PVT__REG = vlSelf->__Vdly__REG;
    vlSelf->__PVT__REG_35 = vlSelf->__Vdly__REG_35;
    vlSelf->__PVT__REG_34 = vlSelf->__Vdly__REG_34;
    vlSelf->__PVT__REG_33 = vlSelf->__Vdly__REG_33;
    vlSelf->__PVT__REG_32 = vlSelf->__Vdly__REG_32;
    vlSelf->__PVT__REG_31 = vlSelf->__Vdly__REG_31;
    vlSelf->__PVT__REG_30 = vlSelf->__Vdly__REG_30;
    vlSelf->__PVT__REG_29 = vlSelf->__Vdly__REG_29;
    vlSelf->__PVT__REG_28 = vlSelf->__Vdly__REG_28;
    vlSelf->__PVT__REG_27 = vlSelf->__Vdly__REG_27;
    vlSelf->__PVT__REG_26 = vlSelf->__Vdly__REG_26;
    vlSelf->__PVT__REG_25 = vlSelf->__Vdly__REG_25;
    vlSelf->__PVT__REG_24 = vlSelf->__Vdly__REG_24;
    vlSelf->__PVT__REG_23 = vlSelf->__Vdly__REG_23;
    vlSelf->__PVT__REG_22 = vlSelf->__Vdly__REG_22;
    vlSelf->__PVT__REG_21 = vlSelf->__Vdly__REG_21;
    vlSelf->__PVT__REG_20 = vlSelf->__Vdly__REG_20;
    vlSelf->__PVT__REG_19 = vlSelf->__Vdly__REG_19;
    vlSelf->__PVT__REG_18 = vlSelf->__Vdly__REG_18;
    vlSelf->__PVT__REG_17 = vlSelf->__Vdly__REG_17;
    vlSelf->__PVT__REG_16 = vlSelf->__Vdly__REG_16;
    vlSelf->__PVT__REG_15 = vlSelf->__Vdly__REG_15;
    vlSelf->__PVT__REG_14 = vlSelf->__Vdly__REG_14;
    vlSelf->__PVT__REG_13 = vlSelf->__Vdly__REG_13;
    vlSelf->__PVT__REG_12 = vlSelf->__Vdly__REG_12;
    vlSelf->__PVT__REG_11 = vlSelf->__Vdly__REG_11;
    vlSelf->__PVT__REG_10 = vlSelf->__Vdly__REG_10;
    vlSelf->__PVT__REG_9 = vlSelf->__Vdly__REG_9;
    vlSelf->__PVT__REG_8 = vlSelf->__Vdly__REG_8;
    vlSelf->__PVT__REG_7 = vlSelf->__Vdly__REG_7;
    vlSelf->__PVT__REG_6 = vlSelf->__Vdly__REG_6;
    vlSelf->__PVT__REG_5 = vlSelf->__Vdly__REG_5;
    vlSelf->__PVT__REG_4 = vlSelf->__Vdly__REG_4;
    vlSelf->__PVT___T_74 = VL_CONCAT_III(32,16,16, 0x4000U, 
                                         VL_CONCAT_III(16,1,15, (IData)(vlSelf->__PVT__reg_dcsr_ebreakm), 
                                                       VL_EXTEND_II(15,3, 
                                                                    VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__reg_dcsr_step), 3U))));
    vlSelf->__PVT___T_73 = VL_CONCAT_III(16,9,7, VL_EXTEND_II(9,1, (IData)(vlSelf->__PVT__reg_mie_mtip)), 
                                         VL_EXTEND_II(7,4, 
                                                      VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__reg_mie_msip), 0U)));
    vlSelf->__PVT___T_72 = VL_CONCAT_III(16,9,7, VL_EXTEND_II(9,1, (IData)(vlSelf->__PVT__reg_mip_mtip)), 
                                         VL_EXTEND_II(7,4, 
                                                      VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__reg_mip_msip), 0U)));
    vlSelf->__PVT__io_status_mpie = vlSelf->__PVT__reg_mstatus_mpie;
    vlSelf->__PVT__io_status_mie = vlSelf->__PVT__reg_mstatus_mie;
    vlSelf->__PVT___T_8 = (0x3ffffffffffffffULL & (1ULL 
                                                   + vlSelf->__PVT__REG_3));
    vlSelf->__PVT___T_3 = (0x3ffffffffffffffULL & (1ULL 
                                                   + vlSelf->__PVT__REG_1));
    vlSelf->__PVT___T_9 = VL_CONCAT_QQI(64,58,6, vlSelf->__PVT__REG_3, (IData)(vlSelf->__PVT__REG_2));
    vlSelf->__PVT___T = (0x7fU & ((IData)(1U) + VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT__REG))));
    vlSelf->__PVT___T_4 = VL_CONCAT_QQI(64,58,6, vlSelf->__PVT__REG_1, (IData)(vlSelf->__PVT__REG));
    vlSelf->__PVT___T_41 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_35);
    vlSelf->__PVT___T_40 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_34);
    vlSelf->__PVT___T_39 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_33);
    vlSelf->__PVT___T_38 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_32);
    vlSelf->__PVT___T_37 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_31);
    vlSelf->__PVT___T_36 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_30);
    vlSelf->__PVT___T_35 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_29);
    vlSelf->__PVT___T_34 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_28);
    vlSelf->__PVT___T_33 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_27);
    vlSelf->__PVT___T_32 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_26);
    vlSelf->__PVT___T_31 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_25);
    vlSelf->__PVT___T_30 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_24);
    vlSelf->__PVT___T_29 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_23);
    vlSelf->__PVT___T_28 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_22);
    vlSelf->__PVT___T_27 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_21);
    vlSelf->__PVT___T_26 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_20);
    vlSelf->__PVT___T_25 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_19);
    vlSelf->__PVT___T_24 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_18);
    vlSelf->__PVT___T_23 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_17);
    vlSelf->__PVT___T_22 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_16);
    vlSelf->__PVT___T_21 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_15);
    vlSelf->__PVT___T_20 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_14);
    vlSelf->__PVT___T_19 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_13);
    vlSelf->__PVT___T_18 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_12);
    vlSelf->__PVT___T_17 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_11);
    vlSelf->__PVT___T_16 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_10);
    vlSelf->__PVT___T_15 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_9);
    vlSelf->__PVT___T_14 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_8);
    vlSelf->__PVT___T_13 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_7);
    vlSelf->__PVT___T_12 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_6);
    vlSelf->__PVT___T_11 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_5);
    vlSelf->__PVT___T_10 = VL_EXTEND_QQ(41,40, vlSelf->__PVT__REG_4);
    vlSelf->__PVT__lo_lo = VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__io_status_upie), 
                                         VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__io_status_mie), 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__io_status_hie), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__io_status_sie), (IData)(vlSelf->__PVT__io_status_uie)))));
    vlSelf->__PVT___GEN_0 = ((1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT___T), 6U))
                              ? vlSelf->__PVT___T_3
                              : vlSelf->__PVT__REG_1);
    vlSelf->__PVT__io_time = VL_SEL_IQII(64, vlSelf->__PVT___T_4, 0U, 0x20U);
    vlSelf->__PVT__lo = VL_CONCAT_III(13,2,11, (IData)(vlSelf->__PVT__io_status_mpp), 
                                      VL_CONCAT_III(11,2,9, (IData)(vlSelf->__PVT__io_status_hpp), 
                                                    VL_CONCAT_III(9,1,8, (IData)(vlSelf->__PVT__io_status_spp), 
                                                                  VL_CONCAT_III(8,1,7, (IData)(vlSelf->__PVT__io_status_mpie), 
                                                                                VL_CONCAT_III(7,1,6, (IData)(vlSelf->__PVT__io_status_hpie), 
                                                                                VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__io_status_spie), (IData)(vlSelf->__PVT__lo_lo)))))));
    vlSelf->__PVT__read_mstatus = VL_CONCAT_QIQ(35,1,34, (IData)(vlSelf->__PVT__io_status_debug), 
                                                VL_CONCAT_QII(34,2,32, (IData)(vlSelf->__PVT__io_status_prv), 
                                                              VL_CONCAT_III(32,1,31, (IData)(vlSelf->__PVT__io_status_sd), 
                                                                            VL_CONCAT_III(31,8,23, (IData)(vlSelf->__PVT__io_status_zero1), 
                                                                                VL_CONCAT_III(23,1,22, (IData)(vlSelf->__PVT__io_status_tsr), 
                                                                                VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__io_status_tw), 
                                                                                VL_CONCAT_III(21,8,13, (IData)(vlSelf->__PVT__hi_lo), (IData)(vlSelf->__PVT__lo))))))));
}
