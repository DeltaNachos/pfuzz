// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_csr_io.h"

VL_ATTR_COLD void Vfalco_top_csr_io___ctor_var_reset(Vfalco_top_csr_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_csr_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__privilege_level_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__xcpt_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_is_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_misspredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_distance = VL_RAND_RESET_I(7);
    vlSelf->__PVT__start_recovery = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_procedure = VL_RAND_RESET_I(1);
    vlSelf->__PVT__start_recovery_tag = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__csr_wdata_i = VL_RAND_RESET_I(32);
}
