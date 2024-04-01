// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "verilated.h"

#include "Vshifter___024root.h"

void Vshifter___024root___eval_act(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshifter___024root___nba_sequent__TOP__0(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__shifter__DOT__out_shiftreg;
    __Vdly__shifter__DOT__out_shiftreg = 0;
    CData/*0:0*/ __Vdly__shifter__DOT__highest;
    __Vdly__shifter__DOT__highest = 0;
    // Body
    __Vdly__shifter__DOT__highest = vlSelf->shifter__DOT__highest;
    __Vdly__shifter__DOT__out_shiftreg = vlSelf->shifter__DOT__out_shiftreg;
    if (vlSelf->rst) {
        __Vdly__shifter__DOT__out_shiftreg = 0U;
    } else {
        __Vdly__shifter__DOT__highest = (1U & VL_REDXOR_8(
                                                          (0x1dU 
                                                           & (IData)(vlSelf->shifter__DOT__out_shiftreg))));
        __Vdly__shifter__DOT__out_shiftreg = (0xffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->shifter__DOT__out_shiftreg))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->shifter__DOT__out_shiftreg))
                                                  : 
                                                 (((IData)(vlSelf->shifter__DOT__highest) 
                                                   << 7U) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelf->shifter__DOT__out_shiftreg) 
                                                        >> 1U)))));
    }
    vlSelf->shifter__DOT__highest = __Vdly__shifter__DOT__highest;
    vlSelf->shifter__DOT__out_shiftreg = __Vdly__shifter__DOT__out_shiftreg;
    vlSelf->shifter__DOT__LH__DOT__a = 0U;
    vlSelf->shifter__DOT__LH__DOT__bb = 0U;
    vlSelf->shifter__DOT__LH__DOT__c = 0U;
    vlSelf->shifter__DOT__LH__DOT__d = 0U;
    vlSelf->shifter__DOT__LH__DOT__e = 0U;
    vlSelf->shifter__DOT__LH__DOT__f = 0U;
    vlSelf->shifter__DOT__LH__DOT__g = 0U;
    if ((0x80U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((0x40U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__LH__DOT__a = 0U;
            vlSelf->shifter__DOT__LH__DOT__bb = 0U;
            vlSelf->shifter__DOT__LH__DOT__c = 0U;
            vlSelf->shifter__DOT__LH__DOT__d = 0U;
            vlSelf->shifter__DOT__LH__DOT__e = 0U;
            vlSelf->shifter__DOT__LH__DOT__f = 0U;
            vlSelf->shifter__DOT__LH__DOT__g = 0U;
        } else if ((0x20U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__LH__DOT__a = 0U;
            vlSelf->shifter__DOT__LH__DOT__bb = 0U;
            vlSelf->shifter__DOT__LH__DOT__c = 0U;
            vlSelf->shifter__DOT__LH__DOT__d = 0U;
            vlSelf->shifter__DOT__LH__DOT__e = 0U;
            vlSelf->shifter__DOT__LH__DOT__f = 0U;
            vlSelf->shifter__DOT__LH__DOT__g = 0U;
        } else if ((0x10U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__LH__DOT__a = 1U;
            vlSelf->shifter__DOT__LH__DOT__f = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
            vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            vlSelf->shifter__DOT__LH__DOT__c = 1U;
            vlSelf->shifter__DOT__LH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__LH__DOT__a = 1U;
            vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            vlSelf->shifter__DOT__LH__DOT__c = 1U;
            vlSelf->shifter__DOT__LH__DOT__d = 1U;
            vlSelf->shifter__DOT__LH__DOT__e = 1U;
            vlSelf->shifter__DOT__LH__DOT__f = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
        }
    } else if ((0x40U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((0x20U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            if ((0x10U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
                vlSelf->shifter__DOT__LH__DOT__a = 1U;
                vlSelf->shifter__DOT__LH__DOT__bb = 1U;
                vlSelf->shifter__DOT__LH__DOT__c = 1U;
            } else {
                vlSelf->shifter__DOT__LH__DOT__a = 1U;
                vlSelf->shifter__DOT__LH__DOT__f = 1U;
                vlSelf->shifter__DOT__LH__DOT__e = 1U;
                vlSelf->shifter__DOT__LH__DOT__d = 1U;
                vlSelf->shifter__DOT__LH__DOT__c = 1U;
                vlSelf->shifter__DOT__LH__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__LH__DOT__a = 1U;
            vlSelf->shifter__DOT__LH__DOT__f = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
            vlSelf->shifter__DOT__LH__DOT__c = 1U;
            vlSelf->shifter__DOT__LH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__LH__DOT__f = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
            vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            vlSelf->shifter__DOT__LH__DOT__c = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((0x10U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__LH__DOT__a = 1U;
            vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
            vlSelf->shifter__DOT__LH__DOT__c = 1U;
            vlSelf->shifter__DOT__LH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__LH__DOT__a = 1U;
            vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            vlSelf->shifter__DOT__LH__DOT__g = 1U;
            vlSelf->shifter__DOT__LH__DOT__e = 1U;
            vlSelf->shifter__DOT__LH__DOT__d = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        vlSelf->shifter__DOT__LH__DOT__bb = 1U;
        vlSelf->shifter__DOT__LH__DOT__c = 1U;
    } else {
        vlSelf->shifter__DOT__LH__DOT__a = 1U;
        vlSelf->shifter__DOT__LH__DOT__bb = 1U;
        vlSelf->shifter__DOT__LH__DOT__c = 1U;
        vlSelf->shifter__DOT__LH__DOT__d = 1U;
        vlSelf->shifter__DOT__LH__DOT__e = 1U;
        vlSelf->shifter__DOT__LH__DOT__f = 1U;
    }
    vlSelf->ledL = ((0x40U & ((~ (IData)(vlSelf->shifter__DOT__LH__DOT__a)) 
                              << 6U)) | ((0x20U & (
                                                   (~ (IData)(vlSelf->shifter__DOT__LH__DOT__bb)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((~ (IData)(vlSelf->shifter__DOT__LH__DOT__c)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((~ (IData)(vlSelf->shifter__DOT__LH__DOT__d)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ (IData)(vlSelf->shifter__DOT__LH__DOT__e)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->shifter__DOT__LH__DOT__f)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->shifter__DOT__LH__DOT__g)))))))));
    vlSelf->shifter__DOT__RH__DOT__a = 0U;
    vlSelf->shifter__DOT__RH__DOT__bb = 0U;
    vlSelf->shifter__DOT__RH__DOT__c = 0U;
    vlSelf->shifter__DOT__RH__DOT__d = 0U;
    vlSelf->shifter__DOT__RH__DOT__e = 0U;
    vlSelf->shifter__DOT__RH__DOT__f = 0U;
    vlSelf->shifter__DOT__RH__DOT__g = 0U;
    if ((8U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((4U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__RH__DOT__a = 0U;
            vlSelf->shifter__DOT__RH__DOT__bb = 0U;
            vlSelf->shifter__DOT__RH__DOT__c = 0U;
            vlSelf->shifter__DOT__RH__DOT__d = 0U;
            vlSelf->shifter__DOT__RH__DOT__e = 0U;
            vlSelf->shifter__DOT__RH__DOT__f = 0U;
            vlSelf->shifter__DOT__RH__DOT__g = 0U;
        } else if ((2U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__RH__DOT__a = 0U;
            vlSelf->shifter__DOT__RH__DOT__bb = 0U;
            vlSelf->shifter__DOT__RH__DOT__c = 0U;
            vlSelf->shifter__DOT__RH__DOT__d = 0U;
            vlSelf->shifter__DOT__RH__DOT__e = 0U;
            vlSelf->shifter__DOT__RH__DOT__f = 0U;
            vlSelf->shifter__DOT__RH__DOT__g = 0U;
        } else if ((1U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__RH__DOT__a = 1U;
            vlSelf->shifter__DOT__RH__DOT__f = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
            vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            vlSelf->shifter__DOT__RH__DOT__c = 1U;
            vlSelf->shifter__DOT__RH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__RH__DOT__a = 1U;
            vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            vlSelf->shifter__DOT__RH__DOT__c = 1U;
            vlSelf->shifter__DOT__RH__DOT__d = 1U;
            vlSelf->shifter__DOT__RH__DOT__e = 1U;
            vlSelf->shifter__DOT__RH__DOT__f = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
        }
    } else if ((4U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((2U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            if ((1U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
                vlSelf->shifter__DOT__RH__DOT__a = 1U;
                vlSelf->shifter__DOT__RH__DOT__bb = 1U;
                vlSelf->shifter__DOT__RH__DOT__c = 1U;
            } else {
                vlSelf->shifter__DOT__RH__DOT__a = 1U;
                vlSelf->shifter__DOT__RH__DOT__f = 1U;
                vlSelf->shifter__DOT__RH__DOT__e = 1U;
                vlSelf->shifter__DOT__RH__DOT__d = 1U;
                vlSelf->shifter__DOT__RH__DOT__c = 1U;
                vlSelf->shifter__DOT__RH__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__RH__DOT__a = 1U;
            vlSelf->shifter__DOT__RH__DOT__f = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
            vlSelf->shifter__DOT__RH__DOT__c = 1U;
            vlSelf->shifter__DOT__RH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__RH__DOT__f = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
            vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            vlSelf->shifter__DOT__RH__DOT__c = 1U;
        }
    } else if ((2U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        if ((1U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
            vlSelf->shifter__DOT__RH__DOT__a = 1U;
            vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
            vlSelf->shifter__DOT__RH__DOT__c = 1U;
            vlSelf->shifter__DOT__RH__DOT__d = 1U;
        } else {
            vlSelf->shifter__DOT__RH__DOT__a = 1U;
            vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            vlSelf->shifter__DOT__RH__DOT__g = 1U;
            vlSelf->shifter__DOT__RH__DOT__e = 1U;
            vlSelf->shifter__DOT__RH__DOT__d = 1U;
        }
    } else if ((1U & (IData)(vlSelf->shifter__DOT__out_shiftreg))) {
        vlSelf->shifter__DOT__RH__DOT__bb = 1U;
        vlSelf->shifter__DOT__RH__DOT__c = 1U;
    } else {
        vlSelf->shifter__DOT__RH__DOT__a = 1U;
        vlSelf->shifter__DOT__RH__DOT__bb = 1U;
        vlSelf->shifter__DOT__RH__DOT__c = 1U;
        vlSelf->shifter__DOT__RH__DOT__d = 1U;
        vlSelf->shifter__DOT__RH__DOT__e = 1U;
        vlSelf->shifter__DOT__RH__DOT__f = 1U;
    }
    vlSelf->ledR = ((0x40U & ((~ (IData)(vlSelf->shifter__DOT__RH__DOT__a)) 
                              << 6U)) | ((0x20U & (
                                                   (~ (IData)(vlSelf->shifter__DOT__RH__DOT__bb)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((~ (IData)(vlSelf->shifter__DOT__RH__DOT__c)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((~ (IData)(vlSelf->shifter__DOT__RH__DOT__d)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ (IData)(vlSelf->shifter__DOT__RH__DOT__e)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->shifter__DOT__RH__DOT__f)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->shifter__DOT__RH__DOT__g)))))))));
}

void Vshifter___024root___eval_nba(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vshifter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vshifter___024root___eval_triggers__act(Vshifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__act(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__nba(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vshifter___024root___eval(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vshifter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vshifter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/shifter.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vshifter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vshifter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/shifter.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vshifter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vshifter___024root___eval_debug_assertions(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
