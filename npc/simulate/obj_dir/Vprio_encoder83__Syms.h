// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRIO_ENCODER83__SYMS_H_
#define VERILATED_VPRIO_ENCODER83__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vprio_encoder83.h"

// INCLUDE MODULE CLASSES
#include "Vprio_encoder83___024root.h"

// SYMS CLASS (contains all model state)
class Vprio_encoder83__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vprio_encoder83* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vprio_encoder83___024root      TOP;

    // CONSTRUCTORS
    Vprio_encoder83__Syms(VerilatedContext* contextp, const char* namep, Vprio_encoder83* modelp);
    ~Vprio_encoder83__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
