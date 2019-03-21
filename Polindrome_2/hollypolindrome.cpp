#include"hollypolindrome.h"
#include<iostream>
#include<cstring>
bool Polyndrome::hollyPolindrome(std::string word)
{
    int length = word.length();

    for(int i = 0; i < length/2; ++i)
    {
        if(word[i] != word[length-i-1])
        {
            return false;
        }
    }
    return true;
}
