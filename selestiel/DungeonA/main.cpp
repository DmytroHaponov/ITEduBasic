#include <iostream>
#include "dung.h"

int main(){
    do{
        DUNG::clrscr();
        DUNG::drawMap();
        std::cout << "Welcome to Dungeon Escape game!" << std::endl;
        std::cout << "Fight for your freedom!" << std::endl;
        std::cout << "Beware of traps and mines!" << std::endl;
        std::cout << "Move by entering commands:" << std::endl;
        std::cout <<  " 'W' - UP, 'S' - DOWN, 'D' - RIGHT, 'A' - LEFT!" << std::endl;
        DUNG::MP();
    }while(DUNG::CP()==true);
    return 0;
}
