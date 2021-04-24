#include <vector>
#include <cstdint>
#include <string>

struct opcode{ //A structure containing an opcodes and the amount of bytes following the opcode used by the instruction as well as the corresponding instruction
    uint8_t code;
    uint8_t bytes;
    std::string instruction;
    std::string registerUsed;
};

 //This is a vector containing opcodes structs for every possible opcode
extern const std::vector<struct opcode> instructions;