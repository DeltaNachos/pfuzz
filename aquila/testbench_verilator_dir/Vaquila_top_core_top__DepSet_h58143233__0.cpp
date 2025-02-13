// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_core_top.h"

VL_INLINE_OPT void Vaquila_top_core_top___ico_sequent__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___ico_sequent__TOP__aquila_top__core__0\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__0\n"); );
    // Body
    vlSelf->__PVT__privilege_level = vlSymsp->TOP__aquila_top__core__CSR.__PVT__privilege_level_o;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__privilege_lvl_i 
        = vlSelf->__PVT__privilege_level;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__2(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__2\n"); );
    // Body
    vlSelf->__PVT__wbk_fetch_valid2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__fetch_valid_o;
    vlSelf->__PVT__wbk_xcpt_tval2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_tval_o;
    vlSelf->__PVT__wbk_pc2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__pc_o;
    vlSelf->__PVT__wbk_csr_data = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_data_o;
    vlSelf->__PVT__wbk_csr_we = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_o;
    vlSelf->__PVT__wbk_sys_jump_csr_addr2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__sys_jump_csr_addr_o;
    vlSelf->__PVT__wbk_csr_addr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_addr_o;
    vlSelf->__PVT__wbk_sys_jump2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__sys_jump_o;
    vlSelf->__PVT__wbk_xcpt_valid2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_valid_o;
    vlSelf->__PVT__wbk_xcpt_cause2csr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_cause_o;
    vlSelf->__PVT__wbk_rd_we = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__rd_we_o;
    vlSelf->__PVT__wbk_rd_addr = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__rd_addr_o;
    vlSelf->__PVT__wbk_rd_data = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__rd_data_o;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__xcpt_tval_i 
        = vlSelf->__PVT__wbk_xcpt_tval2csr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__pc_i 
        = vlSelf->__PVT__wbk_pc2csr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__csr_wdata_i 
        = vlSelf->__PVT__wbk_csr_data;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_csr_data_i 
        = vlSelf->__PVT__wbk_csr_data;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__csr_we_i 
        = vlSelf->__PVT__wbk_csr_we;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_csr_we_i 
        = vlSelf->__PVT__wbk_csr_we;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__sys_jump_csr_addr_i 
        = vlSelf->__PVT__wbk_sys_jump_csr_addr2csr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__csr_waddr_i 
        = vlSelf->__PVT__wbk_csr_addr;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_csr_addr_i 
        = vlSelf->__PVT__wbk_csr_addr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__sys_jump_i 
        = vlSelf->__PVT__wbk_sys_jump2csr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__xcpt_valid_i 
        = vlSelf->__PVT__wbk_xcpt_valid2csr;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__xcpt_cause_i 
        = vlSelf->__PVT__wbk_xcpt_cause2csr;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rd_we_i 
        = vlSelf->__PVT__wbk_rd_we;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_regfile_we_i 
        = vlSelf->__PVT__wbk_rd_we;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rd_addr_i 
        = vlSelf->__PVT__wbk_rd_addr;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_rd_addr_i 
        = vlSelf->__PVT__wbk_rd_addr;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rd_data_i 
        = vlSelf->__PVT__wbk_rd_data;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__wbk_rd_data_i 
        = vlSelf->__PVT__wbk_rd_data;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__3(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__3\n"); );
    // Body
    vlSelf->__PVT__csr_sys_jump = vlSymsp->TOP__aquila_top__core__CSR.__PVT__sys_jump_o;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__sys_jump_i 
        = vlSelf->__PVT__csr_sys_jump;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__4(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__4\n"); );
    // Body
    vlSelf->__PVT__plc_flush2wbk = vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__flush2wbk_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__5(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__5\n"); );
    // Body
    vlSelf->__PVT__exe_p_data = vlSymsp->TOP__aquila_top__core__Execute.__PVT__p_data_o;
    vlSelf->__PVT__exe_signex_sel2wbk = vlSymsp->TOP__aquila_top__core__Execute.__PVT__signex_sel_o;
    vlSelf->__PVT__exe_regfile_input_sel2wbk = vlSymsp->TOP__aquila_top__core__Execute.__PVT__regfile_input_sel_o;
    vlSelf->__PVT__exe_amo_type2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__amo_type_o;
    vlSelf->__PVT__exe_sys_jump2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__sys_jump_o;
    vlSelf->__PVT__exe_sys_jump_csr_addr2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__sys_jump_csr_addr_o;
    vlSelf->__PVT__exe_csr_data = vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_we_data_o;
    vlSelf->__PVT__exe_xcpt_valid2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_valid_o;
    vlSelf->__PVT__exe_xcpt_cause2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_cause_o;
    vlSelf->__PVT__exe_xcpt_tval2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_tval_o;
    vlSelf->__PVT__exe_csr_we = vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_we_o;
    vlSelf->__PVT__exe_csr_addr = vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_we_addr_o;
    vlSelf->__PVT__exe_pc2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__pc_o;
    vlSelf->__PVT__exe_fetch_valid2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__fetch_valid_o;
    vlSelf->__PVT__exe_is_fencei = vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_fencei_o;
    vlSelf->__PVT__exe_rs2_data2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__rs2_data_o;
    vlSelf->__PVT__exe_dsize_sel2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__dsize_sel_o;
    vlSelf->__PVT__exe_addr2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__addr_o;
    vlSelf->__PVT__exe_is_amo2mem = vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_amo_o;
    vlSelf->__PVT__exe_re = vlSymsp->TOP__aquila_top__core__Execute.__PVT__re_o;
    vlSelf->__PVT__exe_we = vlSymsp->TOP__aquila_top__core__Execute.__PVT__we_o;
    vlSelf->__PVT__exe_regfile_we2wbk = vlSymsp->TOP__aquila_top__core__Execute.__PVT__regfile_we_o;
    vlSelf->__PVT__exe_rd_addr2wbk = vlSymsp->TOP__aquila_top__core__Execute.__PVT__rd_addr_o;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__p_data_i 
        = vlSelf->__PVT__exe_p_data;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_p_data_i 
        = vlSelf->__PVT__exe_p_data;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__signex_sel_i 
        = vlSelf->__PVT__exe_signex_sel2wbk;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_regfile_input_sel_i 
        = vlSelf->__PVT__exe_regfile_input_sel2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__regfile_input_sel_i 
        = vlSelf->__PVT__exe_regfile_input_sel2wbk;
    vlSelf->__PVT__data_amo_type_o = vlSelf->__PVT__exe_amo_type2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__sys_jump_i 
        = vlSelf->__PVT__exe_sys_jump2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__sys_jump_csr_addr_i 
        = vlSelf->__PVT__exe_sys_jump_csr_addr2mem;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_data_i 
        = vlSelf->__PVT__exe_csr_data;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_csr_data_i 
        = vlSelf->__PVT__exe_csr_data;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_valid_i 
        = vlSelf->__PVT__exe_xcpt_valid2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_cause_i 
        = vlSelf->__PVT__exe_xcpt_cause2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_tval_i 
        = vlSelf->__PVT__exe_xcpt_tval2mem;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_i 
        = vlSelf->__PVT__exe_csr_we;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_csr_we_i 
        = vlSelf->__PVT__exe_csr_we;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__csr_we_addr_i 
        = vlSelf->__PVT__exe_csr_addr;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_csr_addr_i 
        = vlSelf->__PVT__exe_csr_addr;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__pc_i 
        = vlSelf->__PVT__exe_pc2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__fetch_valid_i 
        = vlSelf->__PVT__exe_fetch_valid2mem;
    vlSelf->__PVT__cache_flush_o = vlSelf->__PVT__exe_is_fencei;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__is_fencei_i 
        = vlSelf->__PVT__exe_is_fencei;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__unaligned_data_i 
        = vlSelf->__PVT__exe_rs2_data2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__dsize_sel_i 
        = vlSelf->__PVT__exe_dsize_sel2mem;
    vlSelf->__Vcellinp__Writeback__addr_alignment_i 
        = (3U & VL_SEL_IIII(32, vlSelf->__PVT__exe_addr2mem, 0U, 2U));
    vlSelf->__PVT__data_addr_o = vlSelf->__PVT__exe_addr2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__mem_addr_i 
        = vlSelf->__PVT__exe_addr2mem;
    vlSelf->__PVT__data_is_amo_o = vlSelf->__PVT__exe_is_amo2mem;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__re_i 
        = vlSelf->__PVT__exe_re;
    vlSelf->__PVT__data_rw_o = vlSelf->__PVT__exe_we;
    vlSymsp->TOP__aquila_top__core__Memory.__PVT__we_i 
        = vlSelf->__PVT__exe_we;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__regfile_we_i 
        = vlSelf->__PVT__exe_regfile_we2wbk;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_regfile_we_i 
        = vlSelf->__PVT__exe_regfile_we2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__rd_addr_i 
        = vlSelf->__PVT__exe_rd_addr2wbk;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__exe_rd_addr_i 
        = vlSelf->__PVT__exe_rd_addr2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__addr_alignment_i 
        = vlSelf->__Vcellinp__Writeback__addr_alignment_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__6(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__6\n"); );
    // Body
    vlSelf->__PVT__mem_sys_jump2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__sys_jump_o;
    vlSelf->__PVT__mem_sys_jump_csr_addr2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__sys_jump_csr_addr_o;
    vlSelf->__PVT__mem_pc2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__pc_o;
    vlSelf->__PVT__mem_fetch_valid2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__fetch_valid_o;
    vlSelf->__PVT__mem_dataout = vlSymsp->TOP__aquila_top__core__Memory.__PVT__data_o;
    vlSelf->__PVT__mem_byte_sel = vlSymsp->TOP__aquila_top__core__Memory.__PVT__byte_sel_o;
    vlSelf->__PVT__mem_align_exception = vlSymsp->TOP__aquila_top__core__Memory.__PVT__mem_align_exception_o;
    vlSelf->__PVT__mem_xcpt_valid2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_valid_o;
    vlSelf->__PVT__mem_xcpt_cause2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_cause_o;
    vlSelf->__PVT__mem_xcpt_tval2wbk = vlSymsp->TOP__aquila_top__core__Memory.__PVT__xcpt_tval_o;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__sys_jump_i 
        = vlSelf->__PVT__mem_sys_jump2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__sys_jump_csr_addr_i 
        = vlSelf->__PVT__mem_sys_jump_csr_addr2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__pc_i 
        = vlSelf->__PVT__mem_pc2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__fetch_valid_i 
        = vlSelf->__PVT__mem_fetch_valid2wbk;
    vlSelf->__PVT__data_o = vlSelf->__PVT__mem_dataout;
    vlSelf->__PVT__data_byte_enable_o = vlSelf->__PVT__mem_byte_sel;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_valid_i 
        = vlSelf->__PVT__mem_xcpt_valid2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_cause_i 
        = vlSelf->__PVT__mem_xcpt_cause2wbk;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__xcpt_tval_i 
        = vlSelf->__PVT__mem_xcpt_tval2wbk;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__7(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__7\n"); );
    // Body
    vlSelf->__PVT__fet_branch_hit = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__branch_hit_o;
    vlSelf->__PVT__fet_branch_decision = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__branch_decision_o;
    vlSelf->__PVT__fet_pc2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__pc_o;
    vlSelf->__PVT__fet_valid2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__fetch_valid_o;
    vlSelf->__PVT__fet_xcpt_valid2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__xcpt_valid_o;
    vlSelf->__PVT__fet_xcpt_cause2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__xcpt_cause_o;
    vlSelf->__PVT__fet_xcpt_tval2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__xcpt_tval_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__8(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__8\n"); );
    // Body
    vlSelf->__PVT__pcu_pc = vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__pc_o;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__pc_i 
        = vlSelf->__PVT__pcu_pc;
    vlSelf->__PVT__code_addr_o = vlSelf->__PVT__pcu_pc;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__pc_i 
        = vlSelf->__PVT__pcu_pc;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__9(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__9\n"); );
    // Body
    vlSelf->__PVT__dec_signex_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__signex_sel_o;
    vlSelf->__PVT__dec_dsize_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__dsize_sel_o;
    vlSelf->__PVT__dec_regfile_we2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__regfile_we_o;
    vlSelf->__PVT__dec_regfile_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__regfile_input_sel_o;
    vlSelf->__PVT__dec_we = vlSymsp->TOP__aquila_top__core__Decode.__PVT__we_o;
    vlSelf->__PVT__dec_csr_we2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_we_o;
    vlSelf->__PVT__dec_is_fencei2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_fencei_o;
    vlSelf->__PVT__dec_amo_type2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__amo_type_o;
    vlSelf->__PVT__dec_is_amo2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_amo_o;
    vlSelf->__PVT__dec_sys_jump2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__sys_jump_o;
    vlSelf->__PVT__dec_sys_jump_csr_addr2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__sys_jump_csr_addr_o;
    vlSelf->__PVT__dec_xcpt_valid2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_valid_o;
    vlSelf->__PVT__dec_xcpt_cause2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_cause_o;
    vlSelf->__PVT__dec_xcpt_tval2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_tval_o;
    vlSelf->__PVT__dec_csr_imm2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_imm_o;
    vlSelf->__PVT__dec_fetch_valid2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__fetch_valid_o;
    vlSelf->__PVT__dec_csr_data2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_data2fwd_o;
    vlSelf->__PVT__dec_shift_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__shift_sel_o;
    vlSelf->__PVT__dec_re = vlSymsp->TOP__aquila_top__core__Decode.__PVT__re_o;
    vlSelf->__PVT__dec_branch_decision = vlSymsp->TOP__aquila_top__core__Decode.__PVT__branch_decision_o;
    vlSelf->__PVT__dec_csr_addr2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_addr2fwd_o;
    vlSelf->__PVT__dec_branch_hit = vlSymsp->TOP__aquila_top__core__Decode.__PVT__branch_hit_o;
    vlSelf->__PVT__dec_rd_addr2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rd_addr_o;
    vlSelf->__PVT__dec_alu_muldiv_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__alu_muldiv_sel_o;
    vlSelf->__PVT__dec_inB_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__inputB_sel_o;
    vlSelf->__PVT__dec_imm2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__imm_o;
    vlSelf->__PVT__dec_inA_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__inputA_sel_o;
    vlSelf->__PVT__dec_is_jalr = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_jalr_o;
    vlSelf->__PVT__dec_is_branch = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_branch_o;
    vlSelf->__PVT__dec_is_jal = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_jal_o;
    vlSelf->__PVT__dec_rs2_data2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs2_data2fwd_o;
    vlSelf->__PVT__dec_rs1_data2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs1_data2fwd_o;
    vlSelf->__PVT__dec_operation_sel2exe = vlSymsp->TOP__aquila_top__core__Decode.__PVT__operation_sel_o;
    vlSelf->__PVT__dec_rs2_addr2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs2_addr2fwd_o;
    vlSelf->__PVT__dec_rs1_addr2fwd = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs1_addr2fwd_o;
    vlSelf->__PVT__dec_pc = vlSymsp->TOP__aquila_top__core__Decode.__PVT__pc_o;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__signex_sel_i 
        = vlSelf->__PVT__dec_signex_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__dsize_sel_i 
        = vlSelf->__PVT__dec_dsize_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__regfile_we_i 
        = vlSelf->__PVT__dec_regfile_we2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__regfile_input_sel_i 
        = vlSelf->__PVT__dec_regfile_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__we_i 
        = vlSelf->__PVT__dec_we;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_we_i 
        = vlSelf->__PVT__dec_csr_we2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_fencei_i 
        = vlSelf->__PVT__dec_is_fencei2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__amo_type_i 
        = vlSelf->__PVT__dec_amo_type2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_amo_i 
        = vlSelf->__PVT__dec_is_amo2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__sys_jump_i 
        = vlSelf->__PVT__dec_sys_jump2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__sys_jump_csr_addr_i 
        = vlSelf->__PVT__dec_sys_jump_csr_addr2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_valid_i 
        = vlSelf->__PVT__dec_xcpt_valid2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_cause_i 
        = vlSelf->__PVT__dec_xcpt_cause2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__xcpt_tval_i 
        = vlSelf->__PVT__dec_xcpt_tval2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_imm_i 
        = vlSelf->__PVT__dec_csr_imm2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__fetch_valid_i 
        = vlSelf->__PVT__dec_fetch_valid2exe;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__csr_data_i 
        = vlSelf->__PVT__dec_csr_data2fwd;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__shift_sel_i 
        = vlSelf->__PVT__dec_shift_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__re_i 
        = vlSelf->__PVT__dec_re;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__dec_branch_decision_i 
        = vlSelf->__PVT__dec_branch_decision;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_decision_i 
        = vlSelf->__PVT__dec_branch_decision;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_we_addr_i 
        = vlSelf->__PVT__dec_csr_addr2fwd;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__csr_addr_i 
        = vlSelf->__PVT__dec_csr_addr2fwd;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__dec_branch_hit_i 
        = vlSelf->__PVT__dec_branch_hit;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__branch_hit_i 
        = vlSelf->__PVT__dec_branch_hit;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_hit_i 
        = vlSelf->__PVT__dec_branch_hit;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__rd_addr_i 
        = vlSelf->__PVT__dec_rd_addr2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__alu_muldiv_sel_i 
        = vlSelf->__PVT__dec_alu_muldiv_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__inputB_sel_i 
        = vlSelf->__PVT__dec_inB_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__imm_i 
        = vlSelf->__PVT__dec_imm2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__inputA_sel_i 
        = vlSelf->__PVT__dec_inA_sel2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_jalr_i 
        = vlSelf->__PVT__dec_is_jalr;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__is_cond_branch_i 
        = vlSelf->__PVT__dec_is_branch;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_branch_i 
        = vlSelf->__PVT__dec_is_branch;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__is_jal_i 
        = vlSelf->__PVT__dec_is_jal;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_jal_i 
        = vlSelf->__PVT__dec_is_jal;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs2_data_i 
        = vlSelf->__PVT__dec_rs2_data2fwd;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs1_data_i 
        = vlSelf->__PVT__dec_rs1_data2fwd;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__operation_sel_i 
        = vlSelf->__PVT__dec_operation_sel2exe;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs2_addr_i 
        = vlSelf->__PVT__dec_rs2_addr2fwd;
    vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs1_addr_i 
        = vlSelf->__PVT__dec_rs1_addr2fwd;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__dec_pc_i 
        = vlSelf->__PVT__dec_pc;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__pc_i 
        = vlSelf->__PVT__dec_pc;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__dec_pc_i 
        = vlSelf->__PVT__dec_pc;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__10(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__10\n"); );
    // Body
    vlSelf->__PVT__exe_is_branch2bpu = vlSymsp->TOP__aquila_top__core__Execute.__PVT__is_branch_o;
    vlSelf->__PVT__exe_branch_restore_pc = vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_restore_pc_o;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__exe_is_branch_i 
        = vlSelf->__PVT__exe_is_branch2bpu;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__exe_branch_restore_addr_i 
        = vlSelf->__PVT__exe_branch_restore_pc;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__11(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__11\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__instruction_i 
        = vlSelf->__PVT__code_i;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__init_pc_addr_i 
        = vlSelf->__PVT__init_pc_addr_i;
    vlSelf->__PVT__stall_instr_fetch = (1U & (~ (IData)(vlSelf->__PVT__code_ready_i)));
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__12(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__12\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__0\n"); );
    // Body
    vlSelf->__PVT__csr_sys_jump_data = vlSymsp->TOP__aquila_top__core__CSR.__PVT__sys_jump_csr_data_o;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__sys_jump_data_i 
        = vlSelf->__PVT__csr_sys_jump_data;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__2(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__2\n"); );
    // Body
    vlSelf->__PVT__plc_flush2exe = vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__flush2exe_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__13(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__13\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__is_fencei_i 
        = vlSelf->__PVT__exe_is_fencei;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__14(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__14\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__sys_jump_i 
        = vlSelf->__PVT__csr_sys_jump;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__3(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__3\n"); );
    // Body
    vlSelf->__PVT__bpu_branch_hit = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_hit_o;
    vlSelf->__PVT__bpu_branch_decision = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_decision_o;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__bpu_branch_hit_i 
        = vlSelf->__PVT__bpu_branch_hit;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__branch_hit_i 
        = vlSelf->__PVT__bpu_branch_hit;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__bpu_branch_decision_i 
        = vlSelf->__PVT__bpu_branch_decision;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__branch_decision_i 
        = vlSelf->__PVT__bpu_branch_decision;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__15(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__15\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__pc_i 
        = vlSelf->__PVT__fet_pc2dec;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__fetch_valid_i 
        = vlSelf->__PVT__fet_valid2dec;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__branch_hit_i 
        = vlSelf->__PVT__fet_branch_hit;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__branch_decision_i 
        = vlSelf->__PVT__fet_branch_decision;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_valid_i 
        = vlSelf->__PVT__fet_xcpt_valid2dec;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_cause_i 
        = vlSelf->__PVT__fet_xcpt_cause2dec;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__xcpt_tval_i 
        = vlSelf->__PVT__fet_xcpt_tval2dec;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__4(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__4\n"); );
    // Body
    vlSelf->__PVT__nxt_unwb_PC = ((IData)(vlSelf->__PVT__wbk_xcpt_valid2csr)
                                   ? vlSelf->__PVT__wbk_pc2csr
                                   : ((IData)(vlSelf->__PVT__mem_fetch_valid2wbk)
                                       ? vlSelf->__PVT__mem_pc2wbk
                                       : ((IData)(vlSelf->__PVT__exe_fetch_valid2mem)
                                           ? vlSelf->__PVT__exe_pc2mem
                                           : ((IData)(vlSelf->__PVT__dec_fetch_valid2exe)
                                               ? vlSelf->__PVT__dec_pc
                                               : ((IData)(vlSelf->__PVT__fet_valid2dec)
                                                   ? vlSelf->__PVT__fet_pc2dec
                                                   : vlSelf->__PVT__pcu_pc)))));
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__nxt_unwb_PC_i 
        = vlSelf->__PVT__nxt_unwb_PC;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__5(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__5\n"); );
    // Body
    vlSelf->__PVT__stall_from_exe = vlSymsp->TOP__aquila_top__core__Execute.__PVT__stall_from_exe_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__6(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__6\n"); );
    // Body
    vlSelf->__PVT__data_read2wbk = ((2U == (IData)(vlSelf->__PVT__dS))
                                     ? vlSelf->__PVT__data_read_reg
                                     : vlSelf->__PVT__data_i);
    if (vlSelf->__PVT__iS) {
        if (vlSelf->__PVT__iS) {
            vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSelf->__PVT__code_ready_i)));
        }
    } else {
        vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSelf->__PVT__code_ready_i)));
    }
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__m_data_i 
        = vlSelf->__PVT__data_read2wbk;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__7(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__7\n"); );
    // Body
    vlSelf->__PVT__irq_enable = (1U & (~ (((IData)(vlSelf->__PVT__data_addr_ext_i) 
                                           & ((IData)(vlSelf->__PVT__exe_we) 
                                              | (IData)(vlSelf->__PVT__exe_re))) 
                                          | (IData)(vlSelf->__PVT__exe_is_amo2mem))));
    vlSelf->__Vcellinp__CSR__sft_irq_i = ((IData)(vlSelf->__PVT__sft_irq_i) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__tmr_irq_i = ((IData)(vlSelf->__PVT__tmr_irq_i) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__ext_irq_i = ((IData)(vlSelf->__PVT__ext_irq_i) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__sft_irq_i 
        = vlSelf->__Vcellinp__CSR__sft_irq_i;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__tmr_irq_i 
        = vlSelf->__Vcellinp__CSR__tmr_irq_i;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__ext_irq_i 
        = vlSelf->__Vcellinp__CSR__ext_irq_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__8(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__8\n"); );
    // Body
    vlSelf->__PVT__fet_instr2dec = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__instruction_o;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__instruction_i 
        = vlSelf->__PVT__fet_instr2dec;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__9(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__9\n"); );
    // Body
    vlSelf->__PVT__dec_csr_addr2csr = vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_addr_o;
    vlSelf->__PVT__dec_rs2_addr2rfu = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs2_addr_o;
    vlSelf->__PVT__dec_rs1_addr2rfu = vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs1_addr_o;
    vlSelf->__PVT__dec_unsupported_instr = vlSymsp->TOP__aquila_top__core__Decode.__PVT__unsupported_instr_o;
    vlSymsp->TOP__aquila_top__core__CSR.__PVT__csr_raddr_i 
        = vlSelf->__PVT__dec_csr_addr2csr;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rs2_addr_i 
        = vlSelf->__PVT__dec_rs2_addr2rfu;
    vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rs1_addr_i 
        = vlSelf->__PVT__dec_rs1_addr2rfu;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__unsupported_instr_i 
        = vlSelf->__PVT__dec_unsupported_instr;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__10(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__10\n"); );
    // Body
    vlSelf->__PVT__bpu_branch_target_addr = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_target_addr_o;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__bpu_branch_target_addr_i 
        = vlSelf->__PVT__bpu_branch_target_addr;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__11(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__11\n"); );
    // Body
    vlSelf->__PVT__fwd_csr_data2exe = vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__csr_data_o;
    vlSelf->__PVT__fwd_rs2 = vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs2_o;
    vlSelf->__PVT__fwd_rs1 = vlSymsp->TOP__aquila_top__core__Forwarding_Unit.__PVT__rs1_o;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__csr_data_i 
        = vlSelf->__PVT__fwd_csr_data2exe;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__rs2_data_i 
        = vlSelf->__PVT__fwd_rs2;
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__rs1_data_i 
        = vlSelf->__PVT__fwd_rs1;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__12(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__12\n"); );
    // Body
    vlSelf->__PVT__exe_branch_taken = vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_taken_o;
    vlSelf->__PVT__exe_branch_target_addr = vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_target_addr_o;
    vlSelf->__PVT__exe_branch_misprediction = vlSymsp->TOP__aquila_top__core__Execute.__PVT__branch_misprediction_o;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_taken_i 
        = vlSelf->__PVT__exe_branch_taken;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__exe_branch_taken_i 
        = vlSelf->__PVT__exe_branch_taken;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__branch_taken_i 
        = vlSelf->__PVT__exe_branch_taken;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__exe_branch_target_addr_i 
        = vlSelf->__PVT__exe_branch_target_addr;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_target_addr_i 
        = vlSelf->__PVT__exe_branch_target_addr;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__branch_misprediction_i 
        = vlSelf->__PVT__exe_branch_misprediction;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__exe_branch_misprediction_i 
        = vlSelf->__PVT__exe_branch_misprediction;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__branch_misprediction_i 
        = vlSelf->__PVT__exe_branch_misprediction;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__13(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__13\n"); );
    // Body
    vlSelf->__PVT__plc_flush2fet = vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__flush2fet_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__14(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__14\n"); );
    // Body
    vlSelf->__PVT__dS_nxt = ((0U == (IData)(vlSelf->__PVT__dS))
                              ? ((((IData)(vlSelf->__PVT__exe_re) 
                                   | (IData)(vlSelf->__PVT__exe_we)) 
                                  & (~ (IData)(vlSelf->__PVT__mem_align_exception)))
                                  ? 1U : 0U) : ((1U 
                                                 == (IData)(vlSelf->__PVT__dS))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__data_ready_i)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__stall_instr_fetch) 
                                                   | (IData)(vlSelf->__PVT__stall_from_exe))
                                                   ? 2U
                                                   : 0U)
                                                  : 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__dS))
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__stall_instr_fetch) 
                                                   | (IData)(vlSelf->__PVT__stall_from_exe))
                                                   ? 2U
                                                   : 0U)
                                                  : 0U)));
    vlSelf->__PVT__stall_data_fetch = ((1U == (IData)(vlSelf->__PVT__dS_nxt)) 
                                       & (~ (IData)(vlSelf->__PVT__exe_is_fencei)));
    vlSelf->__Vcellinp__Execute__stall_i = ((IData)(vlSelf->__PVT__stall_instr_fetch) 
                                            | (IData)(vlSelf->__PVT__stall_data_fetch));
    vlSelf->__PVT__stall_pipeline = (((IData)(vlSelf->__PVT__stall_instr_fetch) 
                                      | (IData)(vlSelf->__PVT__stall_data_fetch)) 
                                     | (IData)(vlSelf->__PVT__stall_from_exe));
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__stall_i 
        = vlSelf->__Vcellinp__Execute__stall_i;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__stall_i 
        = vlSelf->__PVT__stall_pipeline;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__stall_i 
        = vlSelf->__PVT__stall_pipeline;
    vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__stall_i 
        = vlSelf->__PVT__stall_pipeline;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__15(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__15\n"); );
    // Body
    vlSelf->__PVT__csr_irq_taken = vlSymsp->TOP__aquila_top__core__CSR.__PVT__irq_taken_o;
    vlSelf->__PVT__csr_pc_handler = vlSymsp->TOP__aquila_top__core__CSR.__PVT__pc_handler_o;
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__PC_handler_i 
        = vlSelf->__PVT__csr_pc_handler;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__16(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__16\n"); );
    // Body
    vlSelf->__PVT__dec_load_hazard2plc = vlSymsp->TOP__aquila_top__core__Decode.__PVT__is_load_hazard_o;
    vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__is_load_hazard 
        = vlSelf->__PVT__dec_load_hazard2plc;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__17(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__17\n"); );
    // Body
    vlSelf->__PVT__stall_data_hazard = vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__data_hazard_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__18(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__18\n"); );
    // Body
    vlSelf->__PVT__csr_data2dec = vlSymsp->TOP__aquila_top__core__CSR.__PVT__csr_data_o;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__csr_data_i 
        = vlSelf->__PVT__csr_data2dec;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__19(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__19\n"); );
    // Body
    vlSelf->__PVT__rfu_rs2_data2dec = vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rs2_data_o;
    vlSelf->__PVT__rfu_rs1_data2dec = vlSymsp->TOP__aquila_top__core__Register_File.__PVT__rs1_data_o;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs2_data_i 
        = vlSelf->__PVT__rfu_rs2_data2dec;
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__rs1_data_i 
        = vlSelf->__PVT__rfu_rs1_data2dec;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__20(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__20\n"); );
    // Body
    vlSelf->__PVT__irq_taken = ((IData)(vlSelf->__PVT__csr_irq_taken) 
                                | (IData)(vlSelf->__PVT__csr_irq_taken_r));
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__irq_taken_i 
        = vlSelf->__PVT__irq_taken;
    vlSelf->__Vcellinp__Execute__flush_i = ((IData)(vlSelf->__PVT__plc_flush2exe) 
                                            | (IData)(vlSelf->__PVT__irq_taken));
    vlSelf->__Vcellinp__Writeback__flush_i = ((IData)(vlSelf->__PVT__plc_flush2wbk) 
                                              | (IData)(vlSelf->__PVT__irq_taken));
    vlSymsp->TOP__aquila_top__core__Execute.__PVT__flush_i 
        = vlSelf->__Vcellinp__Execute__flush_i;
    vlSymsp->TOP__aquila_top__core__Writeback.__PVT__flush_i 
        = vlSelf->__Vcellinp__Writeback__flush_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__21(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__21\n"); );
    // Body
    vlSelf->__PVT__plc_flush2dec = vlSymsp->TOP__aquila_top__core__Pipeline_Control.__PVT__flush2dec_o;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__22(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__22\n"); );
    // Body
    vlSelf->__Vcellinp__Program_Counter__stall_i = 
        ((IData)(vlSelf->__PVT__stall_pipeline) | ((IData)(vlSelf->__PVT__stall_data_hazard) 
                                                   & (~ (IData)(vlSelf->__PVT__irq_taken))));
    vlSelf->__Vcellinp__Fetch__stall_i = ((IData)(vlSelf->__PVT__stall_pipeline) 
                                          | ((IData)(vlSelf->__PVT__stall_data_hazard) 
                                             & (~ (IData)(vlSelf->__PVT__irq_taken))));
    vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__stall_i 
        = vlSelf->__Vcellinp__Program_Counter__stall_i;
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__stall_i 
        = vlSelf->__Vcellinp__Fetch__stall_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__23(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__23\n"); );
    // Body
    vlSelf->__Vcellinp__Fetch__flush_i = ((IData)(vlSelf->__PVT__plc_flush2fet) 
                                          | (IData)(vlSelf->__PVT__irq_taken));
    vlSymsp->TOP__aquila_top__core__Fetch.__PVT__flush_i 
        = vlSelf->__Vcellinp__Fetch__flush_i;
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__24(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__24\n"); );
    // Body
    vlSelf->__Vcellinp__Decode__flush_i = ((IData)(vlSelf->__PVT__plc_flush2dec) 
                                           | (IData)(vlSelf->__PVT__irq_taken));
    vlSymsp->TOP__aquila_top__core__Decode.__PVT__flush_i 
        = vlSelf->__Vcellinp__Decode__flush_i;
}
