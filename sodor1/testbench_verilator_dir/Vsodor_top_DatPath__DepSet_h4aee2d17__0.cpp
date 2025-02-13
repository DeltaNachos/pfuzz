// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_DatPath.h"

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__6(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__6\n"); );
    // Body
    vlSelf->__PVT__regfile_MPORT_1_data = vlSelf->__PVT__regfile
        [vlSelf->__PVT__regfile_MPORT_1_addr];
    vlSelf->__PVT__io_ddpath_rdata = vlSelf->__PVT__regfile_MPORT_1_data;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__1(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__1\n"); );
    // Body
    vlSelf->__PVT___T = (0U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_1 = (1U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_2 = (2U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_3 = (3U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_119 = ((1U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x42U : 0x3fU);
    vlSelf->__PVT___T_4 = (4U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_121 = ((2U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x4aU : (IData)(vlSelf->__PVT___T_119));
    vlSelf->__PVT___T_123 = ((3U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x52U : (IData)(vlSelf->__PVT___T_121));
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__3(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__3\n"); );
    // Body
    vlSelf->__PVT___T_107 = ((IData)(vlSelf->__PVT___T_106)
                              ? vlSelf->__PVT__csr_io_rw_rdata
                              : vlSelf->__PVT__alu_out);
    vlSelf->__PVT___T_5 = ((IData)(vlSelf->__PVT___T_4)
                            ? vlSelf->__PVT__exception_target
                            : vlSelf->__PVT__pc_plus4);
    vlSelf->__PVT___T_108 = ((IData)(vlSelf->__PVT___T_105)
                              ? vlSelf->__PVT__pc_plus4
                              : vlSelf->__PVT___T_107);
    vlSelf->__PVT___T_6 = ((IData)(vlSelf->__PVT___T_3)
                            ? vlSelf->__PVT__jump_reg_target
                            : vlSelf->__PVT___T_5);
    vlSelf->__PVT___T_109 = ((IData)(vlSelf->__PVT___T_104)
                              ? vlSelf->__PVT__io_dmem_resp_bits_data
                              : vlSelf->__PVT___T_108);
    vlSelf->__PVT___T_7 = ((IData)(vlSelf->__PVT___T_2)
                            ? vlSelf->__PVT__jmp_target
                            : vlSelf->__PVT___T_6);
    vlSelf->__PVT__wb_data = ((IData)(vlSelf->__PVT___T_103)
                               ? vlSelf->__PVT__alu_out
                               : vlSelf->__PVT___T_109);
    vlSelf->__PVT__regfile_MPORT_data = ((IData)(vlSelf->__PVT___T_103)
                                          ? vlSelf->__PVT__alu_out
                                          : vlSelf->__PVT___T_109);
}
