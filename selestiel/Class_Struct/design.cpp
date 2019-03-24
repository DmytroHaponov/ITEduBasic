#include "design.h"
#include "car.h"

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& dst_out, const Design::des_type dst)
{
    switch(dst)
    {
    case Design::des_type::ads:
        dst_out << TS(ads);
        break;
    case Design::des_type::arts:
        dst_out << TS(arts);
        break;
    case Design::des_type::body:
        dst_out << TS(body);
        break;
    case Design::des_type::lines:
        dst_out << TS(lines);
        break;
    case Design::des_type::stickers:
        dst_out << TS(stickers);
        break;
    default:
        dst_out << "unknown";
        break;
    }
    return dst_out;
}

std::ostream& operator <<(std::ostream& dsc_out, const Design::des_color dsc)
{
    switch(dsc)
    {
    case Design::des_color::red:
        dsc_out << TS(red);
        break;
    case Design::des_color::blue:
        dsc_out << TS(blue);
        break;
    case Design::des_color::gold:
        dsc_out << TS(gold);
        break;
    case Design::des_color::grey:
        dsc_out << TS(grey);
        break;
    case Design::des_color::rose:
        dsc_out << TS(rose);
        break;
    case Design::des_color::black:
        dsc_out << TS(black);
        break;
    case Design::des_color::brown:
        dsc_out << TS(brown);
        break;
    case Design::des_color::green:
        dsc_out << TS(green);
        break;
    case Design::des_color::white:
        dsc_out << TS(white);
        break;
    case Design::des_color::purple:
        dsc_out << TS(purple);
        break;
    case Design::des_color::silver:
        dsc_out << TS(silver);
        break;
    case Design::des_color::violet:
        dsc_out << TS(violet);
        break;
    case Design::des_color::yellow:
        dsc_out << TS(yellow);
        break;
    case Design::des_color::crimson:
        dsc_out << TS(crimson);
        break;
    default:
        dsc_out << "unknown";
        break;

    }
    return dsc_out;
}

Design::Design()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << des_name << " " << des_descolor <<
                 " " << des_destype << " " << des_price <<
                 " " << des_index << std::endl;
}

Design::Design(std::string dsm_name, des_color dsm_color,
               des_type dsm_type, int dsm_price, int dsm_index)
    : des_name{dsm_name}
    , des_descolor{dsm_color}
    , des_destype{dsm_type}
    , des_price{dsm_price}
    , des_index{dsm_index}{
    std::cout << "Design Parameters are:" << std::endl;
    std::cout << " " << des_name << " " << des_descolor <<
                 " " << des_destype << " " << des_price <<
                 " " << des_index << std::endl;
}
