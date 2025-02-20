// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_STORE_SET_ID_TABLE_H_
#define VERILATED_VFALCO_TOP_STORE_SET_ID_TABLE_H_  // guard

#include "verilated.h"
class Vfalco_top_sram_dual_port__R8_RBb;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_store_set_id_table final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_sram_dual_port__R8_RBb* __PVT__store_set_id;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(instr0_store_set_id,7,0);
    VL_OUT8(instr1_store_set_id,7,0);
    VL_IN8(violation,0,0);
    VL_IN8(recovery_insrt0_id,7,0);
    VL_IN8(recovery_insrt1_id,7,0);
    VL_IN8(device_violation,0,0);
    CData/*7:0*/ data_iA;
    CData/*7:0*/ data_iB;
    CData/*0:0*/ we_A;
    CData/*0:0*/ we_B;
    CData/*7:0*/ __PVT__recovery_change_id;
    CData/*7:0*/ allocate_new_id;
    CData/*0:0*/ all_zero;
    CData/*0:0*/ __Vcellinp__store_set_id__we_B;
    CData/*0:0*/ __Vcellinp__store_set_id__we_A;
    CData/*7:0*/ __Vdly__allocate_new_id;
    VL_IN16(instr0_pc,10,0);
    VL_IN16(instr1_pc,10,0);
    VL_IN16(recovery_insrt0_pc,10,0);
    VL_IN16(recovery_insrt1_pc,10,0);
    VL_IN16(device_violation_pc,10,0);
    SData/*10:0*/ my_addr_A;
    SData/*10:0*/ my_addr_B;
    SData/*10:0*/ __PVT__recovery_change_pc;
    SData/*10:0*/ __PVT__recovery_change_pc2;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_store_set_id_table(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_store_set_id_table();
    VL_UNCOPYABLE(Vfalco_top_store_set_id_table);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
