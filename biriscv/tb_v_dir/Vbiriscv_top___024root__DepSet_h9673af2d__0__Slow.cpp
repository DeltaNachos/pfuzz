// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top___024root.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_mem_model___eval_static__TOP__biriscv_top__memory_modelling_inst(Vbiriscv_top_biriscv_mem_model* vlSelf);

VL_ATTR_COLD void Vbiriscv_top___024root___eval_static(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_static\n"); );
    // Body
    Vbiriscv_top_biriscv_mem_model___eval_static__TOP__biriscv_top__memory_modelling_inst((&vlSymsp->TOP__biriscv_top__memory_modelling_inst));
    vlSelf->__Vm_traceActivity[0x38U] = 1U;
    vlSelf->__Vm_traceActivity[0x37U] = 1U;
    vlSelf->__Vm_traceActivity[0x36U] = 1U;
    vlSelf->__Vm_traceActivity[0x35U] = 1U;
    vlSelf->__Vm_traceActivity[0x34U] = 1U;
    vlSelf->__Vm_traceActivity[0x33U] = 1U;
    vlSelf->__Vm_traceActivity[0x32U] = 1U;
    vlSelf->__Vm_traceActivity[0x31U] = 1U;
    vlSelf->__Vm_traceActivity[0x30U] = 1U;
    vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    vlSelf->__Vm_traceActivity[0x2eU] = 1U;
    vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    vlSelf->__Vm_traceActivity[0x2cU] = 1U;
    vlSelf->__Vm_traceActivity[0x2bU] = 1U;
    vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    vlSelf->__Vm_traceActivity[0x29U] = 1U;
    vlSelf->__Vm_traceActivity[0x28U] = 1U;
    vlSelf->__Vm_traceActivity[0x27U] = 1U;
    vlSelf->__Vm_traceActivity[0x26U] = 1U;
    vlSelf->__Vm_traceActivity[0x25U] = 1U;
    vlSelf->__Vm_traceActivity[0x24U] = 1U;
    vlSelf->__Vm_traceActivity[0x23U] = 1U;
    vlSelf->__Vm_traceActivity[0x22U] = 1U;
    vlSelf->__Vm_traceActivity[0x21U] = 1U;
    vlSelf->__Vm_traceActivity[0x20U] = 1U;
    vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    vlSelf->__Vm_traceActivity[0x19U] = 1U;
    vlSelf->__Vm_traceActivity[0x18U] = 1U;
    vlSelf->__Vm_traceActivity[0x17U] = 1U;
    vlSelf->__Vm_traceActivity[0x16U] = 1U;
    vlSelf->__Vm_traceActivity[0x15U] = 1U;
    vlSelf->__Vm_traceActivity[0x14U] = 1U;
    vlSelf->__Vm_traceActivity[0x13U] = 1U;
    vlSelf->__Vm_traceActivity[0x12U] = 1U;
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_top___eval_initial__TOP__biriscv_top(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___eval_initial__TOP__biriscv_top__u_core__u_csr(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___eval_initial__TOP__biriscv_top__u_core__u_issue(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec0(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec1(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu__pi2___eval_initial__TOP__biriscv_top__u_core__u_lsu(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_fetch(Vbiriscv_top_biriscv_fetch* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_regfile___eval_initial__TOP__biriscv_top__u_core__u_issue__u_regfile(Vbiriscv_top_biriscv_regfile* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_decode(Vbiriscv_top_biriscv_decode__E1* vlSelf);

VL_ATTR_COLD void Vbiriscv_top___024root___eval_initial(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_initial\n"); );
    // Body
    Vbiriscv_top_biriscv_top___eval_initial__TOP__biriscv_top((&vlSymsp->TOP__biriscv_top));
    vlSelf->__Vm_traceActivity[0x38U] = 1U;
    vlSelf->__Vm_traceActivity[0x37U] = 1U;
    vlSelf->__Vm_traceActivity[0x36U] = 1U;
    vlSelf->__Vm_traceActivity[0x35U] = 1U;
    vlSelf->__Vm_traceActivity[0x34U] = 1U;
    vlSelf->__Vm_traceActivity[0x33U] = 1U;
    vlSelf->__Vm_traceActivity[0x32U] = 1U;
    vlSelf->__Vm_traceActivity[0x31U] = 1U;
    vlSelf->__Vm_traceActivity[0x30U] = 1U;
    vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    vlSelf->__Vm_traceActivity[0x2eU] = 1U;
    vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    vlSelf->__Vm_traceActivity[0x2cU] = 1U;
    vlSelf->__Vm_traceActivity[0x2bU] = 1U;
    vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    vlSelf->__Vm_traceActivity[0x29U] = 1U;
    vlSelf->__Vm_traceActivity[0x28U] = 1U;
    vlSelf->__Vm_traceActivity[0x27U] = 1U;
    vlSelf->__Vm_traceActivity[0x26U] = 1U;
    vlSelf->__Vm_traceActivity[0x25U] = 1U;
    vlSelf->__Vm_traceActivity[0x24U] = 1U;
    vlSelf->__Vm_traceActivity[0x23U] = 1U;
    vlSelf->__Vm_traceActivity[0x22U] = 1U;
    vlSelf->__Vm_traceActivity[0x21U] = 1U;
    vlSelf->__Vm_traceActivity[0x20U] = 1U;
    vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    vlSelf->__Vm_traceActivity[0x19U] = 1U;
    vlSelf->__Vm_traceActivity[0x18U] = 1U;
    vlSelf->__Vm_traceActivity[0x17U] = 1U;
    vlSelf->__Vm_traceActivity[0x16U] = 1U;
    vlSelf->__Vm_traceActivity[0x15U] = 1U;
    vlSelf->__Vm_traceActivity[0x14U] = 1U;
    vlSelf->__Vm_traceActivity[0x13U] = 1U;
    vlSelf->__Vm_traceActivity[0x12U] = 1U;
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vbiriscv_top_biriscv_csr___eval_initial__TOP__biriscv_top__u_core__u_csr((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
    Vbiriscv_top_biriscv_issue___eval_initial__TOP__biriscv_top__u_core__u_issue((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
    Vbiriscv_top_biriscv_exec___eval_initial__TOP__biriscv_top__u_core__u_exec1((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
    Vbiriscv_top_biriscv_frontend__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    Vbiriscv_top_biriscv_lsu__pi2___eval_initial__TOP__biriscv_top__u_core__u_lsu((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    Vbiriscv_top_biriscv_fetch___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_fetch((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
    Vbiriscv_top_biriscv_regfile___eval_initial__TOP__biriscv_top__u_core__u_issue__u_regfile((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile));
    Vbiriscv_top_biriscv_decode__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_decode((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__clk__0 
        = vlSymsp->TOP__biriscv_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__biriscv_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_regfile____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__rst_i;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__stl(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbiriscv_top___024root___eval_triggers__stl(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vbiriscv_top___024root___stl_sequent__TOP__0(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__biriscv_top.rst = vlSelf->rst;
    vlSymsp->TOP__biriscv_top.clk = vlSelf->clk;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0(Vbiriscv_top_biriscv_fetch* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_regfile___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0(Vbiriscv_top_biriscv_regfile* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___stl_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__0(Vbiriscv_top_biriscv_divider* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__0(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__0(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0(Vbiriscv_top_biriscv_decode__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_npc_lfsr___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0(Vbiriscv_top_biriscv_npc_lfsr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__0(Vbiriscv_top_biriscv_multiplier* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__0(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__0(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__0(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__0(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0(Vbiriscv_top_fetch_fifo* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decoder___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0__0(Vbiriscv_top_biriscv_decoder* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decoder___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1__0(Vbiriscv_top_biriscv_decoder* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__1(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1(Vbiriscv_top_biriscv_decode__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__1(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__1(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__1(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__1(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__1(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__1(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__1(Vbiriscv_top_biriscv_fetch* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__2(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__1(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__2(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__2(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__2(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__2(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__2(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__3(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1(Vbiriscv_top_biriscv_npc* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__1(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__1(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__3(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__3(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__3(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__2(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__3(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__4(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_regfile___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__1(Vbiriscv_top_biriscv_regfile* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__4(Vbiriscv_top_biriscv_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__4(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__4(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__1(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__1(Vbiriscv_top_biriscv_divider* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__1(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__3(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__2(Vbiriscv_top_biriscv_fetch* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2(Vbiriscv_top_biriscv_decode__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2(Vbiriscv_top_biriscv_npc* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__5(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__3(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__3(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__2(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__5(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__1(Vbiriscv_top_biriscv_multiplier* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__3(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__2(Vbiriscv_top_biriscv_divider* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__4(Vbiriscv_top_biriscv_csr* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__2(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__2(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3(Vbiriscv_top_biriscv_decode__E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__3(Vbiriscv_top_biriscv_npc* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__3(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__6(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_alu___stl_sequent__TOP__biriscv_top__u_core__u_exec1__u_alu__0(Vbiriscv_top_biriscv_alu* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_alu___stl_sequent__TOP__biriscv_top__u_core__u_exec0__u_alu__0(Vbiriscv_top_biriscv_alu* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1(Vbiriscv_top_fetch_fifo* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__5(Vbiriscv_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__3(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__3(Vbiriscv_top_biriscv_exec* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
VL_ATTR_COLD void Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);

VL_ATTR_COLD void Vbiriscv_top___024root___eval_stl(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vbiriscv_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
        vlSelf->__Vm_traceActivity[0x35U] = 1U;
        vlSelf->__Vm_traceActivity[0x34U] = 1U;
        vlSelf->__Vm_traceActivity[0x33U] = 1U;
        vlSelf->__Vm_traceActivity[0x32U] = 1U;
        vlSelf->__Vm_traceActivity[0x31U] = 1U;
        vlSelf->__Vm_traceActivity[0x30U] = 1U;
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_regfile___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile));
        Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___stl_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request));
        Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__0((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__0((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__0((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_npc_lfsr___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru));
        Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__0((&vlSymsp->TOP__biriscv_top__u_core__u_mul));
        Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__0((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_decoder___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0));
        Vbiriscv_top_biriscv_decoder___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__1((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif));
        Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__1((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__1((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__1((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__2((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__2((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__2((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__3((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__3((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_mmu__pi1___stl_sequent__TOP__biriscv_top__u_core__u_mmu__3((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__2((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__4((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_regfile___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile));
        Vbiriscv_top_biriscv_top___stl_sequent__TOP__biriscv_top__4((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__1((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__1((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__1((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__3((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__5((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif));
        Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__2((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__5((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_multiplier___stl_sequent__TOP__biriscv_top__u_core__u_mul__1((&vlSymsp->TOP__biriscv_top__u_core__u_mul));
        Vbiriscv_top_biriscv_lsu__pi2___stl_sequent__TOP__biriscv_top__u_core__u_lsu__3((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__2((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        Vbiriscv_top_biriscv_csr___stl_sequent__TOP__biriscv_top__u_core__u_csr__4((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__2((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__2((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_decode__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_npc___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        Vbiriscv_top_biriscv_csr_regfile__SB1___stl_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__3((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___stl_sequent__TOP__biriscv_top__u_core__6((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_alu___stl_sequent__TOP__biriscv_top__u_core__u_exec1__u_alu__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec1__u_alu));
        Vbiriscv_top_biriscv_alu___stl_sequent__TOP__biriscv_top__u_core__u_exec0__u_alu__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0__u_alu));
        Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo));
        Vbiriscv_top_biriscv_issue___stl_sequent__TOP__biriscv_top__u_core__u_issue__5((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec1__3((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_exec___stl_sequent__TOP__biriscv_top__u_core__u_exec0__3((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
    }
}
