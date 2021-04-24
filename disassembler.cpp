#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
#include <stdlib.h>
#include "disassembler.h"
#include "instructions.h"

disassembler::disassembler(std::string inFileName, std::string outFileName){ //constructor that sets up the inFile and outFile from input
    std::ifstream inFile(inFileName);
    getline(inFile, inputCode);
    inFile.close();
    this->outFile.open(outFileName);
    return;
}

void disassembler::output(void){
    char temp[2];
    uint8_t hexVal;
    for (int i = 0; i < inputCode.length(); i += 3){
        temp[0] = inputCode[i];
        temp[1] = inputCode[i + 1];
        hexVal = strtol(temp, NULL, 16);
        for (struct opcode j : instructions){
            if (j.code == hexVal){
                if (j.bytes == 1){
                    outFile << j.instruction << "\n";
                }
            }
        }
    }

    outFile.close();
}

int main(int argc, char ** argv){
    if (argc != 3)
        std::cout << "Try again with the input file and the output file";
    
    disassembler myDis(argv[1], argv[2]);
    myDis.output();
}