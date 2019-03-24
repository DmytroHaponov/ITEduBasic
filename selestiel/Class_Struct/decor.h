#pragma once
#include "param.h"

class Decor: public Param{
public:
    enum dec_material{
        plastic,
        carbon,
        metal
    };
    enum dec_type{
        solo, strike,
        twister, duo, fallen,
        star, medium, myth
    };
private:
    std::string dec_name_f{"name"};
    dec_type dec_type_f{dec_type::solo};
    dec_material dec_material_f{dec_material::metal};
    std::string dec_name_t{"name"};
    dec_type dec_type_t{dec_type::solo};
    dec_material dec_material_t{dec_material::metal};
    std::string dec_name_g{"name"};
    dec_type dec_type_g{dec_type::solo};
    dec_material dec_material_g{dec_material::metal};
    int dec_weight{0};
    int dec_price{0};
public:
    int dec_index{0};
    Decor();
    Decor(std::string dcm_name_f, dec_type dcm_type_f, dec_material dcm_material_f,
          std::string dcm_name_t, dec_type dcm_type_t, dec_material dcm_material_t,
          std::string dcm_name_g, dec_type dcm_type_g, dec_material dcm_material_g,
          int dcm_weight, int dcm_price, int dcm_index);
};

std::ostream& operator <<(std::ostream& dct_out, const Decor::dec_type dct);
std::ostream& operator <<(std::ostream& dcm_out, const Decor::dec_material dcm);
