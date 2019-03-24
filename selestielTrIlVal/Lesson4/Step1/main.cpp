#include "mylib.h"
#include <cmath>
#include <limits>
#include <iostream>

int main(){
    double a{10};
    int b{2};
    std::cout << Mylib::exponentation(a,b) << std::endl;


    std::cout << Mylib::exponentation(10,2) << std::endl;
    std::cout << Mylib::exponentation(100, -1) << std::endl;
    std::cout << Mylib::exponentation(100, 1.0) << std::endl;

    std::cout << std::fixed << std::setprecision(30) 1 /4
    return 0;

}


bool fuzzyCompare(double left, double right){
    bool result(false);
    double diff{std::fabs(left - right)};
    result = diff < std::numeric_limits<double>::epsilon();

    return result;

return 0;
}

