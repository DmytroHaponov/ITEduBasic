#include"power.h"
#include"iostream"
namespace Power {
double powerOperations( double number, double power)
{
    //    static int power {0};
    //    static int number {0};
    double result {1.};
    double a {0};
    double b{0};

    a = number;
    b = number;

    if (power>0)
    {
        for (int i = 0; i<power; ++i)
        {
            result =a *b;
        }
    }
    if (power < 0)
    {
        if (number == 0.)
        {
            result = 0;
        }
        else
        {
            number = 1;
            for (int i = 0; i > power; i = i - 1)
            {
                result = number/b;
            }
        }
    }
    if (power == 0.)
    {
        result = 1;
    }
    return result;
}
}// namespace Power
