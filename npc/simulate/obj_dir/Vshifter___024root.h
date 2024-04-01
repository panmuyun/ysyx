// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshifter.h for the primary calling header

#ifndef VERILATED_VSHIFTER___024ROOT_H_
#define VERILATED_VSHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class Vshifter__Syms;

class Vshifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(shiftreg,7,0);
    VL_OUT8(ledL,6,0);
    VL_OUT8(ledR,6,0);
    CData/*0:0*/ shifter__DOT__highest;
    CData/*7:0*/ shifter__DOT__out_shiftreg;
    CData/*0:0*/ shifter__DOT__LH__DOT__a;
    CData/*0:0*/ shifter__DOT__LH__DOT__bb;
    CData/*0:0*/ shifter__DOT__LH__DOT__c;
    CData/*0:0*/ shifter__DOT__LH__DOT__d;
    CData/*0:0*/ shifter__DOT__LH__DOT__e;
    CData/*0:0*/ shifter__DOT__LH__DOT__f;
    CData/*0:0*/ shifter__DOT__LH__DOT__g;
    CData/*0:0*/ shifter__DOT__RH__DOT__a;
    CData/*0:0*/ shifter__DOT__RH__DOT__bb;
    CData/*0:0*/ shifter__DOT__RH__DOT__c;
    CData/*0:0*/ shifter__DOT__RH__DOT__d;
    CData/*0:0*/ shifter__DOT__RH__DOT__e;
    CData/*0:0*/ shifter__DOT__RH__DOT__f;
    CData/*0:0*/ shifter__DOT__RH__DOT__g;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshifter___024root(Vshifter__Syms* symsp, const char* v__name);
    ~Vshifter___024root();
    VL_UNCOPYABLE(Vshifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
