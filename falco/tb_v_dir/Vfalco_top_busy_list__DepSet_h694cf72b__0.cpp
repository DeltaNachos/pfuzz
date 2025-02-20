// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_busy_list.h"

VL_INLINE_OPT void Vfalco_top_busy_list___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___ico_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__0__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr0_rs1_prf];
    vlSelfRef.__Vfunc_bypass_network__0__prf_addr = vlSelfRef.__PVT__instr0_rs1_prf;
    vlSelfRef.__Vfunc_bypass_network__0__Vfuncout = 
        (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr))) 
              | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                 & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                    == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
             | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                   == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
            | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
           | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
              & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                 == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
          | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
             & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
         | (IData)(vlSelfRef.__Vfunc_bypass_network__0__stale_bit));
    vlSelfRef.__PVT__instr0_rs1_ready = vlSelfRef.__Vfunc_bypass_network__0__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__1__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr0_rs2_prf];
    vlSelfRef.__Vfunc_bypass_network__1__prf_addr = vlSelfRef.__PVT__instr0_rs2_prf;
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr))) 
              | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                 & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                    == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
             | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                   == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
            | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
           | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
              & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                 == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
          | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
             & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
         | (IData)(vlSelfRef.__Vfunc_bypass_network__1__stale_bit));
    vlSelfRef.__PVT__instr0_rs2_ready = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_busy_list___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___ico_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs1_prf];
    vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr 
        = vlSelfRef.__PVT__instr1_rs1_prf;
    vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit)));
    vlSelfRef.__PVT__instr1_rs1_ready = vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout;
    vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs2_prf];
    vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr 
        = vlSelfRef.__PVT__instr1_rs2_prf;
    vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit)));
    vlSelfRef.__PVT__instr1_rs2_ready = vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_busy_list___act_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___act_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs1_prf];
    vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr 
        = vlSelfRef.__PVT__instr1_rs1_prf;
    vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit)));
    vlSelfRef.__PVT__instr1_rs1_ready = vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout;
    vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs2_prf];
    vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr 
        = vlSelfRef.__PVT__instr1_rs2_prf;
    vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit)));
    vlSelfRef.__PVT__instr1_rs2_ready = vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_busy_list___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___nba_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__busy_list_bits__v0 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v1 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v2 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v3 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v4 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v5 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v6 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v7 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v8 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v9 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v10 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v11 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v12 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v13 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v14 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v15 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v16 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v17 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v18 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v19 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v20 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v21 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v22 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v23 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v24 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v25 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v26 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v27 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v28 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v29 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v30 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v31 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v32 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v33 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v34 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v35 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v36 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v37 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v38 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v39 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v40 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v41 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v42 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v43 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v44 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v45 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v46 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v47 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v48 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v49 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v50 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v51 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v52 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v53 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v54 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v55 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v56 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v57 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v58 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v59 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v60 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v61 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v62 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v63 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v64 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v65 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v66 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v67 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v68 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v69 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v70 = 0U;
    vlSelfRef.__VdlySet__busy_list_bits__v71 = 0U;
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__busy_list_bits__v0 = 1U;
        vlSelfRef.__PVT__i = 1U;
        vlSelfRef.__VdlySet__busy_list_bits__v1 = 1U;
        vlSelfRef.__PVT__i = 2U;
        vlSelfRef.__VdlySet__busy_list_bits__v2 = 1U;
        vlSelfRef.__PVT__i = 3U;
        vlSelfRef.__VdlySet__busy_list_bits__v3 = 1U;
        vlSelfRef.__PVT__i = 4U;
        vlSelfRef.__VdlySet__busy_list_bits__v4 = 1U;
        vlSelfRef.__PVT__i = 5U;
        vlSelfRef.__VdlySet__busy_list_bits__v5 = 1U;
        vlSelfRef.__PVT__i = 6U;
        vlSelfRef.__VdlySet__busy_list_bits__v6 = 1U;
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.__VdlySet__busy_list_bits__v7 = 1U;
        vlSelfRef.__PVT__i = 8U;
        vlSelfRef.__VdlySet__busy_list_bits__v8 = 1U;
        vlSelfRef.__PVT__i = 9U;
        vlSelfRef.__VdlySet__busy_list_bits__v9 = 1U;
        vlSelfRef.__PVT__i = 0xaU;
        vlSelfRef.__VdlySet__busy_list_bits__v10 = 1U;
        vlSelfRef.__PVT__i = 0xbU;
        vlSelfRef.__VdlySet__busy_list_bits__v11 = 1U;
        vlSelfRef.__PVT__i = 0xcU;
        vlSelfRef.__VdlySet__busy_list_bits__v12 = 1U;
        vlSelfRef.__PVT__i = 0xdU;
        vlSelfRef.__VdlySet__busy_list_bits__v13 = 1U;
        vlSelfRef.__PVT__i = 0xeU;
        vlSelfRef.__VdlySet__busy_list_bits__v14 = 1U;
        vlSelfRef.__PVT__i = 0xfU;
        vlSelfRef.__VdlySet__busy_list_bits__v15 = 1U;
        vlSelfRef.__PVT__i = 0x10U;
        vlSelfRef.__VdlySet__busy_list_bits__v16 = 1U;
        vlSelfRef.__PVT__i = 0x11U;
        vlSelfRef.__VdlySet__busy_list_bits__v17 = 1U;
        vlSelfRef.__PVT__i = 0x12U;
        vlSelfRef.__VdlySet__busy_list_bits__v18 = 1U;
        vlSelfRef.__PVT__i = 0x13U;
        vlSelfRef.__VdlySet__busy_list_bits__v19 = 1U;
        vlSelfRef.__PVT__i = 0x14U;
        vlSelfRef.__VdlySet__busy_list_bits__v20 = 1U;
        vlSelfRef.__PVT__i = 0x15U;
        vlSelfRef.__VdlySet__busy_list_bits__v21 = 1U;
        vlSelfRef.__PVT__i = 0x16U;
        vlSelfRef.__VdlySet__busy_list_bits__v22 = 1U;
        vlSelfRef.__PVT__i = 0x17U;
        vlSelfRef.__VdlySet__busy_list_bits__v23 = 1U;
        vlSelfRef.__PVT__i = 0x18U;
        vlSelfRef.__VdlySet__busy_list_bits__v24 = 1U;
        vlSelfRef.__PVT__i = 0x19U;
        vlSelfRef.__VdlySet__busy_list_bits__v25 = 1U;
        vlSelfRef.__PVT__i = 0x1aU;
        vlSelfRef.__VdlySet__busy_list_bits__v26 = 1U;
        vlSelfRef.__PVT__i = 0x1bU;
        vlSelfRef.__VdlySet__busy_list_bits__v27 = 1U;
        vlSelfRef.__PVT__i = 0x1cU;
        vlSelfRef.__VdlySet__busy_list_bits__v28 = 1U;
        vlSelfRef.__PVT__i = 0x1dU;
        vlSelfRef.__VdlySet__busy_list_bits__v29 = 1U;
        vlSelfRef.__PVT__i = 0x1eU;
        vlSelfRef.__VdlySet__busy_list_bits__v30 = 1U;
        vlSelfRef.__PVT__i = 0x1fU;
        vlSelfRef.__VdlySet__busy_list_bits__v31 = 1U;
        vlSelfRef.__PVT__i = 0x20U;
        vlSelfRef.__VdlySet__busy_list_bits__v32 = 1U;
        vlSelfRef.__PVT__i = 0x21U;
        vlSelfRef.__VdlySet__busy_list_bits__v33 = 1U;
        vlSelfRef.__PVT__i = 0x22U;
        vlSelfRef.__VdlySet__busy_list_bits__v34 = 1U;
        vlSelfRef.__PVT__i = 0x23U;
        vlSelfRef.__VdlySet__busy_list_bits__v35 = 1U;
        vlSelfRef.__PVT__i = 0x24U;
        vlSelfRef.__VdlySet__busy_list_bits__v36 = 1U;
        vlSelfRef.__PVT__i = 0x25U;
        vlSelfRef.__VdlySet__busy_list_bits__v37 = 1U;
        vlSelfRef.__PVT__i = 0x26U;
        vlSelfRef.__VdlySet__busy_list_bits__v38 = 1U;
        vlSelfRef.__PVT__i = 0x27U;
        vlSelfRef.__VdlySet__busy_list_bits__v39 = 1U;
        vlSelfRef.__PVT__i = 0x28U;
        vlSelfRef.__VdlySet__busy_list_bits__v40 = 1U;
        vlSelfRef.__PVT__i = 0x29U;
        vlSelfRef.__VdlySet__busy_list_bits__v41 = 1U;
        vlSelfRef.__PVT__i = 0x2aU;
        vlSelfRef.__VdlySet__busy_list_bits__v42 = 1U;
        vlSelfRef.__PVT__i = 0x2bU;
        vlSelfRef.__VdlySet__busy_list_bits__v43 = 1U;
        vlSelfRef.__PVT__i = 0x2cU;
        vlSelfRef.__VdlySet__busy_list_bits__v44 = 1U;
        vlSelfRef.__PVT__i = 0x2dU;
        vlSelfRef.__VdlySet__busy_list_bits__v45 = 1U;
        vlSelfRef.__PVT__i = 0x2eU;
        vlSelfRef.__VdlySet__busy_list_bits__v46 = 1U;
        vlSelfRef.__PVT__i = 0x2fU;
        vlSelfRef.__VdlySet__busy_list_bits__v47 = 1U;
        vlSelfRef.__PVT__i = 0x30U;
        vlSelfRef.__VdlySet__busy_list_bits__v48 = 1U;
        vlSelfRef.__PVT__i = 0x31U;
        vlSelfRef.__VdlySet__busy_list_bits__v49 = 1U;
        vlSelfRef.__PVT__i = 0x32U;
        vlSelfRef.__VdlySet__busy_list_bits__v50 = 1U;
        vlSelfRef.__PVT__i = 0x33U;
        vlSelfRef.__VdlySet__busy_list_bits__v51 = 1U;
        vlSelfRef.__PVT__i = 0x34U;
        vlSelfRef.__VdlySet__busy_list_bits__v52 = 1U;
        vlSelfRef.__PVT__i = 0x35U;
        vlSelfRef.__VdlySet__busy_list_bits__v53 = 1U;
        vlSelfRef.__PVT__i = 0x36U;
        vlSelfRef.__VdlySet__busy_list_bits__v54 = 1U;
        vlSelfRef.__PVT__i = 0x37U;
        vlSelfRef.__VdlySet__busy_list_bits__v55 = 1U;
        vlSelfRef.__PVT__i = 0x38U;
        vlSelfRef.__VdlySet__busy_list_bits__v56 = 1U;
        vlSelfRef.__PVT__i = 0x39U;
        vlSelfRef.__VdlySet__busy_list_bits__v57 = 1U;
        vlSelfRef.__PVT__i = 0x3aU;
        vlSelfRef.__VdlySet__busy_list_bits__v58 = 1U;
        vlSelfRef.__PVT__i = 0x3bU;
        vlSelfRef.__VdlySet__busy_list_bits__v59 = 1U;
        vlSelfRef.__PVT__i = 0x3cU;
        vlSelfRef.__VdlySet__busy_list_bits__v60 = 1U;
        vlSelfRef.__PVT__i = 0x3dU;
        vlSelfRef.__VdlySet__busy_list_bits__v61 = 1U;
        vlSelfRef.__PVT__i = 0x3eU;
        vlSelfRef.__VdlySet__busy_list_bits__v62 = 1U;
        vlSelfRef.__PVT__i = 0x3fU;
        vlSelfRef.__VdlySet__busy_list_bits__v63 = 1U;
        vlSelfRef.__PVT__i = 0x40U;
    }
    if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__instr0_rd_prf)) 
         & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v64 = vlSelfRef.__PVT__instr0_rd_prf;
        vlSelfRef.__VdlySet__busy_list_bits__v64 = 1U;
    }
    if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__instr1_rd_prf)) 
         & (IData)(vlSelfRef.__PVT__instr1_rd_valid))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v65 = vlSelfRef.__PVT__instr1_rd_prf;
        vlSelfRef.__VdlySet__busy_list_bits__v65 = 1U;
    }
    if ((1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v66 = 
            (0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U));
        vlSelfRef.__VdlySet__busy_list_bits__v66 = 1U;
    }
    if ((1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v67 = 
            (0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U));
        vlSelfRef.__VdlySet__busy_list_bits__v67 = 1U;
    }
    if ((1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v68 = 
            (0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U));
        vlSelfRef.__VdlySet__busy_list_bits__v68 = 1U;
    }
    if ((1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U))) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v69 = 
            (0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U));
        vlSelfRef.__VdlySet__busy_list_bits__v69 = 1U;
    }
    if (vlSelfRef.__PVT__int_issue0_rd_valid) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v70 = vlSelfRef.__PVT__int_issue0_rd_prf;
        vlSelfRef.__VdlySet__busy_list_bits__v70 = 1U;
    }
    if (vlSelfRef.__PVT__int_issue1_rd_valid) {
        vlSelfRef.__VdlyDim0__busy_list_bits__v71 = vlSelfRef.__PVT__int_issue1_rd_prf;
        vlSelfRef.__VdlySet__busy_list_bits__v71 = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v0) {
        vlSelfRef.busy_list_bits[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v1) {
        vlSelfRef.busy_list_bits[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v2) {
        vlSelfRef.busy_list_bits[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v3) {
        vlSelfRef.busy_list_bits[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v4) {
        vlSelfRef.busy_list_bits[4U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v5) {
        vlSelfRef.busy_list_bits[5U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v6) {
        vlSelfRef.busy_list_bits[6U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v7) {
        vlSelfRef.busy_list_bits[7U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v8) {
        vlSelfRef.busy_list_bits[8U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v9) {
        vlSelfRef.busy_list_bits[9U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v10) {
        vlSelfRef.busy_list_bits[0xaU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v11) {
        vlSelfRef.busy_list_bits[0xbU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v12) {
        vlSelfRef.busy_list_bits[0xcU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v13) {
        vlSelfRef.busy_list_bits[0xdU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v14) {
        vlSelfRef.busy_list_bits[0xeU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v15) {
        vlSelfRef.busy_list_bits[0xfU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v16) {
        vlSelfRef.busy_list_bits[0x10U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v17) {
        vlSelfRef.busy_list_bits[0x11U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v18) {
        vlSelfRef.busy_list_bits[0x12U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v19) {
        vlSelfRef.busy_list_bits[0x13U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v20) {
        vlSelfRef.busy_list_bits[0x14U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v21) {
        vlSelfRef.busy_list_bits[0x15U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v22) {
        vlSelfRef.busy_list_bits[0x16U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v23) {
        vlSelfRef.busy_list_bits[0x17U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v24) {
        vlSelfRef.busy_list_bits[0x18U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v25) {
        vlSelfRef.busy_list_bits[0x19U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v26) {
        vlSelfRef.busy_list_bits[0x1aU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v27) {
        vlSelfRef.busy_list_bits[0x1bU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v28) {
        vlSelfRef.busy_list_bits[0x1cU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v29) {
        vlSelfRef.busy_list_bits[0x1dU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v30) {
        vlSelfRef.busy_list_bits[0x1eU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v31) {
        vlSelfRef.busy_list_bits[0x1fU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v32) {
        vlSelfRef.busy_list_bits[0x20U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v33) {
        vlSelfRef.busy_list_bits[0x21U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v34) {
        vlSelfRef.busy_list_bits[0x22U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v35) {
        vlSelfRef.busy_list_bits[0x23U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v36) {
        vlSelfRef.busy_list_bits[0x24U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v37) {
        vlSelfRef.busy_list_bits[0x25U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v38) {
        vlSelfRef.busy_list_bits[0x26U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v39) {
        vlSelfRef.busy_list_bits[0x27U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v40) {
        vlSelfRef.busy_list_bits[0x28U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v41) {
        vlSelfRef.busy_list_bits[0x29U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v42) {
        vlSelfRef.busy_list_bits[0x2aU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v43) {
        vlSelfRef.busy_list_bits[0x2bU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v44) {
        vlSelfRef.busy_list_bits[0x2cU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v45) {
        vlSelfRef.busy_list_bits[0x2dU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v46) {
        vlSelfRef.busy_list_bits[0x2eU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v47) {
        vlSelfRef.busy_list_bits[0x2fU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v48) {
        vlSelfRef.busy_list_bits[0x30U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v49) {
        vlSelfRef.busy_list_bits[0x31U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v50) {
        vlSelfRef.busy_list_bits[0x32U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v51) {
        vlSelfRef.busy_list_bits[0x33U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v52) {
        vlSelfRef.busy_list_bits[0x34U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v53) {
        vlSelfRef.busy_list_bits[0x35U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v54) {
        vlSelfRef.busy_list_bits[0x36U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v55) {
        vlSelfRef.busy_list_bits[0x37U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v56) {
        vlSelfRef.busy_list_bits[0x38U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v57) {
        vlSelfRef.busy_list_bits[0x39U] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v58) {
        vlSelfRef.busy_list_bits[0x3aU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v59) {
        vlSelfRef.busy_list_bits[0x3bU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v60) {
        vlSelfRef.busy_list_bits[0x3cU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v61) {
        vlSelfRef.busy_list_bits[0x3dU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v62) {
        vlSelfRef.busy_list_bits[0x3eU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v63) {
        vlSelfRef.busy_list_bits[0x3fU] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v64) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v64] = 0U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v65) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v65] = 0U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v66) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v66] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v67) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v67] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v68) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v68] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v69) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v69] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v70) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v70] = 1U;
    }
    if (vlSelfRef.__VdlySet__busy_list_bits__v71) {
        vlSelfRef.busy_list_bits[vlSelfRef.__VdlyDim0__busy_list_bits__v71] = 1U;
    }
}

VL_INLINE_OPT void Vfalco_top_busy_list___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__0__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr0_rs1_prf];
    vlSelfRef.__Vfunc_bypass_network__0__prf_addr = vlSelfRef.__PVT__instr0_rs1_prf;
    vlSelfRef.__Vfunc_bypass_network__0__Vfuncout = 
        (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr))) 
              | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                 & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                    == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
             | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                   == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
            | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
           | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
              & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                 == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
          | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
             & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_network__0__prf_addr)))) 
         | (IData)(vlSelfRef.__Vfunc_bypass_network__0__stale_bit));
    vlSelfRef.__PVT__instr0_rs1_ready = vlSelfRef.__Vfunc_bypass_network__0__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__1__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr0_rs2_prf];
    vlSelfRef.__Vfunc_bypass_network__1__prf_addr = vlSelfRef.__PVT__instr0_rs2_prf;
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr))) 
              | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                 & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                    == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
             | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                   == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
            | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
               & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                  == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
           | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
              & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                 == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
          | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
             & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_network__1__prf_addr)))) 
         | (IData)(vlSelfRef.__Vfunc_bypass_network__1__stale_bit));
    vlSelfRef.__PVT__instr0_rs2_ready = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
}

VL_INLINE_OPT void Vfalco_top_busy_list___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__1(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___nba_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs1_prf];
    vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr 
        = vlSelfRef.__PVT__instr1_rs1_prf;
    vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__2__stale_bit)));
    vlSelfRef.__PVT__instr1_rs1_ready = vlSelfRef.__Vfunc_bypass_next_network__2__Vfuncout;
    vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit 
        = vlSelfRef.busy_list_bits[vlSelfRef.__PVT__instr1_rs2_prf];
    vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr 
        = vlSelfRef.__PVT__instr1_rs2_prf;
    vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout 
        = ((~ (((IData)(vlSelfRef.__PVT__instr0_rd_prf) 
                == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)) 
               & (IData)(vlSelfRef.__PVT__instr0_rd_valid))) 
           & (((((((VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_alu_csr_bc), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr))) 
                   | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 6U) 
                      & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_ALU_1), 0U, 6U)) 
                         == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                  | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 6U) 
                     & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_muldiv), 0U, 6U)) 
                        == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                 | (VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 6U) 
                    & ((0x3fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__BCAST_load), 0U, 6U)) 
                       == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
                | ((IData)(vlSelfRef.__PVT__int_issue0_rd_valid) 
                   & ((IData)(vlSelfRef.__PVT__int_issue0_rd_prf) 
                      == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
               | ((IData)(vlSelfRef.__PVT__int_issue1_rd_valid) 
                  & ((IData)(vlSelfRef.__PVT__int_issue1_rd_prf) 
                     == (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__prf_addr)))) 
              | (IData)(vlSelfRef.__Vfunc_bypass_next_network__3__stale_bit)));
    vlSelfRef.__PVT__instr1_rs2_ready = vlSelfRef.__Vfunc_bypass_next_network__3__Vfuncout;
}
