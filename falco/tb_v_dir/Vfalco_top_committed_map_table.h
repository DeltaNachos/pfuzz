// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_COMMITTED_MAP_TABLE_H_
#define VERILATED_VFALCO_TOP_COMMITTED_MAP_TABLE_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_committed_map_table final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __VdlySet__committed_map_table__v0;
    CData/*0:0*/ __VdlySet__committed_map_table__v1;
    CData/*0:0*/ __VdlySet__committed_map_table__v2;
    CData/*0:0*/ __VdlySet__committed_map_table__v3;
    CData/*0:0*/ __VdlySet__committed_map_table__v4;
    CData/*0:0*/ __VdlySet__committed_map_table__v5;
    CData/*0:0*/ __VdlySet__committed_map_table__v6;
    CData/*0:0*/ __VdlySet__committed_map_table__v7;
    CData/*0:0*/ __VdlySet__committed_map_table__v8;
    CData/*0:0*/ __VdlySet__committed_map_table__v9;
    CData/*0:0*/ __VdlySet__committed_map_table__v10;
    CData/*0:0*/ __VdlySet__committed_map_table__v11;
    CData/*0:0*/ __VdlySet__committed_map_table__v12;
    CData/*0:0*/ __VdlySet__committed_map_table__v13;
    CData/*0:0*/ __VdlySet__committed_map_table__v14;
    CData/*0:0*/ __VdlySet__committed_map_table__v15;
    CData/*0:0*/ __VdlySet__committed_map_table__v16;
    CData/*0:0*/ __VdlySet__committed_map_table__v17;
    CData/*0:0*/ __VdlySet__committed_map_table__v18;
    CData/*0:0*/ __VdlySet__committed_map_table__v19;
    CData/*0:0*/ __VdlySet__committed_map_table__v20;
    CData/*0:0*/ __VdlySet__committed_map_table__v21;
    CData/*0:0*/ __VdlySet__committed_map_table__v22;
    CData/*0:0*/ __VdlySet__committed_map_table__v23;
    CData/*0:0*/ __VdlySet__committed_map_table__v24;
    CData/*0:0*/ __VdlySet__committed_map_table__v25;
    CData/*0:0*/ __VdlySet__committed_map_table__v26;
    CData/*0:0*/ __VdlySet__committed_map_table__v27;
    CData/*0:0*/ __VdlySet__committed_map_table__v28;
    CData/*0:0*/ __VdlySet__committed_map_table__v29;
    CData/*0:0*/ __VdlySet__committed_map_table__v30;
    CData/*0:0*/ __VdlySet__committed_map_table__v31;
    CData/*5:0*/ __VdlyVal__committed_map_table__v32;
    CData/*4:0*/ __VdlyDim0__committed_map_table__v32;
    CData/*0:0*/ __VdlySet__committed_map_table__v32;
    CData/*5:0*/ __VdlyVal__committed_map_table__v33;
    CData/*4:0*/ __VdlyDim0__committed_map_table__v33;
    CData/*0:0*/ __VdlySet__committed_map_table__v33;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<CData/*5:0*/, 32> committed_map_table;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_committed_map_table(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_committed_map_table();
    VL_UNCOPYABLE(Vfalco_top_committed_map_table);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
