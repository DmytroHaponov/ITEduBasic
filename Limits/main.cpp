#include <iostream>
#include <limits>

int main() {
    std::cout << "---------------------------------------------------------\nMax values of different types: "
                    <<"\n---------------------------------------------------------"<< std::endl;
    std::cout << "char: " << std::numeric_limits<char>::max() << std::endl;
    std::cout << "signed char: " << std::numeric_limits<signed char>::max() << std::endl;
    std::cout << "unsighned char: " << std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << "wide char: " << std::numeric_limits<wchar_t>::max() << std::endl;
    std::cout << "char 16: " << std::numeric_limits<char16_t>::max() << std::endl;
    std::cout << "char 32: " << std::numeric_limits<char32_t>::max() << std::endl;
    std::cout << "short: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "unsigned short: " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "unsighned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "long: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "unsigned long: " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "long long: " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "unsigned long long: " << std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << "float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "double: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "long double: " << std::numeric_limits<long double>::max() << std::endl;

    std::cout <<"\n---------------------------------------------------------"<< "\nMin values:"
              <<"\n---------------------------------------------------------"<< std::endl;
    std::cout << "char: " << std::numeric_limits<char>::min() << std::endl;
    std::cout << "signed char: " << std::numeric_limits<signed char>::min() << std::endl;
    std::cout << "unsighned char: " << std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << "wide char: " << std::numeric_limits<wchar_t>::min() << std::endl;
    std::cout << "char 16: " << std::numeric_limits<char16_t>::min() << std::endl;
    std::cout << "char 32: " << std::numeric_limits<char32_t>::min() << std::endl;
    std::cout << "short: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "unsigned short: " << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "unsighned int: " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "long: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "unsigned long: " << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << "long long: " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "unsigned long long: " << std::numeric_limits<unsigned long long>::min() << std::endl;
    std::cout << "float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "double: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "long double: " << std::numeric_limits<long double>::min() << std::endl;

    return 0;
}
