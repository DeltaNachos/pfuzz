// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_regfile.h"

uint32_t Vbiriscv_top_biriscv_regfile::REGFILE__DOT__get_register(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_regfile::REGFILE__DOT__get_register\n"); );
    VL_OUT(get_register__Vfuncrtn,31,0);
    // Body
    get_register__Vfuncrtn = (((((((((1U == (IData)(r)) 
                                     | (2U == (IData)(r))) 
                                    | (3U == (IData)(r))) 
                                   | (4U == (IData)(r))) 
                                  | (5U == (IData)(r))) 
                                 | (6U == (IData)(r))) 
                                | (7U == (IData)(r))) 
                               | (8U == (IData)(r)))
                               ? ((1U == (IData)(r))
                                   ? this->__PVT__REGFILE__DOT__reg_r1_q
                                   : ((2U == (IData)(r))
                                       ? this->__PVT__REGFILE__DOT__reg_r2_q
                                       : ((3U == (IData)(r))
                                           ? this->__PVT__REGFILE__DOT__reg_r3_q
                                           : ((4U == (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r4_q
                                               : ((5U 
                                                   == (IData)(r))
                                                   ? this->__PVT__REGFILE__DOT__reg_r5_q
                                                   : 
                                                  ((6U 
                                                    == (IData)(r))
                                                    ? this->__PVT__REGFILE__DOT__reg_r6_q
                                                    : 
                                                   ((7U 
                                                     == (IData)(r))
                                                     ? this->__PVT__REGFILE__DOT__reg_r7_q
                                                     : this->__PVT__REGFILE__DOT__reg_r8_q)))))))
                               : (((((((((9U == (IData)(r)) 
                                         | (0xaU == (IData)(r))) 
                                        | (0xbU == (IData)(r))) 
                                       | (0xcU == (IData)(r))) 
                                      | (0xdU == (IData)(r))) 
                                     | (0xeU == (IData)(r))) 
                                    | (0xfU == (IData)(r))) 
                                   | (0x10U == (IData)(r)))
                                   ? ((9U == (IData)(r))
                                       ? this->__PVT__REGFILE__DOT__reg_r9_q
                                       : ((0xaU == (IData)(r))
                                           ? this->__PVT__REGFILE__DOT__reg_r10_q
                                           : ((0xbU 
                                               == (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r11_q
                                               : ((0xcU 
                                                   == (IData)(r))
                                                   ? this->__PVT__REGFILE__DOT__reg_r12_q
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(r))
                                                    ? this->__PVT__REGFILE__DOT__reg_r13_q
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(r))
                                                     ? this->__PVT__REGFILE__DOT__reg_r14_q
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(r))
                                                      ? this->__PVT__REGFILE__DOT__reg_r15_q
                                                      : this->__PVT__REGFILE__DOT__reg_r16_q)))))))
                                   : (((((((((0x11U 
                                              == (IData)(r)) 
                                             | (0x12U 
                                                == (IData)(r))) 
                                            | (0x13U 
                                               == (IData)(r))) 
                                           | (0x14U 
                                              == (IData)(r))) 
                                          | (0x15U 
                                             == (IData)(r))) 
                                         | (0x16U == (IData)(r))) 
                                        | (0x17U == (IData)(r))) 
                                       | (0x18U == (IData)(r)))
                                       ? ((0x11U == (IData)(r))
                                           ? this->__PVT__REGFILE__DOT__reg_r17_q
                                           : ((0x12U 
                                               == (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r18_q
                                               : ((0x13U 
                                                   == (IData)(r))
                                                   ? this->__PVT__REGFILE__DOT__reg_r19_q
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(r))
                                                    ? this->__PVT__REGFILE__DOT__reg_r20_q
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(r))
                                                     ? this->__PVT__REGFILE__DOT__reg_r21_q
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(r))
                                                      ? this->__PVT__REGFILE__DOT__reg_r22_q
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(r))
                                                       ? this->__PVT__REGFILE__DOT__reg_r23_q
                                                       : this->__PVT__REGFILE__DOT__reg_r24_q)))))))
                                       : ((0x19U == (IData)(r))
                                           ? this->__PVT__REGFILE__DOT__reg_r25_q
                                           : ((0x1aU 
                                               == (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r26_q
                                               : ((0x1bU 
                                                   == (IData)(r))
                                                   ? this->__PVT__REGFILE__DOT__reg_r27_q
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(r))
                                                    ? this->__PVT__REGFILE__DOT__reg_r28_q
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(r))
                                                     ? this->__PVT__REGFILE__DOT__reg_r29_q
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(r))
                                                      ? this->__PVT__REGFILE__DOT__reg_r30_q
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(r))
                                                       ? this->__PVT__REGFILE__DOT__reg_r31_q
                                                       : 0U))))))))));
    // Final
    return (get_register__Vfuncrtn);
}

bool Vbiriscv_top_biriscv_regfile::REGFILE__DOT__set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_regfile::REGFILE__DOT__set_register\n"); );
    VL_OUT8(set_register__Vfuncrtn,0,0);
    // Final
    return (set_register__Vfuncrtn);
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_regfile___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0(Vbiriscv_top_biriscv_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_regfile___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0\n"); );
    // Body
    vlSelf->__Vdly__REGFILE__DOT__reg_r31_q = vlSelf->__PVT__REGFILE__DOT__reg_r31_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r30_q = vlSelf->__PVT__REGFILE__DOT__reg_r30_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r29_q = vlSelf->__PVT__REGFILE__DOT__reg_r29_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r28_q = vlSelf->__PVT__REGFILE__DOT__reg_r28_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r27_q = vlSelf->__PVT__REGFILE__DOT__reg_r27_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r26_q = vlSelf->__PVT__REGFILE__DOT__reg_r26_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r25_q = vlSelf->__PVT__REGFILE__DOT__reg_r25_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r24_q = vlSelf->__PVT__REGFILE__DOT__reg_r24_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r23_q = vlSelf->__PVT__REGFILE__DOT__reg_r23_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r22_q = vlSelf->__PVT__REGFILE__DOT__reg_r22_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r21_q = vlSelf->__PVT__REGFILE__DOT__reg_r21_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r20_q = vlSelf->__PVT__REGFILE__DOT__reg_r20_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r19_q = vlSelf->__PVT__REGFILE__DOT__reg_r19_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r18_q = vlSelf->__PVT__REGFILE__DOT__reg_r18_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r17_q = vlSelf->__PVT__REGFILE__DOT__reg_r17_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r16_q = vlSelf->__PVT__REGFILE__DOT__reg_r16_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r15_q = vlSelf->__PVT__REGFILE__DOT__reg_r15_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r14_q = vlSelf->__PVT__REGFILE__DOT__reg_r14_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r13_q = vlSelf->__PVT__REGFILE__DOT__reg_r13_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r12_q = vlSelf->__PVT__REGFILE__DOT__reg_r12_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r11_q = vlSelf->__PVT__REGFILE__DOT__reg_r11_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r10_q = vlSelf->__PVT__REGFILE__DOT__reg_r10_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r9_q = vlSelf->__PVT__REGFILE__DOT__reg_r9_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r8_q = vlSelf->__PVT__REGFILE__DOT__reg_r8_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r7_q = vlSelf->__PVT__REGFILE__DOT__reg_r7_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r6_q = vlSelf->__PVT__REGFILE__DOT__reg_r6_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r5_q = vlSelf->__PVT__REGFILE__DOT__reg_r5_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r4_q = vlSelf->__PVT__REGFILE__DOT__reg_r4_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r3_q = vlSelf->__PVT__REGFILE__DOT__reg_r3_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r2_q = vlSelf->__PVT__REGFILE__DOT__reg_r2_q;
    vlSelf->__Vdly__REGFILE__DOT__reg_r1_q = vlSelf->__PVT__REGFILE__DOT__reg_r1_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__REGFILE__DOT__reg_r1_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r2_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r3_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r4_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r5_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r6_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r7_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r8_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r9_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r10_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r11_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r12_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r13_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r14_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r15_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r16_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r17_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r18_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r19_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r20_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r21_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r22_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r23_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r24_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r25_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r26_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r27_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r28_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r29_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r30_q = 0U;
        vlSelf->__Vdly__REGFILE__DOT__reg_r31_q = 0U;
    } else {
        if ((1U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r1_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((1U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r1_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((2U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r2_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((2U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r2_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((3U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r3_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((3U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r3_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((4U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r4_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((4U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r4_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((5U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r5_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((5U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r5_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((6U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r6_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((6U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r6_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((7U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r7_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((7U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r7_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((8U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r8_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((8U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r8_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((9U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r9_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((9U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r9_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xaU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r10_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xaU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r10_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xbU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r11_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xbU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r11_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xcU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r12_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xcU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r12_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xdU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r13_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xdU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r13_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xeU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r14_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xeU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r14_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0xfU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r15_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0xfU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r15_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x10U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r16_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x10U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r16_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x11U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r17_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x11U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r17_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x12U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r18_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x12U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r18_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x13U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r19_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x13U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r19_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x14U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r20_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x14U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r20_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x15U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r21_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x15U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r21_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x16U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r22_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x16U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r22_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x17U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r23_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x17U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r23_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x18U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r24_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x18U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r24_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x19U == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r25_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x19U == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r25_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1aU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r26_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1aU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r26_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1bU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r27_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1bU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r27_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1cU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r28_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1cU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r28_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1dU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r29_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1dU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r29_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1eU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r30_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1eU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r30_q 
                = vlSelf->__PVT__rd1_value_i;
        }
        if ((0x1fU == (IData)(vlSelf->__PVT__rd0_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r31_q 
                = vlSelf->__PVT__rd0_value_i;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__rd1_i))) {
            vlSelf->__Vdly__REGFILE__DOT__reg_r31_q 
                = vlSelf->__PVT__rd1_value_i;
        }
    }
    vlSelf->__PVT__REGFILE__DOT__reg_r1_q = vlSelf->__Vdly__REGFILE__DOT__reg_r1_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r2_q = vlSelf->__Vdly__REGFILE__DOT__reg_r2_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r3_q = vlSelf->__Vdly__REGFILE__DOT__reg_r3_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r4_q = vlSelf->__Vdly__REGFILE__DOT__reg_r4_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r5_q = vlSelf->__Vdly__REGFILE__DOT__reg_r5_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r6_q = vlSelf->__Vdly__REGFILE__DOT__reg_r6_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r7_q = vlSelf->__Vdly__REGFILE__DOT__reg_r7_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r8_q = vlSelf->__Vdly__REGFILE__DOT__reg_r8_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r9_q = vlSelf->__Vdly__REGFILE__DOT__reg_r9_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r10_q = vlSelf->__Vdly__REGFILE__DOT__reg_r10_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r11_q = vlSelf->__Vdly__REGFILE__DOT__reg_r11_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r12_q = vlSelf->__Vdly__REGFILE__DOT__reg_r12_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r13_q = vlSelf->__Vdly__REGFILE__DOT__reg_r13_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r14_q = vlSelf->__Vdly__REGFILE__DOT__reg_r14_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r15_q = vlSelf->__Vdly__REGFILE__DOT__reg_r15_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r16_q = vlSelf->__Vdly__REGFILE__DOT__reg_r16_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r17_q = vlSelf->__Vdly__REGFILE__DOT__reg_r17_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r18_q = vlSelf->__Vdly__REGFILE__DOT__reg_r18_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r19_q = vlSelf->__Vdly__REGFILE__DOT__reg_r19_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r20_q = vlSelf->__Vdly__REGFILE__DOT__reg_r20_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r21_q = vlSelf->__Vdly__REGFILE__DOT__reg_r21_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r22_q = vlSelf->__Vdly__REGFILE__DOT__reg_r22_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r23_q = vlSelf->__Vdly__REGFILE__DOT__reg_r23_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r24_q = vlSelf->__Vdly__REGFILE__DOT__reg_r24_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r25_q = vlSelf->__Vdly__REGFILE__DOT__reg_r25_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r26_q = vlSelf->__Vdly__REGFILE__DOT__reg_r26_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r27_q = vlSelf->__Vdly__REGFILE__DOT__reg_r27_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r28_q = vlSelf->__Vdly__REGFILE__DOT__reg_r28_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r29_q = vlSelf->__Vdly__REGFILE__DOT__reg_r29_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r30_q = vlSelf->__Vdly__REGFILE__DOT__reg_r30_q;
    vlSelf->__PVT__REGFILE__DOT__reg_r31_q = vlSelf->__Vdly__REGFILE__DOT__reg_r31_q;
    vlSelf->__PVT__REGFILE__DOT__x1_ra_w = vlSelf->__PVT__REGFILE__DOT__reg_r1_q;
    vlSelf->__PVT__REGFILE__DOT__x2_sp_w = vlSelf->__PVT__REGFILE__DOT__reg_r2_q;
    vlSelf->__PVT__REGFILE__DOT__x3_gp_w = vlSelf->__PVT__REGFILE__DOT__reg_r3_q;
    vlSelf->__PVT__REGFILE__DOT__x4_tp_w = vlSelf->__PVT__REGFILE__DOT__reg_r4_q;
    vlSelf->__PVT__REGFILE__DOT__x5_t0_w = vlSelf->__PVT__REGFILE__DOT__reg_r5_q;
    vlSelf->__PVT__REGFILE__DOT__x6_t1_w = vlSelf->__PVT__REGFILE__DOT__reg_r6_q;
    vlSelf->__PVT__REGFILE__DOT__x7_t2_w = vlSelf->__PVT__REGFILE__DOT__reg_r7_q;
    vlSelf->__PVT__REGFILE__DOT__x8_s0_w = vlSelf->__PVT__REGFILE__DOT__reg_r8_q;
    vlSelf->__PVT__REGFILE__DOT__x9_s1_w = vlSelf->__PVT__REGFILE__DOT__reg_r9_q;
    vlSelf->__PVT__REGFILE__DOT__x10_a0_w = vlSelf->__PVT__REGFILE__DOT__reg_r10_q;
    vlSelf->__PVT__REGFILE__DOT__x11_a1_w = vlSelf->__PVT__REGFILE__DOT__reg_r11_q;
    vlSelf->__PVT__REGFILE__DOT__x12_a2_w = vlSelf->__PVT__REGFILE__DOT__reg_r12_q;
    vlSelf->__PVT__REGFILE__DOT__x13_a3_w = vlSelf->__PVT__REGFILE__DOT__reg_r13_q;
    vlSelf->__PVT__REGFILE__DOT__x14_a4_w = vlSelf->__PVT__REGFILE__DOT__reg_r14_q;
    vlSelf->__PVT__REGFILE__DOT__x15_a5_w = vlSelf->__PVT__REGFILE__DOT__reg_r15_q;
    vlSelf->__PVT__REGFILE__DOT__x16_a6_w = vlSelf->__PVT__REGFILE__DOT__reg_r16_q;
    vlSelf->__PVT__REGFILE__DOT__x17_a7_w = vlSelf->__PVT__REGFILE__DOT__reg_r17_q;
    vlSelf->__PVT__REGFILE__DOT__x18_s2_w = vlSelf->__PVT__REGFILE__DOT__reg_r18_q;
    vlSelf->__PVT__REGFILE__DOT__x19_s3_w = vlSelf->__PVT__REGFILE__DOT__reg_r19_q;
    vlSelf->__PVT__REGFILE__DOT__x20_s4_w = vlSelf->__PVT__REGFILE__DOT__reg_r20_q;
    vlSelf->__PVT__REGFILE__DOT__x21_s5_w = vlSelf->__PVT__REGFILE__DOT__reg_r21_q;
    vlSelf->__PVT__REGFILE__DOT__x22_s6_w = vlSelf->__PVT__REGFILE__DOT__reg_r22_q;
    vlSelf->__PVT__REGFILE__DOT__x23_s7_w = vlSelf->__PVT__REGFILE__DOT__reg_r23_q;
    vlSelf->__PVT__REGFILE__DOT__x24_s8_w = vlSelf->__PVT__REGFILE__DOT__reg_r24_q;
    vlSelf->__PVT__REGFILE__DOT__x25_s9_w = vlSelf->__PVT__REGFILE__DOT__reg_r25_q;
    vlSelf->__PVT__REGFILE__DOT__x26_s10_w = vlSelf->__PVT__REGFILE__DOT__reg_r26_q;
    vlSelf->__PVT__REGFILE__DOT__x27_s11_w = vlSelf->__PVT__REGFILE__DOT__reg_r27_q;
    vlSelf->__PVT__REGFILE__DOT__x28_t3_w = vlSelf->__PVT__REGFILE__DOT__reg_r28_q;
    vlSelf->__PVT__REGFILE__DOT__x29_t4_w = vlSelf->__PVT__REGFILE__DOT__reg_r29_q;
    vlSelf->__PVT__REGFILE__DOT__x30_t5_w = vlSelf->__PVT__REGFILE__DOT__reg_r30_q;
    vlSelf->__PVT__REGFILE__DOT__x31_t6_w = vlSelf->__PVT__REGFILE__DOT__reg_r31_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_regfile___nba_comb__TOP__biriscv_top__u_core__u_issue__u_regfile__0(Vbiriscv_top_biriscv_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_regfile___nba_comb__TOP__biriscv_top__u_core__u_issue__u_regfile__0\n"); );
    // Body
    vlSelf->__PVT__REGFILE__DOT__ra1_value_r = ((((
                                                   (((((1U 
                                                        == (IData)(vlSelf->__PVT__ra1_i)) 
                                                       | (2U 
                                                          == (IData)(vlSelf->__PVT__ra1_i))) 
                                                      | (3U 
                                                         == (IData)(vlSelf->__PVT__ra1_i))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->__PVT__ra1_i))) 
                                                    | (5U 
                                                       == (IData)(vlSelf->__PVT__ra1_i))) 
                                                   | (6U 
                                                      == (IData)(vlSelf->__PVT__ra1_i))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->__PVT__ra1_i))) 
                                                 | (8U 
                                                    == (IData)(vlSelf->__PVT__ra1_i)))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->__PVT__ra1_i))
                                                  ? vlSelf->__PVT__REGFILE__DOT__reg_r1_q
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__ra1_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r2_q
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__ra1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r3_q
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__ra1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r4_q
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__ra1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r5_q
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__PVT__ra1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r6_q
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->__PVT__ra1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r7_q
                                                        : vlSelf->__PVT__REGFILE__DOT__reg_r8_q)))))))
                                                 : 
                                                (((((((((9U 
                                                         == (IData)(vlSelf->__PVT__ra1_i)) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->__PVT__ra1_i))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->__PVT__ra1_i))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->__PVT__ra1_i))) 
                                                     | (0xdU 
                                                        == (IData)(vlSelf->__PVT__ra1_i))) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__ra1_i))) 
                                                   | (0xfU 
                                                      == (IData)(vlSelf->__PVT__ra1_i))) 
                                                  | (0x10U 
                                                     == (IData)(vlSelf->__PVT__ra1_i)))
                                                  ? 
                                                 ((9U 
                                                   == (IData)(vlSelf->__PVT__ra1_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r9_q
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__ra1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r10_q
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->__PVT__ra1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r11_q
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->__PVT__ra1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r12_q
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->__PVT__ra1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r13_q
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->__PVT__ra1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r14_q
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->__PVT__ra1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r15_q
                                                         : vlSelf->__PVT__REGFILE__DOT__reg_r16_q)))))))
                                                  : 
                                                 (((((((((0x11U 
                                                          == (IData)(vlSelf->__PVT__ra1_i)) 
                                                         | (0x12U 
                                                            == (IData)(vlSelf->__PVT__ra1_i))) 
                                                        | (0x13U 
                                                           == (IData)(vlSelf->__PVT__ra1_i))) 
                                                       | (0x14U 
                                                          == (IData)(vlSelf->__PVT__ra1_i))) 
                                                      | (0x15U 
                                                         == (IData)(vlSelf->__PVT__ra1_i))) 
                                                     | (0x16U 
                                                        == (IData)(vlSelf->__PVT__ra1_i))) 
                                                    | (0x17U 
                                                       == (IData)(vlSelf->__PVT__ra1_i))) 
                                                   | (0x18U 
                                                      == (IData)(vlSelf->__PVT__ra1_i)))
                                                   ? 
                                                  ((0x11U 
                                                    == (IData)(vlSelf->__PVT__ra1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r17_q
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->__PVT__ra1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r18_q
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->__PVT__ra1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r19_q
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->__PVT__ra1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r20_q
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->__PVT__ra1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r21_q
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->__PVT__ra1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r22_q
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->__PVT__ra1_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r23_q
                                                          : vlSelf->__PVT__REGFILE__DOT__reg_r24_q)))))))
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->__PVT__ra1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r25_q
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->__PVT__ra1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r26_q
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->__PVT__ra1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r27_q
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__ra1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r28_q
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->__PVT__ra1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r29_q
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->__PVT__ra1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r30_q
                                                         : 
                                                        ((0x1fU 
                                                          == (IData)(vlSelf->__PVT__ra1_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r31_q
                                                          : 0U))))))))));
    vlSelf->__PVT__REGFILE__DOT__rb1_value_r = ((((
                                                   (((((1U 
                                                        == (IData)(vlSelf->__PVT__rb1_i)) 
                                                       | (2U 
                                                          == (IData)(vlSelf->__PVT__rb1_i))) 
                                                      | (3U 
                                                         == (IData)(vlSelf->__PVT__rb1_i))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->__PVT__rb1_i))) 
                                                    | (5U 
                                                       == (IData)(vlSelf->__PVT__rb1_i))) 
                                                   | (6U 
                                                      == (IData)(vlSelf->__PVT__rb1_i))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->__PVT__rb1_i))) 
                                                 | (8U 
                                                    == (IData)(vlSelf->__PVT__rb1_i)))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->__PVT__rb1_i))
                                                  ? vlSelf->__PVT__REGFILE__DOT__reg_r1_q
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__rb1_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r2_q
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__rb1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r3_q
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__rb1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r4_q
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__rb1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r5_q
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__PVT__rb1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r6_q
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->__PVT__rb1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r7_q
                                                        : vlSelf->__PVT__REGFILE__DOT__reg_r8_q)))))))
                                                 : 
                                                (((((((((9U 
                                                         == (IData)(vlSelf->__PVT__rb1_i)) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->__PVT__rb1_i))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->__PVT__rb1_i))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->__PVT__rb1_i))) 
                                                     | (0xdU 
                                                        == (IData)(vlSelf->__PVT__rb1_i))) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__rb1_i))) 
                                                   | (0xfU 
                                                      == (IData)(vlSelf->__PVT__rb1_i))) 
                                                  | (0x10U 
                                                     == (IData)(vlSelf->__PVT__rb1_i)))
                                                  ? 
                                                 ((9U 
                                                   == (IData)(vlSelf->__PVT__rb1_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r9_q
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__rb1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r10_q
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->__PVT__rb1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r11_q
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->__PVT__rb1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r12_q
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->__PVT__rb1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r13_q
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->__PVT__rb1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r14_q
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->__PVT__rb1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r15_q
                                                         : vlSelf->__PVT__REGFILE__DOT__reg_r16_q)))))))
                                                  : 
                                                 (((((((((0x11U 
                                                          == (IData)(vlSelf->__PVT__rb1_i)) 
                                                         | (0x12U 
                                                            == (IData)(vlSelf->__PVT__rb1_i))) 
                                                        | (0x13U 
                                                           == (IData)(vlSelf->__PVT__rb1_i))) 
                                                       | (0x14U 
                                                          == (IData)(vlSelf->__PVT__rb1_i))) 
                                                      | (0x15U 
                                                         == (IData)(vlSelf->__PVT__rb1_i))) 
                                                     | (0x16U 
                                                        == (IData)(vlSelf->__PVT__rb1_i))) 
                                                    | (0x17U 
                                                       == (IData)(vlSelf->__PVT__rb1_i))) 
                                                   | (0x18U 
                                                      == (IData)(vlSelf->__PVT__rb1_i)))
                                                   ? 
                                                  ((0x11U 
                                                    == (IData)(vlSelf->__PVT__rb1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r17_q
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->__PVT__rb1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r18_q
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->__PVT__rb1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r19_q
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->__PVT__rb1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r20_q
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->__PVT__rb1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r21_q
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->__PVT__rb1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r22_q
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->__PVT__rb1_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r23_q
                                                          : vlSelf->__PVT__REGFILE__DOT__reg_r24_q)))))))
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->__PVT__rb1_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r25_q
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->__PVT__rb1_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r26_q
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->__PVT__rb1_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r27_q
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__rb1_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r28_q
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->__PVT__rb1_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r29_q
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->__PVT__rb1_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r30_q
                                                         : 
                                                        ((0x1fU 
                                                          == (IData)(vlSelf->__PVT__rb1_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r31_q
                                                          : 0U))))))))));
    vlSelf->__PVT__REGFILE__DOT__ra0_value_r = ((((
                                                   (((((1U 
                                                        == (IData)(vlSelf->__PVT__ra0_i)) 
                                                       | (2U 
                                                          == (IData)(vlSelf->__PVT__ra0_i))) 
                                                      | (3U 
                                                         == (IData)(vlSelf->__PVT__ra0_i))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->__PVT__ra0_i))) 
                                                    | (5U 
                                                       == (IData)(vlSelf->__PVT__ra0_i))) 
                                                   | (6U 
                                                      == (IData)(vlSelf->__PVT__ra0_i))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->__PVT__ra0_i))) 
                                                 | (8U 
                                                    == (IData)(vlSelf->__PVT__ra0_i)))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->__PVT__ra0_i))
                                                  ? vlSelf->__PVT__REGFILE__DOT__reg_r1_q
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__ra0_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r2_q
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__ra0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r3_q
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__ra0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r4_q
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__ra0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r5_q
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__PVT__ra0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r6_q
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->__PVT__ra0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r7_q
                                                        : vlSelf->__PVT__REGFILE__DOT__reg_r8_q)))))))
                                                 : 
                                                (((((((((9U 
                                                         == (IData)(vlSelf->__PVT__ra0_i)) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->__PVT__ra0_i))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->__PVT__ra0_i))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->__PVT__ra0_i))) 
                                                     | (0xdU 
                                                        == (IData)(vlSelf->__PVT__ra0_i))) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__ra0_i))) 
                                                   | (0xfU 
                                                      == (IData)(vlSelf->__PVT__ra0_i))) 
                                                  | (0x10U 
                                                     == (IData)(vlSelf->__PVT__ra0_i)))
                                                  ? 
                                                 ((9U 
                                                   == (IData)(vlSelf->__PVT__ra0_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r9_q
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__ra0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r10_q
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->__PVT__ra0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r11_q
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->__PVT__ra0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r12_q
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->__PVT__ra0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r13_q
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->__PVT__ra0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r14_q
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->__PVT__ra0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r15_q
                                                         : vlSelf->__PVT__REGFILE__DOT__reg_r16_q)))))))
                                                  : 
                                                 (((((((((0x11U 
                                                          == (IData)(vlSelf->__PVT__ra0_i)) 
                                                         | (0x12U 
                                                            == (IData)(vlSelf->__PVT__ra0_i))) 
                                                        | (0x13U 
                                                           == (IData)(vlSelf->__PVT__ra0_i))) 
                                                       | (0x14U 
                                                          == (IData)(vlSelf->__PVT__ra0_i))) 
                                                      | (0x15U 
                                                         == (IData)(vlSelf->__PVT__ra0_i))) 
                                                     | (0x16U 
                                                        == (IData)(vlSelf->__PVT__ra0_i))) 
                                                    | (0x17U 
                                                       == (IData)(vlSelf->__PVT__ra0_i))) 
                                                   | (0x18U 
                                                      == (IData)(vlSelf->__PVT__ra0_i)))
                                                   ? 
                                                  ((0x11U 
                                                    == (IData)(vlSelf->__PVT__ra0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r17_q
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->__PVT__ra0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r18_q
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->__PVT__ra0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r19_q
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->__PVT__ra0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r20_q
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->__PVT__ra0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r21_q
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->__PVT__ra0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r22_q
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->__PVT__ra0_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r23_q
                                                          : vlSelf->__PVT__REGFILE__DOT__reg_r24_q)))))))
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->__PVT__ra0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r25_q
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->__PVT__ra0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r26_q
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->__PVT__ra0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r27_q
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__ra0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r28_q
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->__PVT__ra0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r29_q
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->__PVT__ra0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r30_q
                                                         : 
                                                        ((0x1fU 
                                                          == (IData)(vlSelf->__PVT__ra0_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r31_q
                                                          : 0U))))))))));
    vlSelf->__PVT__REGFILE__DOT__rb0_value_r = ((((
                                                   (((((1U 
                                                        == (IData)(vlSelf->__PVT__rb0_i)) 
                                                       | (2U 
                                                          == (IData)(vlSelf->__PVT__rb0_i))) 
                                                      | (3U 
                                                         == (IData)(vlSelf->__PVT__rb0_i))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->__PVT__rb0_i))) 
                                                    | (5U 
                                                       == (IData)(vlSelf->__PVT__rb0_i))) 
                                                   | (6U 
                                                      == (IData)(vlSelf->__PVT__rb0_i))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->__PVT__rb0_i))) 
                                                 | (8U 
                                                    == (IData)(vlSelf->__PVT__rb0_i)))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->__PVT__rb0_i))
                                                  ? vlSelf->__PVT__REGFILE__DOT__reg_r1_q
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__rb0_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r2_q
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__rb0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r3_q
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__rb0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r4_q
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__rb0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r5_q
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->__PVT__rb0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r6_q
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->__PVT__rb0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r7_q
                                                        : vlSelf->__PVT__REGFILE__DOT__reg_r8_q)))))))
                                                 : 
                                                (((((((((9U 
                                                         == (IData)(vlSelf->__PVT__rb0_i)) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->__PVT__rb0_i))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->__PVT__rb0_i))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->__PVT__rb0_i))) 
                                                     | (0xdU 
                                                        == (IData)(vlSelf->__PVT__rb0_i))) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__rb0_i))) 
                                                   | (0xfU 
                                                      == (IData)(vlSelf->__PVT__rb0_i))) 
                                                  | (0x10U 
                                                     == (IData)(vlSelf->__PVT__rb0_i)))
                                                  ? 
                                                 ((9U 
                                                   == (IData)(vlSelf->__PVT__rb0_i))
                                                   ? vlSelf->__PVT__REGFILE__DOT__reg_r9_q
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__rb0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r10_q
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->__PVT__rb0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r11_q
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->__PVT__rb0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r12_q
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->__PVT__rb0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r13_q
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->__PVT__rb0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r14_q
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->__PVT__rb0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r15_q
                                                         : vlSelf->__PVT__REGFILE__DOT__reg_r16_q)))))))
                                                  : 
                                                 (((((((((0x11U 
                                                          == (IData)(vlSelf->__PVT__rb0_i)) 
                                                         | (0x12U 
                                                            == (IData)(vlSelf->__PVT__rb0_i))) 
                                                        | (0x13U 
                                                           == (IData)(vlSelf->__PVT__rb0_i))) 
                                                       | (0x14U 
                                                          == (IData)(vlSelf->__PVT__rb0_i))) 
                                                      | (0x15U 
                                                         == (IData)(vlSelf->__PVT__rb0_i))) 
                                                     | (0x16U 
                                                        == (IData)(vlSelf->__PVT__rb0_i))) 
                                                    | (0x17U 
                                                       == (IData)(vlSelf->__PVT__rb0_i))) 
                                                   | (0x18U 
                                                      == (IData)(vlSelf->__PVT__rb0_i)))
                                                   ? 
                                                  ((0x11U 
                                                    == (IData)(vlSelf->__PVT__rb0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r17_q
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->__PVT__rb0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r18_q
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->__PVT__rb0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r19_q
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->__PVT__rb0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r20_q
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->__PVT__rb0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r21_q
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->__PVT__rb0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r22_q
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->__PVT__rb0_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r23_q
                                                          : vlSelf->__PVT__REGFILE__DOT__reg_r24_q)))))))
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->__PVT__rb0_i))
                                                    ? vlSelf->__PVT__REGFILE__DOT__reg_r25_q
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->__PVT__rb0_i))
                                                     ? vlSelf->__PVT__REGFILE__DOT__reg_r26_q
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->__PVT__rb0_i))
                                                      ? vlSelf->__PVT__REGFILE__DOT__reg_r27_q
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__rb0_i))
                                                       ? vlSelf->__PVT__REGFILE__DOT__reg_r28_q
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->__PVT__rb0_i))
                                                        ? vlSelf->__PVT__REGFILE__DOT__reg_r29_q
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSelf->__PVT__rb0_i))
                                                         ? vlSelf->__PVT__REGFILE__DOT__reg_r30_q
                                                         : 
                                                        ((0x1fU 
                                                          == (IData)(vlSelf->__PVT__rb0_i))
                                                          ? vlSelf->__PVT__REGFILE__DOT__reg_r31_q
                                                          : 0U))))))))));
    vlSelf->__PVT__ra1_value_o = vlSelf->__PVT__REGFILE__DOT__ra1_value_r;
    vlSelf->__PVT__rb1_value_o = vlSelf->__PVT__REGFILE__DOT__rb1_value_r;
    vlSelf->__PVT__ra0_value_o = vlSelf->__PVT__REGFILE__DOT__ra0_value_r;
    vlSelf->__PVT__rb0_value_o = vlSelf->__PVT__REGFILE__DOT__rb0_value_r;
}
