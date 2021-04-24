#include <fstream>
class disassembler{
    private:
        std::string inputCode;
        std::ofstream outFile;
    public:
        disassembler(std::string inFileName, std::string outFileName);
        void output();
};