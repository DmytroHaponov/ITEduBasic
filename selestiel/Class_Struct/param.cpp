#include "param.h"
#include "car.h"

Param::Param()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << nos_name << " " << nos <<
                 " " << fuelcan << " " << noscan <<
                 " " << p_price << " " << p_index << std::endl;
}

Param::Param(std::string pm_nos_name, int pm_nos,
                 int pm_fuelcan, int pm_noscan, int pm_price, int pm_index)
        : nos_name{pm_nos_name}
        , nos{pm_nos}
        , fuelcan{pm_fuelcan}
        , noscan{pm_noscan}
        , p_price{pm_price}
        , p_index{pm_index}{
    std::cout << "Parameters are:" << std::endl;
    std::cout << " " << nos_name << " " << nos <<
                 " " << fuelcan << " " << noscan <<
                 " " << p_price << " " << p_index << std::endl;
}
