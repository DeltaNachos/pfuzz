// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_lsu__MBffffffff_M0.h"

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__0(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__0\n"); );
    // Body
    vlSelf->__PVT__mem_cacheable_o = vlSelf->__PVT__mem_cacheable_q;
    vlSelf->__Vcellinp__u_lsu_request__data_in_i = 
        VL_CONCAT_QII(36,32,4, vlSelf->__PVT__mem_addr_q, 
                      VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__mem_ls_q), 
                                    VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__mem_xh_q), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__mem_xb_q), (IData)(vlSelf->__PVT__mem_load_q)))));
    vlSelf->__PVT__mem_data_wr_o = vlSelf->__PVT__mem_data_wr_q;
    vlSelf->__PVT__mem_invalidate_o = vlSelf->__PVT__mem_invalidate_q;
    vlSelf->__PVT__mem_writeback_o = vlSelf->__PVT__mem_writeback_q;
    vlSelf->__PVT__mem_flush_o = vlSelf->__PVT__mem_flush_q;
    vlSelf->__PVT__mem_addr_o = VL_CONCAT_III(32,30,2, 
                                              (0x3fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_q, 2U, 0x1eU)), 0U);
    vlSelf->__Vcellout__u_lsu_request__data_out_o = vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__data_out_o;
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__data_in_i 
        = vlSelf->__Vcellinp__u_lsu_request__data_in_i;
    vlSelf->__PVT__resp_addr_w = VL_SEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 4U, 0x20U);
    vlSelf->__PVT__resp_signed_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 3U));
    vlSelf->__PVT__resp_half_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 2U));
    vlSelf->__PVT__resp_byte_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 1U));
    vlSelf->__PVT__resp_load_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 0U));
    vlSelf->__PVT__fault_load_align_w = ((IData)(vlSelf->__PVT__mem_unaligned_e2_q) 
                                         & (IData)(vlSelf->__PVT__resp_load_w));
    vlSelf->__PVT__fault_store_align_w = ((IData)(vlSelf->__PVT__mem_unaligned_e2_q) 
                                          & (~ (IData)(vlSelf->__PVT__resp_load_w)));
}

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__1(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__1\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelf->__PVT__fault_load_bus_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                       & (IData)(vlSelf->__PVT__resp_load_w));
    vlSelf->__PVT__fault_store_bus_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                        & (~ (IData)(vlSelf->__PVT__resp_load_w)));
    vlSelf->__PVT__fault_load_page_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                        & (IData)(vlSelf->__PVT__mem_load_fault_i));
    vlSelf->__PVT__fault_store_page_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                         & (IData)(vlSelf->__PVT__mem_store_fault_i));
    vlSelf->__PVT__complete_err_e2_w = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                        & (IData)(vlSelf->__PVT__mem_error_i));
    vlSelf->__Vcellinp__u_lsu_request__pop_i = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                                | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__wb_result_r = 0U;
    vlSelf->__PVT__addr_lsb_r = (3U & VL_SEL_IIII(32, vlSelf->__PVT__resp_addr_w, 0U, 2U));
    vlSelf->__PVT__load_byte_r = vlSelf->__PVT__resp_byte_w;
    vlSelf->__PVT__load_half_r = vlSelf->__PVT__resp_half_w;
    vlSelf->__PVT__load_signed_r = vlSelf->__PVT__resp_signed_w;
    if ((((IData)(vlSelf->__PVT__mem_ack_i) & (IData)(vlSelf->__PVT__mem_error_i)) 
         | (IData)(vlSelf->__PVT__mem_unaligned_e2_q))) {
        vlSelf->__PVT__wb_result_r = vlSelf->__PVT__resp_addr_w;
    } else if (((IData)(vlSelf->__PVT__mem_ack_i) & (IData)(vlSelf->__PVT__resp_load_w))) {
        if (vlSelf->__PVT__load_byte_r) {
            if ((3U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x18U, 8U)));
            } else if ((2U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x10U, 8U)));
            } else if ((1U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 8U, 8U)));
            } else if ((0U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0U, 8U)));
            }
            if (((IData)(vlSelf->__PVT__load_signed_r) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_r, 7U))) {
                __Vtemp_1 = VL_CONCAT_III(32,24,8, 0xffffffU, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wb_result_r, 0U, 8U)));
                vlSelf->__PVT__wb_result_r = __Vtemp_1;
            }
        } else if (vlSelf->__PVT__load_half_r) {
            vlSelf->__PVT__wb_result_r = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__addr_lsb_r), 1U))
                                           ? VL_EXTEND_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x10U, 0x10U)))
                                           : VL_EXTEND_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0U, 0x10U))));
            if (((IData)(vlSelf->__PVT__load_signed_r) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_r, 0xfU))) {
                __Vtemp_2 = VL_CONCAT_III(32,16,16, 0xffffU, 
                                          (0xffffU 
                                           & VL_SEL_IIII(32, vlSelf->__PVT__wb_result_r, 0U, 0x10U)));
                vlSelf->__PVT__wb_result_r = __Vtemp_2;
            }
        } else {
            vlSelf->__PVT__wb_result_r = vlSelf->__PVT__mem_data_rd_i;
        }
    }
    vlSelf->__PVT__complete_ok_e2_w = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                       & (~ (IData)(vlSelf->__PVT__mem_error_i)));
    vlSelf->__PVT__writeback_valid_o = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                        | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__writeback_exception_o = ((IData)(vlSelf->__PVT__fault_load_align_w)
                                             ? 0x14U
                                             : ((IData)(vlSelf->__PVT__fault_store_align_w)
                                                 ? 0x16U
                                                 : 
                                                ((IData)(vlSelf->__PVT__fault_load_page_w)
                                                  ? 0x1dU
                                                  : 
                                                 ((IData)(vlSelf->__PVT__fault_store_page_w)
                                                   ? 0x1fU
                                                   : 
                                                  ((IData)(vlSelf->__PVT__fault_load_bus_w)
                                                    ? 0x15U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__fault_store_bus_w)
                                                     ? 0x17U
                                                     : 0U))))));
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__pop_i 
        = vlSelf->__Vcellinp__u_lsu_request__pop_i;
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__wb_result_r;
    vlSelf->__PVT__delay_lsu_e2_w = ((IData)(vlSelf->__PVT__pending_lsu_e2_q) 
                                     & (~ (IData)(vlSelf->__PVT__complete_ok_e2_w)));
    vlSelf->__PVT__mem_wr_o = ((IData)(vlSelf->__PVT__mem_wr_q) 
                               & (~ VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__delay_lsu_e2_w), 4U)));
    vlSelf->__PVT__mem_rd_o = ((IData)(vlSelf->__PVT__mem_rd_q) 
                               & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w)));
}

VL_ATTR_COLD void Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__3(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___stl_sequent__TOP__rv32im_top__core__u_lsu__3\n"); );
    // Body
    vlSelf->__PVT__issue_lsu_e1_w = ((((((IData)(vlSelf->__PVT__mem_rd_o) 
                                         | VL_REDOR_I((IData)(vlSelf->__PVT__mem_wr_o))) 
                                        | (IData)(vlSelf->__PVT__mem_writeback_o)) 
                                       | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                      | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                     & (IData)(vlSelf->__PVT__mem_accept_i));
    vlSelf->__Vcellinp__u_lsu_request__push_i = (((
                                                   ((((IData)(vlSelf->__PVT__mem_rd_o) 
                                                      | VL_REDOR_I((IData)(vlSelf->__PVT__mem_wr_o))) 
                                                     | (IData)(vlSelf->__PVT__mem_writeback_o)) 
                                                    | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                                   | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                                  & (IData)(vlSelf->__PVT__mem_accept_i)) 
                                                 | ((IData)(vlSelf->__PVT__mem_unaligned_e1_q) 
                                                    & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w))));
    vlSelf->__PVT__stall_o = ((((((((IData)(vlSelf->__PVT__mem_writeback_o) 
                                    | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                   | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                  | (IData)(vlSelf->__PVT__mem_rd_o)) 
                                 | (0U != (IData)(vlSelf->__PVT__mem_wr_o))) 
                                & (~ (IData)(vlSelf->__PVT__mem_accept_i))) 
                               | (IData)(vlSelf->__PVT__delay_lsu_e2_w)) 
                              | (IData)(vlSelf->__PVT__mem_unaligned_e1_q));
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__push_i 
        = vlSelf->__Vcellinp__u_lsu_request__push_i;
}
