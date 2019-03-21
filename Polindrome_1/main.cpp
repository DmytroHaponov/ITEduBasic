#include <iostream>


int main()
{
    bool run {true};
    char nabis {};

    while (run)
    {
        std::cout<<"Enter a number to check if its Polindrome or not: "<<std::endl;

        int n{0};
        int num {0};
        int digit {0};
        int rev {0};

        std::cin >> num;
        n = num;

        while (num!=0)
        {
            digit = num%10;         // digit = 121%10 = 1 || digit 12%10=2
            rev = (rev*10)+digit;   // rev = (0*10)+1=1   || rev =(1*10)+2 = 12 --- 121
            num = num/10;           // 121/10 = 12 num = num/10 = 12/10 = 1;
        }

        if(n==rev)
        {
            std::cout<<n<<" Is Polindrome!"<<std::endl;
        }
        else
        {
            std::cout<<n<<" isn`t Polindrome!"<<std::endl;
        }
        std::cout<<"Would you like continue playing?(Y/N)"<<std::endl;
        std::cin >> nabis;

        nabis = tolower(nabis);
        printf("\033c");
        if(nabis =='n')
        {
            run = false;
        }
    }
    return 0;
}
