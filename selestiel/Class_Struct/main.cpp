#include <iostream>
#include "car.h"


int main() {
    Car{};
    Car{"Veda", 4
        , Skeleton{}
        , Transmission{}
        , Engine{}
        , Design{}
        , Decor{}
        , Wheel{}
        , Param{}};

    std::cout << std::endl;

    Car{"Queen", 5, Skeleton{"Armor", Skeleton::sk_type::sedan, 3000, 2000, 1500
                    , Skeleton::sk_material::silver, 5000, 100000, 3}
        , Transmission{"Soft", Transmission::t_type::mechanical, 8, 25000, 6}
        , Engine{"Toyota", Engine::e_type::T_D1, 300, 400, 4.0, 40000, 4}
        , Design{"Full", Design::des_color::red, Design::des_type::body, 20000, 7}
        , Decor{"Low", Decor::dec_type::fallen, Decor::dec_material::carbon
                    , "Ultra", Decor::dec_type::myth, Decor::dec_material::metal
                    , "Force", Decor::dec_type::strike, Decor::dec_material::plastic
                    , 100, 25000, 8}
        , Wheel{"Toyo", Wheel::w_type::T_W3, 25, Wheel::w_season::winter, 20.0, 50000, 1}
        , Param{"NSExpr", 5, 100, 50, 50000, 9}};
    return 0;

}
