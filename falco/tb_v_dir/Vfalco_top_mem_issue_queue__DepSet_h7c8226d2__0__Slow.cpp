// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_mem_issue_queue.h"

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(129,vlSelfRef.__Vcellinp__replay_unit__issue_instr_pack, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack);
    vlSelfRef.__Vcellinp__replay_unit__issue_instr_valid 
        = vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid;
    vlSelfRef.entry_is_store[0U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x44U));
    vlSelfRef.entry_is_store[1U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x44U));
    vlSelfRef.entry_is_store[2U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x44U));
    vlSelfRef.entry_is_store[3U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x44U));
    vlSelfRef.entry_is_store[4U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x44U));
    vlSelfRef.entry_is_store[5U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x44U));
    vlSelfRef.entry_is_store[6U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x44U));
    vlSelfRef.entry_is_store[7U] = (1U & VL_BITSEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x44U));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [0U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [1U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [2U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [3U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [4U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [5U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [6U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.cur_depvec, (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              (vlSelfRef.valid
                                                               [7U]
                                                                ? 1U
                                                                : 0U), 0U)));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.issue_ready[0U] = (((vlSelfRef.valid[0U] 
                                   & vlSelfRef.rs1_ready
                                   [0U]) & vlSelfRef.rs2_ready
                                  [0U]) & (0U == vlSelfRef.depvec
                                           [0U]));
    vlSelfRef.issue_ready[1U] = (((vlSelfRef.valid[1U] 
                                   & vlSelfRef.rs1_ready
                                   [1U]) & vlSelfRef.rs2_ready
                                  [1U]) & (0U == vlSelfRef.depvec
                                           [1U]));
    vlSelfRef.issue_ready[2U] = (((vlSelfRef.valid[2U] 
                                   & vlSelfRef.rs1_ready
                                   [2U]) & vlSelfRef.rs2_ready
                                  [2U]) & (0U == vlSelfRef.depvec
                                           [2U]));
    vlSelfRef.issue_ready[3U] = (((vlSelfRef.valid[3U] 
                                   & vlSelfRef.rs1_ready
                                   [3U]) & vlSelfRef.rs2_ready
                                  [3U]) & (0U == vlSelfRef.depvec
                                           [3U]));
    vlSelfRef.issue_ready[4U] = (((vlSelfRef.valid[4U] 
                                   & vlSelfRef.rs1_ready
                                   [4U]) & vlSelfRef.rs2_ready
                                  [4U]) & (0U == vlSelfRef.depvec
                                           [4U]));
    vlSelfRef.issue_ready[5U] = (((vlSelfRef.valid[5U] 
                                   & vlSelfRef.rs1_ready
                                   [5U]) & vlSelfRef.rs2_ready
                                  [5U]) & (0U == vlSelfRef.depvec
                                           [5U]));
    vlSelfRef.issue_ready[6U] = (((vlSelfRef.valid[6U] 
                                   & vlSelfRef.rs1_ready
                                   [6U]) & vlSelfRef.rs2_ready
                                  [6U]) & (0U == vlSelfRef.depvec
                                           [6U]));
    vlSelfRef.issue_ready[7U] = (((vlSelfRef.valid[7U] 
                                   & vlSelfRef.rs1_ready
                                   [7U]) & vlSelfRef.rs2_ready
                                  [7U]) & (0U == vlSelfRef.depvec
                                           [7U]));
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1 
        = vlSelfRef.__PVT__dispatch_slot_idx1;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0 
        = vlSelfRef.__PVT__dispatch_slot_idx0;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[0U] 
        = vlSelfRef.valid[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[1U] 
        = vlSelfRef.valid[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[2U] 
        = vlSelfRef.valid[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[3U] 
        = vlSelfRef.valid[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[4U] 
        = vlSelfRef.valid[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[5U] 
        = vlSelfRef.valid[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[6U] 
        = vlSelfRef.valid[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__slot_valid[7U] 
        = vlSelfRef.valid[7U];
    vlSelfRef.issue_rs1[0U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [0U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[1U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [1U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[2U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [2U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[3U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [3U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[4U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [4U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[5U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [5U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[6U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [6U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs1[7U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [7U], 0x36U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x36U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[0U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [0U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [0U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[1U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [1U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [1U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[2U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [2U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [2U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[3U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [3U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [3U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[4U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [4U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [4U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[5U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [5U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [5U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[6U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [6U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [6U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    vlSelfRef.issue_rs2[7U] = ((((0x3fU & VL_SEL_IWII(129, 
                                                      vlSelfRef.__PVT__issue_slot
                                                      [7U], 0x30U, 6U)) 
                                 == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd)) 
                                & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu0_rd_valid)) 
                               | (((0x3fU & VL_SEL_IWII(129, 
                                                        vlSelfRef.__PVT__issue_slot
                                                        [7U], 0x30U, 6U)) 
                                   == (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd)) 
                                  & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__issue_alu1_rd_valid)));
    VL_ASSIGN_W(129,vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__issue_instr_pack, vlSelfRef.__Vcellinp__replay_unit__issue_instr_pack);
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__issue_instr_valid 
        = vlSelfRef.__Vcellinp__replay_unit__issue_instr_valid;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[0U] 
        = vlSelfRef.issue_ready[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[1U] 
        = vlSelfRef.issue_ready[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[2U] 
        = vlSelfRef.issue_ready[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[3U] 
        = vlSelfRef.issue_ready[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[4U] 
        = vlSelfRef.issue_ready[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[5U] 
        = vlSelfRef.issue_ready[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[6U] 
        = vlSelfRef.issue_ready[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_ready[7U] 
        = vlSelfRef.issue_ready[7U];
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replay_issue_instr_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_issue_instr_valid;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__replay_issue_instr_pack, vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_issue_instr_pack);
    vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    VL_ASSIGNBIT_II(0U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [0U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [1U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [2U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [3U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [4U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [5U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__5__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [6U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.flush_vec, (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                = (0x3fU & VL_SEL_IWII(129, 
                                                       vlSelfRef.__PVT__issue_slot
                                                       [7U], 0x2aU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout))
                                                               ? 1U
                                                               : 0U), 0U)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__rst 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_flush_BCAST 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_flush_BCAST;
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_sequent__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx;
    vlSelfRef.issue_flush_vec = (0xffU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__issue_slot_idx)));
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__0(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dispatch_instr1_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx1_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSelfRef.__Vcellinp__replay_unit__recovery_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
    vlSelfRef.__PVT__dispatch_instr0_valid = (((IData)(vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0_valid) 
                                               & (IData)(vlSelfRef.__PVT__allocatable_slot_idx0_valid_reg)) 
                                              & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__recovery_stall 
        = vlSelfRef.__Vcellinp__replay_unit__recovery_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx1_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
    vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__dispatch_slot_idx0_valid 
        = vlSelfRef.__PVT__dispatch_instr0_valid;
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__1(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx0_valid;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__empty_entry_finder.__PVT__allocatable_slot_idx1_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr0_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx0_valid;
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_iq_instr1_check_top 
        = vlSelfRef.__PVT__allocatable_slot_idx1_valid;
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__2(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed;
    vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall;
    vlSelfRef.__Vcellinp__replay_unit__load_depend_replay 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay;
    vlSelfRef.__PVT__issue_lock = (((((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                      | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__MEM_IQ_stall)) 
                                     | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                                    | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall)) 
                                   | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_depend_replay));
    vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__replay_muldiv_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_predict_failed 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_predict_failed;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_wake_up_failed_stall 
        = vlSelfRef.__Vcellinp__replay_unit__load_wake_up_failed_stall;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__load_depend_replay 
        = vlSelfRef.__Vcellinp__replay_unit__load_depend_replay;
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_lock 
        = vlSelfRef.__PVT__issue_lock;
    vlSymsp->TOP__falco_top__core__MEM_IQ__replay_unit.__PVT__replay_muldiv_stall 
        = vlSelfRef.__Vcellinp__replay_unit__replay_muldiv_stall;
}

VL_ATTR_COLD void Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__3(Vfalco_top_mem_issue_queue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_issue_queue___stl_comb__TOP__falco_top__core__MEM_IQ__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector.__PVT__issue_slot_idx_valid;
    vlSelfRef.instr0_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec)) 
                                                         & (~ 
                                                            VL_EXTEND_II(32,8, (IData)(vlSelfRef.issue_flush_vec))))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack0, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.cur_depvec))), 0U, 8U)));
    vlSelfRef.instr0_depvec_ori = ((IData)(vlSelfRef.__PVT__issue_slot_idx_valid)
                                    ? ((IData)(vlSelfRef.cur_depvec) 
                                       & (~ (IData)(vlSelfRef.issue_flush_vec)))
                                    : (IData)(vlSelfRef.cur_depvec));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store 
        = (1U & VL_BITSEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(129, 
                                                                           vlSelfRef.__PVT__issue_slot
                                                                           [vlSelfRef.__PVT__issue_slot_idx], 0x44U)))), 0U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_id 
        = (0x7fU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,7, 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x46U, 7U)))), 0U, 7U));
    vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__issue_store_set_id 
        = (0xffU & VL_SEL_IIII(32, ((1U & ((IData)(vlSelfRef.__PVT__issue_lock) 
                                           | (~ (IData)(vlSelfRef.__PVT__issue_slot_idx_valid))))
                                     ? 0U : VL_EXTEND_II(32,8, 
                                                         (0xffU 
                                                          & VL_SEL_IWII(129, 
                                                                        vlSelfRef.__PVT__issue_slot
                                                                        [vlSelfRef.__PVT__issue_slot_idx], 0x4eU, 8U)))), 0U, 8U));
    vlSelfRef.instr1_depvec = (0xffU & ((IData)(vlSelfRef.__PVT__dispatch_instr0_valid)
                                         ? VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        (VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori)) 
                                                         | ((IData)(1U) 
                                                            << (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)))), 0U, 8U)
                                         : VL_SEL_IIII(32, 
                                                       ((1U 
                                                         & (VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x4dU) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__rnds_stage_io_inst.__PVT__mem_pack1, 0x44U))))
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,8, (IData)(vlSelfRef.instr0_depvec_ori))), 0U, 8U)));
}
