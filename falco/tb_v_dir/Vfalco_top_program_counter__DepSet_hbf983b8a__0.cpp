// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_program_counter.h"

VL_INLINE_OPT void Vfalco_top_program_counter___ico_sequent__TOP__falco_top__core__instruction_fetch__PC__0(Vfalco_top_program_counter* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_program_counter___ico_sequent__TOP__falco_top__core__instruction_fetch__PC__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_program_counter___nba_sequent__TOP__falco_top__core__instruction_fetch__PC__0(Vfalco_top_program_counter* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_program_counter___nba_sequent__TOP__falco_top__core__instruction_fetch__PC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pc = vlSelfRef.pc;
    vlSelfRef.__Vdly__pc = ((IData)(vlSelfRef.__PVT__rst)
                             ? vlSelfRef.__PVT__init_pc
                             : (((IData)(vlSelfRef.__PVT__store_set_violation) 
                                 & (~ (IData)(vlSelfRef.__PVT__branch_miss_first)))
                                 ? vlSelfRef.__PVT__store_set_pc
                                 : ((IData)(vlSelfRef.__PVT__exe_branch_PrMiss)
                                     ? vlSelfRef.__PVT__exe_branch_target_addr
                                     : ((IData)(vlSelfRef.__PVT__stall)
                                         ? vlSelfRef.pc
                                         : ((IData)(vlSelfRef.__PVT__predict_taken)
                                             ? vlSelfRef.__PVT__predict_pc
                                             : ((IData)(vlSelfRef.__PVT__cross_line)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelfRef.pc)
                                                 : 
                                                ((IData)(8U) 
                                                 + vlSelfRef.pc)))))));
    vlSelfRef.pc = vlSelfRef.__Vdly__pc;
    vlSelfRef.__Vfunc_CrossICacheLineFetch__0__pc = vlSelfRef.pc;
    vlSelfRef.__Vfunc_CrossICacheLineFetch__0__Vfuncout 
        = (0x1cU == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__Vfunc_CrossICacheLineFetch__0__pc, 0U, 5U)));
    vlSelfRef.__PVT__cross_line = vlSelfRef.__Vfunc_CrossICacheLineFetch__0__Vfuncout;
    vlSelfRef.__PVT__instr1_valid = (1U & VL_BITSEL_IIII(32, 
                                                         ((IData)(vlSelfRef.__PVT__cross_line)
                                                           ? 0U
                                                           : 1U), 0U));
}
