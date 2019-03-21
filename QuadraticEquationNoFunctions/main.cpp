#include<iostream>
#include <cmath>


int main()
{


    double a, b, c;
    double D, x, x1, x2;


    std::cout << "Enter the values of the quadratic equation coefficients: (ax^2 +/- bx +/- c = 0) : " << std::endl;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "\nb = ";
    std::cin >> b;
    std::cout << "\nc = ";
    std::cin >> c;

    std::cout << "\n\n---------------------------------------------------";
    std::cout << "\n\nQuadratic equation is: ";

    if (a > 0)
    {
        std::cout << a << "x^2 ";
        if (b > 0)
        {
           std:: cout << "+ " << b << "x ";
            if (c > 0)
            {
                std::cout << "+ " << c <<" = 0";
            }
            else
            {
                std::cout << c << " = 0";
            }

        }
        else
        {
           std:: cout << b << "x ";
        }
    }

    else
    {
        std::cout << a << "x^2 ";
        if (b > 0)
        {
            std::cout << "+ " << b << "x ";
            if (c > 0)
            {
               std::cout << "+ " << c << " = 0";
            }
            else
            {
                std::cout << c << " = 0";
            }
        }
        else
        {
            std::cout << b << "x ";
        }
    }

    D = b*b - (4 * a * c);

    if (D < 0)
    {
        std::cout << "\n\n---------------------------------------------------";

        std::cout<<"\nDiscriminant = "<< D;
        std::cout << "\nDiscriminant < 0  --> Equation has no solution!)\n";
    }

    else if (D == 0.)
    {
        x = (-b) / (2 * a);
        std::cout << "\n\n---------------------------------------------------";

        std::cout<<"\nDiscriminant = "<< D;
        std::cout<<"\nThe root of a quadratic equation is: ";
        std::cout << "\nx = " << x;
    }

    else
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);

        std::cout << "\n\n---------------------------------------------------";

        std::cout<<"\nDiscriminant = "<< D;


        std::cout<<"\nThe roots of a quadratic equation are: ";
        std::cout << "\nx1 = " << x1;
        std::cout << "\nx2 = " << x2<<std::endl;
    }

    return 0;
}
