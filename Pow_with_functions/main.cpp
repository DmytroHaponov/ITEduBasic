#include "iostream"
#include "power.h"



int main()
{
    double number {0};
    double power {0};
    bool nabis = true;
    char flagForContinue {};

    while (nabis)
    {

        std::cout << "Input number: ";
        std::cin >> number;

        std::cout << "Input power: ";
        std::cin >> power;

        std::cout << "\n\n-----------------------------------------";
        std::cout <<"\nAnswer = "<< Power::powerOperations(number, power) << std::endl;
        std::cout << "-----------------------------------------\n\n\n\n";

        std::cout<<"\n\n----------------------------------\nNabis?)\t(Y/N)"<<std::endl;

        std::cin>>flagForContinue;
        flagForContinue=tolower(flagForContinue); //makes small letters from big
        printf("\033c"); //clear console
        if (flagForContinue=='n')
        {
            nabis = false;
        }
    }
    return 0;
}
