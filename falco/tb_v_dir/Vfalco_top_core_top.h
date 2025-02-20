// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_CORE_TOP_H_
#define VERILATED_VFALCO_TOP_CORE_TOP_H_  // guard

#include "verilated.h"
class Vfalco_top_AGU;
class Vfalco_top_AGU_io;
class Vfalco_top_ID_stage;
class Vfalco_top_ID_stage_io;
class Vfalco_top_IF_stage;
class Vfalco_top_IF_stage_io;
class Vfalco_top_RNDS_stage;
class Vfalco_top_alu_csr_bc_execute_group;
class Vfalco_top_alu_muldiv_execute_group;
class Vfalco_top_commit_stage_io;
class Vfalco_top_committed_map_table;
class Vfalco_top_csr_file;
class Vfalco_top_csr_io;
class Vfalco_top_exe_stage_io;
class Vfalco_top_int_issue_queue;
class Vfalco_top_int_issue_queue_io;
class Vfalco_top_load_buffer;
class Vfalco_top_load_buffer_io;
class Vfalco_top_load_store_unit;
class Vfalco_top_load_store_unit_io;
class Vfalco_top_mem_access;
class Vfalco_top_mem_access_io;
class Vfalco_top_mem_issue_queue;
class Vfalco_top_mem_issue_queue_io;
class Vfalco_top_pipeline_control_recovery;
class Vfalco_top_pipeline_control_recovery_io;
class Vfalco_top_register_read;
class Vfalco_top_register_read_io;
class Vfalco_top_rename_dispatch_io;
class Vfalco_top_reorder_buffer;
class Vfalco_top_store_buffer;
class Vfalco_top_store_buffer_io;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_pipeline_control_recovery_io* __PVT__pipe_ctrl_io_inst;
    Vfalco_top_IF_stage_io* __PVT__if_stage_io_inst;
    Vfalco_top_ID_stage_io* id_stage_io_inst;
    Vfalco_top_rename_dispatch_io* __PVT__rnds_stage_io_inst;
    Vfalco_top_int_issue_queue_io* __PVT__int_iq_io_inst;
    Vfalco_top_mem_issue_queue_io* __PVT__mem_iq_io_inst;
    Vfalco_top_register_read_io* __PVT__register_read_io_inst;
    Vfalco_top_AGU_io* __PVT__agu_io_inst;
    Vfalco_top_exe_stage_io* __PVT__exe_stage_io_inst;
    Vfalco_top_load_store_unit_io* lsu_io_inst;
    Vfalco_top_store_buffer_io* __PVT__sdb_io_inst;
    Vfalco_top_load_buffer_io* __PVT__ldb_io_inst;
    Vfalco_top_commit_stage_io* __PVT__commit_stage_io_inst;
    Vfalco_top_mem_access_io* __PVT__mem_access_io_inst;
    Vfalco_top_csr_io* __PVT__csr_io_inst;
    Vfalco_top_pipeline_control_recovery* pipeline_ctrl;
    Vfalco_top_IF_stage* instruction_fetch;
    Vfalco_top_ID_stage* instruction_decode;
    Vfalco_top_RNDS_stage* rename_dispatch_stage;
    Vfalco_top_int_issue_queue* INT_IQ;
    Vfalco_top_mem_issue_queue* MEM_IQ;
    Vfalco_top_register_read* register_read_stage;
    Vfalco_top_alu_csr_bc_execute_group* __PVT__alu_csr_bc_execute_group_inst;
    Vfalco_top_alu_muldiv_execute_group* alu_muldiv_execute_group_inst;
    Vfalco_top_AGU* __PVT__address_generate_unit;
    Vfalco_top_load_store_unit* LSU;
    Vfalco_top_store_buffer* SDB;
    Vfalco_top_load_buffer* LDB;
    Vfalco_top_mem_access* MemAccess;
    Vfalco_top_reorder_buffer* ROB;
    Vfalco_top_committed_map_table* committed_map_table_inst;
    Vfalco_top_csr_file* csr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__core_commit_count,1,0);
    VL_OUT8(__PVT__load_dmem_stall,0,0);
    VL_IN8(__PVT__load_hit_resp,1,0);
    VL_IN8(__PVT__store_resp,1,0);
    CData/*0:0*/ __PVT__exe_stage_muldiv_busy;
    VL_IN(__PVT__init_pc,31,0);
    VL_OUT(__PVT__committed_update,23,0);
    IData/*31:0*/ __PVT__IF_instr0_predict_pc;
    IData/*31:0*/ __PVT__IF_instr1_predict_pc;
    VL_OUTW(__PVT__instruction_req,64,0,3);
    VL_INW(__PVT__instruction_resp,66,0,3);
    VL_OUT64(__PVT__load_ck_hit_req,33,0);
    VL_OUT64(__PVT__load_data_req,32,0);
    VL_IN64(__PVT__load_data_resp,33,0);
    VL_OUTW(__PVT__store_req,68,0,3);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_core_top(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_core_top();
    VL_UNCOPYABLE(Vfalco_top_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
