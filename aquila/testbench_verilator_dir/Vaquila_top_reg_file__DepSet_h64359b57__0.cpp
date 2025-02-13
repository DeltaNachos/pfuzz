// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_reg_file.h"

VL_INLINE_OPT void Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__0(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__0\n"); );
    // Body
    vlSelf->__Vdlyvset__x__v0 = 0U;
    vlSelf->__Vdlyvset__x__v1 = 0U;
    vlSelf->__Vdlyvset__x__v2 = 0U;
    vlSelf->__Vdlyvset__x__v3 = 0U;
    vlSelf->__Vdlyvset__x__v4 = 0U;
    vlSelf->__Vdlyvset__x__v5 = 0U;
    vlSelf->__Vdlyvset__x__v6 = 0U;
    vlSelf->__Vdlyvset__x__v7 = 0U;
    vlSelf->__Vdlyvset__x__v8 = 0U;
    vlSelf->__Vdlyvset__x__v9 = 0U;
    vlSelf->__Vdlyvset__x__v10 = 0U;
    vlSelf->__Vdlyvset__x__v11 = 0U;
    vlSelf->__Vdlyvset__x__v12 = 0U;
    vlSelf->__Vdlyvset__x__v13 = 0U;
    vlSelf->__Vdlyvset__x__v14 = 0U;
    vlSelf->__Vdlyvset__x__v15 = 0U;
    vlSelf->__Vdlyvset__x__v16 = 0U;
    vlSelf->__Vdlyvset__x__v17 = 0U;
    vlSelf->__Vdlyvset__x__v18 = 0U;
    vlSelf->__Vdlyvset__x__v19 = 0U;
    vlSelf->__Vdlyvset__x__v20 = 0U;
    vlSelf->__Vdlyvset__x__v21 = 0U;
    vlSelf->__Vdlyvset__x__v22 = 0U;
    vlSelf->__Vdlyvset__x__v23 = 0U;
    vlSelf->__Vdlyvset__x__v24 = 0U;
    vlSelf->__Vdlyvset__x__v25 = 0U;
    vlSelf->__Vdlyvset__x__v26 = 0U;
    vlSelf->__Vdlyvset__x__v27 = 0U;
    vlSelf->__Vdlyvset__x__v28 = 0U;
    vlSelf->__Vdlyvset__x__v29 = 0U;
    vlSelf->__Vdlyvset__x__v30 = 0U;
    vlSelf->__Vdlyvset__x__v31 = 0U;
    vlSelf->__Vdlyvset__x__v32 = 0U;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdlyvset__x__v0 = 1U;
        vlSelf->__PVT__idx = 1U;
        vlSelf->__Vdlyvset__x__v1 = 1U;
        vlSelf->__PVT__idx = 2U;
        vlSelf->__Vdlyvset__x__v2 = 1U;
        vlSelf->__PVT__idx = 3U;
        vlSelf->__Vdlyvset__x__v3 = 1U;
        vlSelf->__PVT__idx = 4U;
        vlSelf->__Vdlyvset__x__v4 = 1U;
        vlSelf->__PVT__idx = 5U;
        vlSelf->__Vdlyvset__x__v5 = 1U;
        vlSelf->__PVT__idx = 6U;
        vlSelf->__Vdlyvset__x__v6 = 1U;
        vlSelf->__PVT__idx = 7U;
        vlSelf->__Vdlyvset__x__v7 = 1U;
        vlSelf->__PVT__idx = 8U;
        vlSelf->__Vdlyvset__x__v8 = 1U;
        vlSelf->__PVT__idx = 9U;
        vlSelf->__Vdlyvset__x__v9 = 1U;
        vlSelf->__PVT__idx = 0xaU;
        vlSelf->__Vdlyvset__x__v10 = 1U;
        vlSelf->__PVT__idx = 0xbU;
        vlSelf->__Vdlyvset__x__v11 = 1U;
        vlSelf->__PVT__idx = 0xcU;
        vlSelf->__Vdlyvset__x__v12 = 1U;
        vlSelf->__PVT__idx = 0xdU;
        vlSelf->__Vdlyvset__x__v13 = 1U;
        vlSelf->__PVT__idx = 0xeU;
        vlSelf->__Vdlyvset__x__v14 = 1U;
        vlSelf->__PVT__idx = 0xfU;
        vlSelf->__Vdlyvset__x__v15 = 1U;
        vlSelf->__PVT__idx = 0x10U;
        vlSelf->__Vdlyvset__x__v16 = 1U;
        vlSelf->__PVT__idx = 0x11U;
        vlSelf->__Vdlyvset__x__v17 = 1U;
        vlSelf->__PVT__idx = 0x12U;
        vlSelf->__Vdlyvset__x__v18 = 1U;
        vlSelf->__PVT__idx = 0x13U;
        vlSelf->__Vdlyvset__x__v19 = 1U;
        vlSelf->__PVT__idx = 0x14U;
        vlSelf->__Vdlyvset__x__v20 = 1U;
        vlSelf->__PVT__idx = 0x15U;
        vlSelf->__Vdlyvset__x__v21 = 1U;
        vlSelf->__PVT__idx = 0x16U;
        vlSelf->__Vdlyvset__x__v22 = 1U;
        vlSelf->__PVT__idx = 0x17U;
        vlSelf->__Vdlyvset__x__v23 = 1U;
        vlSelf->__PVT__idx = 0x18U;
        vlSelf->__Vdlyvset__x__v24 = 1U;
        vlSelf->__PVT__idx = 0x19U;
        vlSelf->__Vdlyvset__x__v25 = 1U;
        vlSelf->__PVT__idx = 0x1aU;
        vlSelf->__Vdlyvset__x__v26 = 1U;
        vlSelf->__PVT__idx = 0x1bU;
        vlSelf->__Vdlyvset__x__v27 = 1U;
        vlSelf->__PVT__idx = 0x1cU;
        vlSelf->__Vdlyvset__x__v28 = 1U;
        vlSelf->__PVT__idx = 0x1dU;
        vlSelf->__Vdlyvset__x__v29 = 1U;
        vlSelf->__PVT__idx = 0x1eU;
        vlSelf->__Vdlyvset__x__v30 = 1U;
        vlSelf->__PVT__idx = 0x1fU;
        vlSelf->__Vdlyvset__x__v31 = 1U;
        vlSelf->__PVT__idx = 0x20U;
    } else if (vlSelf->__PVT__we) {
        vlSelf->__Vdlyvval__x__v32 = vlSelf->__PVT__rd_data_i;
        vlSelf->__Vdlyvset__x__v32 = 1U;
        vlSelf->__Vdlyvdim0__x__v32 = vlSelf->__PVT__rd_addr_i;
    }
    if (vlSelf->__Vdlyvset__x__v0) {
        vlSelf->__PVT__x[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v1) {
        vlSelf->__PVT__x[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v2) {
        vlSelf->__PVT__x[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v3) {
        vlSelf->__PVT__x[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v4) {
        vlSelf->__PVT__x[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v5) {
        vlSelf->__PVT__x[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v6) {
        vlSelf->__PVT__x[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v7) {
        vlSelf->__PVT__x[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v8) {
        vlSelf->__PVT__x[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v9) {
        vlSelf->__PVT__x[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v10) {
        vlSelf->__PVT__x[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v11) {
        vlSelf->__PVT__x[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v12) {
        vlSelf->__PVT__x[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v13) {
        vlSelf->__PVT__x[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v14) {
        vlSelf->__PVT__x[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v15) {
        vlSelf->__PVT__x[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v16) {
        vlSelf->__PVT__x[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v17) {
        vlSelf->__PVT__x[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v18) {
        vlSelf->__PVT__x[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v19) {
        vlSelf->__PVT__x[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v20) {
        vlSelf->__PVT__x[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v21) {
        vlSelf->__PVT__x[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v22) {
        vlSelf->__PVT__x[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v23) {
        vlSelf->__PVT__x[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v24) {
        vlSelf->__PVT__x[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v25) {
        vlSelf->__PVT__x[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v26) {
        vlSelf->__PVT__x[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v27) {
        vlSelf->__PVT__x[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v28) {
        vlSelf->__PVT__x[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v29) {
        vlSelf->__PVT__x[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v30) {
        vlSelf->__PVT__x[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v31) {
        vlSelf->__PVT__x[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__x__v32) {
        vlSelf->__PVT__x[vlSelf->__Vdlyvdim0__x__v32] 
            = vlSelf->__Vdlyvval__x__v32;
    }
    vlSelf->__PVT__ra = vlSelf->__PVT__x[1U];
    vlSelf->__PVT__sp = vlSelf->__PVT__x[2U];
    vlSelf->__PVT__gp = vlSelf->__PVT__x[3U];
    vlSelf->__PVT__tp = vlSelf->__PVT__x[4U];
    vlSelf->__PVT__t0 = vlSelf->__PVT__x[5U];
    vlSelf->__PVT__t1 = vlSelf->__PVT__x[6U];
    vlSelf->__PVT__t2 = vlSelf->__PVT__x[7U];
    vlSelf->__PVT__s0 = vlSelf->__PVT__x[8U];
    vlSelf->__PVT__s1 = vlSelf->__PVT__x[9U];
    vlSelf->__PVT__a0 = vlSelf->__PVT__x[0xaU];
    vlSelf->__PVT__a1 = vlSelf->__PVT__x[0xbU];
    vlSelf->__PVT__a2 = vlSelf->__PVT__x[0xcU];
    vlSelf->__PVT__a3 = vlSelf->__PVT__x[0xdU];
    vlSelf->__PVT__a4 = vlSelf->__PVT__x[0xeU];
    vlSelf->__PVT__a5 = vlSelf->__PVT__x[0xfU];
    vlSelf->__PVT__a6 = vlSelf->__PVT__x[0x10U];
    vlSelf->__PVT__a7 = vlSelf->__PVT__x[0x11U];
    vlSelf->__PVT__s2 = vlSelf->__PVT__x[0x12U];
    vlSelf->__PVT__s3 = vlSelf->__PVT__x[0x13U];
    vlSelf->__PVT__s4 = vlSelf->__PVT__x[0x14U];
    vlSelf->__PVT__s5 = vlSelf->__PVT__x[0x15U];
    vlSelf->__PVT__s6 = vlSelf->__PVT__x[0x16U];
    vlSelf->__PVT__s7 = vlSelf->__PVT__x[0x17U];
    vlSelf->__PVT__s8 = vlSelf->__PVT__x[0x18U];
    vlSelf->__PVT__s9 = vlSelf->__PVT__x[0x19U];
    vlSelf->__PVT__s10 = vlSelf->__PVT__x[0x1aU];
    vlSelf->__PVT__s11 = vlSelf->__PVT__x[0x1bU];
    vlSelf->__PVT__t3 = vlSelf->__PVT__x[0x1cU];
    vlSelf->__PVT__t4 = vlSelf->__PVT__x[0x1dU];
    vlSelf->__PVT__t5 = vlSelf->__PVT__x[0x1eU];
    vlSelf->__PVT__t6 = vlSelf->__PVT__x[0x1fU];
}

VL_INLINE_OPT void Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__1(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__1\n"); );
    // Body
    vlSelf->__PVT__we = ((IData)(vlSelf->__PVT__rd_we_i) 
                         & VL_REDOR_I((IData)(vlSelf->__PVT__rd_addr_i)));
}

VL_INLINE_OPT void Vaquila_top_reg_file___nba_comb__TOP__aquila_top__core__Register_File__0(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___nba_comb__TOP__aquila_top__core__Register_File__0\n"); );
    // Body
    vlSelf->__PVT__rs2_data_o = (((IData)(vlSelf->__PVT__we) 
                                  & ((IData)(vlSelf->__PVT__rs2_addr_i) 
                                     == (IData)(vlSelf->__PVT__rd_addr_i)))
                                  ? vlSelf->__PVT__rd_data_i
                                  : vlSelf->__PVT__x
                                 [vlSelf->__PVT__rs2_addr_i]);
    vlSelf->__PVT__rs1_data_o = (((IData)(vlSelf->__PVT__we) 
                                  & ((IData)(vlSelf->__PVT__rs1_addr_i) 
                                     == (IData)(vlSelf->__PVT__rd_addr_i)))
                                  ? vlSelf->__PVT__rd_data_i
                                  : vlSelf->__PVT__x
                                 [vlSelf->__PVT__rs1_addr_i]);
}
