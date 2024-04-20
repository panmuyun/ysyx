// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_keyboard.h for the primary calling header

#include "verilated.h"

#include "Vtop_keyboard___024root.h"

VL_ATTR_COLD void Vtop_keyboard___024root___eval_static(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_keyboard___024root___eval_initial__TOP(Vtop_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vtop_keyboard___024root___eval_initial(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_initial\n"); );
    // Body
    Vtop_keyboard___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_keyboard___024root___eval_initial__TOP(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ledL2 = 0x7fU;
}

VL_ATTR_COLD void Vtop_keyboard___024root___eval_final(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_keyboard___024root___eval_triggers__stl(Vtop_keyboard___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__stl(Vtop_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___eval_stl(Vtop_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vtop_keyboard___024root___eval_settle(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_keyboard___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_keyboard___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/top_keyboard.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_keyboard___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__stl(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*11:0*/, 256> Vtop_keyboard__ConstPool__TABLE_hc3ce99c2_0;

VL_ATTR_COLD void Vtop_keyboard___024root___stl_sequent__TOP__0(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top_keyboard__DOT__PCLH__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__PCLH__DOT__g = 0U;
    if ((0x80U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((0x40U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                    vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
        }
    } else if ((0x40U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
    } else {
        vlSelf->top_keyboard__DOT__PCLH__DOT__a = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__c = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__d = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__e = 1U;
        vlSelf->top_keyboard__DOT__PCLH__DOT__f = 1U;
    }
    vlSelf->presscount_ledL = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__a)) 
                                         << 6U)) | 
                               ((0x20U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__bb)) 
                                          << 5U)) | 
                                ((0x10U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__c)) 
                                           << 4U)) 
                                 | ((8U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__d)) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__e)) 
                                              << 2U)) 
                                       | ((2U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__f)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelf->top_keyboard__DOT__PCLH__DOT__g)))))))));
    vlSelf->top_keyboard__DOT__PCRH__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__PCRH__DOT__g = 0U;
    if ((8U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((4U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((2U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                    vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
                }
            } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
            }
        } else if ((2U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
        }
    } else if ((4U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((2U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
                vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
            } else {
                vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
        }
    } else if ((2U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
            vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
        }
    } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__presscount))) {
        vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
    } else {
        vlSelf->top_keyboard__DOT__PCRH__DOT__a = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__c = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__d = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__e = 1U;
        vlSelf->top_keyboard__DOT__PCRH__DOT__f = 1U;
    }
    vlSelf->presscount_ledR = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__a)) 
                                         << 6U)) | 
                               ((0x20U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__bb)) 
                                          << 5U)) | 
                                ((0x10U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__c)) 
                                           << 4U)) 
                                 | ((8U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__d)) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__e)) 
                                              << 2U)) 
                                       | ((2U & ((~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__f)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelf->top_keyboard__DOT__PCRH__DOT__g)))))))));
    vlSelf->top_keyboard__DOT__LH0__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__LH0__DOT__g = 0U;
    if ((0xf0U != (0xffU & (vlSelf->top_keyboard__DOT__data 
                            >> 8U)))) {
        if ((0x80U & vlSelf->top_keyboard__DOT__data)) {
            if ((0x40U & vlSelf->top_keyboard__DOT__data)) {
                if ((0x20U & vlSelf->top_keyboard__DOT__data)) {
                    if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                        vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                    } else {
                        vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                        vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                    }
                } else if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                }
            } else if ((0x20U & vlSelf->top_keyboard__DOT__data)) {
                if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                }
            } else if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
            }
        } else if ((0x40U & vlSelf->top_keyboard__DOT__data)) {
            if ((0x20U & vlSelf->top_keyboard__DOT__data)) {
                if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                }
            } else if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
            }
        } else if ((0x20U & vlSelf->top_keyboard__DOT__data)) {
            if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
            }
        } else if ((0x10U & vlSelf->top_keyboard__DOT__data)) {
            vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
        } else {
            vlSelf->top_keyboard__DOT__LH0__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__LH0__DOT__f = 1U;
        }
    }
    vlSelf->ledL0 = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__a)) 
                               << 6U)) | ((0x20U & 
                                           ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__bb)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__c)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__d)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__e)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__f)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top_keyboard__DOT__LH0__DOT__g)))))))));
    vlSelf->top_keyboard__DOT__RH0__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__RH0__DOT__g = 0U;
    if ((0xf0U != (0xffU & (vlSelf->top_keyboard__DOT__data 
                            >> 8U)))) {
        if ((8U & vlSelf->top_keyboard__DOT__data)) {
            if ((4U & vlSelf->top_keyboard__DOT__data)) {
                if ((2U & vlSelf->top_keyboard__DOT__data)) {
                    if ((1U & vlSelf->top_keyboard__DOT__data)) {
                        vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                    } else {
                        vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                        vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                    }
                } else if ((1U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                }
            } else if ((2U & vlSelf->top_keyboard__DOT__data)) {
                if ((1U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                }
            } else if ((1U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
            }
        } else if ((4U & vlSelf->top_keyboard__DOT__data)) {
            if ((2U & vlSelf->top_keyboard__DOT__data)) {
                if ((1U & vlSelf->top_keyboard__DOT__data)) {
                    vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                    vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                }
            } else if ((1U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
            }
        } else if ((2U & vlSelf->top_keyboard__DOT__data)) {
            if ((1U & vlSelf->top_keyboard__DOT__data)) {
                vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
            }
        } else if ((1U & vlSelf->top_keyboard__DOT__data)) {
            vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH0__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__RH0__DOT__f = 1U;
        }
    }
    vlSelf->ledR0 = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__a)) 
                               << 6U)) | ((0x20U & 
                                           ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__bb)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__c)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__d)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__e)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__f)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top_keyboard__DOT__RH0__DOT__g)))))))));
    __Vtableidx1 = (0xffU & vlSelf->top_keyboard__DOT__data);
    vlSelf->top_keyboard__DOT__asciicode = Vtop_keyboard__ConstPool__TABLE_hc3ce99c2_0
        [__Vtableidx1];
    vlSelf->top_keyboard__DOT__RH2__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__RH2__DOT__g = 0U;
    if ((0x800U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x400U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x200U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                    vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
                }
            } else if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
            }
        } else if ((0x200U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            }
        } else if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x200U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            }
        } else if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
        }
    } else if ((0x200U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
        }
    } else if ((0x100U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
    } else {
        vlSelf->top_keyboard__DOT__RH2__DOT__a = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__c = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__d = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__e = 1U;
        vlSelf->top_keyboard__DOT__RH2__DOT__f = 1U;
    }
    vlSelf->ledR2 = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__a)) 
                               << 6U)) | ((0x20U & 
                                           ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__bb)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__c)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__d)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__e)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__f)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top_keyboard__DOT__RH2__DOT__g)))))))));
    vlSelf->top_keyboard__DOT__LH1__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__LH1__DOT__g = 0U;
    if ((0x80U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x40U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                    vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
        }
    } else if ((0x40U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
            } else {
                vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
    } else {
        vlSelf->top_keyboard__DOT__LH1__DOT__a = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__c = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__d = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__e = 1U;
        vlSelf->top_keyboard__DOT__LH1__DOT__f = 1U;
    }
    vlSelf->ledL1 = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__a)) 
                               << 6U)) | ((0x20U & 
                                           ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__bb)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__c)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__d)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__e)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__f)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top_keyboard__DOT__LH1__DOT__g)))))))));
    vlSelf->top_keyboard__DOT__RH1__DOT__a = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__bb = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__c = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__d = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__e = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__f = 0U;
    vlSelf->top_keyboard__DOT__RH1__DOT__g = 0U;
    if ((8U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((4U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((2U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                    vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
                } else {
                    vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
                    vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
                }
            } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
            }
        } else if ((2U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
        }
    } else if ((4U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((2U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
                vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
            } else {
                vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
                vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
        }
    } else if ((2U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
            vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
        } else {
            vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__g = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
            vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
        }
    } else if ((1U & (IData)(vlSelf->top_keyboard__DOT__asciicode))) {
        vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
    } else {
        vlSelf->top_keyboard__DOT__RH1__DOT__a = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__bb = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__c = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__d = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__e = 1U;
        vlSelf->top_keyboard__DOT__RH1__DOT__f = 1U;
    }
    vlSelf->ledR1 = ((0x40U & ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__a)) 
                               << 6U)) | ((0x20U & 
                                           ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__bb)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__c)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__d)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__e)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__f)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top_keyboard__DOT__RH1__DOT__g)))))))));
}

VL_ATTR_COLD void Vtop_keyboard___024root___eval_stl(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_keyboard___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__act(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__nba(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_keyboard___024root___ctor_var_reset(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->ledL2 = VL_RAND_RESET_I(7);
    vlSelf->ledR2 = VL_RAND_RESET_I(7);
    vlSelf->ledL1 = VL_RAND_RESET_I(7);
    vlSelf->ledR1 = VL_RAND_RESET_I(7);
    vlSelf->ledL0 = VL_RAND_RESET_I(7);
    vlSelf->ledR0 = VL_RAND_RESET_I(7);
    vlSelf->presscount_ledL = VL_RAND_RESET_I(7);
    vlSelf->presscount_ledR = VL_RAND_RESET_I(7);
    vlSelf->top_keyboard__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->top_keyboard__DOT__presscount = VL_RAND_RESET_I(8);
    vlSelf->top_keyboard__DOT__asciicode = VL_RAND_RESET_I(12);
    vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->top_keyboard__DOT__my_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top_keyboard__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCLH__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__PCRH__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH2__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH1__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH1__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__LH0__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->top_keyboard__DOT__RH0__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
