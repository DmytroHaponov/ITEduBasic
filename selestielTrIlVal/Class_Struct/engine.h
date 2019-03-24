#pragma once
#include "transmission.h"
#include <iostream>



class Engine: public Transmission{
public:
    enum class e_type : int
    {
        T_D1, T_D2, T_D3,
        T_L1, T_L2, T_L3,
        T_S1, T_S2, T_S3,
        T_V1, T_V2, T_V3,
        T_Z1, T_Z2, T_Z3
    };

//friend std::ostream& operator << (std::ostream& out, const e_type c);

private:
    std::string e_name{"name"};
    e_type e_etype{e_type::T_D1};
    int e_power{0};
    int e_weight{0};
    double e_value{0.00};
    int e_price{0};
public:
    int e_index{0};
    Engine();
    Engine(std::string em_name, e_type em_type, int em_power,
           int em_weight, double em_value, int em_price, int em_index);
};

std::ostream& operator <<(std::ostream& e_out, const Engine::e_type e);
