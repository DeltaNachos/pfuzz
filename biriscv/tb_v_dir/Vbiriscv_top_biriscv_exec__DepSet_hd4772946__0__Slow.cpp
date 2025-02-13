// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_exec.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec0\n"); );
    // Body
    vlSelf->__PVT__branch_d_priv_o = 0U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__0\n"); );
    // Body
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_taken_q) 
                                       | (IData)(vlSelf->__PVT__branch_ntaken_q));
    vlSelf->__PVT__branch_is_taken_o = vlSelf->__PVT__branch_taken_q;
    vlSelf->__PVT__branch_is_not_taken_o = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__PVT__branch_pc_o = vlSelf->__PVT__pc_x_q;
    vlSelf->__PVT__branch_is_jmp_o = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__PVT__branch_is_call_o = vlSelf->__PVT__branch_call_q;
    vlSelf->__PVT__branch_is_ret_o = vlSelf->__PVT__branch_ret_q;
    vlSelf->__PVT__branch_source_o = vlSelf->__PVT__pc_m_q;
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_q;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__1(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__1\n"); );
    // Body
    vlSelf->__PVT__imm20_r = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT__imm12_r = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                           (0xfffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU)));
    vlSelf->__PVT__bimm_r = VL_CONCAT_III(32,19,13, 
                                          (0x7ffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x13U)), 
                                          VL_CONCAT_III(13,1,12, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 7U)), 
                                                                      VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 8U, 4U)), 0U)))));
    vlSelf->__PVT__jimm20_r = VL_CONCAT_III(32,12,20, 
                                            (0xfffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0xcU)), 
                                            VL_CONCAT_III(20,8,12, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0xcU, 8U)), 
                                                          VL_CONCAT_III(12,1,11, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U)), 
                                                                        VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x15U, 4U)), 0U)))));
    vlSelf->__PVT__shamt_r = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec1(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec1\n"); );
    // Body
    vlSelf->__PVT__branch_d_priv_o = 0U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__0\n"); );
    // Body
    vlSelf->__PVT__branch_is_taken_o = vlSelf->__PVT__branch_taken_q;
    vlSelf->__PVT__branch_is_not_taken_o = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__PVT__branch_pc_o = vlSelf->__PVT__pc_x_q;
    vlSelf->__PVT__branch_is_jmp_o = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__PVT__branch_is_call_o = vlSelf->__PVT__branch_call_q;
    vlSelf->__PVT__branch_is_ret_o = vlSelf->__PVT__branch_ret_q;
    vlSelf->__PVT__branch_source_o = vlSelf->__PVT__pc_m_q;
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_taken_q) 
                                       | (IData)(vlSelf->__PVT__branch_ntaken_q));
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_q;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__1(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__1\n"); );
    // Body
    vlSelf->__PVT__imm20_r = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT__imm12_r = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                           (0xfffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU)));
    vlSelf->__PVT__bimm_r = VL_CONCAT_III(32,19,13, 
                                          (0x7ffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x13U)), 
                                          VL_CONCAT_III(13,1,12, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 7U)), 
                                                                      VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 8U, 4U)), 0U)))));
    vlSelf->__PVT__jimm20_r = VL_CONCAT_III(32,12,20, 
                                            (0xfffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0xcU)), 
                                            VL_CONCAT_III(20,8,12, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0xcU, 8U)), 
                                                          VL_CONCAT_III(12,1,11, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U)), 
                                                                        VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x15U, 4U)), 0U)))));
    vlSelf->__PVT__shamt_r = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___ctor_var_reset(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___ctor_var_reset\n"); );
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
    vlSelf->__PVT__branch_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_not_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_source_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_is_call_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_ret_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_jmp_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_d_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_d_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_d_priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__writeback_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm20_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm12_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bimm_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jimm20_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shamt_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_func_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__alu_input_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_input_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_p_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__less_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__greater_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_target_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_call_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_ret_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_jmp_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_ntaken_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_x_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_m_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_call_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_ret_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_jmp_q = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_less_than_signed__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_less_than_signed__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_less_than_signed__0__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_greater_than_signed__1__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__1__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_less_than_signed__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_less_than_signed__2__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_less_than_signed__2__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_greater_than_signed__3__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__3__y = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__result_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_ntaken_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc_x_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_m_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__branch_call_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_ret_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_jmp_q = VL_RAND_RESET_I(1);
}
