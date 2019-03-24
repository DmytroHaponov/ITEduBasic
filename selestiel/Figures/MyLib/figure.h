#pragma once
namespace  MyLib{
namespace Geometry{




class Figure{
public:
    Figure() = default;

    virtual ~Figure() = default; // the true way.
    virtual double getPerimeter() = 0;
    virtual double getSquare() = 0;

};
}//namespace Geometry
}//namespace MyLib
