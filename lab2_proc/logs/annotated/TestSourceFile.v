//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Source
        //========================================================================
        
        `ifndef VC_TEST_SOURCE_FILE_V
        `define VC_TEST_SOURCE_FILE_V
        
        `include "vc/regs.v"
        `include "vc/assert.v"
        
        module vc_TestSourceFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 102275   input  logic                   clk,
 000057   input  logic                   reset,
        
          // Source message interface
        
 000111   output logic                   val,
 000282   input  logic                   rdy,
 000006   output logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all source msgs has been issued
        
 000054   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Local parameters
          //----------------------------------------------------------------------
        
          // Size of a physical address for the memory in bits
        
          localparam c_index_nbits = $clog2(p_num_msgs);
        
          //----------------------------------------------------------------------
          // State
          //----------------------------------------------------------------------
        
          // Memory which stores messages to send
        
          logic [p_msg_nbits-1:0] m[p_num_msgs-1:0];
          logic [p_msg_nbits-1:0] m_load[p_num_msgs-1:0];
        
          // Index register pointing to next message to send
        
 000282   logic                     index_en;
%000000   logic [c_index_nbits-1:0] index_next;
%000000   logic [c_index_nbits-1:0] index;
%000000   logic [c_index_nbits-1:0] index_max;
        
          vc_EnResetReg#(c_index_nbits,{c_index_nbits{1'b0}}) index_reg
          (
            .clk   (clk),
            .reset (reset),
            .en    (index_en),
            .d     (index_next),
            .q     (index)
          );
        
          // Register reset
        
 000057   logic reset_reg;
 051109   always_ff @( posedge clk )
 051109     reset_reg <= reset;
        
%000000   logic [31:0] data_data;
        
 000057   task load (integer file_load);
 000057   begin
            integer count;
 000057     index_max =0;
 000057     while (!$feof(file_load))begin
 000087       count=$fscanf(file_load, "%x\n", data_data); 
 000087       if( count ==0) break;
              
              
 000087       $display("Loading %x",data_data);
              
 000087       m[index_max]= data_data;
 000087       index_max =index_max +1;
              
            end
        
          end
          endtask
          //----------------------------------------------------------------------
          // Combinational logic
          //----------------------------------------------------------------------
        
          // We use a behavioral hack to easily detect when we have sent all the
          // valid messages in the test source. We used to use this:
          //
          //  assign done = !reset_reg && ( m[index] === {p_msg_nbits{1'bx}} );
          //
          // but Ackerley Tng found an issue with this approach. You can see an
          // example in this journal post:
          //
          //  http://brg.csl.cornell.edu/wiki/alt53-2014-03-08
          //
          // So now we keep the done signal high until the test source is reset.
        
          // always_comb begin
          //   if ( reset_reg ) begin
          //     done = 1'b0;
          //   end else begin
          //     if ( ~done ) begin
          //       done = m[index] === {p_msg_nbits{1'bx}};
          //     end
          //   end
          // end
        
 000138   logic done_next;
          assign done_next =  ( index == ( index_max ) );
        
 051109   always_ff @( posedge clk ) begin
 000798     if(reset_reg) done <=0;
 000141     if( val && rdy ) done <= done_next;
          end
        
          // Set the source message appropriately
        
          assign msg = m[index];
        
          // Source message interface is valid as long as we are not done
        
          assign val = !reset_reg && !done;
        
          // The go signal is high when a message is transferred
        
 000282   logic go;
          assign go = val && rdy;
        
          // We bump the index pointer every time we successfully send a message,
          // otherwise the index stays the same.
        
          assign index_en   = go;
          assign index_next = index + 1'b1;
        
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
 051109   always_ff @( posedge clk ) begin
 000741     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( val );
%000000       `VC_ASSERT_NOT_X( rdy );
            end
          end
        
        endmodule
        
        `endif /* VC_TEST_SOURCE_V */
        