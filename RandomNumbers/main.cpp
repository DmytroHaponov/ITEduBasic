#include <iostream>
#include <stdlib.h>
#include <time.h>
#include"randomchik.h"

int main()
{
    int flagForContinue {1};

    while (flagForContinue == true)
    {
        std::cout<<"Guess number from 0 to 10: "<<std::endl;

        Randomchik::setRandomNumber();
        Randomchik::guessNumber();

        std::cout<<"\n\n----------------------------------\nNabis?)\n1 - yes, 2 - no?"<<std::endl;
        std::cin>>flagForContinue;
        printf("\033c"); //clear console
    }
    return 0;
}
