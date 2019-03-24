#pragma once
#include <string>

class Wheel{
public:
    enum w_season{
        summer,
        winter
    };
    enum w_type{
        T_W0, T_W1, T_W2, T_W3,
        T_S0, T_S1, T_S2, T_S3
    };
private:
    std::string w_name{"name"};
    w_type w_wtype{w_type::T_S0};
    int w_size{0};
    w_season w_wseason{w_season::summer};
    double w_wsize{0.00};
    int w_price{0};
public:
    int w_index{0};
    Wheel();
    Wheel(std::string wm_name, w_type wm_type, int wm_size, w_season wm_season,
          double wm_wsize, int wm_price, int wm_index);
};

std::ostream& operator <<(std::ostream& ws_out, const Wheel::w_type wt);
std::ostream& operator <<(std::ostream& wt_out, const Wheel::w_season ws);
