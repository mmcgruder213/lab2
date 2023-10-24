//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Drop Unit
        //========================================================================
        // Drop unit allows dropping a packet when the drop signal is high. This
        // is useful especially in pipelined processor, when a squash should drop
        // a late arriving memory response.
        
        `ifndef LAB2_PROC_DROP_UNIT_V
        `define LAB2_PROC_DROP_UNIT_V
        
        module lab2_proc_DropUnit
        #(
          parameter p_msg_nbits = 1
        )
        (
 080648   input  logic                   clk,
 000038   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000516   input  logic                   drop,
        
 001089   input  logic [p_msg_nbits-1:0] istream_msg,
 006147   input  logic                   istream_val,
 006448   output logic                   istream_rdy,
        
 001089   output logic [p_msg_nbits-1:0] ostream_msg,
 005859   output logic                   ostream_val,
 006540   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000252   logic state;
 000252   logic next_state;
 006598   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000154     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000378       if ( drop && !istream_go )
 000378         next_state = c_state_drop;
              else
 120151         next_state = c_state_pass;
        
 000154     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000084       if ( istream_go )
 000378         next_state = c_state_pass;
              else
 000084         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000154     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 040151       ostream_val = istream_val && !drop;
 040151       istream_rdy  = ostream_rdy;
        
 000154     end else begin
        
              // we just drop the packet
 000154       ostream_val = 1'b0;
 000154       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 040305   always_ff @( posedge clk ) begin
        
 000494     if ( reset )
 000494       state <= c_state_pass;
            else
 039811       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        