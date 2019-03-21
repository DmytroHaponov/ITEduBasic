#include <iostream>
#include <string>
#include "hollygame.h"

int main()
{
    bool run = true;
    char nabis {0};
    while (run)
    {

        char userinput;
        HollyGame::initialize();
        HollyGame::settrap();
        bool stop = false;

        while(stop == false){

            HollyGame::buildboard();
            HollyGame::settrap();

            std::cout << "\n Player move up, down, left, right (w,s,a,d)?\n\n\n\n";
            std:: cout << " ";
            std::cin >> userinput;
            bool quit = false;
            while (!quit){

                switch(userinput){
                case 'w':
                case 's':
                case 'a':
                case 'd':
                    quit = true;
                    break;
                default:
                    std::cout << "\n Invalid move, try again(w,s,a,d)\n";
                    std:: cout << " ";
                    std::cin >> userinput;
                }
            }

            stop = HollyGame::moveplayer(userinput);
            userinput = '.';
        }

        std::cout<<"Would you like continue playing?(Y/N)"<<std::endl;
        std::cin >> nabis;

        if(nabis =='n')
        {
            run = false;
        }
    }
}



