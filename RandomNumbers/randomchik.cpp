#include "randomchik.h"
#include"iostream"


static int randNumb{0};
static int userNumb{0};

int Randomchik::setRandomNumber()
{
    srand (time (NULL));        //for right work of rand function (initialize random seed)
    randNumb = 0+rand()%10;     //random numbers in interval from 0 to 10

    return 0;
}

void Randomchik::guessNumber()
{
    do {
        while(!(std::cin >> userNumb))
        {
            std::cin.clear();
        }
        if (randNumb > userNumb)
        {
            std::cout << "Random number is higher" <<std::endl;
        }
        if (randNumb < userNumb)
        {
            std::cout << "Random number is lower" << std::endl;
        }

    } while (randNumb != userNumb);

    std::cout << "\n\n**************Uhuuuuuuuu! You guessed! :)***************\n\n" << std::endl;
}
