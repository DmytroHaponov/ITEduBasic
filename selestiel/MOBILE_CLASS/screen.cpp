#include "screen.h"
#include <iostream>

Screen::Screen()
{
}

Screen::Screen(Screen::Scr p_scr, Ram rm):m_scr{p_scr}
{
    getScr(p_scr);
    std::cout << m_scr  << " " <<std::endl;
}

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Sc_out, const Screen::Scr Sc){
    switch(Sc){
    case Screen::Scr::S5:
        Sc_out << TS(S5);
        break;
    case Screen::Scr::S7:
        Sc_out << TS(S7);
        break;
    case Screen::Scr::S9:
        Sc_out << TS(S9);
        break;
    case Screen::Scr::S11:
        Sc_out << TS(S11);
        break;
    case Screen::Scr::S13:
        Sc_out << TS(S13);
        break;
    case Screen::Scr::S15:
        Sc_out << TS(S15);
        break;
    case Screen::Scr::S17:
        Sc_out << TS(S17);
        break;
    case Screen::Scr::S19:
        Sc_out << TS(S19);
        break;
    case Screen::Scr::S21:
        Sc_out << TS(S21);
        break;
    default:
        break;

    }
    return Sc_out;
}
