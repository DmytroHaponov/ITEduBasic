#include <iostream>
#include <fstream>

#include "file.h"

void make_file(){
    MyFile::base_v.clear();
    MyFile::value_v.clear();
    for (unsigned int i{1}; i <= 100; i++){
        MyFile::base_v.push_back(i);
        MyFile::value_v.push_back(i);
    }
    std::ofstream file{};
    file.open("File_base.txt", std::ofstream::app);
    if(file.is_open()){
    for(size_t i{0}; i < MyFile::base_v.size(); i++){
        MyFile::base = MyFile::base_v[i];
        file << MyFile::base << " " << std::endl;
        }
    }
    file.close();
    file.open("File_value.txt",std::ofstream::app);
    if(file.is_open()){
    for(size_t i{0}; i < MyFile::value_v.size(); i++){
        MyFile::value = MyFile::value_v[i];
        file << MyFile::value << " " << std::endl;
        }
    }
    file.close();
}
