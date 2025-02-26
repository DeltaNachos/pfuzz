#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include "mutate.h"

// Number of instructions in the initial seed
#ifndef _NUM_INSTRUCTIONS
    #define _NUM_INSTRUCTIONS 24
#endif

INSTRUCTION_TYPE opcodes[11] = {R_TYPE, I_TYPE_LOAD, I_TYPE_JUMP, I_TYPE_ENV, I_TYPE_ARITH, J_TYPE, S_TYPE, U_TYPE_LOAD, U_TYPE_AUIPC, B_TYPE, FENCE}; 

// Pick a new opcode
int mutate_opcode() {
    int new_opcode = opcodes[rand() % 11];
    return new_opcode;
}

// Pick a new register x0-x31
int mutate_register() {
    return rand() % 32;
}

// Set func3 to a new value in values
int mutate_func3(int values[], int values_size){
    return values[rand() % values_size];
}

// Generate random value of x bits    
int mutate_imm() {
    return rand();
}

int mutate_fence() {
    return rand() & 0xFF;
}

// Generate random csr address (0x000-0x0FF, 0x300-0x3FF, 0x400-0x4FF, 0x700-0x7FF, 0x800-0x8FF, 0xB00-0xBFF, 0xC00-0xCFF, 0xF00-0xFFF)
int mutate_csr() {
    int base = rand() & 0xFF;

    int top = rand() % 7;

    if (top == 0) {
        return (base);
    }
    else if (top == 1) {
        return (base | (0x3 << 8));
    }
    else if (top == 2) {
        return (base | (0x4 << 8));
    }
    else if (top == 3) {
        return (base | (0x7 << 8));
    }
    else if (top == 4) {
        return (base | (0x8 << 8));
    }
    else if (top == 5) {
        return (base | (0xB << 8));
    }
    if (top == 6) {
        return (base | (0xC << 8));  
    }
}


instruction_type mutate_field(instruction_type instruction) {
    instruction_type modified_inst = instruction;
    uint32_t opcode = instruction.base_inst.opcode;
    uint32_t value = rand() % 5;

    switch (opcode)
    {
        case R_TYPE:
            if (value == 0) { // rd mutation
                modified_inst.rtype_inst.rd = mutate_register();
            }
            else if (value == 1) {  // func3 mutation
                if (modified_inst.rtype_inst.func7 == 0x20) {
                    modified_inst.rtype_inst.func3 = modified_inst.rtype_inst.func3 ^ 0x5;
                } else {
                    modified_inst.rtype_inst.func3 = mutate_func3((int[]){0,1,2,3,4,5,6,7}, 8);
                }
            } else if (value == 2) { // r1 mutation
                modified_inst.rtype_inst.rs1 = mutate_register();
            } else if (value == 3) { // r2 mutation
                modified_inst.rtype_inst.rs2 = mutate_register();    
            } else if (value == 4) { // func7 mutation
                if (modified_inst.rtype_inst.func3 == 0x5 || modified_inst.rtype_inst.func3 == 0x0) {
                    modified_inst.rtype_inst.func7 = modified_inst.rtype_inst.func7 ^ 0x20;
                }
            }
            break;
        case I_TYPE_ARITH:

            if (value == 0) { // rd mutation
                modified_inst.itype_inst.rd = mutate_register();
            }
            else if (value == 1) {  // func3 mutation
                int upper_imm = modified_inst.itype_inst.imm >> 5;
                if (upper_imm == 0) {
                    modified_inst.itype_inst.func3 = mutate_func3((int[]){0,1,2,3,4,5,6,7}, 8);
                } 
                else if (upper_imm == 0x20) {
                    modified_inst.itype_inst.func3 = mutate_func3((int[]){0,2,3,4,5,6,7}, 7);
                }
                else {
                    modified_inst.itype_inst.func3 = mutate_func3((int[]){0,2,3,4,6,7}, 6);
                }
            } else if (value == 2) { // r1 mutation
                modified_inst.itype_inst.rs1 = mutate_register();
            } else if (value == 3 || value == 4) {
                if (modified_inst.itype_inst.func3 == 0x1 || modified_inst.itype_inst.func3 == 0x5 ) {
                    // In this case, only the 5 LSBs of Immediate can be non zero
                    modified_inst.itype_inst.imm =  mutate_imm() & 0b11111;
                } else {
                    modified_inst.itype_inst.imm = mutate_imm();
                }
            }
            break;

        case I_TYPE_ENV:
            // switch ecall and ebreak
            if (modified_inst.itype_inst.func3 == 0) {
                modified_inst.itype_inst.imm = modified_inst.itype_inst.imm ^ 0x1;
            } // change csr command 
            else if (value == 0) {
                modified_inst.itype_inst.rd = mutate_register();
            } else if (value == 1) {
                modified_inst.itype_inst.func3 = mutate_func3((int[]){1,2,3,5,6,7}, 6);
            } else if (value == 2) {
                modified_inst.itype_inst.rs1 = mutate_register();
            } else {
                modified_inst.itype_inst.imm = mutate_csr();
            }
            break;
        case I_TYPE_JUMP:
            if (value == 0) {   // rd mutation
                modified_inst.itype_inst.rd = mutate_register();
            } else if (value == 1) {
                modified_inst.itype_inst.rs1 = mutate_register();
            } else {
                modified_inst.itype_inst.imm = mutate_imm();
            }
            break;
        case I_TYPE_LOAD:
            if (value == 0) {
                modified_inst.itype_inst.rd = mutate_register();
            } else if (value == 1) {
                modified_inst.itype_inst.func3 = mutate_func3((int[]){0,1,2,4,5}, 5);
            } else if (value == 2) {
                modified_inst.itype_inst.rs1 = mutate_register();
            } else if (value == 3) {
                modified_inst.itype_inst.imm = mutate_imm();
            }
            break;
        case B_TYPE:
            if (value == 0) {
                modified_inst.btype_inst.imm1 = mutate_imm();
            } else if (value == 1) {
                modified_inst.btype_inst.func3 = mutate_func3((int[]){0,1,4,5,6,7}, 6);
            } else if (value == 2) {
                modified_inst.btype_inst.rs1 = mutate_register();
            } else if (value == 3) {
                modified_inst.btype_inst.rs2 = mutate_register();
            } else {
                modified_inst.btype_inst.imm2 = mutate_imm();
            }
            break;
        
        // JType and both UTypes have the same layout so follow the same mutation strategy
        case J_TYPE:
        case U_TYPE_AUIPC:
        case U_TYPE_LOAD:
            if (value == 0) {
                modified_inst.utype_inst.rd = mutate_register();
            }
            else {
                modified_inst.utype_inst.imm = mutate_imm();
            }
            break;
        case S_TYPE:
            if (value == 0) {
                modified_inst.stype_inst.imm1 = mutate_imm();
            } else if (value == 1) {
                modified_inst.stype_inst.func3 = mutate_func3((int[]){0,1,2}, 3);
            } else if (value == 2) {
                modified_inst.stype_inst.rs1 = mutate_register();
            } else if (value == 3) {
                modified_inst.stype_inst.rs2 = mutate_register();
            } else {
                modified_inst.stype_inst.imm2 = mutate_imm();
            }
            break;
        // Fence instructions
        case FENCE:
            if (value == 0) {
                modified_inst.itype_inst.func3 = modified_inst.itype_inst.func3 ^ 0x1;
                if (modified_inst.itype_inst.func3 == 0) {
                    modified_inst.itype_inst.imm = mutate_fence();
                } else {
                    modified_inst.itype_inst.imm = 0;
                }
            } else {
                modified_inst.itype_inst.imm = mutate_fence();
            }
            break;
        default:
            break;
    }

    return modified_inst;
}

instruction_type mutate_instruction() {
    instruction_type instruction;

    instruction.base_inst.opcode = mutate_opcode();

    switch (instruction.base_inst.opcode)
    {
        case R_TYPE:
        // rd
            instruction.rtype_inst.rd = mutate_register();
        // func3
            instruction.rtype_inst.func3 = mutate_func3((int[]){0,1,2,3,4,5,6,7}, 8);
        // r1
            instruction.rtype_inst.rs1 = mutate_register();
        // r2
            instruction.rtype_inst.rs2 = mutate_register();    
        // func7
            if (instruction.rtype_inst.func3 == 0x5 || instruction.rtype_inst.func3 == 0x0) {
                instruction.rtype_inst.func7 = instruction.rtype_inst.func7 ^ 0x20;
            }
            break;
        case I_TYPE_ARITH:
        // rd
            instruction.itype_inst.rd = mutate_register();
        // func3
            instruction.itype_inst.func3 = mutate_func3((int[]){0,2,3,4,6,7}, 6);
        // r1
            instruction.itype_inst.rs1 = mutate_register();
        // imm
            if (instruction.itype_inst.func3 == 0x1 || instruction.itype_inst.func3 == 0x5 ) {
                // In this case, only the 5 LSBs of Immediate can be non zero
                instruction.itype_inst.imm =  mutate_imm() & 0b11111;
            } else {
                instruction.itype_inst.imm = mutate_imm();
            }
            break;
        case I_TYPE_ENV:
            instruction.itype_inst.func3 = mutate_func3((int[]){0,1,2,3,5,6,7}, 7);
            // ecall, ebreak
            if (instruction.itype_inst.func3 == 0) {
                instruction.itype_inst.rd = 0;
                instruction.itype_inst.rs1 = 0;
                instruction.itype_inst.imm = rand() % 2;
            } else { // csr
                instruction.itype_inst.rd = mutate_register();
                instruction.itype_inst.rs1 = mutate_register();
                instruction.itype_inst.imm = mutate_csr();
            }
            break;
        case I_TYPE_JUMP:
        // rd
            instruction.itype_inst.rd = mutate_register();
        //func3
            instruction.itype_inst.func3 = 0;
        // r1
            instruction.itype_inst.rs1 = mutate_register();
        // imm -TODO
            instruction.itype_inst.imm = mutate_imm();
            break;
        case I_TYPE_LOAD:
        // rd
                instruction.itype_inst.rd = mutate_register();
        // func3
                instruction.itype_inst.func3 = mutate_func3((int[]){0,1,2,4,5}, 5);
        // r1
                instruction.itype_inst.rs1 = mutate_register();
        // imm
                instruction.itype_inst.imm = mutate_imm();
            break;
        case B_TYPE:
        // upper imm
            instruction.btype_inst.imm1 = mutate_imm();
        // func3
            instruction.btype_inst.func3 = mutate_func3((int[]){0,1,4,5,6,7}, 6);
        // r1
            instruction.btype_inst.rs1 = mutate_register();
        // r2
            instruction.btype_inst.rs2 = mutate_register();
        // lower imm
            instruction.btype_inst.imm2 = mutate_imm();
            break;
        
        // JType and both UTypes have the same layout so follow the same mutation strategy
        case J_TYPE:
        case U_TYPE_AUIPC:
        case U_TYPE_LOAD:
        // rd
            instruction.utype_inst.rd = mutate_register();
        // imm - TODO
            instruction.utype_inst.imm = mutate_imm();
            break;
        case S_TYPE:
        // upper imm
            instruction.stype_inst.imm1 = mutate_imm();
        // func3
            instruction.stype_inst.func3 = mutate_func3((int[]){0,1,2}, 3);
        // r1
            instruction.stype_inst.rs1 = mutate_register();
        // r2
            instruction.stype_inst.rs2 = mutate_register();
       // imm
            instruction.stype_inst.imm2 = mutate_imm();
            break;
        // Fence instructions
        case FENCE:
            instruction.itype_inst.rd = 0;
            instruction.itype_inst.func3 = mutate_func3((int[]){0,1}, 2);
            instruction.itype_inst.rs1 = 0;
            if (instruction.itype_inst.func3 == 0){
                instruction.itype_inst.imm = mutate_fence();
            }
            else {
                instruction.itype_inst.imm = 0;
            }
            break;
        default:
            break;
    }

    return instruction;
}

// Outputs a mutated sequence to a buffer
int gen_mutate(int num_instructions, char* output, int buf_sz)
{
    if (!output || buf_sz == 0)
    {
        return 1;
    }

    output[0] = '\0'; // empty string
    int out_pos = 0;

    srand(time(NULL)); // seed rng

    char* input_str;
    input_str = "";

    if (strlen(input_str) < 4)
    {
        for (int i = 0; i < num_instructions; ++i)
        {
            instruction_type instruction = mutate_instruction();
            char str[11];
            int written = sprintf(str, "%x ", instruction.raw_inst);
            if (out_pos + written < buf_sz)
            {
                strcat(output + out_pos, str);
                out_pos += written;
            }
            else
            {
                return 1; // buffer full or error
            }
        }
    }
    else
    {
        char* copy = strdup(input_str);
        if (!copy)
        {
            return 1; // strdup failed
        }
        int percent_var = 10;
        int percent_all = 20;
        char* curr = copy;
        int offset = 0;
        instruction_type instruction;

        while (*curr)
        {
            int count = sscanf(curr, "%x %n", &(instruction.raw_inst), &offset);
            if (count == 1)
            {
                curr += offset;
                int random_num = rand() % 100;
                if (random_num < percent_var)
                {
                    int mutate_type = rand() % 100;
                    if (mutate_type < percent_all)
                    {
                        instruction = mutate_instruction();
                    }
                    else
                    {
                        instruction = mutate_field(instruction);
                    }
                }
                char str[11];
                int written = sprintf(str, "%x ", instruction.raw_inst);
                if (out_pos + written < buf_sz)
                {
                    strcat(output + out_pos, str);
                    out_pos += written;
                }
                else
                {
                    free(copy);
                    return 1; // buffer full or error
                }
            }
            else break;
        }
        free(copy);
    }
    return 0;
}
/*
int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_hex_string>\n", argv[0]);
        fprintf(stderr, "Or: %s -g <num_instructions>\n", argv[0]); //for generating random instructions
        return 1;
    }

    srand(time(NULL)); // Seed the RNG

    char *input_str;
    int num_instructions = _NUM_INSTRUCTIONS;

    if (strcmp(argv[1], "-g") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Usage: %s -g <num_instructions>\n", argv[0]);
            return 1;
        }
        num_instructions = atoi(argv[2]);
        if (num_instructions <= 0) {
            fprintf(stderr, "Invalid number of instructions\n");
            return 1;
        }
        input_str = ""; //empty input to trigger random generation
    } else {
        input_str = argv[1];
    }
    

    char output_str[MAX_FILE] = {0};
    int out_pos = 0;

    if (strlen(input_str) < 4) {
        for (int i = 0; i < num_instructions; ++i) {
            instruction_type instruction = mutate_instruction();
            char str[11]; // Enough space for "XXXXXXXX "
            out_pos += sprintf(str, "%x\n", instruction.raw_inst);
            strcat(output_str, str);
        }
    }
    else {
        char *copy = strdup(input_str);
        if (!copy) {
            perror("strdup failed");
            return 1;
        }
        int percent_var = 10;
        int percent_all = 20;
        char *curr = copy;
        int offset = 0;
        instruction_type instruction;

        while (*curr) {
            int count = sscanf(curr, "%x %n", &(instruction.raw_inst), &offset);
            if (count == 1) {
                curr += offset;
                int random_num = rand() % 100;
                if (random_num < percent_var) {
                    int mutate_type = rand() % 100;
                    if (mutate_type < percent_all) {
                        instruction = mutate_instruction();
                    } else {
                        instruction = mutate_field(instruction);
                    }
                }
                char str[11];
                out_pos += sprintf(str, "%x ", instruction.raw_inst);
                strcat(output_str, str);
            } else {
                break;
            }
        }
        free(copy);
    }
    printf("%s\n", output_str);

    return 0;
}*/
