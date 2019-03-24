#pragma once
#include <iostream>

class Country{
public:
    enum class DevCo : int{
        USA, JAPAN, CHINA, SOUTH_KOREA, ITALY
    };

private:
    DevCo m_DevC{DevCo::USA};

public:
    Country();
    Country(DevCo p_DevC);
    DevCo getCountry(const DevCo& f_DevC){
        m_DevC = f_DevC;
        return m_DevC;
    }
};
std::ostream& operator <<(std::ostream& Cn_out, const Country::DevCo Cn);
