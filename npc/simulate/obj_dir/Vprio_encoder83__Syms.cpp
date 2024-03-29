// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vprio_encoder83__Syms.h"
#include "Vprio_encoder83.h"
#include "Vprio_encoder83___024root.h"

// FUNCTIONS
Vprio_encoder83__Syms::~Vprio_encoder83__Syms()
{
}

Vprio_encoder83__Syms::Vprio_encoder83__Syms(VerilatedContext* contextp, const char* namep, Vprio_encoder83* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
