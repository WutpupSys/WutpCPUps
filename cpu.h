#ifndef CPU_H
#define CPU_H

#include "pch.h"
#include "memory.h"

#define STACK_START 0x0100
#define STACK_SIZE 256

enum Instructions {
    NOP = (uint8_t)0x0, // No Operation

    // Load/Store Instructions
    LDA = (uint8_t)0x1, // Load Accumulator
    LDX = (uint8_t)0x2, // Load X Register
    LDY = (uint8_t)0x3, // Load Y Register
    STA = (uint8_t)0x4, // Store Accumulator
    STX = (uint8_t)0x5, // Store X
    STY = (uint8_t)0x6, // Store Y

    // Arithmetic Instructions
    ADD = (uint8_t)0x7, // Add
    SUB = (uint8_t)0x8, // Subtract
    MUL = (uint8_t)0x9, // Multiply
    DIV = (uint8_t)0xA, // Divide
    
    // Logical Instructions
    AND = (uint8_t)0xB, // And
    OR = (uint8_t)0xC, // Or
    XOR = (uint8_t)0xD, // Xor
    NOT = (uint8_t)0xE, // Not
    STL = (uint8_t)0xF, // Shift Left
    STR = (uint8_t)0x10, // Shift Right
    CMP = (uint8_t)0x11, // Compare

    // Control Instructions
    JMP = (uint8_t)0x12, // Jump
    JSR = (uint8_t)0x13, // Jump to Subroutine
    CLL = (uint8_t)0x14, // Call
    RET = (uint8_t)0x15, // Return
    HLT = (uint8_t)0x16, // Halt

    // I/O Instructions
    IN = (uint8_t)0x17, // Input
    OUT = (uint8_t)0x18, // Output

    // Stack Instructions
    PSH = (uint8_t)0x19, // Push
    POP = (uint8_t)0x1A, // Pop
    PSC = (uint8_t)0x1B, // Push CPU Status
    POC = (uint8_t)0x1C, // Pop CPU Status
};

class CPU
{
    // Registers
    uint16_t pc;
    uint16_t sp;
    uint8_t cpuState;   // 0 - Zero Flag
                        // 1 - Overflow Flag
                        // 2 - Interrupt Disable Flag
                        // 3 - Break Flag
                        // 4 - 
                        // 5 - 
                        // 6 - 
                        // 7 - 

    uint16_t accumulator;
    uint16_t x;
    uint16_t y;

    uint64_t cycles;
    bool isRunning;

    // Memory
    Memory memory;

    uint8_t FetchByte();
    uint16_t FetchWord();
    uint8_t ReadByte(uint16_t address);
    void WriteByte(uint16_t address, uint8_t value);
    uint16_t ReadWord(uint16_t address);
    void WriteWord(uint16_t address, uint16_t value);

public:
    CPU();
    void Execute();
    void Reset();
};

#endif