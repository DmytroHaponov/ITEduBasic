#pragma once
#include <iostream>

class Weight
{
private:
    int m_weight{300};
public:
    Weight();
    Weight(int p_weight);
    int getWeight(int f_weight){
        m_weight = f_weight;
        std::cout << f_weight << std::endl;
        return m_weight;
    }
};

