// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_forwarding_unit.h"

VL_ATTR_COLD void Vaquila_top_forwarding_unit___stl_sequent__TOP__aquila_top__core__Forwarding_Unit__0(Vaquila_top_forwarding_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_forwarding_unit___stl_sequent__TOP__aquila_top__core__Forwarding_Unit__0\n"); );
    // Body
    vlSelf->__PVT__is_csr_addr_EXE_MEM_same = ((IData)(vlSelf->__PVT__csr_addr_i) 
                                               == (IData)(vlSelf->__PVT__exe_csr_addr_i));
    vlSelf->__PVT__correct_fwd_src1 = vlSelf->__PVT__exe_p_data_i;
    vlSelf->__PVT__is_rs2_rd_EXE_MEM_same = ((IData)(vlSelf->__PVT__rs2_addr_i) 
                                             == (IData)(vlSelf->__PVT__exe_rd_addr_i));
    vlSelf->__PVT__is_rs1_rd_EXE_MEM_same = ((IData)(vlSelf->__PVT__rs1_addr_i) 
                                             == (IData)(vlSelf->__PVT__exe_rd_addr_i));
    vlSelf->__PVT__is_rd_EXE_MEM_not_zero = VL_REDOR_I((IData)(vlSelf->__PVT__exe_rd_addr_i));
    vlSelf->__PVT__csr_EXE_MEM_fwd = ((IData)(vlSelf->__PVT__exe_csr_we_i) 
                                      & (IData)(vlSelf->__PVT__is_csr_addr_EXE_MEM_same));
    vlSelf->__PVT__rs2_EXE_MEM_fwd = (((IData)(vlSelf->__PVT__exe_regfile_we_i) 
                                       & (IData)(vlSelf->__PVT__is_rs2_rd_EXE_MEM_same)) 
                                      & (IData)(vlSelf->__PVT__is_rd_EXE_MEM_not_zero));
    vlSelf->__PVT__rs1_EXE_MEM_fwd = (((IData)(vlSelf->__PVT__exe_regfile_we_i) 
                                       & (IData)(vlSelf->__PVT__is_rs1_rd_EXE_MEM_same)) 
                                      & (IData)(vlSelf->__PVT__is_rd_EXE_MEM_not_zero));
}

VL_ATTR_COLD void Vaquila_top_forwarding_unit___stl_sequent__TOP__aquila_top__core__Forwarding_Unit__1(Vaquila_top_forwarding_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_forwarding_unit___stl_sequent__TOP__aquila_top__core__Forwarding_Unit__1\n"); );
    // Body
    vlSelf->__PVT__is_csr_addr_MEM_WB_same = ((IData)(vlSelf->__PVT__csr_addr_i) 
                                              == (IData)(vlSelf->__PVT__wbk_csr_addr_i));
    vlSelf->__PVT__is_rs2_rd_MEM_WB_same = ((IData)(vlSelf->__PVT__rs2_addr_i) 
                                            == (IData)(vlSelf->__PVT__wbk_rd_addr_i));
    vlSelf->__PVT__is_rs1_rd_MEM_WB_same = ((IData)(vlSelf->__PVT__rs1_addr_i) 
                                            == (IData)(vlSelf->__PVT__wbk_rd_addr_i));
    vlSelf->__PVT__is_rd_MEM_WB_not_zero = VL_REDOR_I((IData)(vlSelf->__PVT__wbk_rd_addr_i));
    vlSelf->__PVT__correct_fwd_src2 = vlSelf->__PVT__wbk_rd_data_i;
    vlSelf->__PVT__csr_MEM_WB_fwd = ((IData)(vlSelf->__PVT__wbk_csr_we_i) 
                                     & (IData)(vlSelf->__PVT__is_csr_addr_MEM_WB_same));
    vlSelf->__PVT__rs2_MEM_WB_fwd = (((IData)(vlSelf->__PVT__wbk_regfile_we_i) 
                                      & (IData)(vlSelf->__PVT__is_rs2_rd_MEM_WB_same)) 
                                     & (IData)(vlSelf->__PVT__is_rd_MEM_WB_not_zero));
    vlSelf->__PVT__rs1_MEM_WB_fwd = (((IData)(vlSelf->__PVT__wbk_regfile_we_i) 
                                      & (IData)(vlSelf->__PVT__is_rs1_rd_MEM_WB_same)) 
                                     & (IData)(vlSelf->__PVT__is_rd_MEM_WB_not_zero));
    vlSelf->__PVT__correct_csr_data = ((IData)(vlSelf->__PVT__csr_EXE_MEM_fwd)
                                        ? vlSelf->__PVT__exe_csr_data_i
                                        : ((IData)(vlSelf->__PVT__csr_MEM_WB_fwd)
                                            ? vlSelf->__PVT__wbk_csr_data_i
                                            : vlSelf->__PVT__csr_data_i));
    vlSelf->__PVT__correct_rs2_data = ((IData)(vlSelf->__PVT__rs2_EXE_MEM_fwd)
                                        ? vlSelf->__PVT__correct_fwd_src1
                                        : ((IData)(vlSelf->__PVT__rs2_MEM_WB_fwd)
                                            ? vlSelf->__PVT__correct_fwd_src2
                                            : vlSelf->__PVT__rs2_data_i));
    vlSelf->__PVT__correct_rs1_data = ((IData)(vlSelf->__PVT__rs1_EXE_MEM_fwd)
                                        ? vlSelf->__PVT__correct_fwd_src1
                                        : ((IData)(vlSelf->__PVT__rs1_MEM_WB_fwd)
                                            ? vlSelf->__PVT__correct_fwd_src2
                                            : vlSelf->__PVT__rs1_data_i));
    vlSelf->__PVT__csr_data_o = vlSelf->__PVT__correct_csr_data;
    vlSelf->__PVT__rs2_o = vlSelf->__PVT__correct_rs2_data;
    vlSelf->__PVT__rs1_o = vlSelf->__PVT__correct_rs1_data;
}

VL_ATTR_COLD void Vaquila_top_forwarding_unit___ctor_var_reset(Vaquila_top_forwarding_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_forwarding_unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rs1_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__csr_addr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__rs1_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_regfile_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_regfile_input_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe_p_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_csr_addr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_csr_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbk_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wbk_regfile_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wbk_rd_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbk_csr_addr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__wbk_csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wbk_csr_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_rs1_rd_EXE_MEM_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_rs2_rd_EXE_MEM_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_csr_addr_EXE_MEM_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_rs1_rd_MEM_WB_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_rs2_rd_MEM_WB_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_csr_addr_MEM_WB_same = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_rd_EXE_MEM_not_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_rd_MEM_WB_not_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_EXE_MEM_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs2_EXE_MEM_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_EXE_MEM_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_MEM_WB_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs2_MEM_WB_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_MEM_WB_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__correct_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__correct_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__correct_csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__correct_fwd_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__correct_fwd_src1 = VL_RAND_RESET_I(32);
}
