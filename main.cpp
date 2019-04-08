#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ofstream fout;
    fout.open("palindrome.txt");
    std::ofstream fout2;
    fout.open("noPalindrome.txt");

    if(!fout.is_open()){
        std::cout << "Error!";
    }


    if(!fout2.is_open()){
        std::cout << "Error!";
    }

    fout.close();
    fout2.close();
    return 0;
}
