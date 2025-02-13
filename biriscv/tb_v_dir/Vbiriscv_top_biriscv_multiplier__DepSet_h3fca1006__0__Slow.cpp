// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_multiplier.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__0(Vbiriscv_top_biriscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
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
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_e2_q;
    vlSelf->__PVT__result_r = ((IData)(vlSelf->__PVT__mulhi_sel_e1_q)
                                ? VL_SEL_IWII(65, vlSelf->__PVT__mult_result_w, 0x20U, 0x20U)
                                : VL_SEL_IWII(65, vlSelf->__PVT__mult_result_w, 0U, 0x20U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__1(Vbiriscv_top_biriscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__1\n"); );
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

VL_ATTR_COLD void Vbiriscv_top_biriscv_multiplier___ctor_var_reset(Vbiriscv_top_biriscv_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_multiplier___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__hold_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_e3_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_a_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__operand_b_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__mulhi_sel_e1_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__mult_result_w);
    vlSelf->__PVT__operand_b_r = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__operand_a_r = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__result_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mult_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__operand_a_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__operand_b_e1_q = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__mulhi_sel_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__result_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__result_e3_q = VL_RAND_RESET_I(32);
}
