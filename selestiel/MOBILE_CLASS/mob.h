#pragma once
#include <iostream>
#include "screen.h"
#include "weight.h"


class Mob : public Screen, public Weight
{
public:
    enum class Mob_C : int {
        red, blue, green, black, gold, silver
    };
    enum class Mob_T : char {
        A1, A2, A3, A4, A5
    };
private:
    Screen  scrn;
    Weight wght;
    Mob_C m_colr{Mob_C::red};
    Mob_T m_type{Mob_T::A1};
    int m_price{1000};
public:
    Mob();
    Mob(Mob_C p_colr, Mob_T p_type, int p_price, Screen scrn, Weight wght);
    Mob_C getColor(const Mob_C& f_colr){
    m_colr = f_colr;
    return m_colr;
    }
    Mob_T getType(const Mob_T& f_type){
        m_type = f_type;
        return  m_type;
    }
    int getPrice(int f_price) {
        m_price = f_price;
        return f_price;
    }
    int total;
    int sumOfMOB(Mob a, Mob b){
        total = a.m_price + b.m_price;
        std::cout << total << std::endl;
        return total;
    }
};

std::ostream& operator <<(std::ostream& Mc_out, const Mob::Mob_C Mc);
std::ostream& operator <<(std::ostream& Mt_out, const Mob::Mob_T Mt);
