module rsd_top (
    input logic clk
);
    // Input wires with proper types
    MemAccessSerial    nextMemReadSerial;
    MemAccessSerial nextMemWriteSerial;
    MemoryEntryDataPath memReadData;
    logic memReadDataReady;
    MemAccessSerial memReadSerial;
    MemAccessResponse memAccessResponse;
    logic memAccessReadBusy;
    logic memAccessWriteBusy;
    logic reqExternalInterrupt;
    ExternalInterruptCodePath externalInterruptCode;

    // Output wires with proper types
    DebugRegister debugRegister;
    PC_Path lastCommittedPC;
    PhyAddrPath memAccessAddr;
    MemoryEntryDataPath memAccessWriteData;
    logic memAccessRE;
    logic memAccessWE;
    logic serialWE;
    SerialDataPath serialWriteData;

    // Initialize input signals with valid values to ensure core accepts them
    assign nextMemReadSerial = MemAccessSerial'(2'b10);    // Set read serial as valid (e.g., 2'b10)
    assign nextMemWriteSerial = MemAccessSerial'(2'b10);   // Set write serial as valid (e.g., 2'b10)
    assign memReadDataReady = 1'b1;                        // Always ready for data (valid)
    assign memReadSerial = MemAccessSerial'(2'b10);        // Set read serial to match `nextMemReadSerial`
    assign memAccessResponse = MemAccessResponse'(3'b010);  // Set a valid response (e.g., 3'b010)
    assign memAccessReadBusy = 1'b0;                       // No read is busy, signal availability
    assign memAccessWriteBusy = 1'b0;                      // No write is busy, signal availability
    assign reqExternalInterrupt = 1'b0;                    // No external interrupt is requested (set to valid value)
    assign externalInterruptCode = 1'b0;                   // Set to valid interrupt code (no interrupt in this case)

    // Set memory access read/write signals to always be valid
    assign memAccessRE = 1'b1;  // Always allow memory read access (valid)
    assign memAccessWE = 1'b0;  // No write request at this time, can be set depending on your logic

    // Assign some serial control signals
    assign serialWE = 1'b0;      // No serial write enabled, can be modified if needed
    assign serialWriteData = '0; // No serial data written, modify if needed

    // Reset logic
    reg reset = 1;
    reg rstStart = 1;

    always @(posedge clk) begin
        reset <= 0;
    end

    // Core instantiation with the updated signal assignments
    Core core (
        .clk(clk),
        .rst(reset),
        .rstStart(rstStart),
        .nextMemReadSerial(nextMemReadSerial),
        .nextMemWriteSerial(nextMemWriteSerial),
        .memReadData(memReadData),            // Always assigned valid data (will be updated)
        .memReadDataReady(memReadDataReady),  // Always ready for data
        .memReadSerial(memReadSerial),
        .memAccessResponse(memAccessResponse),
        .memAccessReadBusy(memAccessReadBusy),  // Always not busy for reading
        .memAccessWriteBusy(memAccessWriteBusy), // Always not busy for writing
        .reqExternalInterrupt(reqExternalInterrupt),
        .externalInterruptCode(externalInterruptCode),
        .debugRegister(debugRegister),
        .lastCommittedPC(lastCommittedPC),
        .memAccessAddr(memAccessAddr),
        .memAccessWriteData(memAccessWriteData),
        .memAccessRE(memAccessRE),          // Always enabled for read
        .memAccessWE(memAccessWE),          // Always no write requested
        .serialWE(serialWE),
        .serialWriteData(serialWriteData)
    );
    /* verilator lint_off PINMISSING */
    // Memory model instantiation (unchanged)
    rsd_mem_model memory_modelling_inst (
        .clk(clk),
        .memAccessAddr_i(memAccessAddr),            // Address passed to memory
        .memAccessWriteData_i(memAccessWriteData),
        .memAccessWE_i(memAccessWE),
        .memAccessRE_i(memAccessRE),
        .memReadData_o(memReadData)         // Read response from memory
    );

endmodule
