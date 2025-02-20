// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_PHYSICAL_REGISTER_FILE_H_
#define VERILATED_VFALCO_TOP_PHYSICAL_REGISTER_FILE_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_physical_register_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__IQ0_rs1_addr,5,0);
        VL_IN8(__PVT__IQ0_rs2_addr,5,0);
        VL_IN8(__PVT__IQ1_rs1_addr,5,0);
        VL_IN8(__PVT__IQ1_rs2_addr,5,0);
        VL_IN8(__PVT__MEM_rs1_addr,5,0);
        VL_IN8(__PVT__MEM_rs2_addr,5,0);
        CData/*0:0*/ __VdlySet__prf_file__v0;
        CData/*0:0*/ __VdlySet__prf_file__v1;
        CData/*0:0*/ __VdlySet__prf_file__v2;
        CData/*0:0*/ __VdlySet__prf_file__v3;
        CData/*0:0*/ __VdlySet__prf_file__v4;
        CData/*0:0*/ __VdlySet__prf_file__v5;
        CData/*0:0*/ __VdlySet__prf_file__v6;
        CData/*0:0*/ __VdlySet__prf_file__v7;
        CData/*0:0*/ __VdlySet__prf_file__v8;
        CData/*0:0*/ __VdlySet__prf_file__v9;
        CData/*0:0*/ __VdlySet__prf_file__v10;
        CData/*0:0*/ __VdlySet__prf_file__v11;
        CData/*0:0*/ __VdlySet__prf_file__v12;
        CData/*0:0*/ __VdlySet__prf_file__v13;
        CData/*0:0*/ __VdlySet__prf_file__v14;
        CData/*0:0*/ __VdlySet__prf_file__v15;
        CData/*0:0*/ __VdlySet__prf_file__v16;
        CData/*0:0*/ __VdlySet__prf_file__v17;
        CData/*0:0*/ __VdlySet__prf_file__v18;
        CData/*0:0*/ __VdlySet__prf_file__v19;
        CData/*0:0*/ __VdlySet__prf_file__v20;
        CData/*0:0*/ __VdlySet__prf_file__v21;
        CData/*0:0*/ __VdlySet__prf_file__v22;
        CData/*0:0*/ __VdlySet__prf_file__v23;
        CData/*0:0*/ __VdlySet__prf_file__v24;
        CData/*0:0*/ __VdlySet__prf_file__v25;
        CData/*0:0*/ __VdlySet__prf_file__v26;
        CData/*0:0*/ __VdlySet__prf_file__v27;
        CData/*0:0*/ __VdlySet__prf_file__v28;
        CData/*0:0*/ __VdlySet__prf_file__v29;
        CData/*0:0*/ __VdlySet__prf_file__v30;
        CData/*0:0*/ __VdlySet__prf_file__v31;
        CData/*0:0*/ __VdlySet__prf_file__v32;
        CData/*0:0*/ __VdlySet__prf_file__v33;
        CData/*0:0*/ __VdlySet__prf_file__v34;
        CData/*0:0*/ __VdlySet__prf_file__v35;
        CData/*0:0*/ __VdlySet__prf_file__v36;
        CData/*0:0*/ __VdlySet__prf_file__v37;
        CData/*0:0*/ __VdlySet__prf_file__v38;
        CData/*0:0*/ __VdlySet__prf_file__v39;
        CData/*0:0*/ __VdlySet__prf_file__v40;
        CData/*0:0*/ __VdlySet__prf_file__v41;
        CData/*0:0*/ __VdlySet__prf_file__v42;
        CData/*0:0*/ __VdlySet__prf_file__v43;
        CData/*0:0*/ __VdlySet__prf_file__v44;
        CData/*0:0*/ __VdlySet__prf_file__v45;
        CData/*0:0*/ __VdlySet__prf_file__v46;
        CData/*0:0*/ __VdlySet__prf_file__v47;
        CData/*0:0*/ __VdlySet__prf_file__v48;
        CData/*0:0*/ __VdlySet__prf_file__v49;
        CData/*0:0*/ __VdlySet__prf_file__v50;
        CData/*0:0*/ __VdlySet__prf_file__v51;
        CData/*0:0*/ __VdlySet__prf_file__v52;
        CData/*0:0*/ __VdlySet__prf_file__v53;
        CData/*0:0*/ __VdlySet__prf_file__v54;
        CData/*0:0*/ __VdlySet__prf_file__v55;
    };
    struct {
        CData/*0:0*/ __VdlySet__prf_file__v56;
        CData/*0:0*/ __VdlySet__prf_file__v57;
        CData/*0:0*/ __VdlySet__prf_file__v58;
        CData/*0:0*/ __VdlySet__prf_file__v59;
        CData/*0:0*/ __VdlySet__prf_file__v60;
        CData/*0:0*/ __VdlySet__prf_file__v61;
        CData/*0:0*/ __VdlySet__prf_file__v62;
        CData/*0:0*/ __VdlySet__prf_file__v63;
        CData/*5:0*/ __VdlyDim0__prf_file__v64;
        CData/*0:0*/ __VdlySet__prf_file__v64;
        CData/*5:0*/ __VdlyDim0__prf_file__v65;
        CData/*0:0*/ __VdlySet__prf_file__v65;
        CData/*5:0*/ __VdlyDim0__prf_file__v66;
        CData/*0:0*/ __VdlySet__prf_file__v66;
        CData/*5:0*/ __VdlyDim0__prf_file__v67;
        CData/*0:0*/ __VdlySet__prf_file__v67;
        VL_OUT(__PVT__IQ0_rs1_data,31,0);
        VL_OUT(__PVT__IQ0_rs2_data,31,0);
        VL_OUT(__PVT__IQ1_rs1_data,31,0);
        VL_OUT(__PVT__IQ1_rs2_data,31,0);
        VL_OUT(__PVT__MEM_rs1_data,31,0);
        VL_OUT(__PVT__MEM_rs2_data,31,0);
        IData/*31:0*/ __PVT__i;
        IData/*31:0*/ __VdlyVal__prf_file__v64;
        IData/*31:0*/ __VdlyVal__prf_file__v65;
        IData/*31:0*/ __VdlyVal__prf_file__v66;
        IData/*31:0*/ __VdlyVal__prf_file__v67;
        VL_IN64(__PVT__alu_csr_bc_wb,38,0);
        VL_IN64(__PVT__alu1_wb,38,0);
        VL_IN64(__PVT__muldiv_wb,38,0);
        VL_IN64(__PVT__mem_wb,38,0);
        VlUnpacked<IData/*31:0*/, 64> prf_file;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_physical_register_file(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_physical_register_file();
    VL_UNCOPYABLE(Vfalco_top_physical_register_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
