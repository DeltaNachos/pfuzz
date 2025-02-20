// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_REGISTER_READ_H_
#define VERILATED_VFALCO_TOP_REGISTER_READ_H_  // guard

#include "verilated.h"
class Vfalco_top_physical_register_file;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_register_read final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_physical_register_file* prf;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        CData/*5:0*/ __Vcellinp__prf__MEM_rs2_addr;
        CData/*5:0*/ __Vcellinp__prf__MEM_rs1_addr;
        CData/*5:0*/ __Vcellinp__prf__IQ1_rs2_addr;
        CData/*5:0*/ __Vcellinp__prf__IQ1_rs1_addr;
        CData/*5:0*/ __Vcellinp__prf__IQ0_rs2_addr;
        CData/*5:0*/ __Vcellinp__prf__IQ0_rs1_addr;
        CData/*5:0*/ __Vfunc_bypass_network__0__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__1__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__2__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__3__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__4__rs_addr;
        CData/*5:0*/ __Vfunc_bypass_network__5__rs_addr;
        CData/*0:0*/ __Vfunc_IsBrROBKill__6__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__6__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__7__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__7__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__8__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__8__rob_tag;
        SData/*14:0*/ __Vfunc_IsBrROBKill__6__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__7__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__8__branch_recovery_flush;
        IData/*31:0*/ __PVT__IQ0_rs1_data;
        IData/*31:0*/ __PVT__IQ0_rs2_data;
        IData/*31:0*/ __PVT__IQ1_rs1_data;
        IData/*31:0*/ __PVT__IQ1_rs2_data;
        IData/*31:0*/ __PVT__MEM_rs1_data;
        IData/*31:0*/ __PVT__MEM_rs2_data;
        IData/*31:0*/ __Vfunc_bypass_network__0__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__0__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__1__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__1__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__2__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__2__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__3__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__3__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__4__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__4__prf_register_data;
        IData/*31:0*/ __Vfunc_bypass_network__5__Vfuncout;
        IData/*31:0*/ __Vfunc_bypass_network__5__prf_register_data;
        QData/*38:0*/ __Vcellinp__prf__mem_wb;
        QData/*38:0*/ __Vcellinp__prf__muldiv_wb;
        QData/*38:0*/ __Vcellinp__prf__alu1_wb;
        QData/*38:0*/ __Vcellinp__prf__alu_csr_bc_wb;
        QData/*38:0*/ __Vfunc_bypass_network__0__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__0__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__0__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__0__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__1__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__2__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__3__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__3__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__3__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__3__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__4__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__4__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__4__alu1_wb;
    };
    struct {
        QData/*38:0*/ __Vfunc_bypass_network__4__muldiv_wb;
        QData/*38:0*/ __Vfunc_bypass_network__5__load_wb;
        QData/*38:0*/ __Vfunc_bypass_network__5__alu_csr_wb;
        QData/*38:0*/ __Vfunc_bypass_network__5__alu1_wb;
        QData/*38:0*/ __Vfunc_bypass_network__5__muldiv_wb;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_register_read(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_register_read();
    VL_UNCOPYABLE(Vfalco_top_register_read);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
