// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_physical_register_file.h"

VL_INLINE_OPT void Vfalco_top_physical_register_file___ico_sequent__TOP__falco_top__core__register_read_stage__prf__0(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___ico_sequent__TOP__falco_top__core__register_read_stage__prf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IQ0_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs1_addr];
    vlSelfRef.__PVT__IQ0_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs2_addr];
    vlSelfRef.__PVT__IQ1_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs1_addr];
    vlSelfRef.__PVT__IQ1_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs2_addr];
    vlSelfRef.__PVT__MEM_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs1_addr];
    vlSelfRef.__PVT__MEM_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs2_addr];
}

VL_INLINE_OPT void Vfalco_top_physical_register_file___nba_sequent__TOP__falco_top__core__register_read_stage__prf__0(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___nba_sequent__TOP__falco_top__core__register_read_stage__prf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__prf_file__v0 = 0U;
    vlSelfRef.__VdlySet__prf_file__v1 = 0U;
    vlSelfRef.__VdlySet__prf_file__v2 = 0U;
    vlSelfRef.__VdlySet__prf_file__v3 = 0U;
    vlSelfRef.__VdlySet__prf_file__v4 = 0U;
    vlSelfRef.__VdlySet__prf_file__v5 = 0U;
    vlSelfRef.__VdlySet__prf_file__v6 = 0U;
    vlSelfRef.__VdlySet__prf_file__v7 = 0U;
    vlSelfRef.__VdlySet__prf_file__v8 = 0U;
    vlSelfRef.__VdlySet__prf_file__v9 = 0U;
    vlSelfRef.__VdlySet__prf_file__v10 = 0U;
    vlSelfRef.__VdlySet__prf_file__v11 = 0U;
    vlSelfRef.__VdlySet__prf_file__v12 = 0U;
    vlSelfRef.__VdlySet__prf_file__v13 = 0U;
    vlSelfRef.__VdlySet__prf_file__v14 = 0U;
    vlSelfRef.__VdlySet__prf_file__v15 = 0U;
    vlSelfRef.__VdlySet__prf_file__v16 = 0U;
    vlSelfRef.__VdlySet__prf_file__v17 = 0U;
    vlSelfRef.__VdlySet__prf_file__v18 = 0U;
    vlSelfRef.__VdlySet__prf_file__v19 = 0U;
    vlSelfRef.__VdlySet__prf_file__v20 = 0U;
    vlSelfRef.__VdlySet__prf_file__v21 = 0U;
    vlSelfRef.__VdlySet__prf_file__v22 = 0U;
    vlSelfRef.__VdlySet__prf_file__v23 = 0U;
    vlSelfRef.__VdlySet__prf_file__v24 = 0U;
    vlSelfRef.__VdlySet__prf_file__v25 = 0U;
    vlSelfRef.__VdlySet__prf_file__v26 = 0U;
    vlSelfRef.__VdlySet__prf_file__v27 = 0U;
    vlSelfRef.__VdlySet__prf_file__v28 = 0U;
    vlSelfRef.__VdlySet__prf_file__v29 = 0U;
    vlSelfRef.__VdlySet__prf_file__v30 = 0U;
    vlSelfRef.__VdlySet__prf_file__v31 = 0U;
    vlSelfRef.__VdlySet__prf_file__v32 = 0U;
    vlSelfRef.__VdlySet__prf_file__v33 = 0U;
    vlSelfRef.__VdlySet__prf_file__v34 = 0U;
    vlSelfRef.__VdlySet__prf_file__v35 = 0U;
    vlSelfRef.__VdlySet__prf_file__v36 = 0U;
    vlSelfRef.__VdlySet__prf_file__v37 = 0U;
    vlSelfRef.__VdlySet__prf_file__v38 = 0U;
    vlSelfRef.__VdlySet__prf_file__v39 = 0U;
    vlSelfRef.__VdlySet__prf_file__v40 = 0U;
    vlSelfRef.__VdlySet__prf_file__v41 = 0U;
    vlSelfRef.__VdlySet__prf_file__v42 = 0U;
    vlSelfRef.__VdlySet__prf_file__v43 = 0U;
    vlSelfRef.__VdlySet__prf_file__v44 = 0U;
    vlSelfRef.__VdlySet__prf_file__v45 = 0U;
    vlSelfRef.__VdlySet__prf_file__v46 = 0U;
    vlSelfRef.__VdlySet__prf_file__v47 = 0U;
    vlSelfRef.__VdlySet__prf_file__v48 = 0U;
    vlSelfRef.__VdlySet__prf_file__v49 = 0U;
    vlSelfRef.__VdlySet__prf_file__v50 = 0U;
    vlSelfRef.__VdlySet__prf_file__v51 = 0U;
    vlSelfRef.__VdlySet__prf_file__v52 = 0U;
    vlSelfRef.__VdlySet__prf_file__v53 = 0U;
    vlSelfRef.__VdlySet__prf_file__v54 = 0U;
    vlSelfRef.__VdlySet__prf_file__v55 = 0U;
    vlSelfRef.__VdlySet__prf_file__v56 = 0U;
    vlSelfRef.__VdlySet__prf_file__v57 = 0U;
    vlSelfRef.__VdlySet__prf_file__v58 = 0U;
    vlSelfRef.__VdlySet__prf_file__v59 = 0U;
    vlSelfRef.__VdlySet__prf_file__v60 = 0U;
    vlSelfRef.__VdlySet__prf_file__v61 = 0U;
    vlSelfRef.__VdlySet__prf_file__v62 = 0U;
    vlSelfRef.__VdlySet__prf_file__v63 = 0U;
    vlSelfRef.__VdlySet__prf_file__v64 = 0U;
    vlSelfRef.__VdlySet__prf_file__v65 = 0U;
    vlSelfRef.__VdlySet__prf_file__v66 = 0U;
    vlSelfRef.__VdlySet__prf_file__v67 = 0U;
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__VdlySet__prf_file__v0 = 1U;
        vlSelfRef.__PVT__i = 1U;
        vlSelfRef.__VdlySet__prf_file__v1 = 1U;
        vlSelfRef.__PVT__i = 2U;
        vlSelfRef.__VdlySet__prf_file__v2 = 1U;
        vlSelfRef.__PVT__i = 3U;
        vlSelfRef.__VdlySet__prf_file__v3 = 1U;
        vlSelfRef.__PVT__i = 4U;
        vlSelfRef.__VdlySet__prf_file__v4 = 1U;
        vlSelfRef.__PVT__i = 5U;
        vlSelfRef.__VdlySet__prf_file__v5 = 1U;
        vlSelfRef.__PVT__i = 6U;
        vlSelfRef.__VdlySet__prf_file__v6 = 1U;
        vlSelfRef.__PVT__i = 7U;
        vlSelfRef.__VdlySet__prf_file__v7 = 1U;
        vlSelfRef.__PVT__i = 8U;
        vlSelfRef.__VdlySet__prf_file__v8 = 1U;
        vlSelfRef.__PVT__i = 9U;
        vlSelfRef.__VdlySet__prf_file__v9 = 1U;
        vlSelfRef.__PVT__i = 0xaU;
        vlSelfRef.__VdlySet__prf_file__v10 = 1U;
        vlSelfRef.__PVT__i = 0xbU;
        vlSelfRef.__VdlySet__prf_file__v11 = 1U;
        vlSelfRef.__PVT__i = 0xcU;
        vlSelfRef.__VdlySet__prf_file__v12 = 1U;
        vlSelfRef.__PVT__i = 0xdU;
        vlSelfRef.__VdlySet__prf_file__v13 = 1U;
        vlSelfRef.__PVT__i = 0xeU;
        vlSelfRef.__VdlySet__prf_file__v14 = 1U;
        vlSelfRef.__PVT__i = 0xfU;
        vlSelfRef.__VdlySet__prf_file__v15 = 1U;
        vlSelfRef.__PVT__i = 0x10U;
        vlSelfRef.__VdlySet__prf_file__v16 = 1U;
        vlSelfRef.__PVT__i = 0x11U;
        vlSelfRef.__VdlySet__prf_file__v17 = 1U;
        vlSelfRef.__PVT__i = 0x12U;
        vlSelfRef.__VdlySet__prf_file__v18 = 1U;
        vlSelfRef.__PVT__i = 0x13U;
        vlSelfRef.__VdlySet__prf_file__v19 = 1U;
        vlSelfRef.__PVT__i = 0x14U;
        vlSelfRef.__VdlySet__prf_file__v20 = 1U;
        vlSelfRef.__PVT__i = 0x15U;
        vlSelfRef.__VdlySet__prf_file__v21 = 1U;
        vlSelfRef.__PVT__i = 0x16U;
        vlSelfRef.__VdlySet__prf_file__v22 = 1U;
        vlSelfRef.__PVT__i = 0x17U;
        vlSelfRef.__VdlySet__prf_file__v23 = 1U;
        vlSelfRef.__PVT__i = 0x18U;
        vlSelfRef.__VdlySet__prf_file__v24 = 1U;
        vlSelfRef.__PVT__i = 0x19U;
        vlSelfRef.__VdlySet__prf_file__v25 = 1U;
        vlSelfRef.__PVT__i = 0x1aU;
        vlSelfRef.__VdlySet__prf_file__v26 = 1U;
        vlSelfRef.__PVT__i = 0x1bU;
        vlSelfRef.__VdlySet__prf_file__v27 = 1U;
        vlSelfRef.__PVT__i = 0x1cU;
        vlSelfRef.__VdlySet__prf_file__v28 = 1U;
        vlSelfRef.__PVT__i = 0x1dU;
        vlSelfRef.__VdlySet__prf_file__v29 = 1U;
        vlSelfRef.__PVT__i = 0x1eU;
        vlSelfRef.__VdlySet__prf_file__v30 = 1U;
        vlSelfRef.__PVT__i = 0x1fU;
        vlSelfRef.__VdlySet__prf_file__v31 = 1U;
        vlSelfRef.__PVT__i = 0x20U;
        vlSelfRef.__VdlySet__prf_file__v32 = 1U;
        vlSelfRef.__PVT__i = 0x21U;
        vlSelfRef.__VdlySet__prf_file__v33 = 1U;
        vlSelfRef.__PVT__i = 0x22U;
        vlSelfRef.__VdlySet__prf_file__v34 = 1U;
        vlSelfRef.__PVT__i = 0x23U;
        vlSelfRef.__VdlySet__prf_file__v35 = 1U;
        vlSelfRef.__PVT__i = 0x24U;
        vlSelfRef.__VdlySet__prf_file__v36 = 1U;
        vlSelfRef.__PVT__i = 0x25U;
        vlSelfRef.__VdlySet__prf_file__v37 = 1U;
        vlSelfRef.__PVT__i = 0x26U;
        vlSelfRef.__VdlySet__prf_file__v38 = 1U;
        vlSelfRef.__PVT__i = 0x27U;
        vlSelfRef.__VdlySet__prf_file__v39 = 1U;
        vlSelfRef.__PVT__i = 0x28U;
        vlSelfRef.__VdlySet__prf_file__v40 = 1U;
        vlSelfRef.__PVT__i = 0x29U;
        vlSelfRef.__VdlySet__prf_file__v41 = 1U;
        vlSelfRef.__PVT__i = 0x2aU;
        vlSelfRef.__VdlySet__prf_file__v42 = 1U;
        vlSelfRef.__PVT__i = 0x2bU;
        vlSelfRef.__VdlySet__prf_file__v43 = 1U;
        vlSelfRef.__PVT__i = 0x2cU;
        vlSelfRef.__VdlySet__prf_file__v44 = 1U;
        vlSelfRef.__PVT__i = 0x2dU;
        vlSelfRef.__VdlySet__prf_file__v45 = 1U;
        vlSelfRef.__PVT__i = 0x2eU;
        vlSelfRef.__VdlySet__prf_file__v46 = 1U;
        vlSelfRef.__PVT__i = 0x2fU;
        vlSelfRef.__VdlySet__prf_file__v47 = 1U;
        vlSelfRef.__PVT__i = 0x30U;
        vlSelfRef.__VdlySet__prf_file__v48 = 1U;
        vlSelfRef.__PVT__i = 0x31U;
        vlSelfRef.__VdlySet__prf_file__v49 = 1U;
        vlSelfRef.__PVT__i = 0x32U;
        vlSelfRef.__VdlySet__prf_file__v50 = 1U;
        vlSelfRef.__PVT__i = 0x33U;
        vlSelfRef.__VdlySet__prf_file__v51 = 1U;
        vlSelfRef.__PVT__i = 0x34U;
        vlSelfRef.__VdlySet__prf_file__v52 = 1U;
        vlSelfRef.__PVT__i = 0x35U;
        vlSelfRef.__VdlySet__prf_file__v53 = 1U;
        vlSelfRef.__PVT__i = 0x36U;
        vlSelfRef.__VdlySet__prf_file__v54 = 1U;
        vlSelfRef.__PVT__i = 0x37U;
        vlSelfRef.__VdlySet__prf_file__v55 = 1U;
        vlSelfRef.__PVT__i = 0x38U;
        vlSelfRef.__VdlySet__prf_file__v56 = 1U;
        vlSelfRef.__PVT__i = 0x39U;
        vlSelfRef.__VdlySet__prf_file__v57 = 1U;
        vlSelfRef.__PVT__i = 0x3aU;
        vlSelfRef.__VdlySet__prf_file__v58 = 1U;
        vlSelfRef.__PVT__i = 0x3bU;
        vlSelfRef.__VdlySet__prf_file__v59 = 1U;
        vlSelfRef.__PVT__i = 0x3cU;
        vlSelfRef.__VdlySet__prf_file__v60 = 1U;
        vlSelfRef.__PVT__i = 0x3dU;
        vlSelfRef.__VdlySet__prf_file__v61 = 1U;
        vlSelfRef.__PVT__i = 0x3eU;
        vlSelfRef.__VdlySet__prf_file__v62 = 1U;
        vlSelfRef.__PVT__i = 0x3fU;
        vlSelfRef.__VdlySet__prf_file__v63 = 1U;
        vlSelfRef.__PVT__i = 0x40U;
    }
    if ((VL_BITSEL_IQII(39, vlSelfRef.__PVT__alu_csr_bc_wb, 0x26U) 
         & (0U != (0x3fU & VL_SEL_IQII(39, vlSelfRef.__PVT__alu_csr_bc_wb, 0x20U, 6U))))) {
        vlSelfRef.__VdlyVal__prf_file__v64 = VL_SEL_IQII(39, vlSelfRef.__PVT__alu_csr_bc_wb, 0U, 0x20U);
        vlSelfRef.__VdlyDim0__prf_file__v64 = (0x3fU 
                                               & VL_SEL_IQII(39, vlSelfRef.__PVT__alu_csr_bc_wb, 0x20U, 6U));
        vlSelfRef.__VdlySet__prf_file__v64 = 1U;
    }
    if ((VL_BITSEL_IQII(39, vlSelfRef.__PVT__alu1_wb, 0x26U) 
         & (0U != (0x3fU & VL_SEL_IQII(39, vlSelfRef.__PVT__alu1_wb, 0x20U, 6U))))) {
        vlSelfRef.__VdlyVal__prf_file__v65 = VL_SEL_IQII(39, vlSelfRef.__PVT__alu1_wb, 0U, 0x20U);
        vlSelfRef.__VdlyDim0__prf_file__v65 = (0x3fU 
                                               & VL_SEL_IQII(39, vlSelfRef.__PVT__alu1_wb, 0x20U, 6U));
        vlSelfRef.__VdlySet__prf_file__v65 = 1U;
    }
    if ((VL_BITSEL_IQII(39, vlSelfRef.__PVT__muldiv_wb, 0x26U) 
         & (0U != (0x3fU & VL_SEL_IQII(39, vlSelfRef.__PVT__muldiv_wb, 0x20U, 6U))))) {
        vlSelfRef.__VdlyVal__prf_file__v66 = VL_SEL_IQII(39, vlSelfRef.__PVT__muldiv_wb, 0U, 0x20U);
        vlSelfRef.__VdlyDim0__prf_file__v66 = (0x3fU 
                                               & VL_SEL_IQII(39, vlSelfRef.__PVT__muldiv_wb, 0x20U, 6U));
        vlSelfRef.__VdlySet__prf_file__v66 = 1U;
    }
    if ((VL_BITSEL_IQII(39, vlSelfRef.__PVT__mem_wb, 0x26U) 
         & (0U != (0x3fU & VL_SEL_IQII(39, vlSelfRef.__PVT__mem_wb, 0x20U, 6U))))) {
        vlSelfRef.__VdlyVal__prf_file__v67 = VL_SEL_IQII(39, vlSelfRef.__PVT__mem_wb, 0U, 0x20U);
        vlSelfRef.__VdlyDim0__prf_file__v67 = (0x3fU 
                                               & VL_SEL_IQII(39, vlSelfRef.__PVT__mem_wb, 0x20U, 6U));
        vlSelfRef.__VdlySet__prf_file__v67 = 1U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v0) {
        vlSelfRef.prf_file[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v1) {
        vlSelfRef.prf_file[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v2) {
        vlSelfRef.prf_file[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v3) {
        vlSelfRef.prf_file[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v4) {
        vlSelfRef.prf_file[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v5) {
        vlSelfRef.prf_file[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v6) {
        vlSelfRef.prf_file[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v7) {
        vlSelfRef.prf_file[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v8) {
        vlSelfRef.prf_file[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v9) {
        vlSelfRef.prf_file[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v10) {
        vlSelfRef.prf_file[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v11) {
        vlSelfRef.prf_file[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v12) {
        vlSelfRef.prf_file[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v13) {
        vlSelfRef.prf_file[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v14) {
        vlSelfRef.prf_file[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v15) {
        vlSelfRef.prf_file[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v16) {
        vlSelfRef.prf_file[0x10U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v17) {
        vlSelfRef.prf_file[0x11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v18) {
        vlSelfRef.prf_file[0x12U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v19) {
        vlSelfRef.prf_file[0x13U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v20) {
        vlSelfRef.prf_file[0x14U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v21) {
        vlSelfRef.prf_file[0x15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v22) {
        vlSelfRef.prf_file[0x16U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v23) {
        vlSelfRef.prf_file[0x17U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v24) {
        vlSelfRef.prf_file[0x18U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v25) {
        vlSelfRef.prf_file[0x19U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v26) {
        vlSelfRef.prf_file[0x1aU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v27) {
        vlSelfRef.prf_file[0x1bU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v28) {
        vlSelfRef.prf_file[0x1cU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v29) {
        vlSelfRef.prf_file[0x1dU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v30) {
        vlSelfRef.prf_file[0x1eU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v31) {
        vlSelfRef.prf_file[0x1fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v32) {
        vlSelfRef.prf_file[0x20U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v33) {
        vlSelfRef.prf_file[0x21U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v34) {
        vlSelfRef.prf_file[0x22U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v35) {
        vlSelfRef.prf_file[0x23U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v36) {
        vlSelfRef.prf_file[0x24U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v37) {
        vlSelfRef.prf_file[0x25U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v38) {
        vlSelfRef.prf_file[0x26U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v39) {
        vlSelfRef.prf_file[0x27U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v40) {
        vlSelfRef.prf_file[0x28U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v41) {
        vlSelfRef.prf_file[0x29U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v42) {
        vlSelfRef.prf_file[0x2aU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v43) {
        vlSelfRef.prf_file[0x2bU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v44) {
        vlSelfRef.prf_file[0x2cU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v45) {
        vlSelfRef.prf_file[0x2dU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v46) {
        vlSelfRef.prf_file[0x2eU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v47) {
        vlSelfRef.prf_file[0x2fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v48) {
        vlSelfRef.prf_file[0x30U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v49) {
        vlSelfRef.prf_file[0x31U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v50) {
        vlSelfRef.prf_file[0x32U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v51) {
        vlSelfRef.prf_file[0x33U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v52) {
        vlSelfRef.prf_file[0x34U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v53) {
        vlSelfRef.prf_file[0x35U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v54) {
        vlSelfRef.prf_file[0x36U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v55) {
        vlSelfRef.prf_file[0x37U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v56) {
        vlSelfRef.prf_file[0x38U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v57) {
        vlSelfRef.prf_file[0x39U] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v58) {
        vlSelfRef.prf_file[0x3aU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v59) {
        vlSelfRef.prf_file[0x3bU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v60) {
        vlSelfRef.prf_file[0x3cU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v61) {
        vlSelfRef.prf_file[0x3dU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v62) {
        vlSelfRef.prf_file[0x3eU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v63) {
        vlSelfRef.prf_file[0x3fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__prf_file__v64) {
        vlSelfRef.prf_file[vlSelfRef.__VdlyDim0__prf_file__v64] 
            = vlSelfRef.__VdlyVal__prf_file__v64;
    }
    if (vlSelfRef.__VdlySet__prf_file__v65) {
        vlSelfRef.prf_file[vlSelfRef.__VdlyDim0__prf_file__v65] 
            = vlSelfRef.__VdlyVal__prf_file__v65;
    }
    if (vlSelfRef.__VdlySet__prf_file__v66) {
        vlSelfRef.prf_file[vlSelfRef.__VdlyDim0__prf_file__v66] 
            = vlSelfRef.__VdlyVal__prf_file__v66;
    }
    if (vlSelfRef.__VdlySet__prf_file__v67) {
        vlSelfRef.prf_file[vlSelfRef.__VdlyDim0__prf_file__v67] 
            = vlSelfRef.__VdlyVal__prf_file__v67;
    }
}

VL_INLINE_OPT void Vfalco_top_physical_register_file___nba_comb__TOP__falco_top__core__register_read_stage__prf__0(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___nba_comb__TOP__falco_top__core__register_read_stage__prf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IQ1_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs2_addr];
    vlSelfRef.__PVT__IQ1_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs1_addr];
    vlSelfRef.__PVT__IQ0_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs2_addr];
    vlSelfRef.__PVT__IQ0_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs1_addr];
}

VL_INLINE_OPT void Vfalco_top_physical_register_file___nba_comb__TOP__falco_top__core__register_read_stage__prf__1(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___nba_comb__TOP__falco_top__core__register_read_stage__prf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MEM_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs2_addr];
    vlSelfRef.__PVT__MEM_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs1_addr];
}
