// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_keyboard.h for the primary calling header

#ifndef VERILATED_VPS2_KEYBOARD___024ROOT_H_
#define VERILATED_VPS2_KEYBOARD___024ROOT_H_  // guard

#include "verilated.h"

class Vps2_keyboard__Syms;

class Vps2_keyboard___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(presscount,7,0);
    CData/*3:0*/ ps2_keyboard__DOT__count;
    CData/*2:0*/ ps2_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ ps2_keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ ps2_keyboard__DOT__buffer;
    VL_OUT(data,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vps2_keyboard__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_keyboard___024root(Vps2_keyboard__Syms* symsp, const char* v__name);
    ~Vps2_keyboard___024root();
    VL_UNCOPYABLE(Vps2_keyboard___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
