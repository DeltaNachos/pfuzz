// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top.h"
#include "Vbiriscv_top___024root.h"
#include "Vbiriscv_top_biriscv_top.h"
#include "Vbiriscv_top_biriscv_mem_model.h"
#include "Vbiriscv_top_riscv_core__SC1_SD1_E1.h"
#include "Vbiriscv_top_biriscv_csr.h"
#include "Vbiriscv_top_biriscv_multiplier.h"
#include "Vbiriscv_top_biriscv_divider.h"
#include "Vbiriscv_top_biriscv_issue.h"
#include "Vbiriscv_top_biriscv_exec.h"
#include "Vbiriscv_top_biriscv_frontend__E1.h"
#include "Vbiriscv_top_biriscv_mmu__pi1.h"
#include "Vbiriscv_top_biriscv_lsu__pi2.h"
#include "Vbiriscv_top_biriscv_npc.h"
#include "Vbiriscv_top_biriscv_fetch.h"
#include "Vbiriscv_top_biriscv_pipe_ctrl.h"
#include "Vbiriscv_top_biriscv_regfile.h"
#include "Vbiriscv_top_biriscv_alu.h"
#include "Vbiriscv_top_biriscv_decode__E1.h"
#include "Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1.h"
#include "Vbiriscv_top_biriscv_csr_regfile__SB1.h"
#include "Vbiriscv_top_biriscv_npc_lfsr.h"
#include "Vbiriscv_top_fetch_fifo.h"
#include "Vbiriscv_top_biriscv_trace_sim.h"
#include "Vbiriscv_top_biriscv_decoder.h"

// FUNCTIONS
Vbiriscv_top__Syms::~Vbiriscv_top__Syms()
{
}

Vbiriscv_top__Syms::Vbiriscv_top__Syms(VerilatedContext* contextp, const char* namep, Vbiriscv_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__biriscv_top{this, Verilated::catName(namep, "biriscv_top")}
    , TOP__biriscv_top__memory_modelling_inst{this, Verilated::catName(namep, "biriscv_top.memory_modelling_inst")}
    , TOP__biriscv_top__u_core{this, Verilated::catName(namep, "biriscv_top.u_core")}
    , TOP__biriscv_top__u_core__u_div{this, Verilated::catName(namep, "biriscv_top.u_core.u_div")}
    , TOP__biriscv_top__u_core__u_exec0{this, Verilated::catName(namep, "biriscv_top.u_core.u_exec0")}
    , TOP__biriscv_top__u_core__u_exec0__u_alu{this, Verilated::catName(namep, "biriscv_top.u_core.u_exec0.u_alu")}
    , TOP__biriscv_top__u_core__u_exec1{this, Verilated::catName(namep, "biriscv_top.u_core.u_exec1")}
    , TOP__biriscv_top__u_core__u_exec1__u_alu{this, Verilated::catName(namep, "biriscv_top.u_core.u_exec1.u_alu")}
    , TOP__biriscv_top__u_core__u_frontend{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend")}
    , TOP__biriscv_top__u_core__u_frontend__u_decode{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_decode")}
    , TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_decode.genblk1.u_dec0")}
    , TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_decode.genblk1.u_dec1")}
    , TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_decode.genblk1.u_fifo")}
    , TOP__biriscv_top__u_core__u_frontend__u_fetch{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_fetch")}
    , TOP__biriscv_top__u_core__u_frontend__u_npc{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_npc")}
    , TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru{this, Verilated::catName(namep, "biriscv_top.u_core.u_frontend.u_npc.BRANCH_PREDICTION.u_lru")}
    , TOP__biriscv_top__u_core__u_lsu{this, Verilated::catName(namep, "biriscv_top.u_core.u_lsu")}
    , TOP__biriscv_top__u_core__u_lsu__u_lsu_request{this, Verilated::catName(namep, "biriscv_top.u_core.u_lsu.u_lsu_request")}
    , TOP__biriscv_top__u_core__u_mmu{this, Verilated::catName(namep, "biriscv_top.u_core.u_mmu")}
    , TOP__biriscv_top__u_core__u_mul{this, Verilated::catName(namep, "biriscv_top.u_core.u_mul")}
    , TOP__biriscv_top__u_core__u_csr{this, Verilated::catName(namep, "biriscv_top.u_core.u_csr")}
    , TOP__biriscv_top__u_core__u_csr__u_csrfile{this, Verilated::catName(namep, "biriscv_top.u_core.u_csr.u_csrfile")}
    , TOP__biriscv_top__u_core__u_issue{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe0_ctrl")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe0_ctrl.u_trace_d")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe0_ctrl.u_trace_wb")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe0_dec0_verif")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe0_dec1_verif")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe1_ctrl")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe1_ctrl.u_trace_d")}
    , TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_pipe1_ctrl.u_trace_wb")}
    , TOP__biriscv_top__u_core__u_issue__u_regfile{this, Verilated::catName(namep, "biriscv_top.u_core.u_issue.u_regfile")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.biriscv_top = &TOP__biriscv_top;
    TOP__biriscv_top.__PVT__memory_modelling_inst = &TOP__biriscv_top__memory_modelling_inst;
    TOP__biriscv_top.u_core = &TOP__biriscv_top__u_core;
    TOP__biriscv_top__u_core.__PVT__u_div = &TOP__biriscv_top__u_core__u_div;
    TOP__biriscv_top__u_core.__PVT__u_exec0 = &TOP__biriscv_top__u_core__u_exec0;
    TOP__biriscv_top__u_core__u_exec0.__PVT__u_alu = &TOP__biriscv_top__u_core__u_exec0__u_alu;
    TOP__biriscv_top__u_core.__PVT__u_exec1 = &TOP__biriscv_top__u_core__u_exec1;
    TOP__biriscv_top__u_core__u_exec1.__PVT__u_alu = &TOP__biriscv_top__u_core__u_exec1__u_alu;
    TOP__biriscv_top__u_core.__PVT__u_frontend = &TOP__biriscv_top__u_core__u_frontend;
    TOP__biriscv_top__u_core__u_frontend.__PVT__u_decode = &TOP__biriscv_top__u_core__u_frontend__u_decode;
    TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__genblk1__DOT__u_dec0 = &TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0;
    TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__genblk1__DOT__u_dec1 = &TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1;
    TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__genblk1__DOT__u_fifo = &TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo;
    TOP__biriscv_top__u_core__u_frontend.__PVT__u_fetch = &TOP__biriscv_top__u_core__u_frontend__u_fetch;
    TOP__biriscv_top__u_core__u_frontend.__PVT__u_npc = &TOP__biriscv_top__u_core__u_frontend__u_npc;
    TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__BRANCH_PREDICTION__DOT__u_lru = &TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru;
    TOP__biriscv_top__u_core.__PVT__u_lsu = &TOP__biriscv_top__u_core__u_lsu;
    TOP__biriscv_top__u_core__u_lsu.__PVT__u_lsu_request = &TOP__biriscv_top__u_core__u_lsu__u_lsu_request;
    TOP__biriscv_top__u_core.__PVT__u_mmu = &TOP__biriscv_top__u_core__u_mmu;
    TOP__biriscv_top__u_core.__PVT__u_mul = &TOP__biriscv_top__u_core__u_mul;
    TOP__biriscv_top__u_core.u_csr = &TOP__biriscv_top__u_core__u_csr;
    TOP__biriscv_top__u_core__u_csr.u_csrfile = &TOP__biriscv_top__u_core__u_csr__u_csrfile;
    TOP__biriscv_top__u_core.u_issue = &TOP__biriscv_top__u_core__u_issue;
    TOP__biriscv_top__u_core__u_issue.__PVT__u_pipe0_ctrl = &TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl;
    TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__u_trace_d = &TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d;
    TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__u_trace_wb = &TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb;
    TOP__biriscv_top__u_core__u_issue.__PVT__u_pipe0_dec0_verif = &TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif;
    TOP__biriscv_top__u_core__u_issue.__PVT__u_pipe0_dec1_verif = &TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif;
    TOP__biriscv_top__u_core__u_issue.__PVT__u_pipe1_ctrl = &TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl;
    TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__u_trace_d = &TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d;
    TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__u_trace_wb = &TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb;
    TOP__biriscv_top__u_core__u_issue.u_regfile = &TOP__biriscv_top__u_core__u_issue__u_regfile;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__biriscv_top.__Vconfigure(true);
    TOP__biriscv_top__memory_modelling_inst.__Vconfigure(true);
    TOP__biriscv_top__u_core.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_div.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_exec0.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_exec0__u_alu.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_exec1.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_exec1__u_alu.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_frontend.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_decode.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_fetch.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_npc.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_lsu.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_mmu.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_mul.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_csr.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_csr__u_csrfile.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_issue.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d.__Vconfigure(true);
    TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb.__Vconfigure(false);
    TOP__biriscv_top__u_core__u_issue__u_regfile.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
