// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_exec.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec0__0\n"); );
    // Body
    vlSelf->__Vdly__branch_jmp_q = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__pc_x_q;
    vlSelf->__Vdly__branch_ntaken_q = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__Vdly__branch_taken_q = vlSelf->__PVT__branch_taken_q;
    vlSelf->__Vdly__branch_ret_q = vlSelf->__PVT__branch_ret_q;
    vlSelf->__Vdly__branch_call_q = vlSelf->__PVT__branch_call_q;
    vlSelf->__Vdly__pc_m_q = vlSelf->__PVT__pc_m_q;
    vlSelf->__Vdly__result_q = vlSelf->__PVT__result_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__branch_taken_q = 0U;
        vlSelf->__Vdly__branch_ntaken_q = 0U;
        vlSelf->__Vdly__pc_x_q = 0U;
        vlSelf->__Vdly__pc_m_q = 0U;
        vlSelf->__Vdly__branch_call_q = 0U;
        vlSelf->__Vdly__branch_ret_q = 0U;
        vlSelf->__Vdly__branch_jmp_q = 0U;
    } else if (vlSelf->__PVT__opcode_valid_i) {
        vlSelf->__Vdly__branch_taken_q = ((IData)(vlSelf->__PVT__branch_r) 
                                          & ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                             & (IData)(vlSelf->__PVT__branch_taken_r)));
        vlSelf->__Vdly__branch_ntaken_q = ((IData)(vlSelf->__PVT__branch_r) 
                                           & ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                              & (~ (IData)(vlSelf->__PVT__branch_taken_r))));
        vlSelf->__Vdly__pc_x_q = ((IData)(vlSelf->__PVT__branch_taken_r)
                                   ? vlSelf->__PVT__branch_target_r
                                   : ((IData)(4U) + vlSelf->__PVT__opcode_pc_i));
        vlSelf->__Vdly__branch_call_q = (((IData)(vlSelf->__PVT__branch_r) 
                                          & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                         & (IData)(vlSelf->__PVT__branch_call_r));
        vlSelf->__Vdly__branch_ret_q = (((IData)(vlSelf->__PVT__branch_r) 
                                         & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                        & (IData)(vlSelf->__PVT__branch_ret_r));
        vlSelf->__Vdly__branch_jmp_q = (((IData)(vlSelf->__PVT__branch_r) 
                                         & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                        & (IData)(vlSelf->__PVT__branch_jmp_r));
        vlSelf->__Vdly__pc_m_q = vlSelf->__PVT__opcode_pc_i;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__result_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__hold_i)))) {
        vlSelf->__Vdly__result_q = vlSelf->__PVT__alu_p_w;
    }
    vlSelf->__PVT__pc_x_q = vlSelf->__Vdly__pc_x_q;
    vlSelf->__PVT__branch_jmp_q = vlSelf->__Vdly__branch_jmp_q;
    vlSelf->__PVT__branch_taken_q = vlSelf->__Vdly__branch_taken_q;
    vlSelf->__PVT__branch_ntaken_q = vlSelf->__Vdly__branch_ntaken_q;
    vlSelf->__PVT__branch_call_q = vlSelf->__Vdly__branch_call_q;
    vlSelf->__PVT__branch_ret_q = vlSelf->__Vdly__branch_ret_q;
    vlSelf->__PVT__pc_m_q = vlSelf->__Vdly__pc_m_q;
    vlSelf->__PVT__result_q = vlSelf->__Vdly__result_q;
    vlSelf->__PVT__branch_pc_o = vlSelf->__PVT__pc_x_q;
    vlSelf->__PVT__branch_is_jmp_o = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__PVT__branch_is_taken_o = vlSelf->__PVT__branch_taken_q;
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_taken_q) 
                                       | (IData)(vlSelf->__PVT__branch_ntaken_q));
    vlSelf->__PVT__branch_is_not_taken_o = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__PVT__branch_is_call_o = vlSelf->__PVT__branch_call_q;
    vlSelf->__PVT__branch_is_ret_o = vlSelf->__PVT__branch_ret_q;
    vlSelf->__PVT__branch_source_o = vlSelf->__PVT__pc_m_q;
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__0\n"); );
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

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__3(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__3\n"); );
    // Body
    vlSelf->__PVT__branch_d_request_o = (((IData)(vlSelf->__PVT__branch_r) 
                                          & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                         & (IData)(vlSelf->__PVT__branch_taken_r));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec1__0\n"); );
    // Body
    vlSelf->__Vdly__branch_jmp_q = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__pc_x_q;
    vlSelf->__Vdly__branch_ret_q = vlSelf->__PVT__branch_ret_q;
    vlSelf->__Vdly__branch_call_q = vlSelf->__PVT__branch_call_q;
    vlSelf->__Vdly__pc_m_q = vlSelf->__PVT__pc_m_q;
    vlSelf->__Vdly__branch_ntaken_q = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__Vdly__branch_taken_q = vlSelf->__PVT__branch_taken_q;
    vlSelf->__Vdly__result_q = vlSelf->__PVT__result_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__branch_taken_q = 0U;
        vlSelf->__Vdly__branch_ntaken_q = 0U;
        vlSelf->__Vdly__pc_x_q = 0U;
        vlSelf->__Vdly__pc_m_q = 0U;
        vlSelf->__Vdly__branch_call_q = 0U;
        vlSelf->__Vdly__branch_ret_q = 0U;
        vlSelf->__Vdly__branch_jmp_q = 0U;
    } else if (vlSelf->__PVT__opcode_valid_i) {
        vlSelf->__Vdly__branch_taken_q = ((IData)(vlSelf->__PVT__branch_r) 
                                          & ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                             & (IData)(vlSelf->__PVT__branch_taken_r)));
        vlSelf->__Vdly__branch_ntaken_q = ((IData)(vlSelf->__PVT__branch_r) 
                                           & ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                              & (~ (IData)(vlSelf->__PVT__branch_taken_r))));
        vlSelf->__Vdly__pc_x_q = ((IData)(vlSelf->__PVT__branch_taken_r)
                                   ? vlSelf->__PVT__branch_target_r
                                   : ((IData)(4U) + vlSelf->__PVT__opcode_pc_i));
        vlSelf->__Vdly__branch_call_q = (((IData)(vlSelf->__PVT__branch_r) 
                                          & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                         & (IData)(vlSelf->__PVT__branch_call_r));
        vlSelf->__Vdly__branch_ret_q = (((IData)(vlSelf->__PVT__branch_r) 
                                         & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                        & (IData)(vlSelf->__PVT__branch_ret_r));
        vlSelf->__Vdly__branch_jmp_q = (((IData)(vlSelf->__PVT__branch_r) 
                                         & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                        & (IData)(vlSelf->__PVT__branch_jmp_r));
        vlSelf->__Vdly__pc_m_q = vlSelf->__PVT__opcode_pc_i;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__result_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__hold_i)))) {
        vlSelf->__Vdly__result_q = vlSelf->__PVT__alu_p_w;
    }
    vlSelf->__PVT__pc_x_q = vlSelf->__Vdly__pc_x_q;
    vlSelf->__PVT__branch_jmp_q = vlSelf->__Vdly__branch_jmp_q;
    vlSelf->__PVT__branch_call_q = vlSelf->__Vdly__branch_call_q;
    vlSelf->__PVT__branch_ret_q = vlSelf->__Vdly__branch_ret_q;
    vlSelf->__PVT__pc_m_q = vlSelf->__Vdly__pc_m_q;
    vlSelf->__PVT__branch_taken_q = vlSelf->__Vdly__branch_taken_q;
    vlSelf->__PVT__branch_ntaken_q = vlSelf->__Vdly__branch_ntaken_q;
    vlSelf->__PVT__result_q = vlSelf->__Vdly__result_q;
    vlSelf->__PVT__branch_pc_o = vlSelf->__PVT__pc_x_q;
    vlSelf->__PVT__branch_is_jmp_o = vlSelf->__PVT__branch_jmp_q;
    vlSelf->__PVT__branch_is_call_o = vlSelf->__PVT__branch_call_q;
    vlSelf->__PVT__branch_is_ret_o = vlSelf->__PVT__branch_ret_q;
    vlSelf->__PVT__branch_source_o = vlSelf->__PVT__pc_m_q;
    vlSelf->__PVT__branch_is_taken_o = vlSelf->__PVT__branch_taken_q;
    vlSelf->__PVT__branch_is_not_taken_o = vlSelf->__PVT__branch_ntaken_q;
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_taken_q) 
                                       | (IData)(vlSelf->__PVT__branch_ntaken_q));
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__result_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__0\n"); );
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

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__3(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__3\n"); );
    // Body
    vlSelf->__PVT__branch_d_request_o = (((IData)(vlSelf->__PVT__branch_r) 
                                          & (IData)(vlSelf->__PVT__opcode_valid_i)) 
                                         & (IData)(vlSelf->__PVT__branch_taken_r));
}
