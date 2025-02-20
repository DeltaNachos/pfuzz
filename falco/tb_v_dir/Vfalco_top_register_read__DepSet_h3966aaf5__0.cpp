// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_register_read.h"

VL_INLINE_OPT void Vfalco_top_register_read___ico_sequent__TOP__falco_top__core__register_read_stage__0(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___ico_sequent__TOP__falco_top__core__register_read_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IQ0_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs1_data;
    vlSelfRef.__PVT__IQ0_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs2_data;
    vlSelfRef.__PVT__IQ1_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs1_data;
    vlSelfRef.__PVT__IQ1_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs2_data;
    vlSelfRef.__PVT__MEM_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs1_data;
    vlSelfRef.__PVT__MEM_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs2_data;
    vlSelfRef.__Vcellinp__prf__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__mem_wb 
        = vlSelfRef.__Vcellinp__prf__mem_wb;
}

VL_INLINE_OPT void Vfalco_top_register_read___ico_sequent__TOP__falco_top__core__register_read_stage__1(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___ico_sequent__TOP__falco_top__core__register_read_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vfalco_top_register_read___act_sequent__TOP__falco_top__core__register_read_stage__0(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___act_sequent__TOP__falco_top__core__register_read_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__mem_wb 
        = vlSelfRef.__Vcellinp__prf__mem_wb;
}

extern const VlWide<9>/*287:0*/ Vfalco_top__ConstPool__CONST_hd571e6a2_0;

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__0(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    if (vlSelfRef.__PVT__rst) {
        VL_CONST_W_1X(186,vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack,0x00000000);
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__rr_mem_stall))) {
        VL_ASSIGNSEL_WI(186,32,0x9aU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x9aU, 0x20U));
        VL_ASSIGNSEL_WI(186,4,0x82U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_III(4,1,3, (1U & 
                                              VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x85U)), 
                                      VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x84U)), 
                                                    (3U 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))));
        VL_ASSIGNSEL_WI(186,20,0x86U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_III(20,11,9, (0x7ffU 
                                                & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x8fU, 0xbU)), 
                                      VL_CONCAT_III(9,8,1, 
                                                    (0xffU 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x87U, 8U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x86U)))));
        VL_CONCAT_WIQ(70,6,64, __Vtemp_1, (0x3fU & 
                                           VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x7cU, 6U)), 
                      VL_CONCAT_QII(64,32,32, VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x5cU, 0x20U), 
                                    VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x3cU, 0x20U)));
        VL_ASSIGNSEL_WW(186,70,0x3cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, __Vtemp_1);
        VL_ASSIGNSEL_WI(186,12,0x30U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_III(12,6,6, (0x3fU 
                                               & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x36U, 6U)), 
                                      (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x30U, 6U))));
        VL_ASSIGNSEL_WQ(186,48,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_QIQ(48,6,42, (0x3fU 
                                                & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x2aU, 6U)), 
                                      VL_CONCAT_QII(42,10,32, 
                                                    (0x3ffU 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x20U, 0xaU)), 
                                                    VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0U, 0x20U))));
    } else {
        VL_ASSIGNSEL_WI(186,32,0x9aU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x61U, 0x20U));
        VL_ASSIGNSEL_WI(186,4,0x82U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_III(4,1,3, (1U & 
                                              VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x45U)), 
                                      VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x44U)), 
                                                    (3U 
                                                     & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x42U, 2U)))));
        VL_ASSIGNSEL_WI(186,20,0x86U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_III(20,11,9, (0x7ffU 
                                                & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x56U, 0xbU)), 
                                      VL_CONCAT_III(9,8,1, 
                                                    (0xffU 
                                                     & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x4eU, 8U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x4dU)))));
        VL_ASSIGNSEL_WI(186,6,0x7cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x3cU, 6U)));
        vlSelfRef.__Vfunc_bypass_network__4__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__4__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__4__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__4__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__4__prf_register_data 
            = vlSelfRef.__PVT__MEM_rs1_data;
        vlSelfRef.__Vfunc_bypass_network__4__rs_addr 
            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x36U, 6U));
        vlSelfRef.__Vfunc_bypass_network__4__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__4__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__4__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__4__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__4__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__4__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__4__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__4__prf_register_data)))));
        VL_ASSIGNSEL_WI(186,32,0x5cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, vlSelfRef.__Vfunc_bypass_network__4__Vfuncout);
        vlSelfRef.__Vfunc_bypass_network__5__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__5__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__5__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__5__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__5__prf_register_data 
            = vlSelfRef.__PVT__MEM_rs2_data;
        vlSelfRef.__Vfunc_bypass_network__5__rs_addr 
            = (0x3fU & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x30U, 6U));
        vlSelfRef.__Vfunc_bypass_network__5__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__5__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__5__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__5__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__5__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__5__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__5__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__5__prf_register_data)))));
        VL_ASSIGNSEL_WQ(186,44,0x30U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_QII(44,32,12, vlSelfRef.__Vfunc_bypass_network__5__Vfuncout, 
                                      VL_CONCAT_III(12,6,6, 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x36U, 6U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x30U, 6U)))));
        VL_ASSIGNSEL_WQ(186,48,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack, 
                        VL_CONCAT_QIQ(48,6,42, (0x3fU 
                                                & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x2aU, 6U)), 
                                      VL_CONCAT_QII(42,10,32, 
                                                    (0x3ffU 
                                                     & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x20U, 0xaU)), 
                                                    VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0U, 0x20U))));
    }
    if (vlSelfRef.__PVT__rst) {
        VL_CONST_W_1X(161,vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack,0x00000000);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) {
        VL_CONCAT_WQI(66,64,2, __Vtemp_2, VL_CONCAT_QII(64,32,32, 
                                                        VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x81U, 0x20U), 
                                                        VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x61U, 0x20U)), 
                      (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5fU, 2U)));
        VL_ASSIGNSEL_WW(161,66,0x5fU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, __Vtemp_2);
        VL_ASSIGNSEL_WI(161,5,0x5aU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(5,2,3, (3U & 
                                              VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5dU, 2U)), 
                                      (7U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5aU, 3U))));
        VL_ASSIGNSEL_WI(161,8,0x52U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(8,1,7, (1U & 
                                              VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x59U)), 
                                      VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x58U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x52U, 6U)))));
        VL_CONCAT_WQI(70,64,6, __Vtemp_3, VL_CONCAT_QII(64,32,32, 
                                                        VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x32U, 0x20U), 
                                                        VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x12U, 0x20U)), 
                      (0x3fU & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0xcU, 6U)));
        VL_ASSIGNSEL_WW(161,70,0xcU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, __Vtemp_3);
        VL_ASSIGNSEL_WI(161,12,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(12,6,6, (0x3fU 
                                               & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 6U, 6U)), 
                                      (0x3fU & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0U, 6U))));
    } else {
        VL_CONCAT_WQI(66,64,2, __Vtemp_4, VL_CONCAT_QII(64,32,32, 
                                                        VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x8dU, 0x20U), 
                                                        VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x6dU, 0x20U)), 
                      (3U & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x6bU, 2U)));
        VL_ASSIGNSEL_WW(161,66,0x5fU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, __Vtemp_4);
        VL_ASSIGNSEL_WI(161,5,0x5aU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(5,2,3, (3U & 
                                              VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x69U, 2U)), 
                                      (7U & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x66U, 3U))));
        VL_ASSIGNSEL_WI(161,8,0x52U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(8,1,7, (1U & 
                                              VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x65U)), 
                                      VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x64U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x1cU, 6U)))));
        vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__2__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__2__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__2__prf_register_data 
            = vlSelfRef.__PVT__IQ1_rs1_data;
        vlSelfRef.__Vfunc_bypass_network__2__rs_addr 
            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x16U, 6U));
        vlSelfRef.__Vfunc_bypass_network__2__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__2__prf_register_data)))));
        VL_ASSIGNSEL_WI(161,32,0x32U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, vlSelfRef.__Vfunc_bypass_network__2__Vfuncout);
        vlSelfRef.__Vfunc_bypass_network__3__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__3__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__3__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__3__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__3__prf_register_data 
            = vlSelfRef.__PVT__IQ1_rs2_data;
        vlSelfRef.__Vfunc_bypass_network__3__rs_addr 
            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x10U, 6U));
        vlSelfRef.__Vfunc_bypass_network__3__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__3__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__3__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__3__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__3__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__3__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__3__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__3__prf_register_data)))));
        VL_ASSIGNSEL_WI(161,32,0x12U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, vlSelfRef.__Vfunc_bypass_network__3__Vfuncout);
        VL_ASSIGNSEL_WI(161,18,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack, 
                        VL_CONCAT_III(18,6,12, (0x3fU 
                                                & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x16U, 6U)), 
                                      VL_CONCAT_III(12,6,6, 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x10U, 6U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0xaU, 6U)))));
    }
    if (vlSelfRef.__PVT__rst) {
        VL_ASSIGN_W(268,vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, Vfalco_top__ConstPool__CONST_hd571e6a2_0);
    } else if (vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) {
        VL_CONCAT_WQI(96,64,32, __Vtemp_5, VL_CONCAT_QII(64,32,32, 
                                                         VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xecU, 0x20U), 
                                                         VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xccU, 0x20U)), 
                      VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xacU, 0x20U));
        VL_ASSIGNSEL_WW(268,96,0xacU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, __Vtemp_5);
        VL_ASSIGNSEL_WI(268,7,0xa5U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(7,2,5, (3U & 
                                              VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaaU, 2U)), 
                                      VL_CONCAT_III(5,2,3, 
                                                    (3U 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa8U, 2U)), 
                                                    (7U 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 3U)))));
        VL_ASSIGNSEL_WI(268,3,0xa2U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa4U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa3U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa2U)))));
        VL_ASSIGNSEL_WI(268,14,0x94U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(14,1,13, (1U 
                                                & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa1U)), 
                                      VL_CONCAT_III(13,1,12, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa0U)), 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x94U, 0xcU)))));
        VL_ASSIGNSEL_WQ(268,38,0x6eU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_QIQ(38,5,33, (0x1fU 
                                                & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x8fU, 5U)), 
                                      VL_CONCAT_QII(33,32,1, 
                                                    VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x6fU, 0x20U), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x6eU)))));
        VL_ASSIGNSEL_WQ(268,50,0x3cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_QIQ(50,12,38, (0xfffU 
                                                 & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x62U, 0xcU)), 
                                      VL_CONCAT_QII(38,6,32, 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x5cU, 6U)), 
                                                    VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x3cU, 0x20U))));
        VL_ASSIGNSEL_WQ(268,44,0x10U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_QII(44,32,12, VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x1cU, 0x20U), 
                                      VL_CONCAT_III(12,6,6, 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x16U, 6U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x10U, 6U)))));
        VL_ASSIGNSEL_WI(268,16,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(16,6,10, (0x3fU 
                                                & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaU, 6U)), 
                                      (0x3ffU & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0U, 0xaU))));
    } else {
        VL_CONCAT_WQI(96,64,32, __Vtemp_6, VL_CONCAT_QII(64,32,32, 
                                                         VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x8dU, 0x20U), 
                                                         VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0xadU, 0x20U)), 
                      VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x6dU, 0x20U));
        VL_ASSIGNSEL_WW(268,96,0xacU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, __Vtemp_6);
        VL_ASSIGNSEL_WI(268,7,0xa5U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(7,2,5, (3U & 
                                              VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x6bU, 2U)), 
                                      VL_CONCAT_III(5,2,3, 
                                                    (3U 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x69U, 2U)), 
                                                    (7U 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x66U, 3U)))));
        VL_ASSIGNSEL_WI(268,3,0xa2U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(3,1,2, (1U & 
                                              VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x64U)), 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x63U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x62U)))));
        VL_ASSIGNSEL_WI(268,14,0x94U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(14,1,13, (1U 
                                                & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x61U)), 
                                      VL_CONCAT_III(13,1,12, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x60U)), 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x54U, 0xcU)))));
        VL_ASSIGNSEL_WQ(268,38,0x6eU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_QIQ(38,5,33, (0x1fU 
                                                & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x4fU, 5U)), 
                                      VL_CONCAT_QII(33,32,1, 
                                                    VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x2fU, 0x20U), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x2eU)))));
        VL_ASSIGNSEL_WI(268,18,0x5cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(18,12,6, (0xfffU 
                                                & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x22U, 0xcU)), 
                                      (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x1cU, 6U))));
        vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__0__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__0__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__0__prf_register_data 
            = vlSelfRef.__PVT__IQ0_rs1_data;
        vlSelfRef.__Vfunc_bypass_network__0__rs_addr 
            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x16U, 6U));
        vlSelfRef.__Vfunc_bypass_network__0__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__0__prf_register_data)))));
        VL_ASSIGNSEL_WI(268,32,0x3cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, vlSelfRef.__Vfunc_bypass_network__0__Vfuncout);
        vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
        vlSelfRef.__Vfunc_bypass_network__1__alu1_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
        vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
            = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
        vlSelfRef.__Vfunc_bypass_network__1__load_wb 
            = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
        vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
            = vlSelfRef.__PVT__IQ0_rs2_data;
        vlSelfRef.__Vfunc_bypass_network__1__rs_addr 
            = (0x3fU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x10U, 6U));
        vlSelfRef.__Vfunc_bypass_network__1__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr))
                ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                          == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x20U, 6U))) 
                         & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x26U))
                         ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0U, 0x20U)
                         : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                              == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x20U, 6U))) 
                             & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x26U))
                             ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0U, 0x20U)
                             : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                  == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x20U, 6U))) 
                                 & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x26U))
                                 ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0U, 0x20U)
                                 : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                      == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__load_wb, 0x20U, 6U))) 
                                     & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__load_wb, 0x26U))
                                     ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__load_wb, 0U, 0x20U)
                                     : vlSelfRef.__Vfunc_bypass_network__1__prf_register_data)))));
        VL_ASSIGNSEL_WI(268,32,0x1cU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, vlSelfRef.__Vfunc_bypass_network__1__Vfuncout);
        VL_ASSIGNSEL_WI(268,18,0xaU, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        VL_CONCAT_III(18,6,12, (0x3fU 
                                                & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x16U, 6U)), 
                                      VL_CONCAT_III(12,6,6, 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x10U, 6U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0xaU, 6U)))));
        VL_ASSIGNSEL_WI(268,10,0U, vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack, 
                        (0x3ffU & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0U, 0xaU)));
    }
    vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__mem_issue_pack_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                 & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                     ? VL_BITSEL_IIII(32, (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x2aU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__8__Vfuncout))
                                            ? 0U : 
                                           VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack_valid))), 0U)
                     : ((~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)) 
                        & (IData)(vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_valid)))));
    vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_muldiv_pack_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                 & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                     ? VL_BITSEL_IIII(32, (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0U, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__7__Vfuncout))
                                            ? 0U : 
                                           VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack_valid))), 0U)
                     : ((~ ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall))) 
                        & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_valid)))));
    vlSymsp->TOP__falco_top__core__register_read_io_inst.__Vdly__alu_bc_csr_pack_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                 & ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall)
                     ? VL_BITSEL_IIII(32, (([&]() {
                                vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag 
                                    = (0x3fU & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaU, 6U));
                                vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush 
                                    = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                                vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout 
                                    = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 0U) 
                                       & ((((0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                            >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag)) 
                                           ^ ((0x3fU 
                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 3U, 6U)) 
                                              >= (0x3fU 
                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))) 
                                          ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__rob_tag) 
                                             >= (0x3fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__branch_recovery_flush), 9U, 6U)))));
                            }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__6__Vfuncout))
                                            ? 0U : 
                                           VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack_valid))), 0U)
                     : ((~ ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) 
                            | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__INT_IQ_stall))) 
                        & (IData)(vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_valid)))));
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__1(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__rst 
        = vlSelfRef.__PVT__rst;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__2(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vcellinp__prf__muldiv_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__alu1_wb 
        = vlSelfRef.__Vcellinp__prf__alu1_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__muldiv_wb 
        = vlSelfRef.__Vcellinp__prf__muldiv_wb;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__3(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__IQ1_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x10U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ1_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr1_pack, 0x16U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ0_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x10U, 6U));
    vlSelfRef.__Vcellinp__prf__IQ0_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(205, vlSymsp->TOP__falco_top__core__int_iq_io_inst.__PVT__instr0_pack, 0x16U, 6U));
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__IQ1_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__IQ1_rs1_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__IQ0_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__IQ0_rs1_addr;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__4(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__MEM_rs2_addr = (0x3fU 
                                               & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x30U, 6U));
    vlSelfRef.__Vcellinp__prf__MEM_rs1_addr = (0x3fU 
                                               & VL_SEL_IWII(129, vlSymsp->TOP__falco_top__core__mem_iq_io_inst.__PVT__instr_pack, 0x36U, 6U));
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs2_addr 
        = vlSelfRef.__Vcellinp__prf__MEM_rs2_addr;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs1_addr 
        = vlSelfRef.__Vcellinp__prf__MEM_rs1_addr;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__5(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_sequent__TOP__falco_top__core__register_read_stage__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__alu_csr_bc_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__alu_csr_bc_wb 
        = vlSelfRef.__Vcellinp__prf__alu_csr_bc_wb;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__0(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__prf__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__mem_wb 
        = vlSelfRef.__Vcellinp__prf__mem_wb;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__1(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IQ1_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs2_data;
    vlSelfRef.__PVT__IQ1_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ1_rs1_data;
    vlSelfRef.__PVT__IQ0_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs2_data;
    vlSelfRef.__PVT__IQ0_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__IQ0_rs1_data;
}

VL_INLINE_OPT void Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__2(Vfalco_top_register_read* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_register_read___nba_comb__TOP__falco_top__core__register_read_stage__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MEM_rs2_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs2_data;
    vlSelfRef.__PVT__MEM_rs1_data = vlSymsp->TOP__falco_top__core__register_read_stage__prf.__PVT__MEM_rs1_data;
}
