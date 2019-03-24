#include <iostream>
#include <string>
#include <assert.h>
#include <stdlib.h>
#include <typeinfo>

void clrscr()
{
    system("@cls||clear");
}
double PW_R(double a, double b);
double conv_d(double d);
int conv_i(int e);
double check(double g);
int main() {
    std::string name;
    double a{0.0};
    double b{0.0};
    int c{1};
    assert(PW_R(4.0, 2.0) == 16.0);
    assert(PW_R(0.0, 9.0) == 0.0);
    assert(PW_R(-5.0, 5.0) == -3125.0);
    assert(PW_R(2.0, -2.0) == 0.25);
    assert(PW_R(5.0, 0.0) == 1.0);
    assert(PW_R(-2.0, -3.0) == -0.125);
    std::cout << "Hello User" << std::endl;
    std::cout << "Please enter your name:" << std::endl;
    std::cin >> name;
    while(c != 0){
    std::cout << "Dear " << name << ", please enter the nubmers You want to power:" << std::endl;
    std::cout << "First number to be powered:" << std::endl;
    std::cin >> a;
    check(a);
    conv_d(a);
    std::cout << "Second number of power to:" << std::endl;
    std::cin >> b;
    check(b);
    conv_d(b);
    std::cout << name << " You entered: " << a << " to power of " << b << "." << std::endl;
    std::cout << " Result: " << PW_R(a, b) << std::endl;
    std::cout << name << " Would you like to power number again?" << std::endl;
    std::cout << "if 'yes' enter '1', if 'no' enter '0'" << std::endl;
    std::cin >> c;
    conv_i(c);
    clrscr();
    }
    return 0;
}
double PW_R(double a, double b) {
    double result{1.0};
    if (a != 0.0 && b != 0.0) {
        if (b > 0.0){
        for (double i{0.0}; i < b; i++){
           result *= a;
        }
        return result;
        }
        if (b < 0.0){
        for (double i{0.0}; i > b; i--){
           result *= a;
        }
        result = 1 / result;
        return result;
        }
    }
    else if (b == 0.0 && a != 0.0){
        std::cout << "All operations with 0 of power equals to 1.0" << std::endl;
        return 1.0;
    }
    else if (a == 0.0 && b != 0.0){
        std::cout << "All operations with 0 are equal to 0." << std::endl;
        return 0.0;
    }
    return 0.0;
}
double conv_d(double d){
    return static_cast<double>(d);
}
int conv_i(int e){
    return static_cast<int>(e);
}
double check(double g){
        if ((typeid(g) != (typeid(char))) && (typeid(g) != (typeid(std::string)))){

            return g;
        }
       return 0.0;
}
