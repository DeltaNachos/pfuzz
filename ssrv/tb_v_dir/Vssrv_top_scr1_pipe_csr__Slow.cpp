// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_csr.h"

void Vssrv_top_scr1_pipe_csr___ctor_var_reset(Vssrv_top_scr1_pipe_csr* vlSelf);

Vssrv_top_scr1_pipe_csr::Vssrv_top_scr1_pipe_csr(Vssrv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vssrv_top_scr1_pipe_csr___ctor_var_reset(this);
}

void Vssrv_top_scr1_pipe_csr::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vssrv_top_scr1_pipe_csr::~Vssrv_top_scr1_pipe_csr() {
}
