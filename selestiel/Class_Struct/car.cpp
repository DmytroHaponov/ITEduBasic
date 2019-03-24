#include "car.h"

Car::Car(){
    std::cout << "Car name is: " << name << std::endl;
}

Car::Car(const std::string& m_name, int cr_index, const Skeleton& ske
         , const Transmission& tra, const Engine& eng, const Design& des
         , const Decor& dec, const Wheel& whe, const Param& par)
    : ske{ske}
    , tra{tra}
    , eng{eng}
    , des{des}
    , dec{dec}
    , whe{whe}
    , par{par}
    , name{m_name}
    , index{cr_index}

{
    std::cout << "Car name is: " << m_name << " index is " << cr_index << std::endl;

}

