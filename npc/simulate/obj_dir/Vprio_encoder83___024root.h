// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprio_encoder83.h for the primary calling header

#ifndef VERILATED_VPRIO_ENCODER83___024ROOT_H_
#define VERILATED_VPRIO_ENCODER83___024ROOT_H_  // guard

#include "verilated.h"

class Vprio_encoder83__Syms;

class Vprio_encoder83___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(encode_x,2,0);
    VL_OUT8(flag,0,0);
    VL_OUT8(led,6,0);
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__a;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__bb;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__c;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__d;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__e;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__f;
    CData/*0:0*/ prio_encoder83__DOT__u_bcd7seg__DOT__g;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ prio_encoder83__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vprio_encoder83__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprio_encoder83___024root(Vprio_encoder83__Syms* symsp, const char* v__name);
    ~Vprio_encoder83___024root();
    VL_UNCOPYABLE(Vprio_encoder83___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
