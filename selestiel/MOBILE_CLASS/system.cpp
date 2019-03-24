#include "system.h"
#include <iostream>

System::System()
{
}

System::System(System::Sys p_sys, Processor prcs):m_sys{p_sys}
{
    getSys(p_sys);
    std::cout << m_sys  << " " <<std::endl;
}


#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Sy_out, const System::Sys Sy){
    switch(Sy){
    case System::Sys::Bada:
        Sy_out << TS(Bada);
        break;
    case System::Sys::IOS:
        Sy_out << TS(IOS);
        break;
    case System::Sys::Apple:
        Sy_out << TS(Apple);
        break;
    case System::Sys::Android:
        Sy_out << TS(Android);
        break;
    case System::Sys::Dolphin:
        Sy_out << TS(Dolphin);
        break;
    case System::Sys::Windows:
        Sy_out << TS(Windows);
    default:
        break;

    }
    return Sy_out;

}
