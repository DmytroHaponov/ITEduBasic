#pragma once
#include "figure.h"

namespace MyLib{

namespace  Geometry{


class Square : public Figure
{
public:
    Square();
    Square(double a);
    ~Square() override = default;
    double getPerimeter() = 0;
    double getSquare() = 0;

private:
    double m_a;
};
}//namespace Geometry
}//namespace MyLib
