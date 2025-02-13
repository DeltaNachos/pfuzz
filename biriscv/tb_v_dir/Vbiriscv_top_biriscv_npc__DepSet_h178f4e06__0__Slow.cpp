// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_npc.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0\n"); );
    // Body
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q
        [vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q];
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__alloc_entry_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
        = ((IData)(8U) + VL_CONCAT_III(32,29,3, (0x1fffffffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__pc_f_i, 3U, 0x1dU)), 0U));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 1U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [1U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [1U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [1U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [1U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [1U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 2U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [2U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [2U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [2U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [2U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [2U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 3U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [3U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [3U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [3U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [3U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [3U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 4U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [4U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [4U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [4U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [4U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [4U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 5U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [5U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [5U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [5U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [5U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [5U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 6U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [6U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [6U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [6U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [6U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [6U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 7U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [7U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [7U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [7U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [7U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [7U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 8U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [8U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [8U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [8U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [8U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [8U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 9U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [9U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [9U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [9U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [9U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [9U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xaU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xaU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xaU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xaU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xaU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xbU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xbU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xbU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xbU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xbU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xcU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xcU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xcU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xcU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xcU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xdU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xdU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xdU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xdU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xdU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xeU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xeU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xeU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xeU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xeU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xfU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xfU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xfU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xfU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xfU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x10U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x10U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x10U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x10U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x10U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x11U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x11U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x11U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x11U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x11U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x12U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x12U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x12U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x12U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x12U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x13U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x13U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x13U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x13U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x13U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x14U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x14U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x14U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x14U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x14U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x15U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x15U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x15U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x15U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x15U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x16U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x16U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x16U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x16U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x16U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x17U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x17U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x17U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x17U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x17U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x18U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x18U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x18U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x18U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x18U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x19U] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x19U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x19U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x19U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x19U];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1aU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1aU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1aU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1aU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1aU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1bU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1bU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1bU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1bU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1bU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1cU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1cU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1cU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1cU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1cU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1dU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1dU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1dU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1dU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1dU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1eU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1eU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1eU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1eU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1eU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
    if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1fU] == vlSelf->__PVT__pc_f_i)) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U));
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1fU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1fU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1fU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1fU];
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    if ((1U & ((~ (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r)) 
               & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U))))) {
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 1U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [1U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [1U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [1U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [1U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 2U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [2U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [2U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [2U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [2U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 3U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [3U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [3U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [3U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [3U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 4U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [4U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [4U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [4U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [4U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 5U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [5U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [5U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [5U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [5U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 6U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [6U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [6U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [6U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [6U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 7U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [7U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [7U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [7U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [7U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 8U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [8U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [8U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [8U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [8U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 9U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [9U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [9U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [9U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [9U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xaU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xaU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xaU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xaU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xbU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xbU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xbU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xbU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xcU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xcU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xcU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xcU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xdU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xdU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xdU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xdU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xeU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xeU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xeU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xeU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xfU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xfU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xfU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xfU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x10U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x10U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x10U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x10U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x11U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x11U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x11U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x11U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x12U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x12U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x12U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x12U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x13U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x13U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x13U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x13U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x14U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x14U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x14U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x14U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x15U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x15U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x15U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x15U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x16U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x16U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x16U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x16U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x17U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x17U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x17U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x17U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x18U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x18U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x18U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x18U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x19U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x19U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x19U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x19U];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1aU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1aU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1aU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1aU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1bU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1bU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1bU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1bU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1cU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1cU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1cU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1cU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1dU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1dU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1dU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1dU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1eU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1eU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1eU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1eU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == (4U | vlSelf->__PVT__pc_f_i))) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1fU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1fU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1fU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1fU];
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    }
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__hit_entry_i 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__hit_i 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__gshare_rd_entry_w 
        = ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q) 
           ^ VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IIII(32, vlSelf->__PVT__pc_f_i, 3U, 8U)), (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_w)));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_rd_entry_w 
        = VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IIII(32, vlSelf->__PVT__pc_f_i, 3U, 8U)), (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_w));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_call_pred_w 
        = (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w) 
            & (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_w)) 
           & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w, 0U)));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w 
        = (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w) 
            & (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_w)) 
           & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w, 0U)));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w 
        = (2U <= vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q
           [vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_rd_entry_w]);
    vlSelf->__PVT__next_pc_f_o = ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                                   ? vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w
                                   : (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w) 
                                       | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r))
                                       ? vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                                       : ((IData)(8U) 
                                          + VL_CONCAT_III(32,29,3, 
                                                          (0x1fffffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__pc_f_i, 3U, 0x1dU)), 0U))));
    vlSelf->__PVT__next_taken_f_o = (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w) 
                                      & (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                                          | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w)) 
                                         | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r)))
                                      ? ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_f_i, 2U))
                                          ? VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r), 0U)
                                          : VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r), 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r)))))
                                      : 0U);
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2\n"); );
    // Body
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_r 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    if (((IData)(vlSelf->__PVT__branch_request_i) & (IData)(vlSelf->__PVT__branch_is_call_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSelf->__PVT__branch_request_i) 
                & (IData)(vlSelf->__PVT__branch_is_ret_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__gshare_wr_entry_w 
        = (0x1ffU & (((IData)(vlSelf->__PVT__branch_request_i)
                       ? (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q)
                       : (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q)) 
                     ^ VL_SEL_IIII(32, vlSelf->__PVT__branch_source_i, 2U, 9U)));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 0U;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_miss_r = 0U;
    if (vlSelf->__PVT__branch_request_i) {
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 1U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 1U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 2U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 2U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 3U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 3U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 4U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 4U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 5U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 5U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 6U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 6U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 7U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 7U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 8U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 8U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 9U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 9U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xaU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xaU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xbU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xbU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xcU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xcU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xdU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xdU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xeU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xeU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0xfU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xfU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x10U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x10U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x11U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x11U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x12U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x12U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x13U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x13U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x14U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x14U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x15U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x15U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x16U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x16U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x17U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x17U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x18U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x18U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x19U;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x19U;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1aU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1aU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1bU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1bU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1cU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1cU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1dU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1dU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1eU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1eU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x1fU;
        if ((vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == vlSelf->__PVT__branch_source_i)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1fU;
        }
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = 0x20U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_miss_r 
            = (1U & (~ (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r)));
    }
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__alloc_i 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_miss_r;
}
