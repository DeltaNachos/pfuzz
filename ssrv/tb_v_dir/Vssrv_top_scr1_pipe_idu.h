// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_IDU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_IDU_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_idu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__idu2ifu_rdy,0,0);
    VL_IN8(__PVT__ifu2idu_imem_err,0,0);
    VL_IN8(__PVT__ifu2idu_err_rvi_hi,0,0);
    VL_IN8(__PVT__ifu2idu_vd,0,0);
    VL_OUT8(__PVT__idu2exu_req,0,0);
    VL_OUT8(__PVT__idu2exu_use_rs1,0,0);
    VL_OUT8(__PVT__idu2exu_use_rs2,0,0);
    VL_OUT8(__PVT__idu2exu_use_rd,0,0);
    VL_OUT8(__PVT__idu2exu_use_imm,0,0);
    VL_IN8(__PVT__exu2idu_rdy,0,0);
    CData/*1:0*/ __PVT__instr_type;
    CData/*4:0*/ __PVT__rvi_opcode;
    CData/*0:0*/ __PVT__rvi_illegal;
    CData/*2:0*/ __PVT__funct3;
    CData/*6:0*/ __PVT__funct7;
    CData/*4:0*/ __PVT__shamt;
    CData/*0:0*/ __PVT__rvc_illegal;
    SData/*11:0*/ __PVT__funct12;
    VL_IN(__PVT__ifu2idu_instr,31,0);
    IData/*31:0*/ __PVT__instr;
    VL_OUTW(__PVT__idu2exu_cmd,74,0,3);

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_idu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_idu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_idu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
