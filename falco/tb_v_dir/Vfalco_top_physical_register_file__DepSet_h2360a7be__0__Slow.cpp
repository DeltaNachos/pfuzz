// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_physical_register_file.h"

VL_ATTR_COLD void Vfalco_top_physical_register_file___stl_sequent__TOP__falco_top__core__register_read_stage__prf__0(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___stl_sequent__TOP__falco_top__core__register_read_stage__prf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MEM_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs2_addr];
    vlSelfRef.__PVT__MEM_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__MEM_rs1_addr];
    vlSelfRef.__PVT__IQ1_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs2_addr];
    vlSelfRef.__PVT__IQ1_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ1_rs1_addr];
    vlSelfRef.__PVT__IQ0_rs2_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs2_addr];
    vlSelfRef.__PVT__IQ0_rs1_data = vlSelfRef.prf_file
        [vlSelfRef.__PVT__IQ0_rs1_addr];
}

VL_ATTR_COLD void Vfalco_top_physical_register_file___ctor_var_reset(Vfalco_top_physical_register_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_physical_register_file___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IQ0_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__IQ0_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__IQ1_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__IQ1_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__MEM_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__MEM_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__IQ0_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IQ0_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IQ1_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IQ1_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__MEM_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_csr_bc_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__mem_wb = VL_RAND_RESET_Q(39);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->prf_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__prf_file__v0 = 0;
    vlSelf->__VdlySet__prf_file__v1 = 0;
    vlSelf->__VdlySet__prf_file__v2 = 0;
    vlSelf->__VdlySet__prf_file__v3 = 0;
    vlSelf->__VdlySet__prf_file__v4 = 0;
    vlSelf->__VdlySet__prf_file__v5 = 0;
    vlSelf->__VdlySet__prf_file__v6 = 0;
    vlSelf->__VdlySet__prf_file__v7 = 0;
    vlSelf->__VdlySet__prf_file__v8 = 0;
    vlSelf->__VdlySet__prf_file__v9 = 0;
    vlSelf->__VdlySet__prf_file__v10 = 0;
    vlSelf->__VdlySet__prf_file__v11 = 0;
    vlSelf->__VdlySet__prf_file__v12 = 0;
    vlSelf->__VdlySet__prf_file__v13 = 0;
    vlSelf->__VdlySet__prf_file__v14 = 0;
    vlSelf->__VdlySet__prf_file__v15 = 0;
    vlSelf->__VdlySet__prf_file__v16 = 0;
    vlSelf->__VdlySet__prf_file__v17 = 0;
    vlSelf->__VdlySet__prf_file__v18 = 0;
    vlSelf->__VdlySet__prf_file__v19 = 0;
    vlSelf->__VdlySet__prf_file__v20 = 0;
    vlSelf->__VdlySet__prf_file__v21 = 0;
    vlSelf->__VdlySet__prf_file__v22 = 0;
    vlSelf->__VdlySet__prf_file__v23 = 0;
    vlSelf->__VdlySet__prf_file__v24 = 0;
    vlSelf->__VdlySet__prf_file__v25 = 0;
    vlSelf->__VdlySet__prf_file__v26 = 0;
    vlSelf->__VdlySet__prf_file__v27 = 0;
    vlSelf->__VdlySet__prf_file__v28 = 0;
    vlSelf->__VdlySet__prf_file__v29 = 0;
    vlSelf->__VdlySet__prf_file__v30 = 0;
    vlSelf->__VdlySet__prf_file__v31 = 0;
    vlSelf->__VdlySet__prf_file__v32 = 0;
    vlSelf->__VdlySet__prf_file__v33 = 0;
    vlSelf->__VdlySet__prf_file__v34 = 0;
    vlSelf->__VdlySet__prf_file__v35 = 0;
    vlSelf->__VdlySet__prf_file__v36 = 0;
    vlSelf->__VdlySet__prf_file__v37 = 0;
    vlSelf->__VdlySet__prf_file__v38 = 0;
    vlSelf->__VdlySet__prf_file__v39 = 0;
    vlSelf->__VdlySet__prf_file__v40 = 0;
    vlSelf->__VdlySet__prf_file__v41 = 0;
    vlSelf->__VdlySet__prf_file__v42 = 0;
    vlSelf->__VdlySet__prf_file__v43 = 0;
    vlSelf->__VdlySet__prf_file__v44 = 0;
    vlSelf->__VdlySet__prf_file__v45 = 0;
    vlSelf->__VdlySet__prf_file__v46 = 0;
    vlSelf->__VdlySet__prf_file__v47 = 0;
    vlSelf->__VdlySet__prf_file__v48 = 0;
    vlSelf->__VdlySet__prf_file__v49 = 0;
    vlSelf->__VdlySet__prf_file__v50 = 0;
    vlSelf->__VdlySet__prf_file__v51 = 0;
    vlSelf->__VdlySet__prf_file__v52 = 0;
    vlSelf->__VdlySet__prf_file__v53 = 0;
    vlSelf->__VdlySet__prf_file__v54 = 0;
    vlSelf->__VdlySet__prf_file__v55 = 0;
    vlSelf->__VdlySet__prf_file__v56 = 0;
    vlSelf->__VdlySet__prf_file__v57 = 0;
    vlSelf->__VdlySet__prf_file__v58 = 0;
    vlSelf->__VdlySet__prf_file__v59 = 0;
    vlSelf->__VdlySet__prf_file__v60 = 0;
    vlSelf->__VdlySet__prf_file__v61 = 0;
    vlSelf->__VdlySet__prf_file__v62 = 0;
    vlSelf->__VdlySet__prf_file__v63 = 0;
    vlSelf->__VdlyVal__prf_file__v64 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__prf_file__v64 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__prf_file__v64 = 0;
    vlSelf->__VdlyVal__prf_file__v65 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__prf_file__v65 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__prf_file__v65 = 0;
    vlSelf->__VdlyVal__prf_file__v66 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__prf_file__v66 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__prf_file__v66 = 0;
    vlSelf->__VdlyVal__prf_file__v67 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__prf_file__v67 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__prf_file__v67 = 0;
}
