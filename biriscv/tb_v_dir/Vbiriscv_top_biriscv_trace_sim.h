// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_TRACE_SIM_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_TRACE_SIM_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_trace_sim final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__valid_i,0,0);
    CData/*4:0*/ __PVT__ra_idx_w;
    CData/*4:0*/ __PVT__rb_idx_w;
    CData/*4:0*/ __PVT__rd_idx_w;
    CData/*4:0*/ __Vfunc_get_regname_str__0__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__1__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__2__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__3__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__4__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__5__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__6__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__7__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__8__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__9__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__10__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__11__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__12__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__13__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__14__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__15__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__16__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__17__regnum;
    VL_IN(__PVT__pc_i,31,0);
    VL_IN(__PVT__opcode_i,31,0);
    VlWide<3>/*79:0*/ __PVT__dbg_inst_str;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_ra;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_rb;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_rd;
    IData/*31:0*/ __PVT__dbg_inst_imm;
    IData/*31:0*/ __PVT__dbg_inst_pc;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__0__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__1__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__2__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__3__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__4__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__5__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__6__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__7__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__8__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__9__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__10__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__11__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__12__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__13__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__14__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__15__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__16__Vfuncout;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__17__Vfuncout;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_trace_sim(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_trace_sim();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_trace_sim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
