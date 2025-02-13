// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_CSRFile.h"
#include "Vsodor_top__Syms.h"

void Vsodor_top_CSRFile___ctor_var_reset(Vsodor_top_CSRFile* vlSelf);

Vsodor_top_CSRFile::Vsodor_top_CSRFile(Vsodor_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsodor_top_CSRFile___ctor_var_reset(this);
}

void Vsodor_top_CSRFile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsodor_top_CSRFile::~Vsodor_top_CSRFile() {
}
