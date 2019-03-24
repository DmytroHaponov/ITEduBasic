#include "triangle.h"
#include <math.h>

namespace MyLib{
namespace Geometry {

Triangle::Triangle()
    :m_a(0)
    ,m_b(0)
    ,m_c(0)
{

}
Triangle::Triangle(double a, double b, double c)
    :m_a(a)
    ,m_b(b)
    ,m_c(c)
{

}
double Triangle::getPerimeter(){
    return (m_a+m_b+m_c);
}
double Triangle::getSquare(){ //Heron Formula
    return (sqrt(getPerimeter()*((getPerimeter()-m_a)*(getPerimeter()-m_b)*(getPerimeter()-m_c))));
}
}//namespace
}
