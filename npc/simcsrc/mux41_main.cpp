#include "Vmux41.h" 
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux41* top;

void sim_init(int argc, char** argv){
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vmux41{contextp};
    tfp= new VerilatedVcdC;
    contextp->traceEverOn(true); //打开追踪
    top->trace(tfp,0);
    tfp->open("wave_mux41.vcd"); //保存位置
}

void step_and_dump_wave(){  
    top->eval();  
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //仿真时间推进
}

void sim_exit(){
    delete top;
    tfp->close();
    delete contextp;
}
int main(int argc, char** argv) {
    sim_init(argc, argv);
    int cycle=0;
    while (!contextp->gotFinish()) {
        if(cycle==20)   //设定最长时钟周期
            break;
        int X0 = rand() & 3;
        int X1 = rand() & 3;
        int X2 = rand() & 3;
        int X3 = rand() & 3;
        int Y = rand() & 3;
        top->X0 = X0;
        top->X1 = X1;
        top->X2 = X2;
        top->X3 = X3;
        top->Y = Y;
        step_and_dump_wave();
        printf("X0 = %d, X1 = %d, X2 = %d, X3 = %d;\nY = %d;\nF = %d\n", X0, X1, X2, X3, Y, top->F);
        //assert(top->f == (a ^ b));
        cycle++;
    }
    sim_exit();
    return 0;
}
