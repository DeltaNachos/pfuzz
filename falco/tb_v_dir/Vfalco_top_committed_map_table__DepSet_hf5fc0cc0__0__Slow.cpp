// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_committed_map_table.h"

VL_ATTR_COLD void Vfalco_top_committed_map_table___ctor_var_reset(Vfalco_top_committed_map_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_committed_map_table___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->committed_map_table[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__committed_map_table__v0 = 0;
    vlSelf->__VdlySet__committed_map_table__v1 = 0;
    vlSelf->__VdlySet__committed_map_table__v2 = 0;
    vlSelf->__VdlySet__committed_map_table__v3 = 0;
    vlSelf->__VdlySet__committed_map_table__v4 = 0;
    vlSelf->__VdlySet__committed_map_table__v5 = 0;
    vlSelf->__VdlySet__committed_map_table__v6 = 0;
    vlSelf->__VdlySet__committed_map_table__v7 = 0;
    vlSelf->__VdlySet__committed_map_table__v8 = 0;
    vlSelf->__VdlySet__committed_map_table__v9 = 0;
    vlSelf->__VdlySet__committed_map_table__v10 = 0;
    vlSelf->__VdlySet__committed_map_table__v11 = 0;
    vlSelf->__VdlySet__committed_map_table__v12 = 0;
    vlSelf->__VdlySet__committed_map_table__v13 = 0;
    vlSelf->__VdlySet__committed_map_table__v14 = 0;
    vlSelf->__VdlySet__committed_map_table__v15 = 0;
    vlSelf->__VdlySet__committed_map_table__v16 = 0;
    vlSelf->__VdlySet__committed_map_table__v17 = 0;
    vlSelf->__VdlySet__committed_map_table__v18 = 0;
    vlSelf->__VdlySet__committed_map_table__v19 = 0;
    vlSelf->__VdlySet__committed_map_table__v20 = 0;
    vlSelf->__VdlySet__committed_map_table__v21 = 0;
    vlSelf->__VdlySet__committed_map_table__v22 = 0;
    vlSelf->__VdlySet__committed_map_table__v23 = 0;
    vlSelf->__VdlySet__committed_map_table__v24 = 0;
    vlSelf->__VdlySet__committed_map_table__v25 = 0;
    vlSelf->__VdlySet__committed_map_table__v26 = 0;
    vlSelf->__VdlySet__committed_map_table__v27 = 0;
    vlSelf->__VdlySet__committed_map_table__v28 = 0;
    vlSelf->__VdlySet__committed_map_table__v29 = 0;
    vlSelf->__VdlySet__committed_map_table__v30 = 0;
    vlSelf->__VdlySet__committed_map_table__v31 = 0;
    vlSelf->__VdlyVal__committed_map_table__v32 = VL_RAND_RESET_I(6);
    vlSelf->__VdlyDim0__committed_map_table__v32 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__committed_map_table__v32 = 0;
    vlSelf->__VdlyVal__committed_map_table__v33 = VL_RAND_RESET_I(6);
    vlSelf->__VdlyDim0__committed_map_table__v33 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__committed_map_table__v33 = 0;
}
