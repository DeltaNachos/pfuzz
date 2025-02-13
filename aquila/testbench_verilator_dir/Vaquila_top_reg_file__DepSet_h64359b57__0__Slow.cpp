// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_reg_file.h"

VL_ATTR_COLD void Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__0(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__0\n"); );
    // Body
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

VL_ATTR_COLD void Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__1(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__1\n"); );
    // Body
    vlSelf->__PVT__we = ((IData)(vlSelf->__PVT__rd_we_i) 
                         & VL_REDOR_I((IData)(vlSelf->__PVT__rd_addr_i)));
}

VL_ATTR_COLD void Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__2(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___stl_sequent__TOP__aquila_top__core__Register_File__2\n"); );
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

VL_ATTR_COLD void Vaquila_top_reg_file___ctor_var_reset(Vaquila_top_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_reg_file___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs1_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ra = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__gp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__t6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__x__v0 = 0;
    vlSelf->__Vdlyvset__x__v1 = 0;
    vlSelf->__Vdlyvset__x__v2 = 0;
    vlSelf->__Vdlyvset__x__v3 = 0;
    vlSelf->__Vdlyvset__x__v4 = 0;
    vlSelf->__Vdlyvset__x__v5 = 0;
    vlSelf->__Vdlyvset__x__v6 = 0;
    vlSelf->__Vdlyvset__x__v7 = 0;
    vlSelf->__Vdlyvset__x__v8 = 0;
    vlSelf->__Vdlyvset__x__v9 = 0;
    vlSelf->__Vdlyvset__x__v10 = 0;
    vlSelf->__Vdlyvset__x__v11 = 0;
    vlSelf->__Vdlyvset__x__v12 = 0;
    vlSelf->__Vdlyvset__x__v13 = 0;
    vlSelf->__Vdlyvset__x__v14 = 0;
    vlSelf->__Vdlyvset__x__v15 = 0;
    vlSelf->__Vdlyvset__x__v16 = 0;
    vlSelf->__Vdlyvset__x__v17 = 0;
    vlSelf->__Vdlyvset__x__v18 = 0;
    vlSelf->__Vdlyvset__x__v19 = 0;
    vlSelf->__Vdlyvset__x__v20 = 0;
    vlSelf->__Vdlyvset__x__v21 = 0;
    vlSelf->__Vdlyvset__x__v22 = 0;
    vlSelf->__Vdlyvset__x__v23 = 0;
    vlSelf->__Vdlyvset__x__v24 = 0;
    vlSelf->__Vdlyvset__x__v25 = 0;
    vlSelf->__Vdlyvset__x__v26 = 0;
    vlSelf->__Vdlyvset__x__v27 = 0;
    vlSelf->__Vdlyvset__x__v28 = 0;
    vlSelf->__Vdlyvset__x__v29 = 0;
    vlSelf->__Vdlyvset__x__v30 = 0;
    vlSelf->__Vdlyvset__x__v31 = 0;
    vlSelf->__Vdlyvdim0__x__v32 = 0;
    vlSelf->__Vdlyvval__x__v32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__x__v32 = 0;
}
