// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vssrv_top.h"
#include "Vssrv_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vssrv_top::Vssrv_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vssrv_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , __PVT__ssrv_top{vlSymsp->TOP.__PVT__ssrv_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vssrv_top::Vssrv_top(const char* _vcname__)
    : Vssrv_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vssrv_top::~Vssrv_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vssrv_top___024root___eval_debug_assertions(Vssrv_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vssrv_top___024root___eval_static(Vssrv_top___024root* vlSelf);
void Vssrv_top___024root___eval_initial(Vssrv_top___024root* vlSelf);
void Vssrv_top___024root___eval_settle(Vssrv_top___024root* vlSelf);
void Vssrv_top___024root___eval(Vssrv_top___024root* vlSelf);

void Vssrv_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vssrv_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vssrv_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vssrv_top___024root___eval_static(&(vlSymsp->TOP));
        Vssrv_top___024root___eval_initial(&(vlSymsp->TOP));
        Vssrv_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vssrv_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vssrv_top::eventsPending() { return false; }

uint64_t Vssrv_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vssrv_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vssrv_top___024root___eval_final(Vssrv_top___024root* vlSelf);

VL_ATTR_COLD void Vssrv_top::final() {
    Vssrv_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vssrv_top::hierName() const { return vlSymsp->name(); }
const char* Vssrv_top::modelName() const { return "Vssrv_top"; }
unsigned Vssrv_top::threads() const { return 1; }
void Vssrv_top::prepareClone() const { contextp()->prepareClone(); }
void Vssrv_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vssrv_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vssrv_top___024root__trace_init_top(Vssrv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vssrv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vssrv_top___024root*>(voidSelf);
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vssrv_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vssrv_top___024root__trace_register(Vssrv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vssrv_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vssrv_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vssrv_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
