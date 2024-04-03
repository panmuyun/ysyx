module bcd7seg(
    input [3:0] b,
    input en,
    output reg [6:0] h
);
    reg a,bb,c,d,e,f,g;
    always @(*)
    begin
        a=0;bb=0;c=0;d=0;e=0;f=0;g=0;
        if(en) begin
            case(b)
            4'd0: begin a=1;bb=1;c=1;d=1;e=1;f=1; end
            4'd1:begin bb=1;c=1; end
            4'd2:begin a=1;bb=1;g=1;e=1;d=1; end
            4'd3:begin a=1;bb=1;g=1;c=1;d=1; end
            4'd4:begin f=1;g=1;bb=1;c=1; end
            4'd5:begin a=1;f=1;g=1;c=1;d=1; end
            4'd6:begin a=1;f=1;e=1;d=1;c=1;g=1; end
            4'd7:begin a=1;bb=1;c=1; end
            4'd8:begin a=1;bb=1;c=1;d=1;e=1;f=1;g=1; end
            4'd9:begin a=1;f=1;g=1;bb=1;c=1;d=1; end
            4'd10:begin a=1;f=1;e=1;bb=1;c=1;g=1; end
            4'd11:begin f=1;e=1;g=1;c=1;d=1; end
            4'd12:begin a=1;f=1;e=1;d=1; end
            4'd13:begin e=1;g=1;c=1;d=1;bb=1; end
            4'd14:begin a=1;f=1;e=1;d=1;g=1; end
            4'd15:begin a=1;f=1;e=1;g=1; end
            default:begin a=0;bb=0;c=0;d=0;e=0;f=0;g=0; end
            endcase
        end
        h={~a, ~bb, ~c, ~d, ~e, ~f, ~g};//共阴极
    end
endmodule
