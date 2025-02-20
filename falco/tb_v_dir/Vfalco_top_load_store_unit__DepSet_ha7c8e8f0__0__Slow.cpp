// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_load_store_unit.h"

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__0\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__1\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__2(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_sequent__TOP__falco_top__core__LSU__2\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__0(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__0\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__1(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__1\n"); );
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

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__2(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wait_stall 
        = (((IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid) 
            & (~ VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x3dU))) 
           & (VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__load_hit_resp), 0U) 
              & (~ (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__sb_load_forward_hit))));
}

VL_ATTR_COLD void Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__3(Vfalco_top_load_store_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_load_store_unit___stl_comb__TOP__falco_top__core__LSU__3\n"); );
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
