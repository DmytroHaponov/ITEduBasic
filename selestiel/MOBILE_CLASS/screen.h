#pragma once
#include <iostream>
#include "ram.h"

class Screen : public Ram
{
public:
    enum class Scr{
      S5, S7, S9, S11, S13, S15, S17, S19, S21
    };
private:
    Ram rm;
    Scr m_scr{Scr::S5};
public:
    Screen();
    Screen(Scr p_scr, Ram rm);
    Scr getScr(const Scr& f_scr){
        m_scr = f_scr;
        return m_scr;
    }
};

std::ostream& operator <<(std::ostream& Sc_out, const Screen::Scr Sc);
