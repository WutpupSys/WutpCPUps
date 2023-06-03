#include "cpu.h"

void CPU::Execute()
{
    uint8_t opcode;
    uint16_t addr;

    while(CPU::isRunning)
    {
        opcode = FetchByte();

        switch (opcode)
        {
        case Instructions::NOP:
            cycles++;
            break;
        case Instructions::LDA:
            
            break;
        case Instructions::LDX:
            break;
        case Instructions::LDY:
            break;
        case Instructions::STA:
            break;
        case Instructions::STX:
            break;
        case Instructions::STY:
            break;
        case Instructions::ADD:
            break;
        case Instructions::SUB:
            break;
        case Instructions::MUL:
            break;
        case Instructions::DIV:
            break;
        case Instructions::AND:
            break;
        case Instructions::OR:
            break;
        case Instructions::XOR:
            break;
        case Instructions::NOT:
            break;
        case Instructions::STL:
            break;
        case Instructions::STR:
            break;
        case Instructions::CMP:
            break;
        case Instructions::JMP:
            break;
        case Instructions::JSR:
            break;
        case Instructions::CLL:
            break;
        case Instructions::RET:
            break;
        case Instructions::HLT:
            break;
        case Instructions::IN:
            break;
        case Instructions::OUT:
            break;
        case Instructions::PSH:
            break;
        case Instructions::POP:
            break;
        case Instructions::PSC:
            break;
        case Instructions::POC:
            break;
        default:
            break;
        }
    }
}

void CPU::Reset()
{
    CPU::accumulator = 0;
    CPU::x = 0;
    CPU::y = 0;

    CPU::sp = STACK_START;
    CPU::pc = 0;
    CPU::cpuState = 0;

    CPU::cycles = 0;

    CPU::memory.Init();
}

uint8_t CPU::FetchByte()
{
    CPU::cycles++;
    return CPU::memory.ReadByte(CPU::pc);
}

uint16_t CPU::FetchWord()
{
    CPU::cycles += 2;
    return CPU::memory.ReadWord(CPU::pc);
}

uint8_t CPU::ReadByte(uint16_t address)
{
    CPU::cycles++;
    return CPU::memory.ReadByte(address);
}

void CPU::WriteByte(uint16_t address, uint8_t value)
{
    CPU::cycles++;
    CPU::memory.WriteByte(address, value);
}

uint16_t CPU::ReadWord(uint16_t address)
{
    CPU::cycles += 2;
    return CPU::memory.ReadWord(address);
}