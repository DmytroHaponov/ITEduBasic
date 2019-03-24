#include "square.h"

namespace MyLib{
namespace Geometry {

Square::Square()
    :m_a(0)
{

}
Square::Square(double a)
    :m_a(a)
{

}
double Square::getPerimeter(){
    return (m_a*4);
}
double Square::getSquare(){
    return m_a * m_a;
}
}//namespace
}
