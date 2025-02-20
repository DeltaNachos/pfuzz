// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_register_read_io.h"

VL_ATTR_COLD void Vfalco_top_register_read_io___ctor_var_reset(Vfalco_top_register_read_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_read_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(268, vlSelf->__PVT__alu_bc_csr_pack);
    VL_RAND_RESET_W(161, vlSelf->__PVT__alu_muldiv_pack);
    VL_RAND_RESET_W(186, vlSelf->__PVT__mem_issue_pack);
    vlSelf->__PVT__alu_bc_csr_pack_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_muldiv_pack_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_issue_pack_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(268, vlSelf->__Vdly__alu_bc_csr_pack);
    VL_RAND_RESET_W(161, vlSelf->__Vdly__alu_muldiv_pack);
    VL_RAND_RESET_W(186, vlSelf->__Vdly__mem_issue_pack);
    vlSelf->__Vdly__alu_bc_csr_pack_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__alu_muldiv_pack_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_issue_pack_valid = VL_RAND_RESET_I(1);
}
