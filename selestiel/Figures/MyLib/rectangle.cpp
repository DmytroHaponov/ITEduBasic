#include "rectangle.h"
namespace MyLib{
namespace Geometry {

Rectangle::Rectangle()
    :m_a(0)
    ,m_b(0)
{

}
Rectangle::Rectangle(double a, double b)
    :m_a(a)
    ,m_b(b)
{

}
double Rectangle::getPerimeter(){
    return (m_a+m_b)*2;
}
double Rectangle::getSquare(){
    return m_a * m_b;
}
}//namespace
}
