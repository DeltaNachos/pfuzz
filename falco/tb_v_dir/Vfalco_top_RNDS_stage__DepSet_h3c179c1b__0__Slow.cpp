// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_RNDS_stage.h"
#include "Vfalco_top__Syms.h"

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__0(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr0_store_id 
        = vlSelfRef.store_counter;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rd_arf 
        = (0x1fU & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0xaU, 5U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rd_arf 
        = (0x1fU & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xaU, 5U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_pc 
        = VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x80U, 0x20U);
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_pc 
        = VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x80U, 0x20U);
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_is_store_op 
        = (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1fU));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_is_store_op 
        = (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1fU));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_stale_rd_valid 
        = (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x52U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_stale_rd_valid 
        = (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x52U));
    vlSelfRef.__Vcellinp__LFST__instr1_is_store = (1U 
                                                   & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1fU));
    vlSelfRef.__Vcellinp__LFST__instr1_pc = (0x7ffU 
                                             & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x82U, 0xbU));
    vlSelfRef.__Vcellinp__LFST__instr0_pc = (0x7ffU 
                                             & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x82U, 0xbU));
    vlSelfRef.__Vcellinp__Map_Table__instr1_rd = (0x1fU 
                                                  & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xaU, 5U));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__csr_stall 
        = (((VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x51U) 
             & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid)) 
            | (VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x51U) 
               & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_valid))) 
           | (IData)(vlSelfRef.__PVT__wait_csr));
    vlSelfRef.__Vcellinp__LFST__instr0_is_store = (1U 
                                                   & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1fU));
    vlSelfRef.__Vcellinp__Map_Table__instr0_rs2 = (0x1fU 
                                                   & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0U, 5U));
    vlSelfRef.__Vcellinp__Map_Table__instr0_rs1 = (0x1fU 
                                                   & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 5U, 5U));
    vlSelfRef.__Vcellinp__Map_Table__instr1_rs2 = (0x1fU 
                                                   & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0U, 5U));
    vlSelfRef.__Vcellinp__Map_Table__instr1_rs1 = (0x1fU 
                                                   & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 5U, 5U));
    vlSelfRef.__Vcellinp__Map_Table__instr0_rd = (0x1fU 
                                                  & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0xaU, 5U));
    vlSelfRef.__Vcellinp__Busy_list__BCAST_load = vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__BCAST_ld_spec;
    vlSelfRef.__Vcellinp__Busy_list__BCAST_muldiv = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_muldiv;
    vlSelfRef.__Vcellinp__Busy_list__BCAST_ALU_1 = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_ALU_1;
    vlSelfRef.__Vcellinp__Busy_list__BCAST_alu_csr_bc 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__BCAST_alu_csr_bc;
    vlSelfRef.__PVT__instr1_is_mem_op = ((VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1fU) 
                                          | VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1eU)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_valid));
    vlSelfRef.__PVT__instr0_is_mem_op = ((VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1fU) 
                                          | VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1eU)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid));
    vlSelfRef.__PVT__instr1_pre_req = vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_valid;
    vlSelfRef.__PVT__instr0_pre_req = vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid;
    vlSelfRef.__Vcellinp__Busy_list__int_issue0_rd_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid;
    vlSelfRef.__Vcellinp__Busy_list__int_issue1_rd_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid;
    vlSelfRef.__Vcellinp__Busy_list__int_issue0_rd_prf 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd;
    vlSelfRef.__Vcellinp__Busy_list__int_issue1_rd_prf 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr1_is_store 
        = vlSelfRef.__Vcellinp__LFST__instr1_is_store;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr1_pc 
        = vlSelfRef.__Vcellinp__LFST__instr1_pc;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr0_pc 
        = vlSelfRef.__Vcellinp__LFST__instr0_pc;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.instr1_rd 
        = vlSelfRef.__Vcellinp__Map_Table__instr1_rd;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr0_is_store 
        = vlSelfRef.__Vcellinp__LFST__instr0_is_store;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rs2 
        = vlSelfRef.__Vcellinp__Map_Table__instr0_rs2;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rs1 
        = vlSelfRef.__Vcellinp__Map_Table__instr0_rs1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rs2 
        = vlSelfRef.__Vcellinp__Map_Table__instr1_rs2;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rs1 
        = vlSelfRef.__Vcellinp__Map_Table__instr1_rs1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.instr0_rd 
        = vlSelfRef.__Vcellinp__Map_Table__instr0_rd;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__BCAST_load 
        = vlSelfRef.__Vcellinp__Busy_list__BCAST_load;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__BCAST_muldiv 
        = vlSelfRef.__Vcellinp__Busy_list__BCAST_muldiv;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__BCAST_ALU_1 
        = vlSelfRef.__Vcellinp__Busy_list__BCAST_ALU_1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__BCAST_alu_csr_bc 
        = vlSelfRef.__Vcellinp__Busy_list__BCAST_alu_csr_bc;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr1_valid 
        = vlSelfRef.__PVT__instr1_pre_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_valid 
        = vlSelfRef.__PVT__instr1_pre_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr0_valid 
        = vlSelfRef.__PVT__instr0_pre_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_valid 
        = vlSelfRef.__PVT__instr0_pre_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__int_issue0_rd_valid 
        = vlSelfRef.__Vcellinp__Busy_list__int_issue0_rd_valid;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__int_issue1_rd_valid 
        = vlSelfRef.__Vcellinp__Busy_list__int_issue1_rd_valid;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__int_issue0_rd_prf 
        = vlSelfRef.__Vcellinp__Busy_list__int_issue0_rd_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__int_issue1_rd_prf 
        = vlSelfRef.__Vcellinp__Busy_list__int_issue1_rd_prf;
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__1(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_rd_new_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr0_free_prf;
    vlSelfRef.__PVT__FL_instr1_check_top = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr1_check_top;
    vlSelfRef.__PVT__FL_instr0_check_top = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr0_check_top;
    vlSelfRef.__Vcellinp__freelist__recovery_target_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_target_rob_tag;
    vlSelfRef.__Vcellinp__Map_Table__recovery_target_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_target_rob_tag;
    vlSelfRef.__Vcellinp__freelist__instr0_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rob_tag;
    vlSelfRef.__Vcellinp__Map_Table__instr0_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rob_tag;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rob_full 
        = (((IData)(vlSelfRef.__PVT__instr0_pre_req) 
            & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr0_check_top))) 
           | ((IData)(vlSelfRef.__PVT__instr1_pre_req) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr1_check_top))));
    vlSelfRef.__Vcellinp__freelist__recovery_no_copy 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_no_copy;
    vlSelfRef.__Vcellinp__Map_Table__recovery_no_copy 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__recovery_no_copy;
    vlSelfRef.__Vcellinp__freelist__recovery_rollback 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_rollback;
    vlSelfRef.__Vcellinp__freelist__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush;
    vlSelfRef.__Vcellinp__Map_Table__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush;
    vlSelfRef.__Vcellinp__Map_Table__recovery_mode 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure;
    vlSelfRef.__Vcellinp__LFST__instr0_store_set_id 
        = vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr0_store_set_id;
    vlSelfRef.__Vcellinp__LFST__instr1_store_set_id 
        = vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr1_store_set_id;
    vlSelfRef.__PVT__instr0_rs2_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rs2_prf;
    vlSelfRef.__PVT__instr0_rs1_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rs1_prf;
    vlSelfRef.__PVT__instr0_rd_stale_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rd_stale_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rd_new_prf 
        = vlSelfRef.__PVT__instr0_rd_new_prf;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__freelist_empty 
        = (((IData)(vlSelfRef.__PVT__instr0_pre_req) 
            & (~ (IData)(vlSelfRef.__PVT__FL_instr0_check_top))) 
           | ((IData)(vlSelfRef.__PVT__instr1_pre_req) 
              & (~ (IData)(vlSelfRef.__PVT__FL_instr1_check_top))));
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__recovery_target_rob_tag 
        = vlSelfRef.__Vcellinp__freelist__recovery_target_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_target_rob_tag 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_target_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr0_rob_tag 
        = vlSelfRef.__Vcellinp__freelist__instr0_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr0_rob_tag 
        = vlSelfRef.__Vcellinp__Map_Table__instr0_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__recovery_no_copy 
        = vlSelfRef.__Vcellinp__freelist__recovery_no_copy;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_no_copy 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_no_copy;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__recovery_rollback 
        = vlSelfRef.__Vcellinp__freelist__recovery_rollback;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__freelist__recovery_flush;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_flush;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_mode 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_mode;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr0_store_set_id 
        = vlSelfRef.__Vcellinp__LFST__instr0_store_set_id;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr1_store_set_id 
        = vlSelfRef.__Vcellinp__LFST__instr1_store_set_id;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rs2_prf 
        = vlSelfRef.__PVT__instr0_rs2_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rs1_prf 
        = vlSelfRef.__PVT__instr0_rs1_prf;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_stale_rd 
        = vlSelfRef.__PVT__instr0_rd_stale_prf;
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__2(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_prf_0 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_0;
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_arf_0 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_0;
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_0_valid 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_0_valid;
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_prf_1 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_old_prf_1;
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_arf_1 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_1;
    vlSelfRef.__Vcellinp__Map_Table__recovery_map_1_valid 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recovery_arf_map_1_valid;
    vlSelfRef.instr0_predict_result = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr0_predict_result;
    vlSelfRef.instr1_predict_result = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr1_predict_result;
    vlSelfRef.__PVT__instr0_rs2_reg_ready = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rs2_ready;
    vlSelfRef.__PVT__instr0_rs1_reg_ready = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rs1_ready;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_prf_0 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_prf_0;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_arf_0 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_arf_0;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_0_valid 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_0_valid;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_prf_1 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_prf_1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_arf_1 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_arf_1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__recovery_map_1_valid 
        = vlSelfRef.__Vcellinp__Map_Table__recovery_map_1_valid;
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__0(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__freelist__push_stale_rd0 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_0;
    vlSelfRef.__Vcellinp__freelist__push_stale_rd1 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_prf_1;
    vlSelfRef.__Vcellinp__freelist__push_stale_rd0_valid 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_0_valid;
    vlSelfRef.__Vcellinp__freelist__push_stale_rd1_valid 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__recycle_freelist_1_valid;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__push_stale_rd0 
        = vlSelfRef.__Vcellinp__freelist__push_stale_rd0;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__push_stale_rd1 
        = vlSelfRef.__Vcellinp__freelist__push_stale_rd1;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__push_stale_rd0_valid 
        = vlSelfRef.__Vcellinp__freelist__push_stale_rd0_valid;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__push_stale_rd1_valid 
        = vlSelfRef.__Vcellinp__freelist__push_stale_rd1_valid;
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__1(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__mem_iq_full 
        = ((((IData)(vlSelfRef.__PVT__instr0_pre_req) 
             & (IData)(vlSelfRef.__PVT__instr0_is_mem_op)) 
            & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr0_check_top))) 
           | (((IData)(vlSelfRef.__PVT__instr1_pre_req) 
               & (IData)(vlSelfRef.__PVT__instr1_is_mem_op)) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr1_check_top))));
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__int_iq_full 
        = ((((IData)(vlSelfRef.__PVT__instr0_pre_req) 
             & (~ (IData)(vlSelfRef.__PVT__instr0_is_mem_op))) 
            & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr0_check_top))) 
           | (((IData)(vlSelfRef.__PVT__instr1_pre_req) 
               & (~ (IData)(vlSelfRef.__PVT__instr1_is_mem_op))) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr1_check_top))));
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__2(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_ready_alloc = ((((((((IData)(vlSelfRef.__PVT__instr1_pre_req) 
                                                 & (IData)(vlSelfRef.__PVT__FL_instr1_check_top)) 
                                                & (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr1_check_top)) 
                                               & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_stall))) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_flush))) 
                                             & (~ (IData)(vlSelfRef.__PVT__wait_csr))) 
                                            & ((VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x51U) 
                                                & (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_is_empty)) 
                                               | (~ 
                                                  VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x51U)))) 
                                           & (~ (VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x51U) 
                                                 & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid))));
    vlSelfRef.__PVT__instr0_ready_alloc = (((((((IData)(vlSelfRef.__PVT__instr0_pre_req) 
                                                & (IData)(vlSelfRef.__PVT__FL_instr0_check_top)) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_instr0_check_top)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_stall))) 
                                             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__RNDS_flush))) 
                                            & (~ (IData)(vlSelfRef.__PVT__wait_csr))) 
                                           & ((VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x51U) 
                                               & (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__rob_is_empty)) 
                                              | (~ 
                                                 VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x51U))));
    vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_issue 
        = vlSelfRef.__PVT__instr1_ready_alloc;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rd_valid 
        = vlSelfRef.__PVT__instr1_ready_alloc;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_req 
        = vlSelfRef.__PVT__instr1_ready_alloc;
    vlSelfRef.__PVT__reg_rename_instr1_req = ((IData)(vlSelfRef.__PVT__instr1_ready_alloc) 
                                              & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x52U));
    vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_issue 
        = vlSelfRef.__PVT__instr0_ready_alloc;
    vlSelfRef.__PVT__pre_int_pack0_valid = (((IData)(vlSelfRef.__PVT__instr0_ready_alloc) 
                                             & (~ (IData)(vlSelfRef.__PVT__instr0_is_mem_op))) 
                                            | ((IData)(vlSelfRef.__PVT__instr1_ready_alloc) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr1_is_mem_op))));
    vlSelfRef.__PVT__pre_int_pack1_valid = (((IData)(vlSelfRef.__PVT__instr1_ready_alloc) 
                                             & (~ (IData)(vlSelfRef.__PVT__instr1_is_mem_op))) 
                                            & ((IData)(vlSelfRef.__PVT__instr0_ready_alloc) 
                                               & (~ (IData)(vlSelfRef.__PVT__instr0_is_mem_op))));
    vlSelfRef.__PVT__pre_mem_pack0_valid = (((IData)(vlSelfRef.__PVT__instr0_is_mem_op) 
                                             & (IData)(vlSelfRef.__PVT__instr0_ready_alloc)) 
                                            | ((IData)(vlSelfRef.__PVT__instr1_is_mem_op) 
                                               & (IData)(vlSelfRef.__PVT__instr1_ready_alloc)));
    vlSelfRef.__PVT__pre_mem_pack1_valid = (((IData)(vlSelfRef.__PVT__instr1_ready_alloc) 
                                             & (IData)(vlSelfRef.__PVT__instr1_is_mem_op)) 
                                            & ((IData)(vlSelfRef.__PVT__instr0_ready_alloc) 
                                               & (IData)(vlSelfRef.__PVT__instr0_is_mem_op)));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_req 
        = vlSelfRef.__PVT__instr0_ready_alloc;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rd_valid 
        = vlSelfRef.__PVT__instr0_ready_alloc;
    vlSelfRef.__PVT__reg_rename_instr0_req = ((IData)(vlSelfRef.__PVT__instr0_ready_alloc) 
                                              & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x52U));
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.instr1_rd_new_map_valid 
        = vlSelfRef.__PVT__reg_rename_instr1_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr1_req 
        = vlSelfRef.__PVT__reg_rename_instr1_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr0_req 
        = vlSelfRef.__PVT__reg_rename_instr0_req;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.instr0_rd_new_map_valid 
        = vlSelfRef.__PVT__reg_rename_instr0_req;
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__3(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__Vcellinp__freelist__instr1_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag;
    vlSelfRef.__Vcellinp__Map_Table__instr1_rob_tag 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag;
    vlSelfRef.__PVT__instr1_rd_new_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr1_free_prf;
    vlSelfRef.__PVT__instr1_rd_stale_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rd_stale_prf;
    vlSelfRef.__PVT__instr1_rs1_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rs1_prf;
    vlSelfRef.__PVT__instr1_rs2_prf = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rs2_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__freelist.__PVT__instr1_rob_tag 
        = vlSelfRef.__Vcellinp__freelist__instr1_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rob_tag 
        = vlSelfRef.__Vcellinp__Map_Table__instr1_rob_tag;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Map_Table.__PVT__instr1_rd_new_prf 
        = vlSelfRef.__PVT__instr1_rd_new_prf;
    vlSelfRef.__PVT__instr0_rd_prf = (0x3fU & VL_SEL_IIII(32, 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0xaU, 5U)))
                                                            ? 0U
                                                            : 
                                                           VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__instr0_rd_new_prf))), 0U, 6U));
    vlSelfRef.__PVT__instr1_rd_prf = (0x3fU & VL_SEL_IIII(32, 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xaU, 5U)))
                                                            ? 0U
                                                            : 
                                                           VL_EXTEND_II(32,6, (IData)(vlSelfRef.__PVT__instr1_rd_new_prf))), 0U, 6U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_stale_rd 
        = vlSelfRef.__PVT__instr1_rd_stale_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rs1_prf 
        = vlSelfRef.__PVT__instr1_rs1_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rs2_prf 
        = vlSelfRef.__PVT__instr1_rs2_prf;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rd_prf 
        = vlSelfRef.__PVT__instr1_rd_prf;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rd_prf 
        = vlSelfRef.__PVT__instr1_rd_prf;
    VL_CONCAT_WQI(96,64,32, __Vtemp_1, VL_CONCAT_QII(64,32,32, 
                                                     VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xa0U, 0x20U), 
                                                     VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x80U, 0x20U)), 
                  VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x60U, 0x20U));
    VL_ASSIGNSEL_WW(205,96,0x6dU, vlSelfRef.__PVT__pre_int_instr1_pack, __Vtemp_1);
    VL_ASSIGNSEL_WI(205,7,0x66U, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_III(7,2,5, (3U & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5eU, 2U)), 
                                  VL_CONCAT_III(5,2,3, 
                                                (3U 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5cU, 2U)), 
                                                (7U 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x59U, 3U)))));
    VL_ASSIGNSEL_WI(205,3,0x63U, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x57U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x56U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x55U)))));
    VL_ASSIGNSEL_WI(205,3,0x60U, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x54U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x53U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x51U)))));
    VL_ASSIGNSEL_WQ(205,49,0x2fU, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_QIQ(49,12,37, (0xfffU 
                                             & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x45U, 0xcU)), 
                                  VL_CONCAT_QII(37,5,32, 
                                                (0x1fU 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x40U, 5U)), 
                                                VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x20U, 0x20U))));
    VL_ASSIGNSEL_WI(205,19,0x1cU, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_III(19,1,18, (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1bU)), 
                                  VL_CONCAT_III(18,12,6, 
                                                (0xfffU 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xfU, 0xcU)), (IData)(vlSelfRef.__PVT__instr1_rd_prf))));
    VL_ASSIGNSEL_WI(205,28,0U, vlSelfRef.__PVT__pre_int_instr1_pack, 
                    VL_CONCAT_III(28,12,16, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr1_rs1_prf), (IData)(vlSelfRef.__PVT__instr1_rs2_prf)), 
                                  VL_CONCAT_III(16,6,10, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag), (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_BHSR))));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rd_prf 
        = vlSelfRef.__PVT__instr0_rd_prf;
    if (((~ (IData)(vlSelfRef.__PVT__instr0_is_mem_op)) 
         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid))) {
        VL_CONCAT_WQI(96,64,32, __Vtemp_2, VL_CONCAT_QII(64,32,32, 
                                                         VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0xa0U, 0x20U), 
                                                         VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x80U, 0x20U)), 
                      VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x60U, 0x20U));
        VL_ASSIGNSEL_WW(205,96,0x6dU, vlSelfRef.__PVT__pre_int_instr0_pack, __Vtemp_2);
        VL_ASSIGNSEL_WI(205,7,0x66U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(7,2,5, (3U & 
                                              VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x5eU, 2U)), 
                                      VL_CONCAT_III(5,2,3, 
                                                    (3U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x5cU, 2U)), 
                                                    (7U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x59U, 3U)))));
        VL_ASSIGNSEL_WI(205,3,0x63U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x57U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x56U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x55U)))));
        VL_ASSIGNSEL_WI(205,3,0x60U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x54U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x53U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x51U)))));
        VL_ASSIGNSEL_WQ(205,49,0x2fU, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_QIQ(49,12,37, (0xfffU 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x45U, 0xcU)), 
                                      VL_CONCAT_QII(37,5,32, 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x40U, 5U)), 
                                                    VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x20U, 0x20U))));
        VL_ASSIGNSEL_WI(205,19,0x1cU, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(19,1,18, (1U 
                                                & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1bU)), 
                                      VL_CONCAT_III(18,12,6, 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0xfU, 0xcU)), (IData)(vlSelfRef.__PVT__instr0_rd_prf))));
        VL_ASSIGNSEL_WI(205,28,0U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(28,12,16, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr0_rs1_prf), (IData)(vlSelfRef.__PVT__instr0_rs2_prf)), 
                                      VL_CONCAT_III(16,6,10, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rob_tag), (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_BHSR))));
    } else {
        VL_CONCAT_WQI(96,64,32, __Vtemp_3, VL_CONCAT_QII(64,32,32, 
                                                         VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xa0U, 0x20U), 
                                                         VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x80U, 0x20U)), 
                      VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x60U, 0x20U));
        VL_ASSIGNSEL_WW(205,96,0x6dU, vlSelfRef.__PVT__pre_int_instr0_pack, __Vtemp_3);
        VL_ASSIGNSEL_WI(205,7,0x66U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(7,2,5, (3U & 
                                              VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5eU, 2U)), 
                                      VL_CONCAT_III(5,2,3, 
                                                    (3U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5cU, 2U)), 
                                                    (7U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x59U, 3U)))));
        VL_ASSIGNSEL_WI(205,3,0x63U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x57U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x56U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x55U)))));
        VL_ASSIGNSEL_WI(205,3,0x60U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x54U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x53U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x51U)))));
        VL_ASSIGNSEL_WQ(205,49,0x2fU, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_QIQ(49,12,37, (0xfffU 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x45U, 0xcU)), 
                                      VL_CONCAT_QII(37,5,32, 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x40U, 5U)), 
                                                    VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x20U, 0x20U))));
        VL_ASSIGNSEL_WI(205,19,0x1cU, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(19,1,18, (1U 
                                                & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1bU)), 
                                      VL_CONCAT_III(18,12,6, 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0xfU, 0xcU)), (IData)(vlSelfRef.__PVT__instr1_rd_prf))));
        VL_ASSIGNSEL_WI(205,28,0U, vlSelfRef.__PVT__pre_int_instr0_pack, 
                        VL_CONCAT_III(28,12,16, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr1_rs1_prf), (IData)(vlSelfRef.__PVT__instr1_rs2_prf)), 
                                      VL_CONCAT_III(16,6,10, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag), (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_BHSR))));
    }
    if (((IData)(vlSelfRef.__PVT__instr0_is_mem_op) 
         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid))) {
        VL_ASSIGNSEL_WQ(129,43,0x56U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_QII(43,32,11, VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x60U, 0x20U), 
                                      (0x7ffU & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x82U, 0xbU))));
        VL_ASSIGNSEL_WI(129,9,0x45U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.instr0_predict_result), 
                                      VL_CONCAT_III(8,7,1, (IData)(vlSelfRef.store_counter), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x58U)))));
        VL_ASSIGNSEL_WI(129,9,0x3cU, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_III(9,1,8, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1fU)), 
                                      VL_CONCAT_III(8,2,6, 
                                                    (3U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x1cU, 2U)), (IData)(vlSelfRef.__PVT__instr0_rd_prf))));
        VL_ASSIGNSEL_WQ(129,60,0U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_QIQ(60,12,48, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr0_rs1_prf), (IData)(vlSelfRef.__PVT__instr0_rs2_prf)), 
                                      VL_CONCAT_QIQ(48,6,42, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr0_rob_tag), 
                                                    VL_CONCAT_QII(42,10,32, (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_BHSR), 
                                                                  VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x80U, 0x20U)))));
        VL_ASSIGNSEL_WI(129,8,0x4eU, vlSelfRef.__PVT__pre_mem_instr0_pack, vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr0_store_set_id);
    } else {
        VL_ASSIGNSEL_WQ(129,43,0x56U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_QII(43,32,11, VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x60U, 0x20U), 
                                      (0x7ffU & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x82U, 0xbU))));
        VL_ASSIGNSEL_WI(129,9,0x45U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.instr1_predict_result), 
                                      VL_CONCAT_III(8,7,1, (IData)(vlSelfRef.store_counter), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x58U)))));
        VL_ASSIGNSEL_WI(129,9,0x3cU, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_III(9,1,8, (1U & 
                                              VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1fU)), 
                                      VL_CONCAT_III(8,2,6, 
                                                    (3U 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1cU, 2U)), (IData)(vlSelfRef.__PVT__instr1_rd_prf))));
        VL_ASSIGNSEL_WQ(129,60,0U, vlSelfRef.__PVT__pre_mem_instr0_pack, 
                        VL_CONCAT_QIQ(60,12,48, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr1_rs1_prf), (IData)(vlSelfRef.__PVT__instr1_rs2_prf)), 
                                      VL_CONCAT_QIQ(48,6,42, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag), 
                                                    VL_CONCAT_QII(42,10,32, (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_BHSR), 
                                                                  VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x80U, 0x20U)))));
        VL_ASSIGNSEL_WI(129,8,0x4eU, vlSelfRef.__PVT__pre_mem_instr0_pack, vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr1_store_set_id);
    }
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr0_rd_prf 
        = vlSelfRef.__PVT__instr0_rd_prf;
    vlSelfRef.store_next_counter = (0x7fU & VL_SEL_IIII(32, 
                                                        ((1U 
                                                          & VL_BITSEL_IWII(129, vlSelfRef.__PVT__pre_mem_instr0_pack, 0x44U))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,7, (IData)(vlSelfRef.store_counter)))
                                                          : 
                                                         VL_EXTEND_II(32,7, (IData)(vlSelfRef.store_counter))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.instr1_store_id 
        = vlSelfRef.store_next_counter;
    VL_ASSIGNSEL_WQ(129,43,0x56U, vlSelfRef.__PVT__pre_mem_instr1_pack, 
                    VL_CONCAT_QII(43,32,11, VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x60U, 0x20U), 
                                  (0x7ffU & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x82U, 0xbU))));
    VL_ASSIGNSEL_WI(129,9,0x45U, vlSelfRef.__PVT__pre_mem_instr1_pack, 
                    VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.instr1_predict_result), 
                                  VL_CONCAT_III(8,7,1, (IData)(vlSelfRef.store_next_counter), 
                                                (1U 
                                                 & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x58U)))));
    VL_ASSIGNSEL_WI(129,9,0x3cU, vlSelfRef.__PVT__pre_mem_instr1_pack, 
                    VL_CONCAT_III(9,1,8, (1U & VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1fU)), 
                                  VL_CONCAT_III(8,2,6, 
                                                (3U 
                                                 & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x1cU, 2U)), (IData)(vlSelfRef.__PVT__instr1_rd_prf))));
    VL_ASSIGNSEL_WQ(129,60,0U, vlSelfRef.__PVT__pre_mem_instr1_pack, 
                    VL_CONCAT_QIQ(60,12,48, VL_CONCAT_III(12,6,6, (IData)(vlSelfRef.__PVT__instr1_rs1_prf), (IData)(vlSelfRef.__PVT__instr1_rs2_prf)), 
                                  VL_CONCAT_QIQ(48,6,42, (IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__instr1_rob_tag), 
                                                VL_CONCAT_QII(42,10,32, (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr1_BHSR), 
                                                              VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x80U, 0x20U)))));
    VL_ASSIGNSEL_WI(129,8,0x4eU, vlSelfRef.__PVT__pre_mem_instr1_pack, vlSymsp->TOP__falco_top__core__id_stage_io_inst.instr1_store_set_id);
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__4(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr1_rs1_reg_ready = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rs1_ready;
    vlSelfRef.__PVT__instr1_rs2_reg_ready = vlSymsp->TOP__falco_top__core__rename_dispatch_stage__Busy_list.__PVT__instr1_rs2_ready;
    vlSelfRef.__PVT__instr0_rs1_operand_ready = (((IData)(vlSelfRef.__PVT__instr0_rs1_reg_ready) 
                                                  | ((2U 
                                                      != 
                                                      (3U 
                                                       & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x5eU, 2U))) 
                                                     & (~ 
                                                        VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x55U)))) 
                                                 | (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 5U, 5U))));
    vlSelfRef.__PVT__instr0_rs2_operand_ready = (((IData)(vlSelfRef.__PVT__instr0_rs2_reg_ready) 
                                                  | (((0U 
                                                       == 
                                                       (3U 
                                                        & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x5cU, 2U))) 
                                                      | (3U 
                                                         == 
                                                         (3U 
                                                          & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x5cU, 2U)))) 
                                                     & (~ 
                                                        VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0x55U)))) 
                                                 | (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr0, 0U, 5U))));
    vlSelfRef.__PVT__instr1_rs1_operand_ready = (((IData)(vlSelfRef.__PVT__instr1_rs1_reg_ready) 
                                                  | ((2U 
                                                      != 
                                                      (3U 
                                                       & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5eU, 2U))) 
                                                     & (~ 
                                                        VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x55U)))) 
                                                 | (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 5U, 5U))));
    vlSelfRef.__PVT__instr1_rs2_operand_ready = (((IData)(vlSelfRef.__PVT__instr1_rs2_reg_ready) 
                                                  | (((0U 
                                                       == 
                                                       (3U 
                                                        & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5cU, 2U))) 
                                                      | (3U 
                                                         == 
                                                         (3U 
                                                          & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x5cU, 2U)))) 
                                                     & (~ 
                                                        VL_BITSEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0x55U)))) 
                                                 | (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(192, vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__decoded_instr1, 0U, 5U))));
    vlSelfRef.__PVT__pre_int_instr1_rs1_ready = vlSelfRef.__PVT__instr1_rs1_operand_ready;
    vlSelfRef.__PVT__pre_int_instr1_rs2_ready = vlSelfRef.__PVT__instr1_rs2_operand_ready;
    vlSelfRef.__PVT__pre_mem_instr1_rs1_ready = vlSelfRef.__PVT__instr1_rs1_operand_ready;
    vlSelfRef.__PVT__pre_mem_instr1_rs2_ready = vlSelfRef.__PVT__instr1_rs2_operand_ready;
    if (((~ (IData)(vlSelfRef.__PVT__instr0_is_mem_op)) 
         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid))) {
        vlSelfRef.__PVT__pre_int_instr0_rs1_ready = vlSelfRef.__PVT__instr0_rs1_operand_ready;
        vlSelfRef.__PVT__pre_int_instr0_rs2_ready = vlSelfRef.__PVT__instr0_rs2_operand_ready;
    } else {
        vlSelfRef.__PVT__pre_int_instr0_rs1_ready = vlSelfRef.__PVT__instr1_rs1_operand_ready;
        vlSelfRef.__PVT__pre_int_instr0_rs2_ready = vlSelfRef.__PVT__instr1_rs2_operand_ready;
    }
    if (((IData)(vlSelfRef.__PVT__instr0_is_mem_op) 
         & (IData)(vlSymsp->TOP__falco_top__core__id_stage_io_inst.__PVT__instr0_valid))) {
        vlSelfRef.__PVT__pre_mem_instr0_rs1_ready = vlSelfRef.__PVT__instr0_rs1_operand_ready;
        vlSelfRef.__PVT__pre_mem_instr0_rs2_ready = vlSelfRef.__PVT__instr0_rs2_operand_ready;
    } else {
        vlSelfRef.__PVT__pre_mem_instr0_rs1_ready = vlSelfRef.__PVT__instr1_rs1_operand_ready;
        vlSelfRef.__PVT__pre_mem_instr0_rs2_ready = vlSelfRef.__PVT__instr1_rs2_operand_ready;
    }
}

VL_ATTR_COLD void Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__5(Vfalco_top_RNDS_stage* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_RNDS_stage___stl_comb__TOP__falco_top__core__rename_dispatch_stage__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LFST__issue_store = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store;
    vlSelfRef.__Vcellinp__LFST__issue_store_id = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_id;
    vlSelfRef.__Vcellinp__LFST__issue_store_set_id 
        = vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_set_id;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.__PVT__issue_store 
        = vlSelfRef.__Vcellinp__LFST__issue_store;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.__PVT__issue_store_id 
        = vlSelfRef.__Vcellinp__LFST__issue_store_id;
    vlSymsp->TOP__falco_top__core__rename_dispatch_stage__LFST.__PVT__issue_store_set_id 
        = vlSelfRef.__Vcellinp__LFST__issue_store_set_id;
}
