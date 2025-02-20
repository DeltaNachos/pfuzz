// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_BUSY_LIST_H_
#define VERILATED_VFALCO_TOP_BUSY_LIST_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_busy_list final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__instr0_rs1_prf,5,0);
        VL_IN8(__PVT__instr0_rs2_prf,5,0);
        VL_IN8(__PVT__instr1_rs1_prf,5,0);
        VL_IN8(__PVT__instr1_rs2_prf,5,0);
        VL_OUT8(__PVT__instr0_rs1_ready,0,0);
        VL_OUT8(__PVT__instr0_rs2_ready,0,0);
        VL_OUT8(__PVT__instr1_rs1_ready,0,0);
        VL_OUT8(__PVT__instr1_rs2_ready,0,0);
        VL_IN8(__PVT__instr0_rd_prf,5,0);
        VL_IN8(__PVT__instr1_rd_prf,5,0);
        VL_IN8(__PVT__instr0_rd_valid,0,0);
        VL_IN8(__PVT__instr1_rd_valid,0,0);
        VL_IN8(__PVT__BCAST_alu_csr_bc,6,0);
        VL_IN8(__PVT__BCAST_ALU_1,6,0);
        VL_IN8(__PVT__BCAST_muldiv,6,0);
        VL_IN8(__PVT__BCAST_load,6,0);
        VL_IN8(__PVT__int_issue0_rd_valid,0,0);
        VL_IN8(__PVT__int_issue0_rd_prf,5,0);
        VL_IN8(__PVT__int_issue1_rd_valid,0,0);
        VL_IN8(__PVT__int_issue1_rd_prf,5,0);
        CData/*0:0*/ __Vfunc_bypass_network__0__Vfuncout;
        CData/*5:0*/ __Vfunc_bypass_network__0__prf_addr;
        CData/*0:0*/ __Vfunc_bypass_network__0__stale_bit;
        CData/*0:0*/ __Vfunc_bypass_network__1__Vfuncout;
        CData/*5:0*/ __Vfunc_bypass_network__1__prf_addr;
        CData/*0:0*/ __Vfunc_bypass_network__1__stale_bit;
        CData/*0:0*/ __Vfunc_bypass_next_network__2__Vfuncout;
        CData/*5:0*/ __Vfunc_bypass_next_network__2__prf_addr;
        CData/*0:0*/ __Vfunc_bypass_next_network__2__stale_bit;
        CData/*0:0*/ __Vfunc_bypass_next_network__3__Vfuncout;
        CData/*5:0*/ __Vfunc_bypass_next_network__3__prf_addr;
        CData/*0:0*/ __Vfunc_bypass_next_network__3__stale_bit;
        CData/*0:0*/ __VdlySet__busy_list_bits__v0;
        CData/*0:0*/ __VdlySet__busy_list_bits__v1;
        CData/*0:0*/ __VdlySet__busy_list_bits__v2;
        CData/*0:0*/ __VdlySet__busy_list_bits__v3;
        CData/*0:0*/ __VdlySet__busy_list_bits__v4;
        CData/*0:0*/ __VdlySet__busy_list_bits__v5;
        CData/*0:0*/ __VdlySet__busy_list_bits__v6;
        CData/*0:0*/ __VdlySet__busy_list_bits__v7;
        CData/*0:0*/ __VdlySet__busy_list_bits__v8;
        CData/*0:0*/ __VdlySet__busy_list_bits__v9;
        CData/*0:0*/ __VdlySet__busy_list_bits__v10;
        CData/*0:0*/ __VdlySet__busy_list_bits__v11;
        CData/*0:0*/ __VdlySet__busy_list_bits__v12;
        CData/*0:0*/ __VdlySet__busy_list_bits__v13;
        CData/*0:0*/ __VdlySet__busy_list_bits__v14;
        CData/*0:0*/ __VdlySet__busy_list_bits__v15;
        CData/*0:0*/ __VdlySet__busy_list_bits__v16;
        CData/*0:0*/ __VdlySet__busy_list_bits__v17;
        CData/*0:0*/ __VdlySet__busy_list_bits__v18;
        CData/*0:0*/ __VdlySet__busy_list_bits__v19;
        CData/*0:0*/ __VdlySet__busy_list_bits__v20;
        CData/*0:0*/ __VdlySet__busy_list_bits__v21;
        CData/*0:0*/ __VdlySet__busy_list_bits__v22;
        CData/*0:0*/ __VdlySet__busy_list_bits__v23;
        CData/*0:0*/ __VdlySet__busy_list_bits__v24;
        CData/*0:0*/ __VdlySet__busy_list_bits__v25;
        CData/*0:0*/ __VdlySet__busy_list_bits__v26;
        CData/*0:0*/ __VdlySet__busy_list_bits__v27;
        CData/*0:0*/ __VdlySet__busy_list_bits__v28;
        CData/*0:0*/ __VdlySet__busy_list_bits__v29;
    };
    struct {
        CData/*0:0*/ __VdlySet__busy_list_bits__v30;
        CData/*0:0*/ __VdlySet__busy_list_bits__v31;
        CData/*0:0*/ __VdlySet__busy_list_bits__v32;
        CData/*0:0*/ __VdlySet__busy_list_bits__v33;
        CData/*0:0*/ __VdlySet__busy_list_bits__v34;
        CData/*0:0*/ __VdlySet__busy_list_bits__v35;
        CData/*0:0*/ __VdlySet__busy_list_bits__v36;
        CData/*0:0*/ __VdlySet__busy_list_bits__v37;
        CData/*0:0*/ __VdlySet__busy_list_bits__v38;
        CData/*0:0*/ __VdlySet__busy_list_bits__v39;
        CData/*0:0*/ __VdlySet__busy_list_bits__v40;
        CData/*0:0*/ __VdlySet__busy_list_bits__v41;
        CData/*0:0*/ __VdlySet__busy_list_bits__v42;
        CData/*0:0*/ __VdlySet__busy_list_bits__v43;
        CData/*0:0*/ __VdlySet__busy_list_bits__v44;
        CData/*0:0*/ __VdlySet__busy_list_bits__v45;
        CData/*0:0*/ __VdlySet__busy_list_bits__v46;
        CData/*0:0*/ __VdlySet__busy_list_bits__v47;
        CData/*0:0*/ __VdlySet__busy_list_bits__v48;
        CData/*0:0*/ __VdlySet__busy_list_bits__v49;
        CData/*0:0*/ __VdlySet__busy_list_bits__v50;
        CData/*0:0*/ __VdlySet__busy_list_bits__v51;
        CData/*0:0*/ __VdlySet__busy_list_bits__v52;
        CData/*0:0*/ __VdlySet__busy_list_bits__v53;
        CData/*0:0*/ __VdlySet__busy_list_bits__v54;
        CData/*0:0*/ __VdlySet__busy_list_bits__v55;
        CData/*0:0*/ __VdlySet__busy_list_bits__v56;
        CData/*0:0*/ __VdlySet__busy_list_bits__v57;
        CData/*0:0*/ __VdlySet__busy_list_bits__v58;
        CData/*0:0*/ __VdlySet__busy_list_bits__v59;
        CData/*0:0*/ __VdlySet__busy_list_bits__v60;
        CData/*0:0*/ __VdlySet__busy_list_bits__v61;
        CData/*0:0*/ __VdlySet__busy_list_bits__v62;
        CData/*0:0*/ __VdlySet__busy_list_bits__v63;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v64;
        CData/*0:0*/ __VdlySet__busy_list_bits__v64;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v65;
        CData/*0:0*/ __VdlySet__busy_list_bits__v65;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v66;
        CData/*0:0*/ __VdlySet__busy_list_bits__v66;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v67;
        CData/*0:0*/ __VdlySet__busy_list_bits__v67;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v68;
        CData/*0:0*/ __VdlySet__busy_list_bits__v68;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v69;
        CData/*0:0*/ __VdlySet__busy_list_bits__v69;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v70;
        CData/*0:0*/ __VdlySet__busy_list_bits__v70;
        CData/*5:0*/ __VdlyDim0__busy_list_bits__v71;
        CData/*0:0*/ __VdlySet__busy_list_bits__v71;
        IData/*31:0*/ __PVT__i;
        VlUnpacked<CData/*0:0*/, 64> busy_list_bits;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_busy_list(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_busy_list();
    VL_UNCOPYABLE(Vfalco_top_busy_list);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
