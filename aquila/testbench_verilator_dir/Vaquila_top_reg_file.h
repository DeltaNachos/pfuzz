// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_REG_FILE_H_
#define VERILATED_VAQUILA_TOP_REG_FILE_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_reg_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__rs1_addr_i,4,0);
        VL_IN8(__PVT__rs2_addr_i,4,0);
        VL_IN8(__PVT__rd_we_i,0,0);
        VL_IN8(__PVT__rd_addr_i,4,0);
        CData/*0:0*/ __PVT__we;
        CData/*0:0*/ __Vdlyvset__x__v0;
        CData/*0:0*/ __Vdlyvset__x__v1;
        CData/*0:0*/ __Vdlyvset__x__v2;
        CData/*0:0*/ __Vdlyvset__x__v3;
        CData/*0:0*/ __Vdlyvset__x__v4;
        CData/*0:0*/ __Vdlyvset__x__v5;
        CData/*0:0*/ __Vdlyvset__x__v6;
        CData/*0:0*/ __Vdlyvset__x__v7;
        CData/*0:0*/ __Vdlyvset__x__v8;
        CData/*0:0*/ __Vdlyvset__x__v9;
        CData/*0:0*/ __Vdlyvset__x__v10;
        CData/*0:0*/ __Vdlyvset__x__v11;
        CData/*0:0*/ __Vdlyvset__x__v12;
        CData/*0:0*/ __Vdlyvset__x__v13;
        CData/*0:0*/ __Vdlyvset__x__v14;
        CData/*0:0*/ __Vdlyvset__x__v15;
        CData/*0:0*/ __Vdlyvset__x__v16;
        CData/*0:0*/ __Vdlyvset__x__v17;
        CData/*0:0*/ __Vdlyvset__x__v18;
        CData/*0:0*/ __Vdlyvset__x__v19;
        CData/*0:0*/ __Vdlyvset__x__v20;
        CData/*0:0*/ __Vdlyvset__x__v21;
        CData/*0:0*/ __Vdlyvset__x__v22;
        CData/*0:0*/ __Vdlyvset__x__v23;
        CData/*0:0*/ __Vdlyvset__x__v24;
        CData/*0:0*/ __Vdlyvset__x__v25;
        CData/*0:0*/ __Vdlyvset__x__v26;
        CData/*0:0*/ __Vdlyvset__x__v27;
        CData/*0:0*/ __Vdlyvset__x__v28;
        CData/*0:0*/ __Vdlyvset__x__v29;
        CData/*0:0*/ __Vdlyvset__x__v30;
        CData/*0:0*/ __Vdlyvset__x__v31;
        CData/*4:0*/ __Vdlyvdim0__x__v32;
        CData/*0:0*/ __Vdlyvset__x__v32;
        VL_IN(__PVT__rd_data_i,31,0);
        VL_OUT(__PVT__rs1_data_o,31,0);
        VL_OUT(__PVT__rs2_data_o,31,0);
        IData/*31:0*/ __PVT__ra;
        IData/*31:0*/ __PVT__sp;
        IData/*31:0*/ __PVT__gp;
        IData/*31:0*/ __PVT__tp;
        IData/*31:0*/ __PVT__t0;
        IData/*31:0*/ __PVT__t1;
        IData/*31:0*/ __PVT__t2;
        IData/*31:0*/ __PVT__s0;
        IData/*31:0*/ __PVT__s1;
        IData/*31:0*/ __PVT__a0;
        IData/*31:0*/ __PVT__a1;
        IData/*31:0*/ __PVT__a2;
        IData/*31:0*/ __PVT__a3;
        IData/*31:0*/ __PVT__a4;
        IData/*31:0*/ __PVT__a5;
        IData/*31:0*/ __PVT__a6;
        IData/*31:0*/ __PVT__a7;
        IData/*31:0*/ __PVT__s2;
        IData/*31:0*/ __PVT__s3;
        IData/*31:0*/ __PVT__s4;
    };
    struct {
        IData/*31:0*/ __PVT__s5;
        IData/*31:0*/ __PVT__s6;
        IData/*31:0*/ __PVT__s7;
        IData/*31:0*/ __PVT__s8;
        IData/*31:0*/ __PVT__s9;
        IData/*31:0*/ __PVT__s10;
        IData/*31:0*/ __PVT__s11;
        IData/*31:0*/ __PVT__t3;
        IData/*31:0*/ __PVT__t4;
        IData/*31:0*/ __PVT__t5;
        IData/*31:0*/ __PVT__t6;
        IData/*31:0*/ __PVT__idx;
        IData/*31:0*/ __Vdlyvval__x__v32;
        VlUnpacked<IData/*31:0*/, 32> __PVT__x;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_reg_file(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_reg_file();
    VL_UNCOPYABLE(Vaquila_top_reg_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
