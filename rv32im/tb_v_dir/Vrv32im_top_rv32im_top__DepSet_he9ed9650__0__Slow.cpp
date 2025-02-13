// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_rv32im_top.h"

VL_ATTR_COLD void Vrv32im_top_rv32im_top___eval_initial__TOP__rv32im_top(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___eval_initial__TOP__rv32im_top\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core.__PVT__cpu_id_i = 1U;
    vlSelf->__PVT__reset_vector_i = 0x80000000U;
    vlSelf->__PVT__cpu_id_i = 0U;
}

VL_ATTR_COLD void Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__0(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core.__PVT__reset_vector_i 
        = vlSelf->__PVT__reset_vector_i;
    vlSelf->__PVT__icache_accept_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__imem_accept;
    vlSelf->__PVT__icache_inst_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__imem_data;
    vlSelf->__PVT__icache_error_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__imem_error;
    vlSymsp->TOP__rv32im_top__core.__PVT__rst_i = vlSelf->__PVT__reset;
    vlSelf->__PVT__intr_i = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__i_intr;
    vlSelf->__PVT__icache_valid_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__imem_valid;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_accept_i 
        = vlSelf->__PVT__dcache_accept_w;
    vlSelf->__PVT__dcache_data_rd_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_resp_data;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_error_i 
        = vlSelf->__PVT__dcache_error_w;
    vlSelf->__PVT__dcache_ack_w = vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_resp_valid;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_resp_tag_i 
        = vlSelf->__PVT__dcache_resp_tag_w;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__rv32im_top__core.__PVT__clk_i = vlSelf->clk;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_accept_i 
        = vlSelf->__PVT__icache_accept_w;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_inst_i 
        = vlSelf->__PVT__icache_inst_w;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_error_i 
        = vlSelf->__PVT__icache_error_w;
    vlSymsp->TOP__rv32im_top__core.__PVT__intr_i = vlSelf->__PVT__intr_i;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_valid_i 
        = vlSelf->__PVT__icache_valid_w;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_data_rd_i 
        = vlSelf->__PVT__dcache_data_rd_w;
    vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_ack_i 
        = vlSelf->__PVT__dcache_ack_w;
}

VL_ATTR_COLD void Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__1(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__1\n"); );
    // Body
    vlSelf->__PVT__icache_invalidate_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_invalidate_o;
    vlSelf->__PVT__dcache_cacheable_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_cacheable_o;
    vlSelf->__PVT__dcache_req_tag_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_req_tag_o;
    vlSelf->__PVT__icache_pc_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_pc_o;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__imem_addr 
        = vlSelf->__PVT__icache_pc_w;
}

VL_ATTR_COLD void Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__2(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_wr_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_data_wr_o;
    vlSelf->__PVT__dcache_invalidate_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_invalidate_o;
    vlSelf->__PVT__dcache_writeback_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_writeback_o;
    vlSelf->__PVT__dcache_flush_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_flush_o;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_req_data 
        = vlSelf->__PVT__dcache_data_wr_w;
}

VL_ATTR_COLD void Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__3(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__3\n"); );
    // Body
    vlSelf->__PVT__icache_flush_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_flush_o;
    vlSelf->__PVT__dcache_addr_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_addr_o;
    vlSelf->__PVT__dcache_wr_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_wr_o;
    vlSelf->__PVT__dcache_rd_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_d_rd_o;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_req_addr 
        = vlSelf->__PVT__dcache_addr_w;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_req_write_en 
        = vlSelf->__PVT__dcache_wr_w;
    vlSymsp->TOP__rv32im_top__memory_modelling_inst.__PVT__dmem_req_valid 
        = vlSelf->__PVT__dcache_rd_w;
}

VL_ATTR_COLD void Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__4(Vrv32im_top_rv32im_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32im_top_rv32im_top___stl_sequent__TOP__rv32im_top__4\n"); );
    // Body
    vlSelf->__PVT__icache_rd_w = vlSymsp->TOP__rv32im_top__core.__PVT__mem_i_rd_o;
}
