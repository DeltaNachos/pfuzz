// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_csr.h"

VL_INLINE_OPT void Vrv32im_top_riscv_csr___ico_sequent__TOP__rv32im_top__core__u_csr__0(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___ico_sequent__TOP__rv32im_top__core__u_csr__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__1(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__1\n"); );
    // Body
    vlSelf->__PVT__satp_reg_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__satp_o;
    vlSelf->__PVT__current_priv_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__priv_o;
    vlSelf->__PVT__status_reg_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__status_o;
    vlSelf->__PVT__interrupt_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__interrupt_o;
    vlSelf->__PVT__mmu_satp_o = vlSelf->__PVT__satp_reg_w;
    vlSelf->__PVT__branch_csr_priv_o = ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__satp_reg_w, 0x1fU))
                                         ? (IData)(vlSelf->__PVT__current_priv_w)
                                         : 3U);
    vlSelf->__PVT__mmu_mxr_o = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x13U));
    vlSelf->__PVT__mmu_sum_o = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x12U));
    vlSelf->__PVT__mmu_priv_d_o = (3U & ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__status_reg_w, 0x11U))
                                          ? VL_SEL_IIII(32, vlSelf->__PVT__status_reg_w, 0xbU, 2U)
                                          : (IData)(vlSelf->__PVT__current_priv_w)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__2(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__2\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__3(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__3\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_wdata_i 
        = vlSelf->__PVT__csr_writeback_wdata_i;
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = ((IData)(vlSelf->__PVT__csr_writeback_write_i)
                                                   ? (IData)(vlSelf->__PVT__csr_writeback_waddr_i)
                                                   : 0U);
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__exception_pc_i 
        = vlSelf->__PVT__csr_writeback_exception_pc_i;
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__exception_i 
        = vlSelf->__PVT__csr_writeback_exception_i;
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__exception_addr_i 
        = vlSelf->__PVT__csr_writeback_exception_addr_i;
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_waddr_i 
        = vlSelf->__Vcellinp__u_csrfile__csr_waddr_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__4(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__4\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__ext_intr_i 
        = vlSelf->__PVT__intr_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__5(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_sequent__TOP__rv32im_top__core__u_csr__5\n"); );
    // Body
    vlSelf->__PVT__eret_priv_w = (3U & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1cU, 2U));
    vlSelf->__Vcellinp__u_csrfile__csr_raddr_i = (0xfffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU));
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_raddr_i 
        = vlSelf->__Vcellinp__u_csrfile__csr_raddr_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__0(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_branch_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_branch_o;
    vlSelf->__PVT__csr_target_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_target_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__1(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr_rdata_w = vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_rdata_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__2(Vrv32im_top_riscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_csr___nba_comb__TOP__rv32im_top__core__u_csr__2\n"); );
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
    vlSymsp->TOP__rv32im_top__core__u_csr__u_csrfile.__PVT__csr_ren_i 
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
    vlSelf->__PVT__eret_fault_w = ((IData)(vlSelf->__PVT__eret_w) 
                                   & ((IData)(vlSelf->__PVT__current_priv_w) 
                                      < (IData)(vlSelf->__PVT__eret_priv_w)));
}
