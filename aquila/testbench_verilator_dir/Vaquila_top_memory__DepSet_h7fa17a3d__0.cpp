// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_memory.h"

VL_INLINE_OPT void Vaquila_top_memory___nba_sequent__TOP__aquila_top__core__Memory__0(Vaquila_top_memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_memory___nba_sequent__TOP__aquila_top__core__Memory__0\n"); );
    // Body
    vlSelf->__PVT__sys_jump_o = vlSelf->__PVT__sys_jump_i;
    vlSelf->__PVT__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_i;
    vlSelf->__PVT__pc_o = vlSelf->__PVT__pc_i;
    vlSelf->__PVT__fetch_valid_o = vlSelf->__PVT__fetch_valid_i;
    if ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_i, 0U, 2U)))) {
        if ((0U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_EXTEND_II(32,8, 
                                                 (0xffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 8U)));
            vlSelf->__PVT__byte_sel_o = 1U;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_EXTEND_II(32,16, 
                                                 (0xffffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 0x10U)));
            vlSelf->__PVT__byte_sel_o = 3U;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = vlSelf->__PVT__unaligned_data_i;
            vlSelf->__PVT__byte_sel_o = 0xfU;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else {
            vlSelf->__PVT__data_o = 0U;
            vlSelf->__PVT__byte_sel_o = 0U;
            vlSelf->__PVT__mem_align_exception_o = 1U;
        }
    } else if ((1U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_i, 0U, 2U)))) {
        if ((0U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_CONCAT_III(32,24,8, 
                                                  VL_EXTEND_II(24,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 8U))), 0U);
            vlSelf->__PVT__byte_sel_o = 2U;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else {
            vlSelf->__PVT__data_o = 0U;
            vlSelf->__PVT__byte_sel_o = 0U;
            vlSelf->__PVT__mem_align_exception_o = 1U;
        }
    } else if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_i, 0U, 2U)))) {
        if ((0U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_CONCAT_III(32,16,16, 
                                                  VL_EXTEND_II(16,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 8U))), 0U);
            vlSelf->__PVT__byte_sel_o = 4U;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_CONCAT_III(32,16,16, 
                                                  (0xffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 0x10U)), 0U);
            vlSelf->__PVT__byte_sel_o = 0xcU;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else {
            vlSelf->__PVT__data_o = 0U;
            vlSelf->__PVT__byte_sel_o = 0U;
            vlSelf->__PVT__mem_align_exception_o = 1U;
        }
    } else if ((3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_i, 0U, 2U)))) {
        if ((0U == (IData)(vlSelf->__PVT__dsize_sel_i))) {
            vlSelf->__PVT__data_o = VL_CONCAT_III(32,8,24, 
                                                  (0xffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__unaligned_data_i, 0U, 8U)), 0U);
            vlSelf->__PVT__byte_sel_o = 8U;
            vlSelf->__PVT__mem_align_exception_o = 0U;
        } else {
            vlSelf->__PVT__data_o = 0U;
            vlSelf->__PVT__byte_sel_o = 0U;
            vlSelf->__PVT__mem_align_exception_o = 1U;
        }
    }
    if (((IData)(vlSelf->__PVT__mem_align_exception_o) 
         & ((IData)(vlSelf->__PVT__we_i) | (IData)(vlSelf->__PVT__re_i)))) {
        vlSelf->__PVT__xcpt_valid_o = 1U;
        vlSelf->__PVT__xcpt_cause_o = (0xfU & VL_SEL_IIII(32, 
                                                          ((IData)(vlSelf->__PVT__we_i)
                                                            ? 6U
                                                            : 4U), 0U, 4U));
        vlSelf->__PVT__xcpt_tval_o = vlSelf->__PVT__mem_addr_i;
    } else {
        vlSelf->__PVT__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_i;
        vlSelf->__PVT__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_i;
        vlSelf->__PVT__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_i;
    }
}
