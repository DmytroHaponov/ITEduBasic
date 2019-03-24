#pragma once
#include <string>

class Param{
private:
    std::string nos_name{"name"};
    int nos{0};
    int fuelcan{0};
    int noscan{0};
    int p_price{0};
public:
    int p_index{0};
    Param();
    Param(std::string pm_nos_name, int pm_nos,
          int pm_fuelcan, int pm_noscan, int pm_price, int pm_index);
};
