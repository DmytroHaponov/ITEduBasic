#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>

void clrscr()
{
    system("@cls||clear");
}


int main() {
    int m{1};
    double a{0.0}, b{0.0}, c{0.0};
    double x1{0.0}, x2{0.0};
    while (m != 0) {
        x1 = ((-b) + sqrt((b * b) - (4.0 * a) * c)) / (2.0 * a);
        x2 = ((-b) - sqrt((b * b) - (4.0 * a) * c)) / (2.0 * a);
        std::cout << "x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a)" << std::endl;
        std::cout << "x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a)" << std::endl;
        std::cout << "Please enter the 'a', 'b', 'c' value:" << std::endl;
        std::cin >> a >> b >> c;
        std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
        double d = ((b * b) - ((4.0 * a) * c));
        if (a == 0.0) {
            x1 = 0.0;
            x2 = 0.0;
            std::cout << "x1 = 0, x2 = 0" << std::endl;
        }
        else if (b == 0.0 && c == 0.0) {
            x1 = 0.0;
            x2 = 0.0;
            std::cout << "x1 = 0, x2 = 0" << std::endl;
        }
        else if (d == 0.0){
            x1 = (-b) / (2.0 * a);
            x2 = (-b) / (2.0 * a);
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        else if (d < 0.0) {
            x1 = ((-b) + ((-1) * sqrt(-d))) / (2.0 * a);
            x2 = ((-b) - ((-1) * sqrt(-d))) / (2.0 * a);
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
}
        else if (d > 0.0) {
            x1 = ((-b) + sqrt(d)) / (2.0 * a);
            x2 = ((-b) - sqrt(d)) / (2.0 * a);
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        std::cout << "Do you want to try again? yes - 1/no - 0." << std::endl;
        std::cin >> m;
        clrscr();
    }
    system("pause");
    return 0;
}
