#include "transmission.h"
#include "car.h"

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& tr_out, const Transmission::t_type tr)
{
    switch(tr)
    {
    case Transmission::t_type::cyber:
        tr_out << TS(cyber);
        break;
    case Transmission::t_type::automatic:
        tr_out << TS(automatic);
        break;
    case Transmission::t_type::mechanical:
       tr_out << TS(mechanical);
        break;
    default:
        tr_out << "unknown";
        break;

    }
    return tr_out;
}

Transmission::Transmission()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << t_name << " " << t_ttype <<
                 " " << t_speed_count << " " << t_price <<
                 " " << t_index << " " << std::endl;
}

Transmission::Transmission(std::string tm_name, t_type tm_type,
                           int tm_speed_count,int tm_price, int tm_index)
        : t_name{tm_name}
        , t_ttype{tm_type}
        , t_speed_count{tm_speed_count}
        , t_price{tm_price}
        , t_index{tm_index}{
    std::cout << "Parameters are:" << std::endl;
    std::cout << " " << t_name << " " << t_ttype <<
                 " " << t_speed_count << " " << t_price <<
                 " " << t_index << " " << std::endl;
}
