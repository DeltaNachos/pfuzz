// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_LSU__PI2_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_LSU__PI2_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_lsu__pi2 final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* __PVT__u_lsu_request;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__opcode_valid_i,0,0);
        VL_IN8(__PVT__opcode_invalid_i,0,0);
        VL_IN8(__PVT__opcode_rd_idx_i,4,0);
        VL_IN8(__PVT__opcode_ra_idx_i,4,0);
        VL_IN8(__PVT__opcode_rb_idx_i,4,0);
        VL_IN8(__PVT__mem_accept_i,0,0);
        VL_IN8(__PVT__mem_ack_i,0,0);
        VL_IN8(__PVT__mem_error_i,0,0);
        VL_IN8(__PVT__mem_load_fault_i,0,0);
        VL_IN8(__PVT__mem_store_fault_i,0,0);
        VL_OUT8(__PVT__mem_rd_o,0,0);
        VL_OUT8(__PVT__mem_wr_o,3,0);
        VL_OUT8(__PVT__mem_cacheable_o,0,0);
        VL_OUT8(__PVT__mem_invalidate_o,0,0);
        VL_OUT8(__PVT__mem_writeback_o,0,0);
        VL_OUT8(__PVT__mem_flush_o,0,0);
        VL_OUT8(__PVT__writeback_valid_o,0,0);
        VL_OUT8(__PVT__writeback_exception_o,5,0);
        VL_OUT8(__PVT__stall_o,0,0);
        CData/*0:0*/ __PVT__mem_rd_q;
        CData/*3:0*/ __PVT__mem_wr_q;
        CData/*0:0*/ __PVT__mem_cacheable_q;
        CData/*0:0*/ __PVT__mem_invalidate_q;
        CData/*0:0*/ __PVT__mem_writeback_q;
        CData/*0:0*/ __PVT__mem_flush_q;
        CData/*0:0*/ __PVT__mem_unaligned_e1_q;
        CData/*0:0*/ __PVT__mem_unaligned_e2_q;
        CData/*0:0*/ __PVT__mem_load_q;
        CData/*0:0*/ __PVT__mem_xb_q;
        CData/*0:0*/ __PVT__mem_xh_q;
        CData/*0:0*/ __PVT__mem_ls_q;
        CData/*0:0*/ __PVT__pending_lsu_e2_q;
        CData/*0:0*/ __PVT__issue_lsu_e1_w;
        CData/*0:0*/ __PVT__complete_ok_e2_w;
        CData/*0:0*/ __PVT__complete_err_e2_w;
        CData/*0:0*/ __PVT__delay_lsu_e2_w;
        CData/*0:0*/ __PVT__load_inst_w;
        CData/*0:0*/ __PVT__load_signed_inst_w;
        CData/*0:0*/ __PVT__store_inst_w;
        CData/*0:0*/ __PVT__req_lb_w;
        CData/*0:0*/ __PVT__req_lh_w;
        CData/*0:0*/ __PVT__req_lw_w;
        CData/*0:0*/ __PVT__req_sb_w;
        CData/*0:0*/ __PVT__req_sh_w;
        CData/*0:0*/ __PVT__req_sw_w;
        CData/*0:0*/ __PVT__req_sw_lw_w;
        CData/*0:0*/ __PVT__req_sh_lh_w;
        CData/*0:0*/ __PVT__mem_unaligned_r;
        CData/*0:0*/ __PVT__mem_rd_r;
        CData/*3:0*/ __PVT__mem_wr_r;
        CData/*0:0*/ __PVT__dcache_flush_w;
        CData/*0:0*/ __PVT__dcache_writeback_w;
        CData/*0:0*/ __PVT__dcache_invalidate_w;
        CData/*0:0*/ __PVT__resp_load_w;
        CData/*0:0*/ __PVT__resp_byte_w;
        CData/*0:0*/ __PVT__resp_half_w;
        CData/*0:0*/ __PVT__resp_signed_w;
        CData/*0:0*/ __Vcellinp__u_lsu_request__pop_i;
        CData/*0:0*/ __Vcellinp__u_lsu_request__push_i;
        CData/*1:0*/ __PVT__addr_lsb_r;
        CData/*0:0*/ __PVT__load_byte_r;
        CData/*0:0*/ __PVT__load_half_r;
    };
    struct {
        CData/*0:0*/ __PVT__load_signed_r;
        CData/*0:0*/ __PVT__fault_load_align_w;
        CData/*0:0*/ __PVT__fault_store_align_w;
        CData/*0:0*/ __PVT__fault_load_bus_w;
        CData/*0:0*/ __PVT__fault_store_bus_w;
        CData/*0:0*/ __PVT__fault_load_page_w;
        CData/*0:0*/ __PVT__fault_store_page_w;
        CData/*0:0*/ __Vdly__pending_lsu_e2_q;
        CData/*0:0*/ __Vdly__mem_unaligned_e2_q;
        CData/*0:0*/ __Vdly__mem_rd_q;
        CData/*3:0*/ __Vdly__mem_wr_q;
        CData/*0:0*/ __Vdly__mem_cacheable_q;
        CData/*0:0*/ __Vdly__mem_invalidate_q;
        CData/*0:0*/ __Vdly__mem_writeback_q;
        CData/*0:0*/ __Vdly__mem_flush_q;
        CData/*0:0*/ __Vdly__mem_unaligned_e1_q;
        CData/*0:0*/ __Vdly__mem_load_q;
        CData/*0:0*/ __Vdly__mem_xb_q;
        CData/*0:0*/ __Vdly__mem_xh_q;
        CData/*0:0*/ __Vdly__mem_ls_q;
        VL_IN16(__PVT__mem_resp_tag_i,10,0);
        VL_OUT16(__PVT__mem_req_tag_o,10,0);
        VL_IN(__PVT__opcode_opcode_i,31,0);
        VL_IN(__PVT__opcode_pc_i,31,0);
        VL_IN(__PVT__opcode_ra_operand_i,31,0);
        VL_IN(__PVT__opcode_rb_operand_i,31,0);
        VL_IN(__PVT__mem_data_rd_i,31,0);
        VL_OUT(__PVT__mem_addr_o,31,0);
        VL_OUT(__PVT__mem_data_wr_o,31,0);
        VL_OUT(__PVT__writeback_value_o,31,0);
        IData/*31:0*/ __PVT__mem_addr_q;
        IData/*31:0*/ __PVT__mem_data_wr_q;
        IData/*31:0*/ __PVT__mem_addr_r;
        IData/*31:0*/ __PVT__mem_data_r;
        IData/*31:0*/ __PVT__resp_addr_w;
        IData/*31:0*/ __PVT__wb_result_r;
        IData/*31:0*/ __Vdly__mem_addr_q;
        IData/*31:0*/ __Vdly__mem_data_wr_q;
        QData/*35:0*/ __Vcellout__u_lsu_request__data_out_o;
        QData/*35:0*/ __Vcellinp__u_lsu_request__data_in_i;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_lsu__pi2(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_lsu__pi2();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_lsu__pi2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
