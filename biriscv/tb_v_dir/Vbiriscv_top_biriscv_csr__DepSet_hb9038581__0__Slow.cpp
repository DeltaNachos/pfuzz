// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_csr.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__0(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__0\n"); );
    // Body
    vlSelf->__PVT__mmu_flush_o = vlSelf->__PVT__tlb_flush_q;
    vlSelf->__PVT__csr_result_e1_value_o = vlSelf->__PVT__rd_result_e1_q;
    vlSelf->__PVT__csr_result_e1_write_o = vlSelf->__PVT__rd_valid_e1_q;
    vlSelf->__PVT__csr_result_e1_wdata_o = vlSelf->__PVT__csr_wdata_e1_q;
    vlSelf->__PVT__csr_result_e1_exception_o = vlSelf->__PVT__exception_e1_q;
    vlSelf->__PVT__branch_csr_pc_o = vlSelf->__PVT__branch_target_q;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__misa_i 
        = vlSelf->__PVT__misa_w;
    vlSelf->__PVT__ifence_o = vlSelf->__PVT__ifence_q;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__timer_intr_i 
        = vlSelf->__PVT__timer_irq_w;
    vlSelf->__PVT__take_interrupt_o = vlSelf->__PVT__take_interrupt_q;
    vlSelf->__PVT__branch_csr_request_o = vlSelf->__PVT__branch_q;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__cpu_id_i 
        = vlSelf->__PVT__cpu_id_i;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__ext_intr_i 
        = vlSelf->__PVT__intr_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__1(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__1\n"); );
    // Body
    vlSelf->__PVT__satp_reg_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__satp_o;
    vlSelf->__PVT__current_priv_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__priv_o;
    vlSelf->__PVT__status_reg_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__status_o;
    vlSelf->__PVT__interrupt_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__interrupt_o;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_wdata_i 
        = vlSelf->__PVT__csr_writeback_wdata_i;
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = ((IData)(vlSelf->__PVT__csr_writeback_write_i)
                                                   ? (IData)(vlSelf->__PVT__csr_writeback_waddr_i)
                                                   : 0U);
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__exception_pc_i 
        = vlSelf->__PVT__csr_writeback_exception_pc_i;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__exception_i 
        = vlSelf->__PVT__csr_writeback_exception_i;
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__exception_addr_i 
        = vlSelf->__PVT__csr_writeback_exception_addr_i;
    vlSelf->__PVT__mmu_satp_o = vlSelf->__PVT__satp_reg_w;
    vlSelf->__PVT__branch_csr_priv_o = ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__satp_reg_w, 0x1fU))
                                         ? (IData)(vlSelf->__PVT__current_priv_w)
                                         : 3U);
    vlSelf->__PVT__mmu_mxr_o = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x13U));
    vlSelf->__PVT__mmu_sum_o = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x12U));
    vlSelf->__PVT__mmu_priv_d_o = (3U & ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x11U))
                                          ? VL_SEL_IIII(32, vlSelf->__PVT__status_reg_w, 0xbU, 2U)
                                          : (IData)(vlSelf->__PVT__current_priv_w)));
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_waddr_i 
        = vlSelf->__Vcellinp__u_csrfile__csr_waddr_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__2(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__2\n"); );
    // Body
    vlSelf->__PVT__csr_branch_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_branch_o;
    vlSelf->__PVT__csr_target_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_target_o;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__3(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__3\n"); );
    // Body
    vlSelf->__PVT__eret_priv_w = (3U & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1cU, 2U));
    vlSelf->__Vcellinp__u_csrfile__csr_raddr_i = (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU));
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_raddr_i 
        = vlSelf->__Vcellinp__u_csrfile__csr_raddr_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__4(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__4\n"); );
    // Body
    vlSelf->__PVT__ecall_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                              & (0x73U == vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__ebreak_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x100073U == vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__wfi_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                            & (0x10500073U == (0xffff8fffU 
                                               & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__fence_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                              & (0xfU == (0x707fU & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__sfence_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x12000073U == (0xfe007fffU 
                                                  & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__ifence_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x100fU == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_ren_i 
        = vlSelf->__PVT__opcode_valid_i;
    vlSelf->__PVT__eret_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                             & (0x200073U == (0xcfffffffU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrw_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                              & (0x1073U == (0x707fU 
                                             & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrs_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                              & (0x2073U == (0x707fU 
                                             & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrc_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                              & (0x3073U == (0x707fU 
                                             & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrwi_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x5073U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrsi_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x6073U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csrrci_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                               & (0x7073U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__csr_rdata_w = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__csr_rdata_o;
    vlSelf->__PVT__eret_fault_w = ((IData)(vlSelf->__PVT__eret_w) 
                                   & ((IData)(vlSelf->__PVT__current_priv_w) 
                                      < (IData)(vlSelf->__PVT__eret_priv_w)));
    vlSelf->__PVT__set_r = ((((IData)(vlSelf->__PVT__csrrw_w) 
                              | (IData)(vlSelf->__PVT__csrrs_w)) 
                             | (IData)(vlSelf->__PVT__csrrwi_w)) 
                            | (IData)(vlSelf->__PVT__csrrsi_w));
    vlSelf->__PVT__clr_r = ((((IData)(vlSelf->__PVT__csrrw_w) 
                              | (IData)(vlSelf->__PVT__csrrc_w)) 
                             | (IData)(vlSelf->__PVT__csrrwi_w)) 
                            | (IData)(vlSelf->__PVT__csrrci_w));
    vlSelf->__PVT__csr_priv_r = (3U & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1cU, 2U));
    vlSelf->__PVT__csr_readonly_r = (3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1eU, 2U)));
    vlSelf->__PVT__csr_write_r = (((0U != (IData)(vlSelf->__PVT__opcode_ra_idx_i)) 
                                   | (IData)(vlSelf->__PVT__csrrw_w)) 
                                  | (IData)(vlSelf->__PVT__csrrwi_w));
    vlSelf->__PVT__data_r = ((((IData)(vlSelf->__PVT__csrrwi_w) 
                               | (IData)(vlSelf->__PVT__csrrsi_w)) 
                              | (IData)(vlSelf->__PVT__csrrci_w))
                              ? VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__opcode_ra_idx_i))
                              : vlSelf->__PVT__opcode_ra_operand_i);
    vlSelf->__PVT__csr_fault_r = (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                   & ((IData)(vlSelf->__PVT__set_r) 
                                      | (IData)(vlSelf->__PVT__clr_r))) 
                                  & (((IData)(vlSelf->__PVT__csr_write_r) 
                                      & (IData)(vlSelf->__PVT__csr_readonly_r)) 
                                     | ((IData)(vlSelf->__PVT__current_priv_w) 
                                        < (IData)(vlSelf->__PVT__csr_priv_r))));
    vlSelf->__PVT__satp_update_w = ((((IData)(vlSelf->__PVT__opcode_valid_i) 
                                      & ((IData)(vlSelf->__PVT__set_r) 
                                         | (IData)(vlSelf->__PVT__clr_r))) 
                                     & (IData)(vlSelf->__PVT__csr_write_r)) 
                                    & (0x180U == (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
}
