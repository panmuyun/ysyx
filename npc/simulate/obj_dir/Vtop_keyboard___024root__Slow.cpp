// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_keyboard.h for the primary calling header

#include "verilated.h"

#include "Vtop_keyboard__Syms.h"
#include "Vtop_keyboard___024root.h"

void Vtop_keyboard___024root___ctor_var_reset(Vtop_keyboard___024root* vlSelf);

Vtop_keyboard___024root::Vtop_keyboard___024root(Vtop_keyboard__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_keyboard___024root___ctor_var_reset(this);
}

void Vtop_keyboard___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_keyboard___024root::~Vtop_keyboard___024root() {
}
