#ifndef MEMORY_H
#define MEMORY_H

#include "pch.h"

#define MAX_MEMORY_SIZE 0xFFFF

struct Memory
{
private:
    uint8_t data[MAX_MEMORY_SIZE];
public:
    void Init();
    uint8_t ReadByte(uint16_t address);
    void WriteByte(uint16_t address, uint8_t value);
    uint16_t ReadWord(uint16_t address);
    void WriteWord(uint16_t address, uint16_t value);
};

#endif