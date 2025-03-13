import BasicTypes::*;
import CacheSystemTypes::*;
import MemoryTypes::*;
import MemoryMapTypes::*;
import IO_UnitTypes::*;
import DebugTypes::*;


module rsd_mem_model (
    
    //Inputs from Core
    input logic clk,
    input AddrPath memAccessAddr_i,  //typedef logic [ADDR_WIDTH-1:0] AddrPath; localparam ADDR_WIDTH = 32;
    input MemoryEntryDataPath memAccessWriteData_i,  //typedef logic [ MEMORY_ENTRY_BIT_NUM-1:0 ] MemoryEntryDataPath; localparam MEMORY_ENTRY_BIT_NUM /*verilator public*/ = 64; 
    input logic memAccessRE_i,
    input logic memAccessWE_i,

    //Outputs to Core
    output logic memAccessBusy_o,
    output MemAccessSerial nextMemReadSerial_o, //  typedef logic [MEM_ACCESS_SERIAL_BIT_SIZE-1 : 0] MemAccessSerial; Size of 2
    output MemWriteSerial nextMemWriteSerial_o, //    typedef logic [MEM_WRITE_SERIAL_BIT_SIZE-1 : 0] MemWriteSerial; Size of 2
    output logic memReadDataReady_o, 
    output MemoryEntryDataPath memReadData_o, //64 bits
    output MemAccessSerial memReadSerial_o, //1
    output MemAccessResponse memAccessResponse_o //1

);

    import "DPI-C" function void instruction_generator(output bit [31:0] instruction);

    logic [1:0] read_serial_counter;
    logic [1:0] write_serial_counter;

    logic [`SIZE_OF_THE_BUS - 1:0] current_dmem [logic [`SIZE_OF_THE_BUS - 1:0]];       
    logic [`SIZE_OF_THE_BUS - 1:0] initial_dmem [logic [`SIZE_OF_THE_BUS - 1:0]];
    logic [64:0] initial_imem [logic [`SIZE_OF_THE_BUS-1:0]]; //updated to be 4 insns with 32 bit addressing

     /* verilator lint_off WIDTH */

    always_ff @(posedge clk) begin
        if(memAccessRE_i) begin
            read_serial_counter <= read_serial_counter + 1;
        end

        if(memAccessWE_i) begin
            write_serial_counter <= write_serial_counter + 1;
        end
    end

    always_ff @(posedge clk) begin
        if(memAccessRE_i) begin
            memReadData_o <= imem_read(memAccessAddr_i);
            memAccessBusy_o <= 0;
            memReadDataReady_o <= 1;
            nextMemReadSerial_o <= read_serial_counter;
            memAccessResponse_o <= 1;

            //Set next serial numbers
            nextMemReadSerial_o <= read_serial_counter + 1;
            nextMemWriteSerial_o <= write_serial_counter;
        end
        else if(memAccessWE_i) begin
            dmem_write(memAccessAddr_i, memAccessWriteData_i);
            memAccessBusy_o <= 0;
            memAccessResponse_o <= 1;

            //Set next serial numbers
            nextMemReadSerial_o <= read_serial_counter;
            nextMemWriteSerial_o <= write_serial_counter+1;
        end
        else begin
            //Maintain current serial numbers when idle
            nextMemReadSerial_o <= read_serial_counter;
            nextMemWriteSerial_o <= write_serial_counter;
            memAccessBusy_o <= 0;
            memReadDataReady_o <= 0;
        end
    end

    // Returns next instruction in the input file
    function logic [64:0] imem_read(input logic [`SIZE_OF_THE_BUS - 1:0] m_addr);
        logic [64:0] mem_rdata; //update return size so it can hold 4, 32 bit instructions
        
        if (!initial_imem.exists(m_addr >> 2)) begin
            bit [64:0] instruction = 0;
            bit [31:0] single_instruction; // Temporary variable for each 32-bit instruction

            for (int i = 0; i < 2; i++) begin
                instruction_generator(single_instruction); // Call to generate a 32-bit instruction
                instruction = instruction | (single_instruction << (i * 32)); // Place each 32-bit instruction into the 128-bit block
            end

            initial_imem[m_addr >> 2] = instruction; // Assign the full 128-bit instruction
        end

        mem_rdata = initial_imem[m_addr >> 2];

        return mem_rdata;
    endfunction // imem_read

    // Returns dmem array data or randomly generates a value
    function logic [`SIZE_OF_THE_BUS - 1:0] dmem_read(input logic [`SIZE_OF_THE_BUS - 1:0] m_addr);
        logic [`SIZE_OF_THE_BUS - 1:0] mem_rdata;
        
        /* verilator lint_off WIDTH */
        if (!initial_dmem.exists(m_addr >> 2)) begin
            current_dmem[m_addr >> 2] = $random;
            initial_dmem[m_addr >> 2] = current_dmem[m_addr >> 2];
        end

        mem_rdata = initial_dmem[m_addr >> 2];

        return mem_rdata;
    endfunction // dmem_read

    // Writes data to dmem array
    task dmem_write(input logic [`SIZE_OF_THE_BUS - 1:0] mem_addr, input logic [`SIZE_OF_THE_BUS - 1:0] wdata);
        logic [`SIZE_OF_THE_BUS - 1:0] m_addr;

        m_addr = mem_addr >> 2;
        current_dmem[m_addr] = wdata;
    endtask // dmem_write

endmodule
