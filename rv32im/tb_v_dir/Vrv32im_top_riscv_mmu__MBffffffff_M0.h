// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_MMU__MBFFFFFFFF_M0_H_
#define VERILATED_VRV32IM_TOP_RISCV_MMU__MBFFFFFFFF_M0_H_  // guard

#include "verilated.h"


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_mmu__MBffffffff_M0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__priv_d_i,1,0);
        VL_IN8(__PVT__sum_i,0,0);
        VL_IN8(__PVT__mxr_i,0,0);
        VL_IN8(__PVT__flush_i,0,0);
        VL_IN8(__PVT__fetch_in_rd_i,0,0);
        VL_IN8(__PVT__fetch_in_flush_i,0,0);
        VL_IN8(__PVT__fetch_in_invalidate_i,0,0);
        VL_IN8(__PVT__fetch_in_priv_i,1,0);
        VL_IN8(__PVT__fetch_out_accept_i,0,0);
        VL_IN8(__PVT__fetch_out_valid_i,0,0);
        VL_IN8(__PVT__fetch_out_error_i,0,0);
        VL_IN8(__PVT__lsu_in_rd_i,0,0);
        VL_IN8(__PVT__lsu_in_wr_i,3,0);
        VL_IN8(__PVT__lsu_in_cacheable_i,0,0);
        VL_IN8(__PVT__lsu_in_invalidate_i,0,0);
        VL_IN8(__PVT__lsu_in_writeback_i,0,0);
        VL_IN8(__PVT__lsu_in_flush_i,0,0);
        VL_IN8(__PVT__lsu_out_accept_i,0,0);
        VL_IN8(__PVT__lsu_out_ack_i,0,0);
        VL_IN8(__PVT__lsu_out_error_i,0,0);
        VL_OUT8(__PVT__fetch_in_accept_o,0,0);
        VL_OUT8(__PVT__fetch_in_valid_o,0,0);
        VL_OUT8(__PVT__fetch_in_error_o,0,0);
        VL_OUT8(__PVT__fetch_out_rd_o,0,0);
        VL_OUT8(__PVT__fetch_out_flush_o,0,0);
        VL_OUT8(__PVT__fetch_out_invalidate_o,0,0);
        VL_OUT8(__PVT__fetch_in_fault_o,0,0);
        VL_OUT8(__PVT__lsu_in_accept_o,0,0);
        VL_OUT8(__PVT__lsu_in_ack_o,0,0);
        VL_OUT8(__PVT__lsu_in_error_o,0,0);
        VL_OUT8(__PVT__lsu_out_rd_o,0,0);
        VL_OUT8(__PVT__lsu_out_wr_o,3,0);
        VL_OUT8(__PVT__lsu_out_cacheable_o,0,0);
        VL_OUT8(__PVT__lsu_out_invalidate_o,0,0);
        VL_OUT8(__PVT__lsu_out_writeback_o,0,0);
        VL_OUT8(__PVT__lsu_out_flush_o,0,0);
        VL_OUT8(__PVT__lsu_in_load_fault_o,0,0);
        VL_OUT8(__PVT__lsu_in_store_fault_o,0,0);
        CData/*1:0*/ __PVT__genblk1__DOT__state_q;
        CData/*0:0*/ __PVT__genblk1__DOT__idle_w;
        CData/*0:0*/ __PVT__genblk1__DOT__resp_mmu_w;
        CData/*0:0*/ __PVT__genblk1__DOT__resp_valid_w;
        CData/*0:0*/ __PVT__genblk1__DOT__resp_error_w;
        CData/*0:0*/ __PVT__genblk1__DOT__cpu_accept_w;
        CData/*0:0*/ __PVT__genblk1__DOT__load_q;
        CData/*3:0*/ __PVT__genblk1__DOT__store_q;
        CData/*0:0*/ __PVT__genblk1__DOT__load_w;
        CData/*3:0*/ __PVT__genblk1__DOT__store_w;
        CData/*0:0*/ __PVT__genblk1__DOT__itlb_hit_w;
        CData/*0:0*/ __PVT__genblk1__DOT__dtlb_hit_w;
        CData/*0:0*/ __PVT__genblk1__DOT__dtlb_req_q;
        CData/*0:0*/ __PVT__genblk1__DOT__vm_enable_w;
        CData/*0:0*/ __PVT__genblk1__DOT__ifetch_vm_w;
        CData/*0:0*/ __PVT__genblk1__DOT__dfetch_vm_w;
        CData/*0:0*/ __PVT__genblk1__DOT__supervisor_i_w;
        CData/*0:0*/ __PVT__genblk1__DOT__supervisor_d_w;
        CData/*0:0*/ __PVT__genblk1__DOT__vm_i_enable_w;
        CData/*0:0*/ __PVT__genblk1__DOT__vm_d_enable_w;
        CData/*0:0*/ __PVT__genblk1__DOT__itlb_miss_w;
        CData/*0:0*/ __PVT__genblk1__DOT__dtlb_miss_w;
        CData/*0:0*/ __PVT__genblk1__DOT__itlb_valid_q;
        CData/*0:0*/ __PVT__genblk1__DOT__pc_fault_r;
    };
    struct {
        CData/*0:0*/ __PVT__genblk1__DOT__pc_fault_q;
        CData/*0:0*/ __PVT__genblk1__DOT__dtlb_valid_q;
        CData/*0:0*/ __PVT__genblk1__DOT__load_fault_r;
        CData/*0:0*/ __PVT__genblk1__DOT__store_fault_r;
        CData/*0:0*/ __PVT__genblk1__DOT__store_fault_q;
        CData/*0:0*/ __PVT__genblk1__DOT__load_fault_q;
        CData/*0:0*/ __PVT__genblk1__DOT__lsu_out_rd_w;
        CData/*3:0*/ __PVT__genblk1__DOT__lsu_out_wr_w;
        CData/*0:0*/ __PVT__genblk1__DOT__lsu_out_invalidate_w;
        CData/*0:0*/ __PVT__genblk1__DOT__lsu_out_writeback_w;
        CData/*0:0*/ __PVT__genblk1__DOT__lsu_out_cacheable_r;
        CData/*0:0*/ __PVT__genblk1__DOT__lsu_out_flush_w;
        CData/*0:0*/ __PVT__genblk1__DOT__mem_req_q;
        CData/*0:0*/ __PVT__genblk1__DOT__mmu_accept_w;
        CData/*0:0*/ __PVT__genblk1__DOT__read_hold_q;
        CData/*0:0*/ __PVT__genblk1__DOT__src_mmu_q;
        CData/*0:0*/ __PVT__genblk1__DOT__src_mmu_w;
        CData/*0:0*/ __Vdly__genblk1__DOT__load_q;
        CData/*3:0*/ __Vdly__genblk1__DOT__store_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__dtlb_req_q;
        CData/*1:0*/ __Vdly__genblk1__DOT__state_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__itlb_valid_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__pc_fault_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__dtlb_valid_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__store_fault_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__load_fault_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__mem_req_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__read_hold_q;
        CData/*0:0*/ __Vdly__genblk1__DOT__src_mmu_q;
        VL_IN16(__PVT__lsu_in_req_tag_i,10,0);
        VL_IN16(__PVT__lsu_out_resp_tag_i,10,0);
        VL_OUT16(__PVT__lsu_in_resp_tag_o,10,0);
        VL_OUT16(__PVT__lsu_out_req_tag_o,10,0);
        SData/*9:0*/ __PVT__genblk1__DOT__pte_flags_w;
        SData/*10:0*/ __PVT__genblk1__DOT__lsu_out_req_tag_w;
        VL_IN(__PVT__satp_i,31,0);
        VL_IN(__PVT__fetch_in_pc_i,31,0);
        VL_IN(__PVT__fetch_out_inst_i,31,0);
        VL_IN(__PVT__lsu_in_addr_i,31,0);
        VL_IN(__PVT__lsu_in_data_wr_i,31,0);
        VL_IN(__PVT__lsu_out_data_rd_i,31,0);
        VL_OUT(__PVT__fetch_in_inst_o,31,0);
        VL_OUT(__PVT__fetch_out_pc_o,31,0);
        VL_OUT(__PVT__lsu_in_data_rd_o,31,0);
        VL_OUT(__PVT__lsu_out_addr_o,31,0);
        VL_OUT(__PVT__lsu_out_data_wr_o,31,0);
        IData/*31:0*/ __PVT__genblk1__DOT__resp_data_w;
        IData/*31:0*/ __PVT__genblk1__DOT__lsu_in_addr_q;
        IData/*31:0*/ __PVT__genblk1__DOT__lsu_addr_w;
        IData/*31:0*/ __PVT__genblk1__DOT__ptbr_w;
        IData/*31:0*/ __PVT__genblk1__DOT__request_addr_w;
        IData/*31:0*/ __PVT__genblk1__DOT__pte_addr_q;
        IData/*31:0*/ __PVT__genblk1__DOT__pte_entry_q;
        IData/*31:0*/ __PVT__genblk1__DOT__virt_addr_q;
        IData/*31:0*/ __PVT__genblk1__DOT__pte_ppn_w;
        IData/*19:0*/ __PVT__genblk1__DOT__itlb_va_addr_q;
        IData/*31:0*/ __PVT__genblk1__DOT__itlb_entry_q;
        IData/*19:0*/ __PVT__genblk1__DOT__dtlb_va_addr_q;
        IData/*31:0*/ __PVT__genblk1__DOT__dtlb_entry_q;
        IData/*31:0*/ __PVT__genblk1__DOT__lsu_out_addr_w;
        IData/*31:0*/ __PVT__genblk1__DOT__lsu_out_data_wr_w;
        IData/*31:0*/ __Vdly__genblk1__DOT__lsu_in_addr_q;
        IData/*31:0*/ __Vdly__genblk1__DOT__pte_addr_q;
        IData/*31:0*/ __Vdly__genblk1__DOT__pte_entry_q;
    };
    struct {
        IData/*31:0*/ __Vdly__genblk1__DOT__virt_addr_q;
        IData/*19:0*/ __Vdly__genblk1__DOT__itlb_va_addr_q;
        IData/*31:0*/ __Vdly__genblk1__DOT__itlb_entry_q;
        IData/*19:0*/ __Vdly__genblk1__DOT__dtlb_va_addr_q;
        IData/*31:0*/ __Vdly__genblk1__DOT__dtlb_entry_q;
    };

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_mmu__MBffffffff_M0(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_mmu__MBffffffff_M0();
    VL_UNCOPYABLE(Vrv32im_top_riscv_mmu__MBffffffff_M0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
