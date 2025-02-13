// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_writeback.h"

VL_ATTR_COLD void Vaquila_top_writeback___stl_sequent__TOP__aquila_top__core__Writeback__0(Vaquila_top_writeback* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_writeback___stl_sequent__TOP__aquila_top__core__Writeback__0\n"); );
    // Body
    vlSelf->__PVT__fetch_valid_o = vlSelf->__PVT__fetch_valid_r;
    vlSelf->__PVT__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_r;
    vlSelf->__PVT__pc_o = vlSelf->__PVT__pc_r;
    vlSelf->__PVT__csr_we_data_o = vlSelf->__PVT__csr_we_data_r;
    vlSelf->__PVT__csr_we_o = vlSelf->__PVT__csr_we_r;
    vlSelf->__PVT__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_r;
    vlSelf->__PVT__csr_we_addr_o = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_we_addr_r, 0U, 0xcU));
    vlSelf->__PVT__sys_jump_o = vlSelf->__PVT__sys_jump_r;
    vlSelf->__PVT__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_r;
    vlSelf->__PVT__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_r;
    if ((0U == (IData)(vlSelf->__PVT__addr_alignment_r))) {
        vlSelf->__PVT__aligned_data = vlSelf->__PVT__m_data_r;
    } else if ((1U == (IData)(vlSelf->__PVT__addr_alignment_r))) {
        vlSelf->__PVT__aligned_data = VL_CONCAT_III(32,8,24, 
                                                    (0xffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 0U, 8U)), 
                                                    (0xffffffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 8U, 0x18U)));
    } else if ((2U == (IData)(vlSelf->__PVT__addr_alignment_r))) {
        vlSelf->__PVT__aligned_data = VL_CONCAT_III(32,16,16, 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 0U, 0x10U)), 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 0x10U, 0x10U)));
    } else if ((3U == (IData)(vlSelf->__PVT__addr_alignment_r))) {
        vlSelf->__PVT__aligned_data = VL_CONCAT_III(32,24,8, 
                                                    (0xffffffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 0U, 0x18U)), 
                                                    (0xffU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__m_data_r, 0x18U, 8U)));
    }
    vlSelf->__PVT__rd_we_o = vlSelf->__PVT__regfile_we_r;
    vlSelf->__PVT__rd_addr_o = vlSelf->__PVT__rd_addr_r;
    vlSelf->__PVT__rd_data = ((0U == (IData)(vlSelf->__PVT__regfile_input_sel_r))
                               ? ((IData)(vlSelf->__PVT__signex_sel_r)
                                   ? VL_EXTEND_II(32,8, 
                                                  (0xffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__aligned_data, 0U, 8U)))
                                   : VL_CONCAT_III(32,24,8, 
                                                   (0xffffffU 
                                                    & VL_REPLICATE_IOI(1,
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__aligned_data, 7U)), 0x18U)), 
                                                   (0xffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__aligned_data, 0U, 8U))))
                               : ((1U == (IData)(vlSelf->__PVT__regfile_input_sel_r))
                                   ? ((IData)(vlSelf->__PVT__signex_sel_r)
                                       ? VL_EXTEND_II(32,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__aligned_data, 0U, 0x10U)))
                                       : VL_CONCAT_III(32,16,16, 
                                                       (0xffffU 
                                                        & VL_REPLICATE_IOI(1,
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(32, vlSelf->__PVT__aligned_data, 0xfU)), 0x10U)), 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__aligned_data, 0U, 0x10U))))
                                   : ((2U == (IData)(vlSelf->__PVT__regfile_input_sel_r))
                                       ? vlSelf->__PVT__aligned_data
                                       : vlSelf->__PVT__p_data_r)));
    vlSelf->__PVT__rd_data_o = vlSelf->__PVT__rd_data;
}

VL_ATTR_COLD void Vaquila_top_writeback___ctor_var_reset(Vaquila_top_writeback* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_writeback___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_input_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__signex_sel_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_alignment_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__p_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_addr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_we_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rd_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_we_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__xcpt_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__xcpt_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_input_sel_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__regfile_we_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__signex_sel_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_alignment_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__p_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__aligned_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__xcpt_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_addr_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_data_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__regfile_we_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rd_addr_r = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__regfile_input_sel_r = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__signex_sel_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__addr_alignment_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__p_data_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_we_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_we_addr_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_we_data_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sys_jump_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sys_jump_csr_addr_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__xcpt_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__xcpt_cause_r = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__xcpt_tval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__fetch_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__m_data_r = VL_RAND_RESET_I(32);
}
