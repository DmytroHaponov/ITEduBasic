#pragma once
#include "decor.h"
#include <iostream>

class Design : public Decor{
public:
    enum class des_color  : int
    {
        red, blue, green,
        yellow, black, white,
        brown, gold, grey, violet,
        purple, rose, crimson, silver
    };
    enum class des_type : int
    {
        body,
        arts,
        stickers,
        lines,
        ads
    };
private:
    std::string des_name{"name"};
    des_color des_descolor{des_color::red};
    des_type des_destype{des_type::ads};
    int des_price{0};
public:
    int des_index{0};
    Design();
    Design(std::string dsm_name, des_color dsm_color, des_type dsm_type
           , int dsm_price, int dsm_index);
};

std::ostream& operator <<(std::ostream& dst_out, const Design::des_type dst);
std::ostream& operator <<(std::ostream& dsc_out, const Design::des_color dsc);
