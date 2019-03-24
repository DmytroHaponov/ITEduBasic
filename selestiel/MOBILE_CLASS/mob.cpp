#include "mob.h"
#include <string>
#include <iostream>

Mob::Mob ()
{
}

Mob::Mob(Mob::Mob_C p_colr, Mob::Mob_T p_type, int p_price,Screen scrn, Weight wght)
    : m_colr{p_colr}
    , m_type{p_type}
    , m_price{p_price}
{
    getColor(p_colr);
    getType(p_type);
    getPrice(p_price);
    std::cout << m_colr << " " << m_type << " " << m_price  << " " << std::endl;
}

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Mc_out, const Mob::Mob_C Mc){
    switch(Mc){
    case Mob::Mob_C::red:
        Mc_out << TS(red);
        break;
    case Mob::Mob_C::blue:
        Mc_out << TS(blue);
        break;
    case Mob::Mob_C::gold:
        Mc_out << TS(gold);
        break;
    case Mob::Mob_C::black:
        Mc_out << TS(black);
        break;
    case Mob::Mob_C::green:
        Mc_out << TS(green);
        break;
    case Mob::Mob_C::silver:
        Mc_out << TS(silver);
        break;
    default:
        break;

    }
    return Mc_out;
}

std::ostream& operator <<(std::ostream& Mt_out, const Mob::Mob_T Mt){
    switch(Mt){
    case Mob::Mob_T::A1:
        Mt_out << TS(A1);
        break;
    case Mob::Mob_T::A2:
        Mt_out << TS(A2);
        break;
    case Mob::Mob_T::A3:
        Mt_out << TS(A3);
        break;
    case Mob::Mob_T::A4:
        Mt_out << TS(A4);
        break;
    case Mob::Mob_T::A5:
        Mt_out << TS(A5);
        break;
    default:
        break;
    }
    return Mt_out;
}
