// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_load_store_unit.h"

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_sequent__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_sequent__TOP__falco_top__core__LSU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation 
        = (((((0xcU == (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x5bU, 4U))) 
              & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x7fU)) 
             & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
            & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure))) 
           & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid));
    vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag = (0x3fU 
                                                 & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                                  & ((((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                                      ^ 
                                                      ((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
    vlSelfRef.__PVT__LSU_kill = vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_sequent__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_sequent__TOP__falco_top__core__LSU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0x21U, vlSelfRef.__PVT__load_ck_hit_req, 
                    (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                      & ((~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)) 
                         & (~ (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation)))) 
                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_non_idempotent_lock))));
    VL_ASSIGNBIT_QI(0x20U, vlSelfRef.__PVT__load_ck_hit_req, 
                    (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                      & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                     & (IData)(vlSelfRef.__PVT__LSU_kill)));
    VL_ASSIGNSEL_QI(34,32,0U, vlSelfRef.__PVT__load_ck_hit_req, vlSelfRef.align_access_addr);
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_load_pc 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc;
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_load_id 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id;
    vlSelfRef.violation = ((((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation) 
                             | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect) 
                                & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                            & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure))) 
                           & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data 
        = VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x5fU, 0x20U);
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2aU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate 
        = (1U & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc 
        = (0x7ffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x88U, 0xbU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id 
        = (0xffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x80U, 8U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_instruction 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__2(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
           & (VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 0U) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit))));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__3(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___ico_comb__TOP__falco_top__core__LSU__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_commit_valid = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall)));
    vlSelfRef.__PVT__load_commit_valid = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
                                          & ((IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit) 
                                             | VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 1U)));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_load_pc 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc;
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_load_id 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id;
    vlSelfRef.violation = ((((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation) 
                             | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect) 
                                & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                            & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure))) 
                           & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data 
        = VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x5fU, 0x20U);
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2aU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate 
        = (1U & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc 
        = (0x7ffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x88U, 0xbU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id 
        = (0xffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x80U, 8U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_instruction 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__2(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
           & (VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 0U) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit))));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__3(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___act_comb__TOP__falco_top__core__LSU__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_commit_valid = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall)));
    vlSelfRef.__PVT__load_commit_valid = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
                                          & ((IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit) 
                                             | VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 1U)));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_sequent__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_sequent__TOP__falco_top__core__LSU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        VL_ASSIGNSEL_QQ(61,35,0x1aU, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 0ULL);
        VL_ASSIGNSEL_QI(61,21,1U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 0U);
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall))) {
        VL_ASSIGNBIT_QI(0x3cU, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        (1U & VL_BITSEL_IIII(32, (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag 
                                    = (0x3fU & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 1U, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__1__Vfuncout))
                                                   ? 0U
                                                   : 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3cU)))), 0U)));
        VL_ASSIGNSEL_QQ(61,34,0x1aU, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        VL_CONCAT_QIQ(34,1,33, (1U 
                                                & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3bU)), 
                                      VL_CONCAT_QII(33,1,32, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3aU)), 
                                                    VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x1aU, 0x20U))));
        VL_ASSIGNSEL_QI(61,6,0x10U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        VL_CONCAT_III(6,2,4, (3U & 
                                              VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x14U, 2U)), 
                                      (0xfU & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x10U, 4U))));
        VL_ASSIGNSEL_QI(61,9,7U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        VL_CONCAT_III(9,2,7, (3U & 
                                              VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0xeU, 2U)), 
                                      VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0xdU)), 
                                                    (0x3fU 
                                                     & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 7U, 6U)))));
        VL_ASSIGNSEL_QI(61,6,1U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        (0x3fU & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 1U, 6U)));
    } else {
        VL_ASSIGNBIT_QI(0x3cU, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        ((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                         & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))));
        VL_ASSIGNBIT_QI(0x3bU, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit);
        VL_ASSIGNSEL_QQ(61,39,0x14U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        VL_CONCAT_QIQ(39,1,38, (1U 
                                                & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 1U)), 
                                      VL_CONCAT_QII(38,32,6, vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_data, 
                                                    VL_CONCAT_III(6,4,2, (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_mask), (IData)(vlSelfRef.__PVT__addr_alignment)))));
        VL_ASSIGNSEL_QI(61,4,0x10U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U)));
        VL_ASSIGNSEL_QI(61,9,7U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        VL_CONCAT_III(9,2,7, (3U & 
                                              VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x37U, 2U)), 
                                      VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3eU)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x31U, 6U)))));
        VL_ASSIGNSEL_QI(61,6,1U, vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__lsu_pack, 
                        (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U)));
    }
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__BCAST_load 
        = ((IData)(vlSelfRef.__PVT__rst) ? 0U : ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                  ? 0U
                                                  : 
                                                 VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__load_commit_valid), 
                                                               (0x3fU 
                                                                & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x31U, 6U)))));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__Vdly__LSU_commit 
        = ((IData)(vlSelfRef.__PVT__rst) ? 0U : ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                                                  ? 0U
                                                  : 
                                                 VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__store_commit_valid), 
                                                               (0x3fU 
                                                                & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U)))));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_sequent__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_sequent__TOP__falco_top__core__LSU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr_alignment = (3U & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3fU, 2U));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_pc 
        = VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0U, 0x20U);
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_bhsr 
        = (0x3ffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x20U, 0xaU));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_store_pc 
        = (0x7ffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x88U, 0xbU));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_store_id 
        = (0xffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x80U, 8U));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__cur_lsu_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSelfRef.align_access_addr = VL_CONCAT_III(32,30,2, 
                                                (0x3fffffffU 
                                                 & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x41U, 0x1eU)), 0U);
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation 
        = (((((0xcU == (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x5bU, 4U))) 
              & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x7fU)) 
             & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
            & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure))) 
           & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag = (0x3fU 
                                                 & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                                  & ((((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                                      ^ 
                                                      ((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
    vlSelfRef.__PVT__LSU_kill = vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__2(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__lsu_io_inst.violation_load_pc 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_pc;
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__violation_load_id 
        = vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_load_id;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__3(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0x21U, vlSelfRef.__PVT__load_ck_hit_req, 
                    (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                      & ((~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)) 
                         & (~ (IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation)))) 
                     & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_non_idempotent_lock))));
    VL_ASSIGNBIT_QI(0x20U, vlSelfRef.__PVT__load_ck_hit_req, 
                    (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                      & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                     & (IData)(vlSelfRef.__PVT__LSU_kill)));
    VL_ASSIGNSEL_QI(34,32,0U, vlSelfRef.__PVT__load_ck_hit_req, vlSelfRef.align_access_addr);
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__4(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.violation = ((((IData)(vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__device_violation) 
                             | ((IData)(vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__violation_detect) 
                                & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                            & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure))) 
                           & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid));
    vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__store_set_violation 
        = vlSelfRef.violation;
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__5(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_data 
        = VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x5fU, 0x20U);
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_non_idempotent_region 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2aU));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__store_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_find_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__instr_valid 
        = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
             & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
            & (~ (IData)(vlSelfRef.__PVT__LSU_kill))) 
           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate 
        = (1U & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_mask 
        = (0xfU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x39U, 4U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_allocate_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_pc 
        = (0x7ffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x88U, 0xbU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__load_store_set_id 
        = (0xffU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x80U, 8U));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_instruction 
        = (1U & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU));
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_addr 
        = vlSelfRef.align_access_addr;
    vlSymsp->TOP__falco_top__core__ldb_io_inst.__PVT__store_rob_tag 
        = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__6(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
           & (VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 0U) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit))));
}

VL_INLINE_OPT void Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__7(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___nba_comb__TOP__falco_top__core__LSU__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_commit_valid = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU)) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall)));
    vlSelfRef.__PVT__load_commit_valid = ((((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
                                            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
                                           & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__LSU_stall))) 
                                          & ((IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit) 
                                             | VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 1U)));
}
