// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprio_encoder83.h for the primary calling header

#include "verilated.h"

#include "Vprio_encoder83___024root.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vprio_encoder83__ConstPool__TABLE_h934a15ab_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vprio_encoder83__ConstPool__TABLE_h0d68042a_0;

VL_INLINE_OPT void Vprio_encoder83___024root___ico_sequent__TOP__0(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->flag = Vprio_encoder83__ConstPool__TABLE_h934a15ab_0
        [__Vtableidx1];
    vlSelf->encode_x = Vprio_encoder83__ConstPool__TABLE_h0d68042a_0
        [__Vtableidx1];
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 0U;
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 0U;
    if ((8U & (IData)(vlSelf->encode_x))) {
        if ((4U & (IData)(vlSelf->encode_x))) {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 0U;
        } else if ((2U & (IData)(vlSelf->encode_x))) {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 0U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 0U;
        } else if ((1U & (IData)(vlSelf->encode_x))) {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
        } else {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
        }
    } else if ((4U & (IData)(vlSelf->encode_x))) {
        if ((2U & (IData)(vlSelf->encode_x))) {
            if ((1U & (IData)(vlSelf->encode_x))) {
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
            } else {
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
                vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            }
        } else if ((1U & (IData)(vlSelf->encode_x))) {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
        } else {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
        }
    } else if ((2U & (IData)(vlSelf->encode_x))) {
        if ((1U & (IData)(vlSelf->encode_x))) {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
        } else {
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 1U;
            vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
        }
    } else if ((1U & (IData)(vlSelf->encode_x))) {
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
    } else {
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = 1U;
        vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = 1U;
    }
    vlSelf->led = (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a) 
                    << 6U) | (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb) 
                               << 5U) | (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c) 
                                          << 4U) | 
                                         (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d) 
                                           << 3U) | 
                                          (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e) 
                                            << 2U) 
                                           | (((IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f) 
                                               << 1U) 
                                              | (IData)(vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g)))))));
}

void Vprio_encoder83___024root___eval_ico(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vprio_encoder83___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vprio_encoder83___024root___eval_act(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_act\n"); );
}

void Vprio_encoder83___024root___eval_nba(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_nba\n"); );
}

void Vprio_encoder83___024root___eval_triggers__ico(Vprio_encoder83___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__ico(Vprio_encoder83___024root* vlSelf);
#endif  // VL_DEBUG
void Vprio_encoder83___024root___eval_triggers__act(Vprio_encoder83___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__act(Vprio_encoder83___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__nba(Vprio_encoder83___024root* vlSelf);
#endif  // VL_DEBUG

void Vprio_encoder83___024root___eval(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vprio_encoder83___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vprio_encoder83___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/prio_encoder83.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vprio_encoder83___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vprio_encoder83___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vprio_encoder83___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/prio_encoder83.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vprio_encoder83___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vprio_encoder83___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/prio_encoder83.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vprio_encoder83___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vprio_encoder83___024root___eval_debug_assertions(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
