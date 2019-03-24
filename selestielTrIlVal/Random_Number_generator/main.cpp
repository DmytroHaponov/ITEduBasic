#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

void clrscr()
{
    system("@cls||clear");
}

int main() {
    std::string name;
    int a{0};
    int b{0};
    int c{1};
    while(c != 0){
    srand (time(NULL));
    std::cout << "Hello User" << std::endl;
    std::cout << "Please enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Dear " << name << ", You have to guess a number here:" << std::endl;
    a = rand() % 1000000 + 1;
    do {
        std::cout << "Enter the number You guessed:" <<std::endl;
        std::cin >> b;
        std::cout << "You entered: " << b << "." << std::endl;
        if (b < a) {
            std::cout << "Your number is " << b << " and lower!" << std::endl;
        }
        else if (b > a) {
            std::cout << "Your number is " << b << " and higher!" << std::endl;
        }
        else if (b == a) {
            std::cout << name << " You guessed RIGHT! " << " The number is " << a << "." << std::endl;
        }
    }
    while (a!= b);
    std::cout << "Dear " << name << " do you want to try again?" << std::endl;
    std::cout << "If 'yes' please input 1, if 'no' please input 0." << std::endl;
    std::cin >> c;
    clrscr();
    }
    system("pause");
    return 0;
}
