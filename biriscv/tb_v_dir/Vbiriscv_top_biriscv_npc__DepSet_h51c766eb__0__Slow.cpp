// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_npc.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1\n"); );
    // Body
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w 
        = (0x1ffU & VL_SEL_IIII(32, vlSelf->__PVT__branch_source_i, 2U, 9U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__3(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__3\n"); );
    // Body
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (((IData)(vlSelf->__PVT__branch_request_i) & (IData)(vlSelf->__PVT__branch_is_call_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSelf->__PVT__branch_request_i) 
                & (IData)(vlSelf->__PVT__branch_is_ret_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (IData)(vlSelf->__PVT__pc_accept_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q)));
    } else if (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                & (IData)(vlSelf->__PVT__pc_accept_i))) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q) 
                     - (IData)(1U)));
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_taken_w 
        = (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w) 
            & (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w)) 
               | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r))) 
           & (IData)(vlSelf->__PVT__pc_accept_i));
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_ntaken_w 
        = (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w) 
            & (~ (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_taken_w))) 
           & (IData)(vlSelf->__PVT__pc_accept_i));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___ctor_var_reset(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_not_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_source_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_is_call_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_ret_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_is_jmp_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_f_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_pc_f_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_taken_f_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_taken_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_ntaken_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_r = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_call_pred_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__gshare_wr_entry_w = VL_RAND_RESET_I(9);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__gshare_rd_entry_w = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w = VL_RAND_RESET_I(9);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_rd_entry_w = VL_RAND_RESET_I(9);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_predict_taken_w = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_next_pc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_entry_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w = VL_RAND_RESET_I(5);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_miss_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_real_q = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v1 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v2 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v3 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v4 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v5 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v6 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v7 = 0;
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_real_q = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30 = 0;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v33 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = VL_RAND_RESET_I(1);
}
