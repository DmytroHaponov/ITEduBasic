#include "manufacturer.h"
#include <iostream>

Manufacturer::Manufacturer()
{
}

Manufacturer::Manufacturer(Manufacturer::man p_man, Country cntr):m_man{p_man}
{
    getManuf(p_man);
    std::cout << m_man  << " " <<std::endl;
}


#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Mn_out, const Manufacturer::man Mn){
    switch(Mn){
    case Manufacturer::man::LG:
        Mn_out << TS(LG);
        break;
    case Manufacturer::man::Apple:
        Mn_out << TS(Apple);
        break;
    case Manufacturer::man::Nokia:
        Mn_out << TS(Nokia);
        break;
    case Manufacturer::man::Lenovo:
        Mn_out << TS(Lenovo);
        break;
    case Manufacturer::man::Samsung:
        Mn_out << TS(Samsung);
        break;
    default:
        break;

    }
    return Mn_out;
}
