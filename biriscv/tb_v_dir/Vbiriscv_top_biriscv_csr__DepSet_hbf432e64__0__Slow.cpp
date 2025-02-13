// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_csr.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___eval_initial__TOP__biriscv_top__u_core__u_csr(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___eval_initial__TOP__biriscv_top__u_core__u_csr\n"); );
    // Body
    vlSelf->__PVT__timer_irq_w = 0U;
    vlSelf->__PVT__misa_w = 0x40001100U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___ctor_var_reset(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_write_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_writeback_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_writeback_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_exception_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__csr_writeback_exception_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_writeback_exception_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interrupt_inhibit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_result_e1_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_e1_write_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_result_e1_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_e1_exception_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__branch_csr_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_csr_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_csr_priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__take_interrupt_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_priv_d_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mmu_sum_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_mxr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmu_satp_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ecall_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ebreak_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__eret_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__eret_priv_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csrrw_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrs_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrc_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrwi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrsi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrrci_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fence_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sfence_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__current_priv_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_priv_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_readonly_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_write_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__set_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_fault_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_update_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_irq_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__misa_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_rdata_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_branch_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_target_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interrupt_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__status_reg_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_reg_w = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__Vcellinp__u_csrfile__csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__rd_valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_result_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_wdata_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__eret_fault_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__take_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tlb_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifence_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_target_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rd_valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rd_result_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__csr_wdata_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__take_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tlb_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ifence_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_target_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_q = VL_RAND_RESET_I(1);
}
