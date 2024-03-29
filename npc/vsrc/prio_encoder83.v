module prio_encoder83(
    input [7:0] x,
    input en,
    output reg [2:0] encode_x,
    output flag,
    output [6:0] led
);
    integer i;
    always @(*) 
    begin
        flag=0;
        if(en) begin
            encode_x=0;
            for(i=7;i>=0;i=i-1)
                if(x[i]==1) begin
                    encode_x=i[2:0];
                    flag=1;
                end
        end
        else
            encode_x=0;
    end

    bcd7seg u_bcd7seg({1'b0,encode_x}, led);
    
endmodule
