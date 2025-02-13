// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaquila_top__Syms.h"
#include "Vaquila_top.h"
#include "Vaquila_top___024root.h"
#include "Vaquila_top_aquila_top.h"
#include "Vaquila_top_core_top.h"
#include "Vaquila_top_aquila_mem_model.h"
#include "Vaquila_top_csr_file.h"
#include "Vaquila_top_pipeline_control.h"
#include "Vaquila_top_forwarding_unit.h"
#include "Vaquila_top_bpu.h"
#include "Vaquila_top_reg_file.h"
#include "Vaquila_top_program_counter.h"
#include "Vaquila_top_fetch.h"
#include "Vaquila_top_decode.h"
#include "Vaquila_top_execute.h"
#include "Vaquila_top_memory.h"
#include "Vaquila_top_writeback.h"
#include "Vaquila_top_alu.h"
#include "Vaquila_top_muldiv.h"
#include "Vaquila_top_bcu.h"
#include "Vaquila_top_distri_ram__E40.h"

// FUNCTIONS
Vaquila_top__Syms::~Vaquila_top__Syms()
{
}

Vaquila_top__Syms::Vaquila_top__Syms(VerilatedContext* contextp, const char* namep, Vaquila_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__aquila_top{this, Verilated::catName(namep, "aquila_top")}
    , TOP__aquila_top__core{this, Verilated::catName(namep, "aquila_top.core")}
    , TOP__aquila_top__core__Branch_Prediction_Unit{this, Verilated::catName(namep, "aquila_top.core.Branch_Prediction_Unit")}
    , TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history{this, Verilated::catName(namep, "aquila_top.core.Branch_Prediction_Unit.bpu_pc_history")}
    , TOP__aquila_top__core__CSR{this, Verilated::catName(namep, "aquila_top.core.CSR")}
    , TOP__aquila_top__core__Decode{this, Verilated::catName(namep, "aquila_top.core.Decode")}
    , TOP__aquila_top__core__Execute{this, Verilated::catName(namep, "aquila_top.core.Execute")}
    , TOP__aquila_top__core__Execute__ALU{this, Verilated::catName(namep, "aquila_top.core.Execute.ALU")}
    , TOP__aquila_top__core__Execute__BCU{this, Verilated::catName(namep, "aquila_top.core.Execute.BCU")}
    , TOP__aquila_top__core__Execute__MulDiv{this, Verilated::catName(namep, "aquila_top.core.Execute.MulDiv")}
    , TOP__aquila_top__core__Fetch{this, Verilated::catName(namep, "aquila_top.core.Fetch")}
    , TOP__aquila_top__core__Forwarding_Unit{this, Verilated::catName(namep, "aquila_top.core.Forwarding_Unit")}
    , TOP__aquila_top__core__Memory{this, Verilated::catName(namep, "aquila_top.core.Memory")}
    , TOP__aquila_top__core__Pipeline_Control{this, Verilated::catName(namep, "aquila_top.core.Pipeline_Control")}
    , TOP__aquila_top__core__Program_Counter{this, Verilated::catName(namep, "aquila_top.core.Program_Counter")}
    , TOP__aquila_top__core__Register_File{this, Verilated::catName(namep, "aquila_top.core.Register_File")}
    , TOP__aquila_top__core__Writeback{this, Verilated::catName(namep, "aquila_top.core.Writeback")}
    , TOP__aquila_top__memory_modelling_inst{this, Verilated::catName(namep, "aquila_top.memory_modelling_inst")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__aquila_top = &TOP__aquila_top;
    TOP__aquila_top.__PVT__core = &TOP__aquila_top__core;
    TOP__aquila_top__core.__PVT__Branch_Prediction_Unit = &TOP__aquila_top__core__Branch_Prediction_Unit;
    TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__bpu_pc_history = &TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history;
    TOP__aquila_top__core.__PVT__CSR = &TOP__aquila_top__core__CSR;
    TOP__aquila_top__core.__PVT__Decode = &TOP__aquila_top__core__Decode;
    TOP__aquila_top__core.__PVT__Execute = &TOP__aquila_top__core__Execute;
    TOP__aquila_top__core__Execute.__PVT__ALU = &TOP__aquila_top__core__Execute__ALU;
    TOP__aquila_top__core__Execute.__PVT__BCU = &TOP__aquila_top__core__Execute__BCU;
    TOP__aquila_top__core__Execute.__PVT__MulDiv = &TOP__aquila_top__core__Execute__MulDiv;
    TOP__aquila_top__core.__PVT__Fetch = &TOP__aquila_top__core__Fetch;
    TOP__aquila_top__core.__PVT__Forwarding_Unit = &TOP__aquila_top__core__Forwarding_Unit;
    TOP__aquila_top__core.__PVT__Memory = &TOP__aquila_top__core__Memory;
    TOP__aquila_top__core.__PVT__Pipeline_Control = &TOP__aquila_top__core__Pipeline_Control;
    TOP__aquila_top__core.__PVT__Program_Counter = &TOP__aquila_top__core__Program_Counter;
    TOP__aquila_top__core.__PVT__Register_File = &TOP__aquila_top__core__Register_File;
    TOP__aquila_top__core.__PVT__Writeback = &TOP__aquila_top__core__Writeback;
    TOP__aquila_top.__PVT__memory_modelling_inst = &TOP__aquila_top__memory_modelling_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__aquila_top.__Vconfigure(true);
    TOP__aquila_top__core.__Vconfigure(true);
    TOP__aquila_top__core__Branch_Prediction_Unit.__Vconfigure(true);
    TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__Vconfigure(true);
    TOP__aquila_top__core__CSR.__Vconfigure(true);
    TOP__aquila_top__core__Decode.__Vconfigure(true);
    TOP__aquila_top__core__Execute.__Vconfigure(true);
    TOP__aquila_top__core__Execute__ALU.__Vconfigure(true);
    TOP__aquila_top__core__Execute__BCU.__Vconfigure(true);
    TOP__aquila_top__core__Execute__MulDiv.__Vconfigure(true);
    TOP__aquila_top__core__Fetch.__Vconfigure(true);
    TOP__aquila_top__core__Forwarding_Unit.__Vconfigure(true);
    TOP__aquila_top__core__Memory.__Vconfigure(true);
    TOP__aquila_top__core__Pipeline_Control.__Vconfigure(true);
    TOP__aquila_top__core__Program_Counter.__Vconfigure(true);
    TOP__aquila_top__core__Register_File.__Vconfigure(true);
    TOP__aquila_top__core__Writeback.__Vconfigure(true);
    TOP__aquila_top__memory_modelling_inst.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
