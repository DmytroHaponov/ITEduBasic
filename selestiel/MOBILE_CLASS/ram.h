#pragma once
#include <iostream>
#include "system.h"

class Ram : public System
{
public:
    enum class M_Ram{
      gb2, gb4, gb6, gb8, gb16, gb32
    };
private:
    System sstm;
    M_Ram m_ram{M_Ram::gb2};
public:
    Ram();
    Ram(M_Ram p_ram, System sstm);
    M_Ram getRam(const M_Ram& f_ram){
        m_ram = f_ram;
        return m_ram;
    }
};

std::ostream& operator <<(std::ostream& R_out, const Ram::M_Ram R);
