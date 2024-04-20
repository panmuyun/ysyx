// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_keyboard.h for the primary calling header

#include "verilated.h"

#include "Vtop_keyboard___024root.h"

void Vtop_keyboard___024root___eval_act(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_act\n"); );
}

extern const VlUnpacked<SData/*11:0*/, 256> Vtop_keyboard__ConstPool__TABLE_hc3ce99c2_0;

VL_INLINE_OPT void Vtop_keyboard___024root___nba_sequent__TOP__0(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top_keyboard__DOT__my_keyboard__DOT__count;
    __Vdly__top_keyboard__DOT__my_keyboard__DOT__count = 0;
    IData/*31:0*/ __Vdly__top_keyboard__DOT__data;
    __Vdly__top_keyboard__DOT__data = 0;
    // Body
    __Vdly__top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top_keyboard__DOT__my_keyboard__DOT__count 
        = vlSelf->top_keyboard__DOT__my_keyboard__DOT__count;
    __Vdly__top_keyboard__DOT__data = vlSelf->top_keyboard__DOT__data;
    __Vdly__top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__top_keyboard__DOT__my_keyboard__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer)) 
                              & (IData)(vlSelf->ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer) 
                                                >> 1U)))))) {
                __Vdly__top_keyboard__DOT__data = (vlSelf->top_keyboard__DOT__data 
                                                   << 8U);
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer) 
                                             >> 1U)));
                __Vdly__top_keyboard__DOT__data = (
                                                   (0xffffff00U 
                                                    & __Vdly__top_keyboard__DOT__data) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer) 
                                                         >> 1U)));
                if (((0xf0U == (0xffU & vlSelf->top_keyboard__DOT__data)) 
                     & ((0xffU & (vlSelf->top_keyboard__DOT__data 
                                  >> 0x10U)) != (0xffU 
                                                 & (vlSelf->top_keyboard__DOT__data 
                                                    >> 8U))))) {
                    vlSelf->top_keyboard__DOT__presscount 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_keyboard__DOT__presscount)));
                }
            }
            __Vdly__top_keyboard__DOT__my_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top_keyboard__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 
                = vlSelf->ps2_data;
            if (VL_LIKELY((9U >= (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count)))) {
                vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                    << (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count))));
            }
            __Vdly__top_keyboard__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top_keyboard__DOT__my_keyboard__DOT__count)));
        }
    }
    vlSelf->top_keyboard__DOT__my_keyboard__DOT__count 
        = __Vdly__top_keyboard__DOT__my_keyboard__DOT__count;
    vlSelf->top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top_keyboard__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->top_keyboard__DOT__data = __Vdly__top_keyboard__DOT__data;
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

void Vtop_keyboard___024root___eval_nba(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_keyboard___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop_keyboard___024root___eval_triggers__act(Vtop_keyboard___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__act(Vtop_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_keyboard___024root___dump_triggers__nba(Vtop_keyboard___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_keyboard___024root___eval(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval\n"); );
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
            Vtop_keyboard___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop_keyboard___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/top_keyboard.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop_keyboard___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop_keyboard___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/panmy/ysyx-workbench/npc/vsrc/top_keyboard.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop_keyboard___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop_keyboard___024root___eval_debug_assertions(Vtop_keyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_keyboard___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
