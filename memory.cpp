#include "memory.h"

void Memory::Init() {
    for(int i = 0; i < MAX_MEMORY_SIZE; i++)
    {
        Memory::data[i] = 0;
    }
}

uint8_t Memory::ReadByte(uint16_t address)
{
    return Memory::data[address];
}

void Memory::WriteByte(uint16_t address, uint8_t value)
{
    Memory::data[address] = value;
}

uint16_t Memory::ReadWord(uint16_t address)
{
    return Memory::data[address] | (Memory::data[address + 1] << 8);
}

void Memory::WriteWord(uint16_t address, uint16_t value)
{
    Memory::data[address] = value;
    Memory::data[address + 1] = value >> 8;
}