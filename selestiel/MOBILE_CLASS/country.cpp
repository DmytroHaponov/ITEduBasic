#include "country.h"
#include <iostream>

Country::Country()
{
}

Country::Country(DevCo p_DevC):m_DevC{p_DevC}
{
    getCountry(p_DevC);
    std::cout << m_DevC  << " " <<std::endl;
}

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Cn_out, const Country::DevCo Cn){
    switch(Cn){
    case Country::DevCo::USA:
        Cn_out << TS(USA);
        break;
    case Country::DevCo::CHINA:
        Cn_out << TS(CHINA);
        break;
    case Country::DevCo::JAPAN:
        Cn_out << TS(JAPAN);
        break;
    case Country::DevCo::SOUTH_KOREA:
        Cn_out << TS(SOUTH_KOREA);
        break;
    case Country::DevCo::ITALY:
        Cn_out << TS(ITALY);
        break;
    default:
        break;

    }
    return Cn_out;
}
