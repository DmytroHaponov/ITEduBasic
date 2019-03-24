#pragma once
#include <iostream>
#include "processor.h"

class System : public Processor
{
public:
    enum class Sys : int{
      Bada, Windows, IOS, Android, Apple, Dolphin
    };
private:
    Processor prcs;
    Sys m_sys{Sys::IOS};
public:
    System();
    System(Sys p_sys, Processor prcs);
    Sys getSys(const Sys& f_sys){
        m_sys = f_sys;
        return m_sys;
    }
};

std::ostream& operator <<(std::ostream& Sy_out, const System::Sys Sy);
