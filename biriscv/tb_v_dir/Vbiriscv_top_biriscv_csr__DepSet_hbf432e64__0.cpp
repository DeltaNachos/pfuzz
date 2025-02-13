// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_csr.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__1(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__1\n"); );
    // Body
    vlSelf->__Vdly__reset_q = vlSelf->__PVT__reset_q;
    vlSelf->__Vdly__tlb_flush_q = vlSelf->__PVT__tlb_flush_q;
    vlSelf->__Vdly__ifence_q = vlSelf->__PVT__ifence_q;
    vlSelf->__Vdly__take_interrupt_q = vlSelf->__PVT__take_interrupt_q;
    vlSelf->__Vdly__exception_e1_q = vlSelf->__PVT__exception_e1_q;
    vlSelf->__Vdly__csr_wdata_e1_q = vlSelf->__PVT__csr_wdata_e1_q;
    vlSelf->__Vdly__rd_result_e1_q = vlSelf->__PVT__rd_result_e1_q;
    vlSelf->__Vdly__rd_valid_e1_q = vlSelf->__PVT__rd_valid_e1_q;
    vlSelf->__Vdly__branch_target_q = vlSelf->__PVT__branch_target_q;
    vlSelf->__Vdly__branch_q = vlSelf->__PVT__branch_q;
    vlSelf->__Vdly__tlb_flush_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                   & ((IData)(vlSelf->__PVT__satp_update_w) 
                                      | (IData)(vlSelf->__PVT__sfence_w)));
    vlSelf->__Vdly__ifence_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                & (IData)(vlSelf->__PVT__ifence_w));
    vlSelf->__Vdly__take_interrupt_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                        & (VL_REDOR_I(vlSelf->__PVT__interrupt_w) 
                                           & (~ (IData)(vlSelf->__PVT__interrupt_inhibit_i))));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__rd_valid_e1_q = 0U;
        vlSelf->__Vdly__rd_result_e1_q = 0U;
        vlSelf->__Vdly__csr_wdata_e1_q = 0U;
        vlSelf->__Vdly__exception_e1_q = 0U;
    } else if (vlSelf->__PVT__opcode_valid_i) {
        vlSelf->__Vdly__rd_valid_e1_q = (((IData)(vlSelf->__PVT__set_r) 
                                          | (IData)(vlSelf->__PVT__clr_r)) 
                                         & (~ (IData)(vlSelf->__PVT__csr_fault_r)));
        vlSelf->__Vdly__rd_result_e1_q = ((((IData)(vlSelf->__PVT__opcode_invalid_i) 
                                            | (IData)(vlSelf->__PVT__csr_fault_r)) 
                                           | (IData)(vlSelf->__PVT__eret_fault_w))
                                           ? vlSelf->__PVT__opcode_opcode_i
                                           : vlSelf->__PVT__csr_rdata_w);
        vlSelf->__Vdly__exception_e1_q = (0x3fU & (
                                                   (0x73U 
                                                    == vlSelf->__PVT__opcode_opcode_i)
                                                    ? 
                                                   ((IData)(0x18U) 
                                                    + 
                                                    VL_EXTEND_II(6,2, (IData)(vlSelf->__PVT__current_priv_w)))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__eret_fault_w)
                                                     ? 0x12U
                                                     : 
                                                    ((0x200073U 
                                                      == 
                                                      (0xcfffffffU 
                                                       & vlSelf->__PVT__opcode_opcode_i))
                                                      ? 
                                                     ((IData)(0x30U) 
                                                      + 
                                                      VL_EXTEND_II(6,2, (IData)(vlSelf->__PVT__eret_priv_w)))
                                                      : 
                                                     ((0x100073U 
                                                       == vlSelf->__PVT__opcode_opcode_i)
                                                       ? 0x13U
                                                       : 
                                                      (((IData)(vlSelf->__PVT__opcode_invalid_i) 
                                                        | (IData)(vlSelf->__PVT__csr_fault_r))
                                                        ? 0x12U
                                                        : 
                                                       ((((IData)(vlSelf->__PVT__satp_update_w) 
                                                          | (IData)(vlSelf->__PVT__ifence_w)) 
                                                         | (IData)(vlSelf->__PVT__sfence_w))
                                                         ? 0x34U
                                                         : 0U)))))));
        if (((IData)(vlSelf->__PVT__set_r) & (IData)(vlSelf->__PVT__clr_r))) {
            vlSelf->__Vdly__csr_wdata_e1_q = vlSelf->__PVT__data_r;
        } else if (vlSelf->__PVT__set_r) {
            vlSelf->__Vdly__csr_wdata_e1_q = (vlSelf->__PVT__csr_rdata_w 
                                              | vlSelf->__PVT__data_r);
        } else if (vlSelf->__PVT__clr_r) {
            vlSelf->__Vdly__csr_wdata_e1_q = (vlSelf->__PVT__csr_rdata_w 
                                              & (~ vlSelf->__PVT__data_r));
        }
    } else {
        vlSelf->__Vdly__rd_valid_e1_q = 0U;
        vlSelf->__Vdly__rd_result_e1_q = 0U;
        vlSelf->__Vdly__csr_wdata_e1_q = 0U;
        vlSelf->__Vdly__exception_e1_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__branch_target_q = 0U;
        vlSelf->__Vdly__branch_q = 0U;
        vlSelf->__Vdly__reset_q = 1U;
    } else if (vlSelf->__PVT__reset_q) {
        vlSelf->__Vdly__branch_target_q = vlSelf->__PVT__reset_vector_i;
        vlSelf->__Vdly__branch_q = 1U;
        vlSelf->__Vdly__reset_q = 0U;
    } else {
        vlSelf->__Vdly__branch_q = vlSelf->__PVT__csr_branch_w;
        vlSelf->__Vdly__branch_target_q = vlSelf->__PVT__csr_target_w;
    }
    vlSelf->__PVT__tlb_flush_q = vlSelf->__Vdly__tlb_flush_q;
    vlSelf->__PVT__ifence_q = vlSelf->__Vdly__ifence_q;
    vlSelf->__PVT__take_interrupt_q = vlSelf->__Vdly__take_interrupt_q;
    vlSelf->__PVT__rd_valid_e1_q = vlSelf->__Vdly__rd_valid_e1_q;
    vlSelf->__PVT__rd_result_e1_q = vlSelf->__Vdly__rd_result_e1_q;
    vlSelf->__PVT__csr_wdata_e1_q = vlSelf->__Vdly__csr_wdata_e1_q;
    vlSelf->__PVT__exception_e1_q = vlSelf->__Vdly__exception_e1_q;
    vlSelf->__PVT__reset_q = vlSelf->__Vdly__reset_q;
    vlSelf->__PVT__branch_target_q = vlSelf->__Vdly__branch_target_q;
    vlSelf->__PVT__branch_q = vlSelf->__Vdly__branch_q;
    vlSelf->__PVT__mmu_flush_o = vlSelf->__PVT__tlb_flush_q;
    vlSelf->__PVT__ifence_o = vlSelf->__PVT__ifence_q;
    vlSelf->__PVT__take_interrupt_o = vlSelf->__PVT__take_interrupt_q;
    vlSelf->__PVT__csr_result_e1_write_o = vlSelf->__PVT__rd_valid_e1_q;
    vlSelf->__PVT__csr_result_e1_value_o = vlSelf->__PVT__rd_result_e1_q;
    vlSelf->__PVT__csr_result_e1_wdata_o = vlSelf->__PVT__csr_wdata_e1_q;
    vlSelf->__PVT__csr_result_e1_exception_o = vlSelf->__PVT__exception_e1_q;
    vlSelf->__PVT__branch_csr_pc_o = vlSelf->__PVT__branch_target_q;
    vlSelf->__PVT__branch_csr_request_o = vlSelf->__PVT__branch_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__5(Vbiriscv_top_biriscv_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__5\n"); );
    // Body
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
