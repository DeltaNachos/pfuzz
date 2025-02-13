// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_exec.h"

void Vrv32im_top_riscv_exec___ctor_var_reset(Vrv32im_top_riscv_exec* vlSelf);

Vrv32im_top_riscv_exec::Vrv32im_top_riscv_exec(Vrv32im_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv32im_top_riscv_exec___ctor_var_reset(this);
}

void Vrv32im_top_riscv_exec::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrv32im_top_riscv_exec::~Vrv32im_top_riscv_exec() {
}
