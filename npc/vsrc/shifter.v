
module shifter(
    input clk,
    input rst,
    //input reg [7:0] shiftreg,
    output [6:0] ledL,
    output [6:0] ledR
);
    reg highest;
    reg [7:0] out_shiftreg=0;
    always @(posedge clk) begin
        if(rst)
            out_shiftreg<=0;
        else begin
            highest<=out_shiftreg[4]^out_shiftreg[3]^out_shiftreg[2]^out_shiftreg[0];
            if(out_shiftreg==0)
                out_shiftreg <= out_shiftreg+1;
            else
                out_shiftreg <= {highest, out_shiftreg[7:1]};
        end
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
