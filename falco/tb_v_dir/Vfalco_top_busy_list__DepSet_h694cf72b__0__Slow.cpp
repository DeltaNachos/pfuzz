// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_busy_list.h"

VL_ATTR_COLD void Vfalco_top_busy_list___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___stl_sequent__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vfalco_top_busy_list___stl_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___stl_comb__TOP__falco_top__core__rename_dispatch_stage__Busy_list__0\n"); );
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

VL_ATTR_COLD void Vfalco_top_busy_list___ctor_var_reset(Vfalco_top_busy_list* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_busy_list___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_rs1_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_rs2_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_rs1_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_rs2_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BCAST_alu_csr_bc = VL_RAND_RESET_I(7);
    vlSelf->__PVT__BCAST_ALU_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__BCAST_muldiv = VL_RAND_RESET_I(7);
    vlSelf->__PVT__BCAST_load = VL_RAND_RESET_I(7);
    vlSelf->__PVT__int_issue0_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_issue0_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__int_issue1_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_issue1_rd_prf = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->busy_list_bits[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_network__0__prf_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__0__stale_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_network__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_network__1__prf_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__1__stale_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_next_network__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_next_network__2__prf_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_next_network__2__stale_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_next_network__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bypass_next_network__3__prf_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_next_network__3__stale_bit = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__busy_list_bits__v0 = 0;
    vlSelf->__VdlySet__busy_list_bits__v1 = 0;
    vlSelf->__VdlySet__busy_list_bits__v2 = 0;
    vlSelf->__VdlySet__busy_list_bits__v3 = 0;
    vlSelf->__VdlySet__busy_list_bits__v4 = 0;
    vlSelf->__VdlySet__busy_list_bits__v5 = 0;
    vlSelf->__VdlySet__busy_list_bits__v6 = 0;
    vlSelf->__VdlySet__busy_list_bits__v7 = 0;
    vlSelf->__VdlySet__busy_list_bits__v8 = 0;
    vlSelf->__VdlySet__busy_list_bits__v9 = 0;
    vlSelf->__VdlySet__busy_list_bits__v10 = 0;
    vlSelf->__VdlySet__busy_list_bits__v11 = 0;
    vlSelf->__VdlySet__busy_list_bits__v12 = 0;
    vlSelf->__VdlySet__busy_list_bits__v13 = 0;
    vlSelf->__VdlySet__busy_list_bits__v14 = 0;
    vlSelf->__VdlySet__busy_list_bits__v15 = 0;
    vlSelf->__VdlySet__busy_list_bits__v16 = 0;
    vlSelf->__VdlySet__busy_list_bits__v17 = 0;
    vlSelf->__VdlySet__busy_list_bits__v18 = 0;
    vlSelf->__VdlySet__busy_list_bits__v19 = 0;
    vlSelf->__VdlySet__busy_list_bits__v20 = 0;
    vlSelf->__VdlySet__busy_list_bits__v21 = 0;
    vlSelf->__VdlySet__busy_list_bits__v22 = 0;
    vlSelf->__VdlySet__busy_list_bits__v23 = 0;
    vlSelf->__VdlySet__busy_list_bits__v24 = 0;
    vlSelf->__VdlySet__busy_list_bits__v25 = 0;
    vlSelf->__VdlySet__busy_list_bits__v26 = 0;
    vlSelf->__VdlySet__busy_list_bits__v27 = 0;
    vlSelf->__VdlySet__busy_list_bits__v28 = 0;
    vlSelf->__VdlySet__busy_list_bits__v29 = 0;
    vlSelf->__VdlySet__busy_list_bits__v30 = 0;
    vlSelf->__VdlySet__busy_list_bits__v31 = 0;
    vlSelf->__VdlySet__busy_list_bits__v32 = 0;
    vlSelf->__VdlySet__busy_list_bits__v33 = 0;
    vlSelf->__VdlySet__busy_list_bits__v34 = 0;
    vlSelf->__VdlySet__busy_list_bits__v35 = 0;
    vlSelf->__VdlySet__busy_list_bits__v36 = 0;
    vlSelf->__VdlySet__busy_list_bits__v37 = 0;
    vlSelf->__VdlySet__busy_list_bits__v38 = 0;
    vlSelf->__VdlySet__busy_list_bits__v39 = 0;
    vlSelf->__VdlySet__busy_list_bits__v40 = 0;
    vlSelf->__VdlySet__busy_list_bits__v41 = 0;
    vlSelf->__VdlySet__busy_list_bits__v42 = 0;
    vlSelf->__VdlySet__busy_list_bits__v43 = 0;
    vlSelf->__VdlySet__busy_list_bits__v44 = 0;
    vlSelf->__VdlySet__busy_list_bits__v45 = 0;
    vlSelf->__VdlySet__busy_list_bits__v46 = 0;
    vlSelf->__VdlySet__busy_list_bits__v47 = 0;
    vlSelf->__VdlySet__busy_list_bits__v48 = 0;
    vlSelf->__VdlySet__busy_list_bits__v49 = 0;
    vlSelf->__VdlySet__busy_list_bits__v50 = 0;
    vlSelf->__VdlySet__busy_list_bits__v51 = 0;
    vlSelf->__VdlySet__busy_list_bits__v52 = 0;
    vlSelf->__VdlySet__busy_list_bits__v53 = 0;
    vlSelf->__VdlySet__busy_list_bits__v54 = 0;
    vlSelf->__VdlySet__busy_list_bits__v55 = 0;
    vlSelf->__VdlySet__busy_list_bits__v56 = 0;
    vlSelf->__VdlySet__busy_list_bits__v57 = 0;
    vlSelf->__VdlySet__busy_list_bits__v58 = 0;
    vlSelf->__VdlySet__busy_list_bits__v59 = 0;
    vlSelf->__VdlySet__busy_list_bits__v60 = 0;
    vlSelf->__VdlySet__busy_list_bits__v61 = 0;
    vlSelf->__VdlySet__busy_list_bits__v62 = 0;
    vlSelf->__VdlySet__busy_list_bits__v63 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v64 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v64 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v65 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v65 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v66 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v66 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v67 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v67 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v68 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v68 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v69 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v69 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v70 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v70 = 0;
    vlSelf->__VdlyDim0__busy_list_bits__v71 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__busy_list_bits__v71 = 0;
}
