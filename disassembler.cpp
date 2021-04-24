#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
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
    outFile << instructions[1].instruction;
}

int main(int argc, char ** argv){
    if (argc != 3)
        std::cout << "Try again with the input file and the output file";
    
    disassembler myDis(argv[1], argv[2]);
    myDis.output();
}