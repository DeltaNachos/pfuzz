// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_falco_mem_model.h"

VL_ATTR_COLD void Vfalco_top_falco_mem_model___eval_static__TOP__falco_top__memory_modelling_inst(Vfalco_top_falco_mem_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_falco_mem_model___eval_static__TOP__falco_top__memory_modelling_inst\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction = 0ULL;
}

VL_ATTR_COLD void Vfalco_top_falco_mem_model___ctor_var_reset(Vfalco_top_falco_mem_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_falco_mem_model___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__instruction_req);
    VL_RAND_RESET_W(67, vlSelf->__PVT__instruction_resp);
    VL_RAND_RESET_W(69, vlSelf->__PVT__store_req);
    vlSelf->__PVT__load_data_req = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__load_ck_hit_req = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__store_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_data_resp = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__load_hit_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem.atDefault() = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imem_read__Vstatic__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction = 0;
    vlSelf->__PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction = 0;
    vlSelf->__PVT__dmem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_write__Vstatic__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__fetched_instructions = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_imem_read__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_imem_read__0__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_instruction_generator__1__Vfuncout = 0;
    vlSelf->__Vfunc_dmem_read__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__2__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_dmem_write__3__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_dmem_write__3__wdata = VL_RAND_RESET_I(32);
}
