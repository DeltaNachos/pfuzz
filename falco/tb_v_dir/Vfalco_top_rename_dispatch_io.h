// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_RENAME_DISPATCH_IO_H_
#define VERILATED_VFALCO_TOP_RENAME_DISPATCH_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_rename_dispatch_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__int_pack0_valid;
    CData/*0:0*/ __PVT__int_pack1_valid;
    CData/*0:0*/ __PVT__int_iq_instr0_check_top;
    CData/*0:0*/ __PVT__int_iq_instr1_check_top;
    CData/*0:0*/ __PVT__int_instr0_rs1_ready;
    CData/*0:0*/ __PVT__int_instr0_rs2_ready;
    CData/*0:0*/ __PVT__int_instr1_rs1_ready;
    CData/*0:0*/ __PVT__int_instr1_rs2_ready;
    CData/*0:0*/ __PVT__mem_pack0_valid;
    CData/*0:0*/ __PVT__mem_pack1_valid;
    CData/*0:0*/ __PVT__mem_iq_instr0_check_top;
    CData/*0:0*/ __PVT__mem_iq_instr1_check_top;
    CData/*0:0*/ __PVT__mem_instr0_rs1_ready;
    CData/*0:0*/ __PVT__mem_instr0_rs2_ready;
    CData/*0:0*/ __PVT__mem_instr1_rs1_ready;
    CData/*0:0*/ __PVT__mem_instr1_rs2_ready;
    CData/*0:0*/ __PVT__issue_store;
    CData/*6:0*/ __PVT__issue_store_id;
    CData/*7:0*/ __PVT__issue_store_set_id;
    CData/*0:0*/ __PVT__rob_instr0_check_top;
    CData/*0:0*/ __PVT__rob_instr1_check_top;
    CData/*0:0*/ __PVT__rob_is_empty;
    CData/*0:0*/ __PVT__instr0_req;
    CData/*0:0*/ __PVT__instr1_req;
    CData/*5:0*/ __PVT__instr0_rob_tag;
    CData/*5:0*/ __PVT__instr1_rob_tag;
    CData/*0:0*/ __PVT__recovery_no_copy;
    CData/*5:0*/ __PVT__recovery_target_rob_tag;
    CData/*5:0*/ __PVT__instr0_stale_rd;
    CData/*5:0*/ __PVT__instr1_stale_rd;
    CData/*0:0*/ __PVT__instr0_stale_rd_valid;
    CData/*0:0*/ __PVT__instr1_stale_rd_valid;
    CData/*4:0*/ __PVT__instr0_rd_arf;
    CData/*4:0*/ __PVT__instr1_rd_arf;
    CData/*5:0*/ __PVT__instr0_rd_prf;
    CData/*5:0*/ __PVT__instr1_rd_prf;
    CData/*0:0*/ __PVT__instr0_is_store_op;
    CData/*0:0*/ __PVT__instr1_is_store_op;
    CData/*0:0*/ __Vdly__int_pack0_valid;
    CData/*0:0*/ __Vdly__int_pack1_valid;
    CData/*0:0*/ __Vdly__int_instr0_rs1_ready;
    CData/*0:0*/ __Vdly__int_instr0_rs2_ready;
    CData/*0:0*/ __Vdly__int_instr1_rs1_ready;
    CData/*0:0*/ __Vdly__int_instr1_rs2_ready;
    CData/*0:0*/ __Vdly__mem_pack0_valid;
    CData/*0:0*/ __Vdly__mem_pack1_valid;
    CData/*0:0*/ __Vdly__mem_instr0_rs1_ready;
    CData/*0:0*/ __Vdly__mem_instr0_rs2_ready;
    CData/*0:0*/ __Vdly__mem_instr1_rs1_ready;
    CData/*0:0*/ __Vdly__mem_instr1_rs2_ready;
    IData/*31:0*/ __PVT__instr0_pc;
    IData/*31:0*/ __PVT__instr1_pc;
    VlWide<7>/*204:0*/ __PVT__int_pack0;
    VlWide<7>/*204:0*/ __PVT__int_pack1;
    VlWide<5>/*128:0*/ __PVT__mem_pack0;
    VlWide<5>/*128:0*/ __PVT__mem_pack1;
    VlWide<7>/*204:0*/ __Vdly__int_pack0;
    VlWide<7>/*204:0*/ __Vdly__int_pack1;
    VlWide<5>/*128:0*/ __Vdly__mem_pack0;
    VlWide<5>/*128:0*/ __Vdly__mem_pack1;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_rename_dispatch_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_rename_dispatch_io();
    VL_UNCOPYABLE(Vfalco_top_rename_dispatch_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_rename_dispatch_io* obj);

#endif  // guard
