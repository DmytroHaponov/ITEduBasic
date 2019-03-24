#pragma once
#include "wheel.h"

class Transmission : public Wheel{
public:
    enum t_type{
        automatic, mechanical, cyber
    };
private:
    std::string t_name{"name"};
    t_type t_ttype{t_type::cyber};
    int t_speed_count{0};
    int t_price{0};
public:
    int t_index{0};
    Transmission();
    Transmission(std::string tm_name, t_type tm_type, int tm_speed_count
                 , int tm_price, int tm_index);
};

std::ostream& operator <<(std::ostream& tr_out, const Transmission::t_type tr);
