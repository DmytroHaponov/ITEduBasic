#pragma once
#include "figure.h"

namespace MyLib{

namespace  Geometry{


class Triangle : public Figure
{
public:
    Triangle();
    Triangle(double a, double b, double c);
    ~Triangle() override = default;
    double getPerimeter() = 0;
    double getSquare() = 0;

private:
    double m_a;
    double m_b;
    double m_c;
};
}//namespace Geometry
}//namespace MyLib
