#include <iostream>

int PalindromeN();
int PalindromeS();


int main(){
    int a{0},b{0};
    while(a==0){
        std::cout << "Hello user would you like to check palindrome number or string?" << std::endl;
        std::cout << "Please enter 0 for Number, 1 for String:" << std::endl;
        std::cin >> b;
        switch(b){
        case 0 :
            PalindromeN();
            break;
        case 1:
            PalindromeS();
            break;
        default:
            break;

        }
        std::cout << "Would you like to continue? 0 - yes, 1 - no?" << std::endl;
        std::cin >> a;
    }
}
