// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_exe_stage_io.h"

VL_ATTR_COLD void Vfalco_top_exe_stage_io___ctor_var_reset(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__exe_ALU_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__exe_muldiv = VL_RAND_RESET_I(7);
    vlSelf->__PVT__exe_alu_csr_bc = VL_RAND_RESET_I(8);
    vlSelf->__PVT__alu_csr_bc_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__BCAST_alu_csr_bc = VL_RAND_RESET_I(7);
    vlSelf->__PVT__BCAST_ALU_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__BCAST_muldiv = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(77, vlSelf->__PVT__branch_result);
    vlSelf->__Vdly__alu_csr_bc_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vdly__exe_alu_csr_bc = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(77, vlSelf->__Vdly__branch_result);
    vlSelf->__Vdly__BCAST_alu_csr_bc = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vdly__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vdly__exe_ALU_1 = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__exe_muldiv = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__BCAST_ALU_1 = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__BCAST_muldiv = VL_RAND_RESET_I(7);
}
