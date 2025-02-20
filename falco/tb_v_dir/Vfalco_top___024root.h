// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP___024ROOT_H_
#define VERILATED_VFALCO_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vfalco_top_Falco_pkg;
class Vfalco_top_L1_cache_pkg;
class Vfalco_top___024unit;
class Vfalco_top_falco_top;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_falco_top* falco_top;
    Vfalco_top___024unit* __PVT____024unit;
    Vfalco_top_Falco_pkg* __PVT__Falco_pkg;
    Vfalco_top_L1_cache_pkg* __PVT__L1_cache_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*5:0*/ __Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlExecute;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlContinue;
        CData/*5:0*/ __Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoExecute;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoContinue;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__memory_modelling_inst____PVT__clk__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__INT_IQ____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__ROB____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__register_read_stage____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__SDB____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__alu_csr_bc_execute_group_inst____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__committed_map_table_inst____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__address_generate_unit____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_decode____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__MemAccess____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__pipeline_ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__LSU____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__csr____PVT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__MEM_IQ____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__INT_IQ__Replay_Unit____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__MEM_IQ__replay_unit____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__Map_Table____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst__imul____PVT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__INT_IQ__INT_selector____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv____PVT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__branch_predictor____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__register_read_stage__prf____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__LFST____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__freelist____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__Busy_list____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__PC____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT__store_set_id____PVT__clka__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT__store_set_id____PVT__clkb__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactExecute;
        CData/*0:0*/ __VactFirstIteration;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __VnbaExecute;
        CData/*0:0*/ __VnbaFirstIteration;
        CData/*0:0*/ __VnbaContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VnbaIterCount;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 16> __Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__0;
        VlUnpacked<CData/*0:0*/, 16> __Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__1;
        VlUnpacked<CData/*0:0*/, 16> __Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__2;
        VlUnpacked<CData/*0:0*/, 68> __Vm_traceActivity;
    };
    VlTriggerVec<4> __VstlTriggered;
    VlTriggerVec<4> __VicoTriggered;
    VlTriggerVec<40> __VactTriggered;
    VlTriggerVec<40> __VpreTriggered;
    VlTriggerVec<40> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top___024root(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top___024root();
    VL_UNCOPYABLE(Vfalco_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
