#include "ram.h"
#include <iostream>

Ram::Ram()
{
}

Ram::Ram(Ram::M_Ram p_ram, System sstm):m_ram{p_ram}
{
    getRam(p_ram);
    std::cout << m_ram  << " " <<std::endl;
}


#define TS(value) (#value)

std::ostream& operator <<(std::ostream& R_out, const Ram::M_Ram R){
    switch(R){
    case Ram::M_Ram::gb2:
        R_out << TS(gb2);
        break;
    case Ram::M_Ram::gb4:
        R_out << TS(gb4);
        break;
    case Ram::M_Ram::gb6:
        R_out << TS(gb6);
        break;
    case Ram::M_Ram::gb8:
        R_out << TS(gb8);
        break;
    case Ram::M_Ram::gb16:
        R_out << TS(gb16);
        break;
    case Ram::M_Ram::gb32:
        R_out << TS(gb32);
        break;
    default:
        break;

    }
    return R_out;
}
