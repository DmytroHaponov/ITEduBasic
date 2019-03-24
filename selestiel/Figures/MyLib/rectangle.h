#pragma once
#include "figure.h"

namespace MyLib{

namespace  Geometry{


class Rectangle : public Figure
{
public:
    Rectangle();
    Rectangle(double a, double b);
    ~Rectangle() override = default;
    double getPerimeter() = 0;
    double getSquare() = 0;

private:
    double m_a;
    double m_b;
};
}//namespace Geometry
}//namespace MyLib
