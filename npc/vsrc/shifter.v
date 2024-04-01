`include "./bcd7seg.v"
`include "./bcd7seg.v"
module shifter(
    input clk,
    input rst,
    input reg [7:0] shiftreg,
    output [6:0] ledL,
    output [6:0] ledR
);
    reg highest;
    reg [7:0] out_shiftreg;
    always @(posedge clk) begin
        highest=shiftreg[4]^shiftreg[3]^shiftreg[2]^shiftreg[0];
        if(shiftreg==0)
            out_shiftreg = shiftreg+1;
        else
            out_shiftreg = {highest, shiftreg[7:1]};
    end
    
    bcd7seg LH(
        .b 	( out_shiftreg[7:4] ),
        .h 	( ledL  )
    );
    
    bcd7seg RH(
        .b 	( out_shiftreg[3:0]  ),
        .h 	( ledR  )
    );
endmodule //shifter
