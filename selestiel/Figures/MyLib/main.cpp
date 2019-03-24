#include <iostream>
#include "rectangle.h"

using namespace MyLib::Geometry;

int main()
{
    Figure* f = new Rectangle(2,3);
    std::cout << "P: " << f->getPerimeter() << std::endl;
    std::cout << "S: " << f->getSquare()<< std::endl;
    delete f;
    return 0;
}
