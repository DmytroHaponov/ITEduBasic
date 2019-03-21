#include <iostream>
#include"hollypolindrome.h"



int main()
{
    bool run {true};
    char nabis {};

    while (run)
    {
        std::string string;
        std::cout<<"Enter a number to check if its Polindrome or not: "<<std::endl;

        std::cin>>string;

        if(Polyndrome::hollyPolindrome(string))
        {
            std::cout<<" It`s a Polindrome!"<<std::endl;
        }
        else
        {
            std::cout<<" It isn`t a Polindrome!"<<std::endl;
        }
        std::cout<<"Would you like continue playing?(Y/N)"<<std::endl;
        std::cin >> nabis;

        nabis = tolower(nabis);
        printf("\033c");
        if(nabis =='n')
        {
            run = false;
        }
    }
    return 0;
}
