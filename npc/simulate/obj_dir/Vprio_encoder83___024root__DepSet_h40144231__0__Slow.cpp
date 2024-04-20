// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprio_encoder83.h for the primary calling header

#include "verilated.h"

#include "Vprio_encoder83___024root.h"

VL_ATTR_COLD void Vprio_encoder83___024root___eval_static(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vprio_encoder83___024root___eval_initial(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vprio_encoder83___024root___eval_final(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vprio_encoder83___024root___eval_triggers__stl(Vprio_encoder83___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__stl(Vprio_encoder83___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___eval_stl(Vprio_encoder83___024root* vlSelf);

VL_ATTR_COLD void Vprio_encoder83___024root___eval_settle(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vprio_encoder83___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vprio_encoder83___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/prio_encoder83.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vprio_encoder83___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__stl(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vprio_encoder83___024root___ico_sequent__TOP__0(Vprio_encoder83___024root* vlSelf);

VL_ATTR_COLD void Vprio_encoder83___024root___eval_stl(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vprio_encoder83___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__ico(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__act(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprio_encoder83___024root___dump_triggers__nba(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprio_encoder83___024root___ctor_var_reset(Vprio_encoder83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprio_encoder83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprio_encoder83___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->encode_x = VL_RAND_RESET_I(3);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(7);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__bb = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__e = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->prio_encoder83__DOT__u_bcd7seg__DOT__g = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
