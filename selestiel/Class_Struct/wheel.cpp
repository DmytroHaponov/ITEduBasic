#include "wheel.h"
#include "car.h"

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& ws_out, const Wheel::w_season ws)
{
    switch(ws)
    {
    case Wheel::w_season::summer:
        ws_out << TS(summer);
        break;
    case Wheel::w_season::winter:
        ws_out << TS(winter);
        break;
    default:
        ws_out << "unknown";
        break;
    }
    return ws_out;
}
std::ostream& operator <<(std::ostream& wt_out, const Wheel::w_type wt)
{
    switch (wt)
    {
    case Wheel::w_type::T_S0:
       wt_out << TS(T_S0);
        break;
    case Wheel::w_type::T_S1:
        wt_out << TS(T_S1);
        break;
    case Wheel::w_type::T_S2:
        wt_out << TS(T_S2);
        break;
    case Wheel::w_type::T_S3:
        wt_out << TS(T_S3);
        break;
    case Wheel::w_type::T_W0:
        wt_out << TS(T_W0);
        break;
    case Wheel::w_type::T_W1:
        wt_out << TS(T_W1);
        break;
    case Wheel::w_type::T_W2:
        wt_out << TS(T_W2);
        break;
    case Wheel::w_type::T_W3:
        wt_out << TS(T_W3);
        break;
    default:
        wt_out << "unknown";
        break;

    }
    return wt_out;
}

Wheel::Wheel()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << w_name << " " << w_wtype <<
                 " " << w_size << " " << w_wseason <<
                 " " << w_wsize << " " << w_price <<
                 " " << w_index << " " << std::endl;
}

Wheel::Wheel(std::string wm_name, w_type wm_type, int wm_size, w_season wm_season,
          double wm_wsize, int wm_price, int wm_index)
        : w_name{wm_name}
        , w_wtype{wm_type}
        , w_size{wm_size}
        , w_wseason{wm_season}
        , w_wsize{wm_wsize}
        , w_price{wm_price}
        , w_index{wm_index}{
    std::cout << "Parameters are:" << std::endl;
    std::cout << " " << w_name << " " << w_wtype <<
                 " " << w_size << " " << w_wseason <<
                 " " << w_wsize << " " << w_price <<
                 " " << w_index << " " << std::endl;
}
