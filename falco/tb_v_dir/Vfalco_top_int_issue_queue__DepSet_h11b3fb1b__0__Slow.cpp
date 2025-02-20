// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_int_issue_queue.h"

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
    VL_ASSIGN_W(205,vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack);
    VL_ASSIGN_W(205,vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_pack, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack);
    vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid;
    vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_valid 
        = vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSelfRef.__PVT__entry_is_muldiv_instr[0U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [0U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[1U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [1U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[2U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [2U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[3U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [3U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[4U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [4U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[5U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [5U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[6U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [6U], 0x65U));
    vlSelfRef.__PVT__entry_is_muldiv_instr[7U] = (1U 
                                                  & VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [7U], 0x65U));
    vlSelfRef.__PVT__entry_is_csr_instr[0U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [0U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[1U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [1U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[2U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [2U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[3U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [3U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[4U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [4U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[5U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [5U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[6U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [6U], 0x60U));
    vlSelfRef.__PVT__entry_is_csr_instr[7U] = (1U & 
                                               VL_BITSEL_IWII(205, 
                                                              vlSelfRef.__PVT__issue_slot
                                                              [7U], 0x60U));
    vlSelfRef.__PVT__entry_is_ctrl_instr[0U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [0U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [0U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [0U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[1U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [1U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [1U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [1U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[2U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [2U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [2U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [2U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[3U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [3U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [3U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [3U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[4U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [4U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [4U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [4U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[5U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [5U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [5U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [5U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[6U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [6U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [6U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [6U], 0x62U)));
    vlSelfRef.__PVT__entry_is_ctrl_instr[7U] = (1U 
                                                & ((VL_BITSEL_IWII(205, 
                                                                   vlSelfRef.__PVT__issue_slot
                                                                   [7U], 0x63U) 
                                                    | VL_BITSEL_IWII(205, 
                                                                     vlSelfRef.__PVT__issue_slot
                                                                     [7U], 0x61U)) 
                                                   | VL_BITSEL_IWII(205, 
                                                                    vlSelfRef.__PVT__issue_slot
                                                                    [7U], 0x62U)));
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid 
        = (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid) 
            & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x63U))) 
           & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid 
        = (((IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid) 
            & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x63U))) 
           & (~ VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd 
        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U));
    vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd 
        = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_busy 
        = vlSelfRef.__PVT__muldiv_busy;
    VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr1_pack, vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_pack);
    VL_ASSIGN_W(205,vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr0_pack, vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_pack);
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr1_valid 
        = vlSelfRef.__Vcellinp__Replay_Unit__issue_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__issue_instr0_valid 
        = vlSelfRef.__Vcellinp__Replay_Unit__issue_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[0U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[1U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[2U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[3U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[4U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[5U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[6U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_muldiv[7U] 
        = vlSelfRef.__PVT__entry_is_muldiv_instr[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[0U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[1U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[2U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[3U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[4U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[5U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[6U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_csr_instr[7U] 
        = vlSelfRef.__PVT__entry_is_csr_instr[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[0U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[1U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[2U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[3U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[4U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[5U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[6U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_ctrl_instr[7U] 
        = vlSelfRef.__PVT__entry_is_ctrl_instr[7U];
    vlSelfRef.__PVT__issue_rs1[0U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [0U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[1U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [1U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[2U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [2U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[3U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [3U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[4U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [4U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[5U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [5U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[6U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [6U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs1[7U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [7U], 0x16U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x16U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[0U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [0U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[1U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [1U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[2U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [2U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[3U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [3U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[4U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [4U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[5U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [5U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[6U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [6U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.__PVT__issue_rs2[7U] = ((((0x3fU & VL_SEL_IWII(205, 
                                                             vlSelfRef.__PVT__issue_slot
                                                             [7U], 0x10U, 6U)) 
                                        == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                       & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                                      | (((0x3fU & 
                                           VL_SEL_IWII(205, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x10U, 6U)) 
                                          == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                         & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_ready[0U] = ((vlSelfRef.rs1_ready
                                  [0U] | vlSelfRef.__PVT__issue_rs1
                                  [0U]) & (vlSelfRef.rs2_ready
                                           [0U] | vlSelfRef.__PVT__issue_rs2
                                           [0U]));
    vlSelfRef.issue_ready[1U] = ((vlSelfRef.rs1_ready
                                  [1U] | vlSelfRef.__PVT__issue_rs1
                                  [1U]) & (vlSelfRef.rs2_ready
                                           [1U] | vlSelfRef.__PVT__issue_rs2
                                           [1U]));
    vlSelfRef.issue_ready[2U] = ((vlSelfRef.rs1_ready
                                  [2U] | vlSelfRef.__PVT__issue_rs1
                                  [2U]) & (vlSelfRef.rs2_ready
                                           [2U] | vlSelfRef.__PVT__issue_rs2
                                           [2U]));
    vlSelfRef.issue_ready[3U] = ((vlSelfRef.rs1_ready
                                  [3U] | vlSelfRef.__PVT__issue_rs1
                                  [3U]) & (vlSelfRef.rs2_ready
                                           [3U] | vlSelfRef.__PVT__issue_rs2
                                           [3U]));
    vlSelfRef.issue_ready[4U] = ((vlSelfRef.rs1_ready
                                  [4U] | vlSelfRef.__PVT__issue_rs1
                                  [4U]) & (vlSelfRef.rs2_ready
                                           [4U] | vlSelfRef.__PVT__issue_rs2
                                           [4U]));
    vlSelfRef.issue_ready[5U] = ((vlSelfRef.rs1_ready
                                  [5U] | vlSelfRef.__PVT__issue_rs1
                                  [5U]) & (vlSelfRef.rs2_ready
                                           [5U] | vlSelfRef.__PVT__issue_rs2
                                           [5U]));
    vlSelfRef.issue_ready[6U] = ((vlSelfRef.rs1_ready
                                  [6U] | vlSelfRef.__PVT__issue_rs1
                                  [6U]) & (vlSelfRef.rs2_ready
                                           [6U] | vlSelfRef.__PVT__issue_rs2
                                           [6U]));
    vlSelfRef.issue_ready[7U] = ((vlSelfRef.rs1_ready
                                  [7U] | vlSelfRef.__PVT__issue_rs1
                                  [7U]) & (vlSelfRef.rs2_ready
                                           [7U] | vlSelfRef.__PVT__issue_rs2
                                           [7U]));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_ready[7U] 
        = vlSelfRef.issue_ready[7U];
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__cur_lsu_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [0U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__64__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[0U] = vlSelfRef.__Vfunc_InstrIsCritcal__64__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [1U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__65__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[1U] = vlSelfRef.__Vfunc_InstrIsCritcal__65__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [2U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__66__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[2U] = vlSelfRef.__Vfunc_InstrIsCritcal__66__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [3U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__67__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[3U] = vlSelfRef.__Vfunc_InstrIsCritcal__67__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [4U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__68__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[4U] = vlSelfRef.__Vfunc_InstrIsCritcal__68__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [5U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__69__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[5U] = vlSelfRef.__Vfunc_InstrIsCritcal__69__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [6U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__70__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[6U] = vlSelfRef.__Vfunc_InstrIsCritcal__70__Vfuncout;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag 
        = vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag 
        = vlSymsp->TOP__falco_top__core__commit_stage_io_inst.__PVT__cur_commit_rob_tag;
    vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag 
        = (0x3fU & VL_SEL_IWII(205, vlSelfRef.__PVT__issue_slot
                               [7U], 0xaU, 6U));
    vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout 
        = (((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
            != (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag)) 
           & (((((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                 > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag)) 
                ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__lsu_rob_tag) 
                   > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
               ^ ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                  > (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))) 
              | ((IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__instr_rob_tag) 
                 == (IData)(vlSelfRef.__Vfunc_InstrIsCritcal__71__commit_rob_tag))));
    vlSelfRef.__PVT__entry_is_critical[7U] = vlSelfRef.__Vfunc_InstrIsCritcal__71__Vfuncout;
    vlSelfRef.__PVT__replay_issue_instr0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr0_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr0_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr0_pack);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__wake_up_stall_issue_instr0_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr0_pack);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr1_pack);
    vlSelfRef.__PVT__replay_issue_instr1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__replay_issue_instr1_pack, vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_instr1_pack);
    vlSelfRef.__PVT__replay_issue_first = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_issue_first;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__PVT__muldiv_issuable = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__muldiv_issuable;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__cur_lsu_tag 
        = vlSelfRef.__Vcellinp__Replay_Unit__cur_lsu_tag;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__cur_commit_tag 
        = vlSelfRef.__Vcellinp__Replay_Unit__cur_commit_tag;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[0U] 
        = vlSelfRef.__PVT__entry_is_critical[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[1U] 
        = vlSelfRef.__PVT__entry_is_critical[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[2U] 
        = vlSelfRef.__PVT__entry_is_critical[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[3U] 
        = vlSelfRef.__PVT__entry_is_critical[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[4U] 
        = vlSelfRef.__PVT__entry_is_critical[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[5U] 
        = vlSelfRef.__PVT__entry_is_critical[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[6U] 
        = vlSelfRef.__PVT__entry_is_critical[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__entry_is_critical[7U] 
        = vlSelfRef.__PVT__entry_is_critical[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__replay_issue_first 
        = vlSelfRef.__PVT__replay_issue_first;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_flush_BCAST;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_failed_to_issue_muldiv 
        = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
            & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
           & (~ (IData)(vlSelfRef.__PVT__muldiv_issuable)));
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_sequent__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__icache_miss 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__icache_miss_stall_branch;
    vlSelfRef.__PVT__wake_up_stall_issue_instr0_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr0_valid;
    vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid 
        = vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__wake_up_stall_issue_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__icache_miss 
        = vlSelfRef.__Vcellinp__INT_selector__icache_miss;
    vlSelfRef.__PVT__replay_fifo_issue_muldiv = (((IData)(vlSelfRef.__PVT__replay_issue_instr1_valid) 
                                                  & VL_BITSEL_IWII(205, vlSelfRef.__PVT__replay_issue_instr1_pack, 0x65U)) 
                                                 | ((IData)(vlSelfRef.__PVT__wake_up_stall_issue_instr1_valid) 
                                                    & VL_BITSEL_IWII(205, vlSelfRef.__PVT__wake_up_stall_issue_instr1_pack, 0x65U)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__replay_issue_muldiv 
        = vlSelfRef.__PVT__replay_fifo_issue_muldiv;
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__0(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__INT_selector__recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__recovery_flush 
        = vlSelfRef.__Vcellinp__INT_selector__recovery_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__branch_miss_flush 
        = vlSelfRef.__Vcellinp__INT_selector__branch_miss_flush;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__dispatch_instr1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
    vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr1_valid;
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__1(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__int_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__2(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__INT_selector__non_posion_issue 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall));
    vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__INT_selector__issue_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__load_wake_up_kill 
        = vlSelfRef.__Vcellinp__INT_selector__load_wake_up_kill;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__non_posion_issue 
        = vlSelfRef.__Vcellinp__INT_selector__non_posion_issue;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__Replay_Unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_replay 
        = vlSelfRef.__Vcellinp__INT_selector__issue_replay;
    vlSymsp->TOP__falco_top__core__INT_IQ__Replay_Unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__Replay_Unit__replay_muldiv_stall;
}

VL_ATTR_COLD void Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__3(Vfalco_top_int_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_int_issue_queue___stl_comb__TOP__falco_top__core__INT_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0;
    vlSelfRef.__PVT__issue_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1;
    vlSelfRef.__PVT__issue_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx0_valid;
    vlSelfRef.__PVT__issue_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector.__PVT__issue_slot_idx1_valid;
}
