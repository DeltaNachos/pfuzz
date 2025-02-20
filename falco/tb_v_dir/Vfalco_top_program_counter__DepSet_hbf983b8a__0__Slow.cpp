// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_program_counter.h"

VL_ATTR_COLD void Vfalco_top_program_counter___stl_sequent__TOP__falco_top__core__instruction_fetch__PC__0(Vfalco_top_program_counter* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_program_counter___stl_sequent__TOP__falco_top__core__instruction_fetch__PC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_CrossICacheLineFetch__0__pc = vlSelfRef.pc;
    vlSelfRef.__Vfunc_CrossICacheLineFetch__0__Vfuncout 
        = (0x1cU == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__Vfunc_CrossICacheLineFetch__0__pc, 0U, 5U)));
    vlSelfRef.__PVT__cross_line = vlSelfRef.__Vfunc_CrossICacheLineFetch__0__Vfuncout;
    vlSelfRef.__PVT__instr1_valid = (1U & VL_BITSEL_IIII(32, 
                                                         ((IData)(vlSelfRef.__PVT__cross_line)
                                                           ? 0U
                                                           : 1U), 0U));
}

VL_ATTR_COLD void Vfalco_top_program_counter___ctor_var_reset(Vfalco_top_program_counter* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_program_counter___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_branch_PrMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__predict_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__predict_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_direct = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__jump_relative = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->__PVT__sys_pc_oper);
    vlSelf->__PVT__store_set_violation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_miss_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_set_pc = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cross_line = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_CrossICacheLineFetch__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_CrossICacheLineFetch__0__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
}
