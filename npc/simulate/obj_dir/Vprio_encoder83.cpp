// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprio_encoder83.h"
#include "Vprio_encoder83__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vprio_encoder83::Vprio_encoder83(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vprio_encoder83__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , encode_x{vlSymsp->TOP.encode_x}
    , flag{vlSymsp->TOP.flag}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vprio_encoder83::Vprio_encoder83(const char* _vcname__)
    : Vprio_encoder83(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vprio_encoder83::~Vprio_encoder83() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vprio_encoder83___024root___eval_debug_assertions(Vprio_encoder83___024root* vlSelf);
#endif  // VL_DEBUG
void Vprio_encoder83___024root___eval_static(Vprio_encoder83___024root* vlSelf);
void Vprio_encoder83___024root___eval_initial(Vprio_encoder83___024root* vlSelf);
void Vprio_encoder83___024root___eval_settle(Vprio_encoder83___024root* vlSelf);
void Vprio_encoder83___024root___eval(Vprio_encoder83___024root* vlSelf);

void Vprio_encoder83::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprio_encoder83::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprio_encoder83___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vprio_encoder83___024root___eval_static(&(vlSymsp->TOP));
        Vprio_encoder83___024root___eval_initial(&(vlSymsp->TOP));
        Vprio_encoder83___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vprio_encoder83___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vprio_encoder83::eventsPending() { return false; }

uint64_t Vprio_encoder83::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vprio_encoder83::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vprio_encoder83___024root___eval_final(Vprio_encoder83___024root* vlSelf);

VL_ATTR_COLD void Vprio_encoder83::final() {
    Vprio_encoder83___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vprio_encoder83::hierName() const { return vlSymsp->name(); }
const char* Vprio_encoder83::modelName() const { return "Vprio_encoder83"; }
unsigned Vprio_encoder83::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vprio_encoder83::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vprio_encoder83___024root__trace_init_top(Vprio_encoder83___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vprio_encoder83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprio_encoder83___024root*>(voidSelf);
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vprio_encoder83___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vprio_encoder83___024root__trace_register(Vprio_encoder83___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vprio_encoder83::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vprio_encoder83::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vprio_encoder83___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
