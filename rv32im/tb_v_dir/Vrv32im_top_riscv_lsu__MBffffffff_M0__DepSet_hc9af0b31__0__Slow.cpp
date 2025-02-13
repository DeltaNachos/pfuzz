// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_lsu__MBffffffff_M0.h"

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___eval_initial__TOP__rv32im_top__core__u_lsu(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___eval_initial__TOP__rv32im_top__core__u_lsu\n"); );
    // Body
    vlSelf->__PVT__mem_req_tag_o = 0U;
}

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__2(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__2\n"); );
    // Body
    vlSelf->__PVT__load_signed_inst_w = (((3U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)) 
                                          | (0x1003U 
                                             == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i))) 
                                         | (0x2003U 
                                            == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__store_inst_w = (((0x23U == (0x707fU 
                                               & vlSelf->__PVT__opcode_opcode_i)) 
                                    | (0x1023U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_opcode_i))) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lb_w = ((3U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x4003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lh_w = ((0x1003U == (0x707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x5003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lw_w = ((0x2003U == (0x707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x6003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sb_w = (0x23U == (0x707fU & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__req_sh_w = (0x1023U == (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__req_sw_w = (0x2023U == (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__dcache_flush_w = ((0x1073U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)) 
                                     & (0x3a0U == (0xfffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__dcache_writeback_w = ((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i)) 
                                         & (0x3a1U 
                                            == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__dcache_invalidate_w = ((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->__PVT__opcode_opcode_i)) 
                                          & (0x3a2U 
                                             == (0xfffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__load_inst_w = ((((((3U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)) 
                                      | (0x1003U == 
                                         (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                                     | (0x2003U == 
                                        (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                                    | (0x4003U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_opcode_i))) 
                                   | (0x5003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x6003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sw_lw_w = (((0x2023U == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)) 
                                   | (0x2003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x6003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sh_lh_w = (((0x1023U == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)) 
                                   | (0x1003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x5003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
}

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__4(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__4\n"); );
    // Body
    vlSelf->__PVT__mem_addr_r = 0U;
    vlSelf->__PVT__mem_data_r = 0U;
    vlSelf->__PVT__mem_unaligned_r = 0U;
    vlSelf->__PVT__mem_wr_r = 0U;
    vlSelf->__PVT__mem_rd_r = 0U;
    vlSelf->__PVT__mem_addr_r = (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                  & (0x1073U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)))
                                  ? vlSelf->__PVT__opcode_ra_operand_i
                                  : (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                      & (IData)(vlSelf->__PVT__load_inst_w))
                                      ? (vlSelf->__PVT__opcode_ra_operand_i 
                                         + VL_CONCAT_III(32,20,12, 
                                                         (0xfffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))))
                                      : (vlSelf->__PVT__opcode_ra_operand_i 
                                         + VL_CONCAT_III(32,20,12, 
                                                         (0xfffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                                         VL_CONCAT_III(12,7,5, 
                                                                       (0x7fU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 7U)), 
                                                                       (0x1fU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 7U, 5U)))))));
    if (((IData)(vlSelf->__PVT__opcode_valid_i) & (IData)(vlSelf->__PVT__req_sw_lw_w))) {
        vlSelf->__PVT__mem_unaligned_r = (0U != (3U 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)));
    } else if (((IData)(vlSelf->__PVT__opcode_valid_i) 
                & (IData)(vlSelf->__PVT__req_sh_lh_w))) {
        vlSelf->__PVT__mem_unaligned_r = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U));
    }
    vlSelf->__PVT__mem_rd_r = (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                & (IData)(vlSelf->__PVT__load_inst_w)) 
                               & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)));
    if ((((IData)(vlSelf->__PVT__opcode_valid_i) & 
          (0x2023U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
         & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)))) {
        vlSelf->__PVT__mem_data_r = vlSelf->__PVT__opcode_rb_operand_i;
        vlSelf->__PVT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSelf->__PVT__opcode_valid_i) 
                 & (0x1023U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)))) {
        if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,16,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 0x10U)), 0U);
            vlSelf->__PVT__mem_wr_r = 0xcU;
        } else {
            vlSelf->__PVT__mem_data_r = VL_EXTEND_II(32,16, 
                                                     (0xffffU 
                                                      & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 0x10U)));
            vlSelf->__PVT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSelf->__PVT__opcode_valid_i) 
                & (0x23U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)))) {
        if ((3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,8,24, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U)), 0U);
            vlSelf->__PVT__mem_wr_r = 8U;
        } else if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,16,16, 
                                                      VL_EXTEND_II(16,8, 
                                                                   (0xffU 
                                                                    & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U))), 0U);
            vlSelf->__PVT__mem_wr_r = 4U;
        } else if ((1U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,24,8, 
                                                      VL_EXTEND_II(24,8, 
                                                                   (0xffU 
                                                                    & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U))), 0U);
            vlSelf->__PVT__mem_wr_r = 2U;
        } else if ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_EXTEND_II(32,8, 
                                                     (0xffU 
                                                      & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U)));
            vlSelf->__PVT__mem_wr_r = 1U;
        }
    } else {
        vlSelf->__PVT__mem_wr_r = 0U;
    }
}

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___ctor_var_reset(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_rd_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ack_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_resp_tag_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_load_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_store_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_wr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wr_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_cacheable_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_req_tag_o = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_writeback_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_exception_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_wr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wr_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_cacheable_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_writeback_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_unaligned_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_unaligned_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_load_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_xb_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_xh_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ls_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pending_lsu_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_lsu_e1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__complete_ok_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__complete_err_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_lsu_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_signed_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_lb_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_lh_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_lw_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_sb_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_sh_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_sw_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_sw_lw_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_sh_lh_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_unaligned_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wr_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dcache_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_load_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_addr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__resp_byte_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_half_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_signed_w = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_lsu_request__pop_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__u_lsu_request__data_out_o = VL_RAND_RESET_Q(36);
    vlSelf->__Vcellinp__u_lsu_request__data_in_i = VL_RAND_RESET_Q(36);
    vlSelf->__Vcellinp__u_lsu_request__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_lsb_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_byte_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_half_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_signed_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_result_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fault_load_align_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fault_store_align_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fault_load_bus_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fault_store_bus_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fault_load_page_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fault_store_page_w = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pending_lsu_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_unaligned_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mem_data_wr_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mem_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_wr_q = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__mem_cacheable_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_writeback_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_flush_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_unaligned_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_load_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_xb_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_xh_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_ls_q = VL_RAND_RESET_I(1);
}
