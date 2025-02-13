// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_npc.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_real_q 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q;
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v1 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v2 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v3 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v4 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v5 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v6 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v7 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31 = 0U;
    vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0U;
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_real_q 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_real_q = 0U;
    } else if (((IData)(vlSelf->__PVT__branch_is_taken_i) 
                | (IData)(vlSelf->__PVT__branch_is_not_taken_i))) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_real_q 
            = VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IIII(9, (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q), 0U, 8U)), (IData)(vlSelf->__PVT__branch_is_taken_i));
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q = 0U;
    } else if (vlSelf->__PVT__branch_request_i) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q 
            = VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IIII(9, (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q), 0U, 8U)), (IData)(vlSelf->__PVT__branch_is_taken_i));
    } else if (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_taken_w) 
                | (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_ntaken_w))) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q 
            = VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IIII(9, (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q), 0U, 8U)), (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__pred_taken_w));
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4 = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4)) {
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q[(0x1ffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4, 0U, 9U))] = 3U;
            __Vtemp_1 = ((IData)(1U) + vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4);
            vlSelf->__PVT__BRANCH_PREDICTION__DOT__i4 
                = __Vtemp_1;
        }
    } else if (((IData)(vlSelf->__PVT__branch_is_taken_i) 
                & (3U > vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q
                   [vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]))) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v0 
            = (3U & ((IData)(1U) + vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q
                     [vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]));
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v0 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w;
    } else if (((IData)(vlSelf->__PVT__branch_is_not_taken_i) 
                & (0U < vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q
                   [vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]))) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v1 
            = (3U & (vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q
                     [vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w] 
                     - (IData)(1U)));
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v1 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 1U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 2U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 3U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 4U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 5U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 6U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 7U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 8U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 9U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xaU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xbU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xcU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xdU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xeU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0xfU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x10U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x11U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x12U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x13U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x14U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x15U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x16U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x17U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x18U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x19U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1aU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1bU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1cU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1dU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1eU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x1fU;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i2 = 0x20U;
    } else if (vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_hit_r) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
            = vlSelf->__PVT__branch_source_i;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
        if (vlSelf->__PVT__branch_is_taken_i) {
            vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                = vlSelf->__PVT__branch_pc_i;
            vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 1U;
            vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
        }
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
            = vlSelf->__PVT__branch_is_call_i;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
            = vlSelf->__PVT__branch_is_ret_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
            = vlSelf->__PVT__branch_is_jmp_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
    } else if (vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_miss_r) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
            = vlSelf->__PVT__branch_source_i;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v33 
            = vlSelf->__PVT__branch_pc_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v33 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
            = vlSelf->__PVT__branch_is_call_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
            = vlSelf->__PVT__branch_is_ret_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
            = vlSelf->__PVT__branch_is_jmp_i;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
    }
    vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_real_q 
        = ((IData)(vlSelf->__PVT__rst_i) ? 0U : (IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_r));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 1U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v1 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 2U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v2 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 3U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v3 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 4U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v4 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 5U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v5 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 6U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v6 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 7U;
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v7 = 1U;
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__i3 = 8U;
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q = 0U;
    } else if (((IData)(vlSelf->__PVT__branch_request_i) 
                & (IData)(vlSelf->__PVT__branch_is_call_i))) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
            = ((IData)(4U) + vlSelf->__PVT__branch_source_i);
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r;
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r;
    } else if (((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (IData)(vlSelf->__PVT__pc_accept_i))) {
        vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
            = ((IData)(4U) + ((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_upper_w)
                               ? (4U | vlSelf->__PVT__pc_f_i)
                               : vlSelf->__PVT__pc_f_i));
        vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 1U;
        vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r;
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r;
    } else if ((((IData)(vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                 & (IData)(vlSelf->__PVT__pc_accept_i)) 
                | ((IData)(vlSelf->__PVT__branch_request_i) 
                   & (IData)(vlSelf->__PVT__branch_is_ret_i)))) {
        vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q 
            = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_r;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_real_q 
        = vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_real_q;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__global_history_q 
        = vlSelf->__Vdly__BRANCH_PREDICTION__DOT__global_history_q;
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v0] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__bht_sat_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_sat_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__bht_sat_q__v1] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_ret_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_is_call_q__v32) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v32] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_is_call_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_is_call_q__v33] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_target_q__v32) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v32] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_target_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_target_q__v33] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v10) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v11) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v12) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v13) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v14) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v15) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v16) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v17) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v18) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v19) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v20) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v21) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v22) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v23) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v24) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v25) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v26) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v27) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v28) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v29) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v30) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v31) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v32) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v32] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__btb_pc_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__btb_pc_q__v33] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_real_q 
        = vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_real_q;
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q 
        = vlSelf->__Vdly__BRANCH_PREDICTION__DOT__ras_index_q;
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v0) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[0U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v1) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[1U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v2) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[2U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v3) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[3U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v4) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[4U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v5) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[5U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v6) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[6U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v7) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[7U] = 1U;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v8) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v8] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    }
    if (vlSelf->__Vdlyvset__BRANCH_PREDICTION__DOT__ras_stack_q__v9) {
        vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q[vlSelf->__Vdlyvdim0__BRANCH_PREDICTION__DOT__ras_stack_q__v9] 
            = vlSelf->__Vdlyvval__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    }
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_pc_pred_w 
        = vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_stack_q
        [vlSelf->__PVT__BRANCH_PREDICTION__DOT__ras_index_q];
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__1(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__1\n"); );
    // Body
    vlSelf->__PVT__BRANCH_PREDICTION__DOT__bht_wr_entry_w 
        = (0x1ffU & VL_SEL_IIII(32, vlSelf->__PVT__branch_source_i, 2U, 9U));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__2(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__2\n"); );
    // Body
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

VL_INLINE_OPT void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__4(Vbiriscv_top_biriscv_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__4\n"); );
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
}
