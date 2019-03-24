#include <fstream>

#include "file.h"


void read_file(){
    MyFile::base_v.clear();
    MyFile::value_v.clear();
std::ifstream file2{};
file2.open("File_base.txt",std::ifstream::in);
if(file2.is_open()){
while(!file2.eof()){
    file2 >> MyFile::base;
    MyFile::base_v.push_back(MyFile::base);
    }
}file2.close();
file2.open("File_value.txt",std::ifstream::in);
if(file2.is_open()){
while(!file2.eof()){
    file2 >> MyFile::value;
    MyFile::value_v.push_back(MyFile::value);
    }
}file2.close();
}


