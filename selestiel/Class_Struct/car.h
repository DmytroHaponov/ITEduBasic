#pragma once
#include <iostream>
#include "skeleton.h"

class Car: public Skeleton{
private:
    Skeleton ske{ske};
    Transmission tra{tra};
    Engine eng{eng};
    Design des{des};
    Decor dec{dec};
    Wheel whe{whe};
    Param par{par};
    std::string name{"name"};
public:
    int index{0};
    Car();
    Car(const std::string& m_name, int cr_index, const Skeleton& ske
        , const Transmission& tra, const Engine& eng, const Design& des
        , const Decor& dec, const Wheel& whe, const Param& par);
    void getName(){
        std::cout << name << std::endl;
    }
    void getId(){
        std::cout << index << std::endl;
    }
};
