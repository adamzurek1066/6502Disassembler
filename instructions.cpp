#include <vector>
#include <cstdint>
#include <string>
#include "instructions.h"

//NOTE: must implement way to implement formatting for indirect indexing present in x! column of instructions
const std::vector<struct opcode> instructions = {{0x00, 2, "BRK", ""}, {0x10, 2, "BPL", ""}, {0x20, 3, "JSR", ""}, {0x30, 2, "BMI", ""}, {0x40, 1, "RTI", ""}, 
    {0x50, 2, "BVC", ""}, {0x60, 1, "RTS", ""}, {0x70, 2, "BVS", ""}, {0x90, 2, "BCC", ""}, {0xA0, 2, "LDY", ""}, {0xB0, 2, "BCS", ""}, {0xC0, 2, "CPY", ""},
    {0xD0, 2, "BNE", ""}, {0xE0, 2, "CPX", ""}, {0xF0, 2, "BEQ", ""}, {0x01, 2, "ORA", "X"}, {0x11, 2, "ORA", "Y"}, {0x21, 2, "AND", "X"}, {0x31, 2, "AND", "Y"},
    {0x41, 2, "EOR", "X"}, {0x51, 2, "EOR", "Y"}, {0x61, 2, "ADC", "X"}, {0x71, 2, "ADC", "Y"}, {0x81, 2, "STA", "X"}, {0x91, 2, "STA", "Y"}, {0xA1, 2, "LDA", "X"},
    {0xB1, 2, "LDA", "Y"}, {0xC1, 2, "CMP", "X"}, {0xD1, 2, "CMP", "Y"}, {0xE1, 2, "SBC", "X"}, {0xF1, 2, "SBC", "Y"}, {0xA2, 2, "LDX", ""}, {0x24, 2, "BIT", ""},
    {0x84, 2, "STY", ""}, {0x94, 2, "STY", "X"}, {0xA4, 2, "LDY", ""}, {0xB4, 2, "LDY", "X"}, {0xC4, 2, "CPY", ""}, {0xE4, 2, "CPX", ""}, {0x05, 2, "ORA", ""},
    {0x15, 2, "ORA", "X"}, {0x25, 2, "AND", ""}, {0x35, 2, "AND", "X"}, {0x45, 2, "EOR", ""}, {0x55, 2, "EOR", "X"}, {0x65, 2, "ADC", ""}, {0x75, 2, "ADC", "X"},
    {0x85, 2, "STA", ""}, {0x95, 2, "STA", "X"}, {0xA5, 2, "LDA", ""}, {0xB5, 2, "LDA", "X"}, {0xC5, 2, "CMP", ""}, {0xD5, 2, "CMP", "X"}, {0xE5, 2, "SBC", ""},
    {0xF5, 2, "SBC", "X"}, {0x06, 2, "ASL", ""}, {0x16, 2, "ASL", "X"}, {0x26, 2, "ROL", ""}, {0x36, 2, "ROL", "X"}, {0x46, 2, "LSR", ""}, {0x56, 2, "LSR", "X"},
    {0x66, 2, "ROR", ""}, {0x76, 2, "ROR", "X"}, {0x86, 2, "STX", ""}, {0x96, 2, "STX", "Y"}, {0xA6, 2, "LDX", ""}, {0xB6, 2, "LDX", "Y"}, {0xC6, 2, "DEC", ""},
    {0xD6, 2, "DEC", "X"}, {0xE6, 2, "INC", ""}, {0xF6, 2, "INC", "X"}, {0x08, 1, "PHP", ""}, {0x18, 1, "CLC", ""}, {0x28, 1, "PLP", ""}, {0x38, 1, "SEC", ""},
    {0x48, 1, "PHA", ""}, {0x58, 1, "CLI", ""}, {0x68, 1, "PLA", ""}, {0x78, 1, "SEI", ""}, {0x88, 1, "DEY", ""}, {0x98, 1, "TYA", ""}, {0xA8, 1, "TAY", ""},
    {0xB8, 1, "CLV", ""}, {0xC8, 1, "INY", ""}, {0xD8, 1, "CLD", ""}, {0xE8, 1, "INX", ""}, {0xF8, 1, "SED", ""}, {0x09, 2, "ORA", ""}, {0x19, 3, "ORA", "Y"},
    {0x29, 2, "AND", ""}, {0x39, 3, "AND", "Y"}, {0x49, 2, "EOR", ""}, {0x59, 3, "EOR", "Y"}, {0x69, 2, "ADC", ""}, {0x79, 3, "ADC", "Y"}, {0x99, 3, "STA", "Y"},
    {0xA9, 2, "LDA", ""}, {0xB9, 3, "LDA", "Y"}, {0xC9, 2, "CMP", ""}, {0xD9, 3, "CMP", "Y"}, {0xE9, 2, "SBC", ""}, {0xF9, 3, "SBC", "Y"}, {0x0A, 1, "ASL", ""},
    {0x2A, 1, "ROL", ""}, {0x4A, 1, "LSR", ""}, {0x6A, 1, "ROR", ""}, {0x8A, 1, "TXA", ""}, {0x9A, 1, "TXS", ""}, {0xAA, 1, "TAX", ""}, {0xBA, 1, "TSX", ""},
    {0xCA, 1, "DEX", ""}, {0xEA, 1, "NOP", ""}, {0x2C, 3, "BIT", ""}, {0x4C, 3, "JMP", ""}, {0x6C, 3, "JMP", ""}, {0x8C, 3, "STY", ""}, {0xAC, 3, "LDY", ""},
    {0xBC, 3, "LDY", "X"}, {0xCC, 3, "CPY", ""}, {0xEC, 3, "CPX", ""}, {0x0D, 3, "ORA", ""}, {0x1D, 3, "ORA", "X"}, {0x2D, 3, "AND", ""}, {0x3D, 3, "AND", "X"},
    {0x4D, 3, "EOR", ""}, {0x5D, 3, "EOR", "X"}, {0x6D, 3, "ADC", ""}, {0x7D, 3, "ADC", "X"}, {0x8D, 3, "STA", ""}, {0x9D, 3, "STA", "X"}, {0xAD, 3, "LDA", ""},
    {0xBD, 3, "LDA", "X"}, {0xCD, 3, "CMP", ""}, {0xDD, 3, "CMP", "X"}, {0xED, 3, "SBC", ""}, {0xFD, 3, "SBC", "X"}, {0x0E, 3, "ASL", ""}, {0x1E, 3, "ASL", "X"},
    {0x2E, 3, "ROL", ""}, {0x3E, 3, "ROL", "X"}, {0x4E, 3, "LSR", ""}, {0x5E, 3, "LSR", "X"}, {0x6E, 3, "ROR", ""}, {0x7E, 3, "ROR", "X"}, {0x8E, 3, "STX", ""},
    {0xAE, 3, "LDX", ""}, {0xBE, 3, "LDX", "Y"}, {0xCE, 3, "DEC", ""}, {0xDE, 3, "DEC", "X"}, {0xEE, 3, "INC", ""}, {0xFE, 3, "INC", "X"}};

