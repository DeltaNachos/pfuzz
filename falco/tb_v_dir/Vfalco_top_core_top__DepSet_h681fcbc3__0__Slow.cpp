// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_core_top.h"

VL_ATTR_COLD void Vfalco_top_core_top___ctor_var_reset(Vfalco_top_core_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_core_top___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__core_commit_count = VL_RAND_RESET_I(2);
    vlSelf->__PVT__committed_update = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(65, vlSelf->__PVT__instruction_req);
    VL_RAND_RESET_W(67, vlSelf->__PVT__instruction_resp);
    vlSelf->__PVT__load_dmem_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_ck_hit_req = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__load_hit_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_data_req = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__load_data_resp = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(69, vlSelf->__PVT__store_req);
    vlSelf->__PVT__store_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__IF_instr0_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IF_instr1_predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_stage_muldiv_busy = VL_RAND_RESET_I(1);
}
