// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_sodor_top.h"

VL_ATTR_COLD void Vsodor_top_sodor_top___ctor_var_reset(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_fcn_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_bit_typ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dmem_resp_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ddpath_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset = VL_RAND_RESET_I(1);
}
