#include <iostream>
#include <file.h>
#include <fstream>

int PalindromeN()
{
    int n, digit, rev = 0;
    std::ifstream file1{};
    file1.open("Number.txt");
    if(file1.is_open()){
        std::cout << "Reading data from file: " << std::endl;
        file1 >> MYFILE::val;
        n = MYFILE::val;
        digit = MYFILE::val % 10;
        rev = (rev * 10) + digit;
        MYFILE::val = MYFILE::val / 10;

        std::cout << " The reverse of the number is: " << rev << std::endl;

        if (n == rev){
            std::cout << " The number is a palindrome." << std::endl;
            MYFILE::res = MYFILE::pal;
        }
        else{
            std::cout << " The number is not a palindrome." << std::endl;
            MYFILE::res = MYFILE::n_pal;
        }
    }file1.close();
    std::ofstream file3{};
    file3.open("Number.txt", std::ofstream::app);
    if(file3.is_open()){
        file3 << MYFILE::res << " ";
        if (MYFILE::res == MYFILE::pal){
            file3 << " is palindrome." << std::endl;
        }
        else if(MYFILE::res == MYFILE::n_pal){
            file3 << " is not palindrome." <<std::endl;
        }
    }
    file3.close();
    return MYFILE::res;
}

int PalindromeS()
{
    std::ifstream file2{};
    file2.open("String.txt",std::ifstream::in);
    if(file2.is_open()){
        file2 >> MYFILE::str;
        if (MYFILE::str == std::string(MYFILE::str.rbegin(), MYFILE::str.rend())) {
            std::cout << MYFILE::str << " is a palindrome" << std::endl;
            MYFILE::res = MYFILE::pal;
        }
        else {
            std::cout << MYFILE::str << " is not a palindrome." << std::endl;
            MYFILE::res = MYFILE::n_pal;
        }
    }file2.close();
    std::ofstream file4{};
    file4.open("String.txt", std::ofstream::app);
    if(file4.is_open()){
        file4 << MYFILE::res << " ";
        if (MYFILE::res == MYFILE::pal){
            file4 << " is palindrome." << std::endl;
        }
        else if(MYFILE::res == MYFILE::n_pal){
            file4 << " is not palindrome." <<std::endl;
        }
    }
    file4.close();
    return MYFILE::res;
}
