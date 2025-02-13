// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_tdu.h"

void Vssrv_top_scr1_pipe_tdu___ctor_var_reset(Vssrv_top_scr1_pipe_tdu* vlSelf);

Vssrv_top_scr1_pipe_tdu::Vssrv_top_scr1_pipe_tdu(Vssrv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vssrv_top_scr1_pipe_tdu___ctor_var_reset(this);
}

void Vssrv_top_scr1_pipe_tdu::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vssrv_top_scr1_pipe_tdu::~Vssrv_top_scr1_pipe_tdu() {
}
