// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_mprf.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_mprf___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0(Vssrv_top_scr1_pipe_mprf* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_mprf___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0\n"); );
    // Body
    vlSelf->__PVT__mprf2exu_rs2_data = (VL_REDOR_I((IData)(vlSelf->__PVT__exu2mprf_rs2_addr))
                                         ? ((0x3dfU 
                                             >= (0x3ffU 
                                                 & VL_SEL_IIII(32, 
                                                               ((0x1fU 
                                                                 >= 5U)
                                                                 ? 
                                                                (((IData)(0x1fU) 
                                                                  - 
                                                                  VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__exu2mprf_rs2_addr))) 
                                                                 << 5U)
                                                                 : 0U), 0U, 0xaU)))
                                             ? VL_SEL_IWII(992, vlSelf->__PVT__mprf_int, 
                                                           (0x3ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((0x1fU 
                                                                            >= 5U)
                                                                            ? 
                                                                           (((IData)(0x1fU) 
                                                                             - 
                                                                             VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__exu2mprf_rs2_addr))) 
                                                                            << 5U)
                                                                            : 0U), 0U, 0xaU)), 0x20U)
                                             : 0U) : 0U);
    vlSelf->__PVT__mprf2exu_rs1_data = (VL_REDOR_I((IData)(vlSelf->__PVT__exu2mprf_rs1_addr))
                                         ? ((0x3dfU 
                                             >= (0x3ffU 
                                                 & VL_SEL_IIII(32, 
                                                               ((0x1fU 
                                                                 >= 5U)
                                                                 ? 
                                                                (((IData)(0x1fU) 
                                                                  - 
                                                                  VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__exu2mprf_rs1_addr))) 
                                                                 << 5U)
                                                                 : 0U), 0U, 0xaU)))
                                             ? VL_SEL_IWII(992, vlSelf->__PVT__mprf_int, 
                                                           (0x3ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((0x1fU 
                                                                            >= 5U)
                                                                            ? 
                                                                           (((IData)(0x1fU) 
                                                                             - 
                                                                             VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__exu2mprf_rs1_addr))) 
                                                                            << 5U)
                                                                            : 0U), 0U, 0xaU)), 0x20U)
                                             : 0U) : 0U);
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_mprf___ctor_var_reset(Vssrv_top_scr1_pipe_mprf* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_mprf___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2mprf_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mprf2exu_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2mprf_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mprf2exu_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2mprf_w_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2mprf_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exu2mprf_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(992, vlSelf->__PVT__mprf_int);
    vlSelf->__Vlvbound_h2e458459__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(992, vlSelf->__Vdly__mprf_int);
}
