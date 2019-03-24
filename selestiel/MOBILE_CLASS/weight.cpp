#include "weight.h"
#include <iostream>

Weight::Weight()
{
}

Weight::Weight(int p_weight):m_weight{p_weight}
{
    getWeight(p_weight);
    std::cout << m_weight  << " " <<std::endl;
}

