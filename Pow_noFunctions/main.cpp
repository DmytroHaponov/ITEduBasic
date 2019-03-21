#include "iostream"

int main()
{
    double number, a, b;
    int power, i;
    std::cout << "Input number: ";
    std::cin >> number;
    a = number;
    b = number;
    std::cout << "Input power: ";
    std::cin >> power;
    if (power>0)
    {
        for (i = 0; i<power; ++i)
        {
            number = b * a;
        }

    }
    else if (power < 0)
    {
        if (number != 0.)
        {
            number = 1;
            for (i = 0; i > power; i = i - 1)
            {
                number = number / b;
            }
        }
        else
        {
            number = 0;
        }
    }
    else if (power == 0)
    {
        number = 1;
    }

    std::cout << "\n\n-----------------------------------------";
    std::cout <<"\nAnswer = "<< number << std::endl;
    std::cout << "-----------------------------------------\n\n\n\n";



    return 0;
}
