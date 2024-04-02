
module shifter(
    input clk,
    input rst,
    //input reg [7:0] shiftreg,
    output [6:0] ledL,
    output [6:0] ledR
);
    reg [7:0] data=0;
    always @(posedge clk or rst) begin
        if(rst)
            data<=0;
        else begin
            if(data==0)
                data <= data+1;
            else 
                data <= {data[4]^data[3]^data[2]^data[0], data[7:1]};
        end
    end
    
    bcd7seg LH(
        .b 	( data[7:4] ),
        .h 	( ledL  )
    );
    
    bcd7seg RH(
        .b 	( data[3:0]  ),
        .h 	( ledR  )
    );
endmodule //shifter
