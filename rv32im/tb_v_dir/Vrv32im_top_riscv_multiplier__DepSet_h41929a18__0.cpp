// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_multiplier.h"

VL_INLINE_OPT void Vrv32im_top_riscv_multiplier___nba_sequent__TOP__rv32im_top__core__u_mul__0(Vrv32im_top_riscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_multiplier___nba_sequent__TOP__rv32im_top__core__u_mul__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelf->__Vdly__mulhi_sel_e1_q = vlSelf->__PVT__mulhi_sel_e1_q;
    vlSelf->__Vdly__operand_b_e1_q = vlSelf->__PVT__operand_b_e1_q;
    vlSelf->__Vdly__operand_a_e1_q = vlSelf->__PVT__operand_a_e1_q;
    vlSelf->__Vdly__result_e3_q = vlSelf->__PVT__result_e3_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__operand_a_e1_q = 0ULL;
        vlSelf->__Vdly__operand_b_e1_q = 0ULL;
        vlSelf->__Vdly__mulhi_sel_e1_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__hold_i)))) {
        if (((IData)(vlSelf->__PVT__opcode_valid_i) 
             & (IData)(vlSelf->__PVT__mult_inst_w))) {
            vlSelf->__Vdly__operand_a_e1_q = vlSelf->__PVT__operand_a_r;
            vlSelf->__Vdly__operand_b_e1_q = vlSelf->__PVT__operand_b_r;
            vlSelf->__Vdly__mulhi_sel_e1_q = (0x2000033U 
                                              != (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i));
        } else {
            vlSelf->__Vdly__operand_a_e1_q = 0ULL;
            vlSelf->__Vdly__operand_b_e1_q = 0ULL;
            vlSelf->__Vdly__mulhi_sel_e1_q = 0U;
        }
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__result_e3_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__hold_i)))) {
        vlSelf->__Vdly__result_e3_q = vlSelf->__PVT__result_e2_q;
    }
    vlSelf->__PVT__mulhi_sel_e1_q = vlSelf->__Vdly__mulhi_sel_e1_q;
    vlSelf->__PVT__operand_a_e1_q = vlSelf->__Vdly__operand_a_e1_q;
    vlSelf->__PVT__operand_b_e1_q = vlSelf->__Vdly__operand_b_e1_q;
    vlSelf->__PVT__result_e3_q = vlSelf->__Vdly__result_e3_q;
    vlSelf->__Vdly__result_e2_q = vlSelf->__PVT__result_e2_q;
    VL_CONST_W_3X(96,__Vtemp_1,0x00000001,0xffffffff,0xffffffff);
    VL_CONCAT_WIQ(65,32,33, __Vtemp_2, VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & VL_BITSEL_IQII(33, vlSelf->__PVT__operand_a_e1_q, 0x20U)), 0x20U), vlSelf->__PVT__operand_a_e1_q);
    VL_CONCAT_WIQ(65,32,33, __Vtemp_3, VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & VL_BITSEL_IQII(33, vlSelf->__PVT__operand_b_e1_q, 0x20U)), 0x20U), vlSelf->__PVT__operand_b_e1_q);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_AND_W(3, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_ASSIGN_W(65,vlSelf->__PVT__mult_result_w, __Vtemp_5);
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__result_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__hold_i)))) {
        vlSelf->__Vdly__result_e2_q = vlSelf->__PVT__result_r;
    }
    vlSelf->__PVT__result_r = ((IData)(vlSelf->__PVT__mulhi_sel_e1_q)
                                ? VL_SEL_IWII(65, vlSelf->__PVT__mult_result_w, 0x20U, 0x20U)
                                : VL_SEL_IWII(65, vlSelf->__PVT__mult_result_w, 0U, 0x20U));
    vlSelf->__PVT__result_e2_q = vlSelf->__Vdly__result_e2_q;
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_e2_q;
}

VL_INLINE_OPT void Vrv32im_top_riscv_multiplier___nba_sequent__TOP__rv32im_top__core__u_mul__1(Vrv32im_top_riscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_multiplier___nba_sequent__TOP__rv32im_top__core__u_mul__1\n"); );
    // Body
    vlSelf->__PVT__mult_inst_w = ((((0x2000033U == 
                                     (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i)) 
                                    | (0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_opcode_i))) 
                                   | (0x2002033U == 
                                      (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x2003033U == 
                                     (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_multiplier___nba_comb__TOP__rv32im_top__core__u_mul__0(Vrv32im_top_riscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_multiplier___nba_comb__TOP__rv32im_top__core__u_mul__0\n"); );
    // Body
    vlSelf->__PVT__operand_b_r = ((0x2002033U == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))
                                   ? VL_EXTEND_QI(33,32, vlSelf->__PVT__opcode_rb_operand_i)
                                   : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_opcode_i))
                                       ? VL_CONCAT_QII(33,1,32, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0x1fU)), vlSelf->__PVT__opcode_rb_operand_i)
                                       : VL_EXTEND_QI(33,32, vlSelf->__PVT__opcode_rb_operand_i)));
    vlSelf->__PVT__operand_a_r = ((0x2002033U == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))
                                   ? VL_CONCAT_QII(33,1,32, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_ra_operand_i, 0x1fU)), vlSelf->__PVT__opcode_ra_operand_i)
                                   : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_opcode_i))
                                       ? VL_CONCAT_QII(33,1,32, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_ra_operand_i, 0x1fU)), vlSelf->__PVT__opcode_ra_operand_i)
                                       : VL_EXTEND_QI(33,32, vlSelf->__PVT__opcode_ra_operand_i)));
}
