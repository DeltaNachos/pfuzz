// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_execute.h"

VL_INLINE_OPT void Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__1(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__1\n"); );
    // Body
    vlSelf->__Vdly__p_data_o = vlSelf->__PVT__p_data_o;
    vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel_o;
    vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel_o;
    vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type_o;
    vlSelf->__Vdly__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_o;
    vlSelf->__Vdly__sys_jump_o = vlSelf->__PVT__sys_jump_o;
    vlSelf->__Vdly__csr_we_data_o = vlSelf->__PVT__csr_we_data_o;
    vlSelf->__Vdly__csr_we_o = vlSelf->__PVT__csr_we_o;
    vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_o;
    vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_o;
    vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_o;
    vlSelf->__Vdly__csr_we_addr_o = vlSelf->__PVT__csr_we_addr_o;
    vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
    vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
    vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__is_fencei_o;
    vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel_o;
    vlSelf->__Vdly__rs2_data_o = vlSelf->__PVT__rs2_data_o;
    vlSelf->__Vdly__addr_o = vlSelf->__PVT__addr_o;
    vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__is_amo_o;
    vlSelf->__Vdly__re_o = vlSelf->__PVT__re_o;
    vlSelf->__Vdly__we_o = vlSelf->__PVT__we_o;
    vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we_o;
    vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr_o;
    vlSelf->__Vdly__p_data_o = (((IData)(vlSelf->__PVT__rst_i) 
                                 | ((IData)(vlSelf->__PVT__flush_i) 
                                    & (~ (IData)(vlSelf->__PVT__stall_i))))
                                 ? 0U : (((IData)(vlSelf->__PVT__stall_i) 
                                          | (IData)(vlSelf->__PVT__stall_from_exe_o))
                                          ? vlSelf->__PVT__p_data_o
                                          : ((3U == (IData)(vlSelf->__PVT__regfile_input_sel_i))
                                              ? vlSelf->__PVT__branch_restore_pc_o
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__regfile_input_sel_i))
                                                  ? vlSelf->__PVT__result
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->__PVT__regfile_input_sel_i))
                                                   ? vlSelf->__PVT__csr_data_i
                                                   : 0U)))));
    if (((IData)(vlSelf->__PVT__rst_i) | ((IData)(vlSelf->__PVT__flush_i) 
                                          & (~ (IData)(vlSelf->__PVT__stall_i))))) {
        vlSelf->__Vdly__we_o = 0U;
        vlSelf->__Vdly__re_o = 0U;
        vlSelf->__Vdly__rs2_data_o = 0U;
        vlSelf->__Vdly__addr_o = 0U;
        vlSelf->__Vdly__dsize_sel_o = 0U;
        vlSelf->__Vdly__signex_sel_o = 0U;
        vlSelf->__Vdly__regfile_input_sel_o = 0U;
        vlSelf->__Vdly__regfile_we_o = 0U;
        vlSelf->__Vdly__rd_addr_o = 0U;
        vlSelf->__Vdly__is_fencei_o = 0U;
        vlSelf->__Vdly__is_amo_o = 0U;
        vlSelf->__Vdly__amo_type_o = 0U;
        vlSelf->__Vdly__sys_jump_o = 0U;
        vlSelf->__Vdly__sys_jump_csr_addr_o = 0U;
        vlSelf->__Vdly__xcpt_valid_o = 0U;
        vlSelf->__Vdly__xcpt_cause_o = 0U;
        vlSelf->__Vdly__xcpt_tval_o = 0U;
        vlSelf->__Vdly__pc_o = 0U;
        vlSelf->__Vdly__fetch_valid_o = 0U;
        vlSelf->__Vdly__csr_we_o = 0U;
        vlSelf->__Vdly__csr_we_addr_o = 0U;
        vlSelf->__Vdly__csr_we_data_o = 0U;
    } else if (((IData)(vlSelf->__PVT__stall_i) | (IData)(vlSelf->__PVT__stall_from_exe_o))) {
        vlSelf->__Vdly__we_o = vlSelf->__PVT__we_o;
        vlSelf->__Vdly__re_o = vlSelf->__PVT__re_o;
        vlSelf->__Vdly__rs2_data_o = vlSelf->__PVT__rs2_data_o;
        vlSelf->__Vdly__addr_o = vlSelf->__PVT__addr_o;
        vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel_o;
        vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel_o;
        vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel_o;
        vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we_o;
        vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr_o;
        vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__is_fencei_o;
        vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__is_amo_o;
        vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type_o;
        vlSelf->__Vdly__sys_jump_o = vlSelf->__PVT__sys_jump_o;
        vlSelf->__Vdly__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_o;
        vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_o;
        vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_o;
        vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_o;
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
        vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
        vlSelf->__Vdly__csr_we_o = vlSelf->__PVT__csr_we_o;
        vlSelf->__Vdly__csr_we_addr_o = vlSelf->__PVT__csr_we_addr_o;
        vlSelf->__Vdly__csr_we_data_o = vlSelf->__PVT__csr_we_data_o;
    } else {
        vlSelf->__Vdly__we_o = vlSelf->__PVT__we_i;
        vlSelf->__Vdly__re_o = vlSelf->__PVT__re_i;
        vlSelf->__Vdly__rs2_data_o = vlSelf->__PVT__rs2_data_i;
        vlSelf->__Vdly__addr_o = vlSelf->__PVT__mem_addr;
        vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel_i;
        vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel_i;
        vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel_i;
        vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we_i;
        vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr_i;
        vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__is_fencei_i;
        vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__is_amo_i;
        vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type_i;
        vlSelf->__Vdly__sys_jump_o = vlSelf->__PVT__sys_jump_i;
        vlSelf->__Vdly__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_i;
        vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_i;
        vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_i;
        vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_i;
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_i;
        vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_i;
        vlSelf->__Vdly__csr_we_o = vlSelf->__PVT__csr_we_i;
        vlSelf->__Vdly__csr_we_addr_o = vlSelf->__PVT__csr_we_addr_i;
        vlSelf->__Vdly__csr_we_data_o = vlSelf->__PVT__csr_update_data;
    }
    vlSelf->__PVT__p_data_o = vlSelf->__Vdly__p_data_o;
    vlSelf->__PVT__signex_sel_o = vlSelf->__Vdly__signex_sel_o;
    vlSelf->__PVT__regfile_input_sel_o = vlSelf->__Vdly__regfile_input_sel_o;
    vlSelf->__PVT__amo_type_o = vlSelf->__Vdly__amo_type_o;
    vlSelf->__PVT__sys_jump_o = vlSelf->__Vdly__sys_jump_o;
    vlSelf->__PVT__sys_jump_csr_addr_o = vlSelf->__Vdly__sys_jump_csr_addr_o;
    vlSelf->__PVT__csr_we_data_o = vlSelf->__Vdly__csr_we_data_o;
    vlSelf->__PVT__xcpt_valid_o = vlSelf->__Vdly__xcpt_valid_o;
    vlSelf->__PVT__xcpt_cause_o = vlSelf->__Vdly__xcpt_cause_o;
    vlSelf->__PVT__xcpt_tval_o = vlSelf->__Vdly__xcpt_tval_o;
    vlSelf->__PVT__csr_we_o = vlSelf->__Vdly__csr_we_o;
    vlSelf->__PVT__csr_we_addr_o = vlSelf->__Vdly__csr_we_addr_o;
    vlSelf->__PVT__pc_o = vlSelf->__Vdly__pc_o;
    vlSelf->__PVT__fetch_valid_o = vlSelf->__Vdly__fetch_valid_o;
    vlSelf->__PVT__is_fencei_o = vlSelf->__Vdly__is_fencei_o;
    vlSelf->__PVT__rs2_data_o = vlSelf->__Vdly__rs2_data_o;
    vlSelf->__PVT__dsize_sel_o = vlSelf->__Vdly__dsize_sel_o;
    vlSelf->__PVT__addr_o = vlSelf->__Vdly__addr_o;
    vlSelf->__PVT__is_amo_o = vlSelf->__Vdly__is_amo_o;
    vlSelf->__PVT__re_o = vlSelf->__Vdly__re_o;
    vlSelf->__PVT__we_o = vlSelf->__Vdly__we_o;
    vlSelf->__PVT__regfile_we_o = vlSelf->__Vdly__regfile_we_o;
    vlSelf->__PVT__rd_addr_o = vlSelf->__Vdly__rd_addr_o;
}

VL_INLINE_OPT void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__4(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__4\n"); );
    // Body
    vlSelf->__PVT__result = ((IData)(vlSelf->__PVT__alu_muldiv_sel_i)
                              ? vlSelf->__PVT__muldiv_result
                              : vlSelf->__PVT__alu_result);
}
