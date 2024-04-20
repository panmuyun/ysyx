// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "verilated.h"

#include "Vshifter___024root.h"

VL_ATTR_COLD void Vshifter___024root___eval_static__TOP(Vshifter___024root* vlSelf);

VL_ATTR_COLD void Vshifter___024root___eval_static(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_static\n"); );
    // Body
    Vshifter___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vshifter___024root___eval_static__TOP(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->shifter__DOT__data = 0U;
}

VL_ATTR_COLD void Vshifter___024root___eval_initial(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vshifter___024root___eval_final(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vshifter___024root___eval_triggers__stl(Vshifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__stl(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___eval_stl(Vshifter___024root* vlSelf);

VL_ATTR_COLD void Vshifter___024root___eval_settle(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vshifter___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vshifter___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/shifter.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vshifter___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__stl(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshifter___024root___stl_sequent__TOP__0(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->shifter__DOT__LH__DOT__a = 0U;
    vlSelf->shifter__DOT__LH__DOT__bb = 0U;
    vlSelf->shifter__DOT__LH__DOT__c = 0U;
    vlSelf->shifter__DOT__LH__DOT__d = 0U;
    vlSelf->shifter__DOT__LH__DOT__e = 0U;
    vlSelf->shifter__DOT__LH__DOT__f = 0U;
    vlSelf->shifter__DOT__LH__DOT__g = 0U;
    if ((0x80U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((0x40U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((0x20U & (IData)(vlSelf->shifter__DOT__data))) {
                if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
                    vlSelf->shifter__DOT__LH__DOT__a = 1U;
                    vlSelf->shifter__DOT__LH__DOT__f = 1U;
                    vlSelf->shifter__DOT__LH__DOT__e = 1U;
                    vlSelf->shifter__DOT__LH__DOT__g = 1U;
                } else {
                    vlSelf->shifter__DOT__LH__DOT__a = 1U;
                    vlSelf->shifter__DOT__LH__DOT__f = 1U;
                    vlSelf->shifter__DOT__LH__DOT__e = 1U;
                    vlSelf->shifter__DOT__LH__DOT__d = 1U;
                    vlSelf->shifter__DOT__LH__DOT__g = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
                vlSelf->shifter__DOT__LH__DOT__e = 1U;
                vlSelf->shifter__DOT__LH__DOT__g = 1U;
                vlSelf->shifter__DOT__LH__DOT__c = 1U;
                vlSelf->shifter__DOT__LH__DOT__d = 1U;
                vlSelf->shifter__DOT__LH__DOT__bb = 1U;
            } else {
                vlSelf->shifter__DOT__LH__DOT__a = 1U;
                vlSelf->shifter__DOT__LH__DOT__f = 1U;
                vlSelf->shifter__DOT__LH__DOT__e = 1U;
                vlSelf->shifter__DOT__LH__DOT__d = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
                vlSelf->shifter__DOT__LH__DOT__f = 1U;
                vlSelf->shifter__DOT__LH__DOT__e = 1U;
                vlSelf->shifter__DOT__LH__DOT__g = 1U;
                vlSelf->shifter__DOT__LH__DOT__c = 1U;
                vlSelf->shifter__DOT__LH__DOT__d = 1U;
            } else {
                vlSelf->shifter__DOT__LH__DOT__a = 1U;
                vlSelf->shifter__DOT__LH__DOT__f = 1U;
                vlSelf->shifter__DOT__LH__DOT__e = 1U;
                vlSelf->shifter__DOT__LH__DOT__bb = 1U;
                vlSelf->shifter__DOT__LH__DOT__c = 1U;
                vlSelf->shifter__DOT__LH__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((0x40U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((0x20U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
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
        } else if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((0x20U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((0x10U & (IData)(vlSelf->shifter__DOT__data))) {
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
    if ((8U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((4U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((2U & (IData)(vlSelf->shifter__DOT__data))) {
                if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
                    vlSelf->shifter__DOT__RH__DOT__a = 1U;
                    vlSelf->shifter__DOT__RH__DOT__f = 1U;
                    vlSelf->shifter__DOT__RH__DOT__e = 1U;
                    vlSelf->shifter__DOT__RH__DOT__g = 1U;
                } else {
                    vlSelf->shifter__DOT__RH__DOT__a = 1U;
                    vlSelf->shifter__DOT__RH__DOT__f = 1U;
                    vlSelf->shifter__DOT__RH__DOT__e = 1U;
                    vlSelf->shifter__DOT__RH__DOT__d = 1U;
                    vlSelf->shifter__DOT__RH__DOT__g = 1U;
                }
            } else if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
                vlSelf->shifter__DOT__RH__DOT__e = 1U;
                vlSelf->shifter__DOT__RH__DOT__g = 1U;
                vlSelf->shifter__DOT__RH__DOT__c = 1U;
                vlSelf->shifter__DOT__RH__DOT__d = 1U;
                vlSelf->shifter__DOT__RH__DOT__bb = 1U;
            } else {
                vlSelf->shifter__DOT__RH__DOT__a = 1U;
                vlSelf->shifter__DOT__RH__DOT__f = 1U;
                vlSelf->shifter__DOT__RH__DOT__e = 1U;
                vlSelf->shifter__DOT__RH__DOT__d = 1U;
            }
        } else if ((2U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
                vlSelf->shifter__DOT__RH__DOT__f = 1U;
                vlSelf->shifter__DOT__RH__DOT__e = 1U;
                vlSelf->shifter__DOT__RH__DOT__g = 1U;
                vlSelf->shifter__DOT__RH__DOT__c = 1U;
                vlSelf->shifter__DOT__RH__DOT__d = 1U;
            } else {
                vlSelf->shifter__DOT__RH__DOT__a = 1U;
                vlSelf->shifter__DOT__RH__DOT__f = 1U;
                vlSelf->shifter__DOT__RH__DOT__e = 1U;
                vlSelf->shifter__DOT__RH__DOT__bb = 1U;
                vlSelf->shifter__DOT__RH__DOT__c = 1U;
                vlSelf->shifter__DOT__RH__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((4U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((2U & (IData)(vlSelf->shifter__DOT__data))) {
            if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
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
        } else if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((2U & (IData)(vlSelf->shifter__DOT__data))) {
        if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
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
    } else if ((1U & (IData)(vlSelf->shifter__DOT__data))) {
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

VL_ATTR_COLD void Vshifter___024root___eval_stl(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vshifter___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__act(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or [changed] rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__nba(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or [changed] rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshifter___024root___ctor_var_reset(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ledL = VL_RAND_RESET_I(7);
    vlSelf->ledR = VL_RAND_RESET_I(7);
    vlSelf->shifter__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->shifter__DOT__LH__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__LH__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->shifter__DOT__RH__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
