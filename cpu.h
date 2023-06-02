#ifndef CPU_H
#define CPU_H

#include "pch.h"

#define MAX_MEMORY 4096
#define STACK_SIZE 256

enum Instructions {
    NOP = 0x0, // No Operation

    // Load/Store Instructions
    LDA = 0x1, // Load Accumulator
    LDX = 0x2, // Load X Register
    LDY = 0x3, // Load Y Register
    STA = 0x4, // Store Accumulator
    STX = 0x5, // Store X
    STY = 0x6, // Store Y

    // Arithmetic Instructions
    ADD = 0x7, // Add
    SUB = 0x8, // Subtract
    MUL = 0x9, // Multiply
    DIV = 0xA, // Divide
    
    // Logical Instructions
    AND = 0xB, // And
    OR = 0xC, // Or
    XOR = 0xD, // Xor
    NOT = 0xE, // Not
    STL = 0xF, // Shift Left
    STR = 0x10, // Shift Right
    CMP = 0x11, // Compare

    // Control Instructions
    JMP = 0x12, // Jump
    JSR = 0x13, // Jump to Subroutine
    CLL = 0x14, // Call
    RET = 0x15, // Return
    HLT = 0x16, // Halt

    // I/O Instructions
    IN = 0x17, // Input
    OUT = 0x18, // Output

    // Stack Instructions
    PSH = 0x19, // Push
    POP = 0x1A, // Pop
    PSC = 0x1B, // Push CPU Status
};

class CPU
{
    // Registers
    uint16_t pc;
    uint16_t sp;
    uint8_t cpuState;

    uint16_t accumulator;
    uint16_t x;
    uint16_t y;

public:
};

#endif