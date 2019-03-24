#include <iostream>
#include <fstream>
#include "file.h"

int PalindromeN();
int PalindromeS();
void InputS();
void InputN();

int main(){
    int a{0},b{0};
    while(a==0){
        std::cout << "Hello user would you like to check palindrome number or string?" << std::endl;
        std::cout << "Please enter 0 for Number, 1 for String:" << std::endl;
        std::cin >> b;
        switch(b){
        case 0 :
            InputN();
            PalindromeN();
            break;
        case 1:
            InputS();
            PalindromeS();
            break;
        default:
            break;

        }
        std::cout << "Would you like to continue? 0 - yes, 1 - no?" << std::endl;
        std::cin >> a;
    }
}

void InputN(){
    int N{0};
    std::cin >> N;
    std::ofstream fileN{};
    fileN.open("Number.txt", std::ofstream::app);
    if(fileN.is_open()){
        fileN << N;
        std::cout << "number input" << N << std::endl;
    }
    fileN.close();
}
void InputS(){
    std::string S{""};
    std::cin >> S;
    std::ofstream fileS{};
    fileS.open("String.txt", std::ofstream::app);
    if(fileS.is_open()){
        fileS << S;
        std::cout << "String input" << S << std::endl;
    }
    fileS.close();
}
