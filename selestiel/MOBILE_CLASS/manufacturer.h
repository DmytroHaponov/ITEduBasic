#pragma once
#include "country.h"
#include <iostream>

class Manufacturer :public Country
{
public:
    enum class man : int{
      Samsung, Nokia, LG, Lenovo, Apple
    };
private:
    Country cntr;
    man m_man{man::LG};

public:
    Manufacturer();
    Manufacturer(man p_man, Country cntr);
    man getManuf(const man& f_man){
        m_man = f_man;
        return m_man;
    }
};

std::ostream& operator <<(std::ostream& Mn_out, const Manufacturer::man Mn);
