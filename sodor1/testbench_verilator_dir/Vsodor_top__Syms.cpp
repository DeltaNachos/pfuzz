// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsodor_top__Syms.h"
#include "Vsodor_top.h"
#include "Vsodor_top___024root.h"
#include "Vsodor_top_sodor_top.h"
#include "Vsodor_top_Core.h"
#include "Vsodor_top_sodor_mem_model.h"
#include "Vsodor_top_CtlPath.h"
#include "Vsodor_top_DatPath.h"
#include "Vsodor_top_CSRFile.h"

// FUNCTIONS
Vsodor_top__Syms::~Vsodor_top__Syms()
{
}

Vsodor_top__Syms::Vsodor_top__Syms(VerilatedContext* contextp, const char* namep, Vsodor_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__sodor_top{this, Verilated::catName(namep, "sodor_top")}
    , TOP__sodor_top__memory_modelling_inst{this, Verilated::catName(namep, "sodor_top.memory_modelling_inst")}
    , TOP__sodor_top__sodor_core{this, Verilated::catName(namep, "sodor_top.sodor_core")}
    , TOP__sodor_top__sodor_core__c{this, Verilated::catName(namep, "sodor_top.sodor_core.c")}
    , TOP__sodor_top__sodor_core__d{this, Verilated::catName(namep, "sodor_top.sodor_core.d")}
    , TOP__sodor_top__sodor_core__d__csr{this, Verilated::catName(namep, "sodor_top.sodor_core.d.csr")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__sodor_top = &TOP__sodor_top;
    TOP__sodor_top.__PVT__memory_modelling_inst = &TOP__sodor_top__memory_modelling_inst;
    TOP__sodor_top.__PVT__sodor_core = &TOP__sodor_top__sodor_core;
    TOP__sodor_top__sodor_core.__PVT__c = &TOP__sodor_top__sodor_core__c;
    TOP__sodor_top__sodor_core.__PVT__d = &TOP__sodor_top__sodor_core__d;
    TOP__sodor_top__sodor_core__d.__PVT__csr = &TOP__sodor_top__sodor_core__d__csr;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__sodor_top.__Vconfigure(true);
    TOP__sodor_top__memory_modelling_inst.__Vconfigure(true);
    TOP__sodor_top__sodor_core.__Vconfigure(true);
    TOP__sodor_top__sodor_core__c.__Vconfigure(true);
    TOP__sodor_top__sodor_core__d.__Vconfigure(true);
    TOP__sodor_top__sodor_core__d__csr.__Vconfigure(true);
    // Setup scopes
    __Vscope_sodor_top__sodor_core__d__csr.configure(this, name(), "sodor_top.sodor_core.d.csr", "csr", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
