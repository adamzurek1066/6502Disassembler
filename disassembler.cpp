#include <iostream>
#include <fstream>
#include "disassembler.h"

disassembler::disassembler(std::string inFileName, std::string outFileName){ //constructor that sets up the inFile and outFile from input
    std::ifstream inFile(inFileName);
    getline(inFile, inputCode);
    inFile.close();
    this->outFile.open(outFileName);
    return;
}

void disassembler::output(void){
    outFile << inputCode;
    outFile.close();
}

int main(int argc, char ** argv){
    if (argc != 3)
        return 1;
    
    disassembler myDis(argv[1], argv[2]);
    myDis.output();
}