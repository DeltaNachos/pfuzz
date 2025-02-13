// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_decode__E1.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__fetch_in_pred_branch_w 
        = (3U & VL_SEL_IWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 0x61U, 2U));
    vlSelf->__PVT__genblk1__DOT__fetch_in_pc_w = VL_SEL_IWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 1U, 0x20U);
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__enable_muldiv_i 
        = vlSelf->__PVT__enable_muldiv_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__enable_muldiv_i 
        = vlSelf->__PVT__enable_muldiv_w;
    vlSelf->__PVT__genblk1__DOT__fetch_in_valid_w = 
        (1U & VL_BITSEL_IWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 0U));
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_raw_w 
        = VL_SEL_QWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 0x21U, 0x40U);
    vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w 
        = (1U & VL_BITSEL_IWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 0x64U));
    vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w 
        = (1U & VL_BITSEL_IWII(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q, 0x63U));
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pred_in_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_pred_branch_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pc_in_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_pc_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__push_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_valid_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__valid_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_valid_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__valid_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_valid_w;
    vlSelf->__Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w) 
           | (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w));
    vlSelf->__Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i 
        = ((IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w) 
           | (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w));
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w = 
        (((IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w) 
          | (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w))
          ? 0ULL : vlSelf->__PVT__genblk1__DOT__fetch_in_instr_raw_w);
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__fetch_fault_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__fetch_fault_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__data_in_i 
        = vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w;
    vlSelf->__Vcellinp__genblk1__DOT__u_dec0__opcode_i 
        = VL_SEL_IQII(64, vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w, 0U, 0x20U);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec1__opcode_i 
        = VL_SEL_IQII(64, vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w, 0x20U, 0x20U);
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__opcode_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_dec0__opcode_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__opcode_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_dec1__opcode_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSelf->__PVT__fetch_in_accept_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__accept_o;
    vlSelf->__PVT__fetch_out0_instr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__data0_out_o;
    vlSelf->__PVT__fetch_out1_instr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__data1_out_o;
    vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__info0_out_o;
    vlSelf->__PVT__fetch_out0_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__valid0_o;
    vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__info1_out_o;
    vlSelf->__PVT__fetch_out0_pc_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pc0_out_o;
    vlSelf->__PVT__fetch_out1_pc_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pc1_out_o;
    vlSelf->__PVT__fetch_out1_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__valid1_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__rd_valid_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__rd_valid_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__exec_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__exec_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__lsu_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__lsu_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__branch_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__branch_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__mul_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__mul_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__div_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__div_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__invalid_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__invalid_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__csr_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__PVT__csr_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__rd_valid_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__rd_valid_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__exec_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__exec_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__lsu_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__lsu_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__branch_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__branch_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__mul_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__mul_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__div_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__div_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__invalid_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__invalid_o;
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__csr_o 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__PVT__csr_o;
    vlSelf->__PVT__fetch_out0_instr_branch_o = (1U 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 6U));
    vlSelf->__PVT__fetch_out0_instr_invalid_o = (1U 
                                                 & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 9U));
    vlSelf->__PVT__fetch_out0_instr_div_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 4U));
    vlSelf->__PVT__fetch_out0_instr_rd_valid_o = (1U 
                                                  & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 2U));
    vlSelf->__PVT__fetch_out0_instr_exec_o = (1U & 
                                              VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 8U));
    vlSelf->__PVT__fetch_out0_instr_csr_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 3U));
    vlSelf->__PVT__fetch_out0_instr_lsu_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 7U));
    vlSelf->__PVT__fetch_out0_instr_mul_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 5U));
    vlSelf->__PVT__fetch_out0_fault_page_o = (1U & 
                                              VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 1U));
    vlSelf->__PVT__fetch_out0_fault_fetch_o = (1U & 
                                               VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o), 0U));
    vlSelf->__PVT__fetch_out1_instr_invalid_o = (1U 
                                                 & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 9U));
    vlSelf->__PVT__fetch_out1_instr_div_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 4U));
    vlSelf->__PVT__fetch_out1_instr_csr_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 3U));
    vlSelf->__PVT__fetch_out1_instr_rd_valid_o = (1U 
                                                  & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 2U));
    vlSelf->__PVT__fetch_out1_instr_branch_o = (1U 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 6U));
    vlSelf->__PVT__fetch_out1_instr_exec_o = (1U & 
                                              VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 8U));
    vlSelf->__PVT__fetch_out1_instr_lsu_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 7U));
    vlSelf->__PVT__fetch_out1_instr_mul_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 5U));
    vlSelf->__PVT__fetch_out1_fault_page_o = (1U & 
                                              VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 1U));
    vlSelf->__PVT__fetch_out1_fault_fetch_o = (1U & 
                                               VL_BITSEL_IIII(10, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o), 0U));
    VL_ASSIGNSEL_II(8,4,4U, vlSelf->__PVT__genblk1__DOT__info0_in_w, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__invalid_o), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__exec_o), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__lsu_o), (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__branch_o)))));
    VL_ASSIGNSEL_II(8,4,0U, vlSelf->__PVT__genblk1__DOT__info0_in_w, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__mul_o), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__div_o), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__csr_o), (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec0__rd_valid_o)))));
    VL_ASSIGNSEL_II(8,4,4U, vlSelf->__PVT__genblk1__DOT__info1_in_w, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__invalid_o), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__exec_o), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__lsu_o), (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__branch_o)))));
    VL_ASSIGNSEL_II(8,4,0U, vlSelf->__PVT__genblk1__DOT__info1_in_w, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__mul_o), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__div_o), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__csr_o), (IData)(vlSelf->__Vcellout__genblk1__DOT__u_dec1__rd_valid_o)))));
    vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info0_in_i 
        = VL_CONCAT_III(10,8,2, (IData)(vlSelf->__PVT__genblk1__DOT__info0_in_w), 
                        VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w), (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w)));
    vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info1_in_i 
        = VL_CONCAT_III(10,8,2, (IData)(vlSelf->__PVT__genblk1__DOT__info1_in_w), 
                        VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w), (IData)(vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w)));
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__info0_in_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__info1_in_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info1_in_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__flush_i 
        = vlSelf->__PVT__branch_request_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pop0_i 
        = vlSelf->__PVT__fetch_out0_accept_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__pop1_i 
        = vlSelf->__PVT__fetch_out1_accept_i;
}
