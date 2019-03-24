#include "decor.h"
#include "car.h"

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& dct_out, const Decor::dec_type dct)
{
    switch(dct)
    {
    case Decor::dec_type::duo:
        dct_out << TS(duo);
        break;
    case Decor::dec_type::myth:
        dct_out << TS(myth);
        break;
    case Decor::dec_type::star:
       dct_out << TS(star);
        break;
    case Decor::dec_type::fallen:
        dct_out << TS(fallen);
        break;
    case Decor::dec_type::medium:
        dct_out << TS(medium);
        break;
    case Decor::dec_type::solo:
        dct_out << TS(solo);
        break;
    case Decor::dec_type::strike:
        dct_out << TS(strike);
        break;
    case Decor::dec_type::twister:
        dct_out << TS(twister);
        break;
    default:
        dct_out << "unknown";
        break;
    }
    return dct_out;
}
std::ostream& operator <<(std::ostream& dcm_out, const Decor::dec_material dcm)
{
    switch(dcm)
    {
    case Decor::dec_material::metal:
        dcm_out << TS(metal);
        break;
    case Decor::dec_material::carbon:
        dcm_out << TS(carbon);
        break;
    case Decor::dec_material::plastic:
        dcm_out << TS(plastic);
        break;
    default:
        dcm_out << "unknown";
        break;

    }
    return dcm_out;
}

Decor::Decor()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << dec_name_f << " " << dec_type_f <<
                 " " << dec_material_f << " " << dec_name_t <<
                 " " << dec_type_t << " " << dec_material_t <<
                 " " << dec_name_g << " " << dec_type_g <<
                 " " << dec_material_g << " " << dec_weight <<
                 " " << dec_price <<" " << dec_index << std::endl;
}

Decor::Decor(std::string dcm_name_f, dec_type dcm_type_f, dec_material dcm_material_f,
             std::string dcm_name_t, dec_type dcm_type_t, dec_material dcm_material_t,
             std::string dcm_name_g, dec_type dcm_type_g, dec_material dcm_material_g,
             int dcm_weight, int dcm_price, int dcm_index)
  : dec_name_f{dcm_name_f}
  , dec_type_f{dcm_type_f}
  , dec_material_f{dcm_material_f}
  , dec_name_t{dcm_name_t}
  , dec_type_t{dcm_type_t}
  , dec_material_t{dcm_material_t}
  , dec_name_g{dcm_name_g}
  , dec_type_g{dcm_type_g}
  , dec_material_g{dcm_material_g}
  , dec_weight{dcm_weight}
  , dec_price{dcm_price}
  , dec_index{dcm_index}
    {
    std::cout << "Parameters are:" << std::endl;
    std::cout << " " << dec_name_f << " " << dec_type_f <<
                 " " << dec_material_f << " " << dec_name_t <<
                 " " << dec_type_t << " " << dec_material_t <<
                 " " << dec_name_g << " " << dec_type_g <<
                 " " << dec_material_g << " " << dec_weight <<
                 " " << dec_price <<" " << dec_index << std::endl;
}
