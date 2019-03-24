#include <iostream>
#include <fstream>

#include "file.h"

int main()
{
    void make_file();
    void read_file();
    void power_to();
    MyFile::result_v.clear();
    std::ifstream file{};
    file.open("Result.txt",std::ifstream::in);
   if(file.is_open()){
    while(!file.eof()){
        file >> MyFile::result;
        std::cout << "Powered numbers are: " << std::endl;
        std::cout << MyFile::result << " " << std::endl;
    }
    }file.close();
    std::cout << MyFile::base << MyFile::value << MyFile::result << std::endl;
    return 0;
}
