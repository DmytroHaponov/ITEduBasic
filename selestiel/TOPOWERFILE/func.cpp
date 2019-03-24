#include "file.h"
#include <fstream>


using uit = unsigned int;

void power_to(){
    std::ofstream file{};
    file.open ("Result.txt", std::ofstream::app);
    if(file.is_open()){
    for (uit i{0}; i < MyFile::base_v.size(); i++){
        MyFile::base = MyFile::base_v[i];
        for(uit j{0}; j < MyFile::value_v.size(); j++){
            MyFile::value = MyFile::value_v[i];
            for(uit k{0}; k < MyFile::value; k++){
                MyFile::result *= MyFile::base;
            }
            MyFile::result_v.push_back(MyFile::result);
            file << MyFile::result << " " << std::endl;
        }
    }
    }file.close();
}

