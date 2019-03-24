#include "engine.h"
#include "car.h"


#define TS(value) (#value)

std::ostream& operator <<(std::ostream& e_out, const Engine::e_type e)
{
    switch(e)
    {
    case Engine::e_type::T_D1:
        e_out << TS(T_D1);
        break;
    case Engine::e_type::T_D2:
        e_out << TS(T_D2);
        break;
    case Engine::e_type::T_D3:
       e_out << TS(T_D3);
        break;
    case Engine::e_type::T_L1:
        e_out << TS(T_L1);
        break;
    case Engine::e_type::T_L2:
        e_out << TS(T_L2);
        break;
    case Engine::e_type::T_L3:
        e_out << TS(T_L3);
        break;
    case Engine::e_type::T_S1:
        e_out << TS(T_S1);
        break;
    case Engine::e_type::T_S2:
        e_out << TS(T_S2);
        break;
    case Engine::e_type::T_S3:
        e_out << TS(T_S3);
        break;
    case Engine::e_type::T_V1:
        e_out << TS(T_V1);
        break;
    case Engine::e_type::T_V2:
        e_out << TS(T_V2);
        break;
    case Engine::e_type::T_V3:
        e_out << TS(T_V3);
        break;
    case Engine::e_type::T_Z1:
        e_out << TS(T_Z1);
        break;
    case Engine::e_type::T_Z2:
        e_out << TS(T_Z2);
        break;
    case Engine::e_type::T_Z3:
        e_out << TS(T_Z3);
        break;
    default:
        e_out << "unknown";
        break;

    }
    return e_out;
}

Engine::Engine()
{
    std::cout << "Engine Default:" << std::endl;
    std::cout << " " << e_name << " " << e_etype <<
                 " " << e_power << " " << e_weight <<
                 " " << e_value <<  " " << e_price <<
                 " " << e_index << std::endl;
}

Engine::Engine(std::string em_name, e_type em_type, int em_power,
               int em_weight, double em_value, int em_price, int em_index )
    : e_name{em_name}
    , e_etype{em_type}
    , e_power{em_power}
    , e_weight{em_weight}
    , e_value{em_value}
    , e_price{em_price}
    , e_index{em_index}
{
    std::cout << "Engine Parameters are:" << std::endl;
    std::cout << " " << e_name << " " << e_etype <<
                 " " << e_power << " " << e_weight <<
                 " " << e_value <<  " " << e_price <<
                 " " << e_index << std::endl;
}
