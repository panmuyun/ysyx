// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_keyboard.h for the primary calling header

#ifndef VERILATED_VTOP_KEYBOARD___024ROOT_H_
#define VERILATED_VTOP_KEYBOARD___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_keyboard__Syms;

class Vtop_keyboard___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(ps2_clk,0,0);
        VL_IN8(ps2_data,0,0);
        VL_OUT8(ledL2,6,0);
        VL_OUT8(ledR2,6,0);
        VL_OUT8(ledL1,6,0);
        VL_OUT8(ledR1,6,0);
        VL_OUT8(ledL0,6,0);
        VL_OUT8(ledR0,6,0);
        VL_OUT8(presscount_ledL,6,0);
        VL_OUT8(presscount_ledR,6,0);
        CData/*7:0*/ top_keyboard__DOT__presscount;
        CData/*3:0*/ top_keyboard__DOT__my_keyboard__DOT__count;
        CData/*2:0*/ top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync;
        CData/*0:0*/ top_keyboard__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__PCLH__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__PCRH__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__RH2__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__LH1__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__RH1__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__f;
        CData/*0:0*/ top_keyboard__DOT__LH0__DOT__g;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__a;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__bb;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__c;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__d;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__e;
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__f;
    };
    struct {
        CData/*0:0*/ top_keyboard__DOT__RH0__DOT__g;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top_keyboard__DOT__asciicode;
        SData/*9:0*/ top_keyboard__DOT__my_keyboard__DOT__buffer;
        IData/*31:0*/ top_keyboard__DOT__data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_keyboard__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_keyboard___024root(Vtop_keyboard__Syms* symsp, const char* v__name);
    ~Vtop_keyboard___024root();
    VL_UNCOPYABLE(Vtop_keyboard___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
