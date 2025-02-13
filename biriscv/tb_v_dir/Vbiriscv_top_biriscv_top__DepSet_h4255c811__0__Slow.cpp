// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_top.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_top___eval_initial__TOP__biriscv_top(Vbiriscv_top_biriscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_top_biriscv_top___eval_initial__TOP__biriscv_top\n"); );
    // Body
    vlSelf->__PVT__reset_vector_i = 0x80000000U;
    vlSelf->__PVT__cpu_id_w = 0U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_top___ctor_var_reset(Vbiriscv_top_biriscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_top_biriscv_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_data_rd_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dcache_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_error_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_resp_tag_w = VL_RAND_RESET_I(11);
    vlSelf->__PVT__icache_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_error_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_inst_w = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_id_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dcache_addr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dcache_data_wr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dcache_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dcache_cacheable_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_req_tag_w = VL_RAND_RESET_I(11);
    vlSelf->__PVT__dcache_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dcache_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset = VL_RAND_RESET_I(1);
}
