// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_ID_STAGE_H_
#define VERILATED_VFALCO_TOP_ID_STAGE_H_  // guard

#include "verilated.h"
class Vfalco_top_decoder;
class Vfalco_top_store_set_id_table;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_ID_stage final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_decoder* __PVT__instr0_decoder;
    Vfalco_top_decoder* __PVT__instr1_decoder;
    Vfalco_top_store_set_id_table* SSIT;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __PVT__instr0_illegal_instr;
    CData/*0:0*/ __PVT__instr1_illegal_instr;
    CData/*7:0*/ __PVT__instr0_store_set_id;
    CData/*7:0*/ __PVT__instr1_store_set_id;
    CData/*0:0*/ __Vcellinp__SSIT__device_violation;
    CData/*7:0*/ __Vcellinp__SSIT__recovery_insrt1_id;
    CData/*7:0*/ __Vcellinp__SSIT__recovery_insrt0_id;
    CData/*0:0*/ __Vcellinp__SSIT__violation;
    SData/*10:0*/ __Vcellinp__SSIT__device_violation_pc;
    SData/*10:0*/ __Vcellinp__SSIT__recovery_insrt1_pc;
    SData/*10:0*/ __Vcellinp__SSIT__recovery_insrt0_pc;
    SData/*10:0*/ __Vcellinp__SSIT__instr1_pc;
    SData/*10:0*/ __Vcellinp__SSIT__instr0_pc;
    VL_IN(__PVT__instr0_predict_pc,31,0);
    VL_IN(__PVT__instr1_predict_pc,31,0);
    IData/*31:0*/ __Vcellinp__instr0_decoder__instruction;
    IData/*31:0*/ __Vcellinp__instr0_decoder__pc;
    IData/*31:0*/ __Vcellinp__instr1_decoder__instruction;
    IData/*31:0*/ __Vcellinp__instr1_decoder__pc;
    VlWide<6>/*191:0*/ __PVT__decoded_instr0;
    VlWide<6>/*191:0*/ __PVT__decoded_instr1;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_ID_stage(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_ID_stage();
    VL_UNCOPYABLE(Vfalco_top_ID_stage);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
