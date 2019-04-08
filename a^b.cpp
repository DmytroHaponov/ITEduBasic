#include <iostream>
#include <stdio.h>
#include <cmath>
#include <limits>

using namespace std;

    double pow(int a, int b){
    double c=1.;

    if (b==0){
        return c;
    }

    int tmp{(b>0)?b:-b};

    for (int i{0};i<tmp;++i){
        c*=a;
    }
    if (b<0){
        c=1./c;
    }
    return c;
    }

    int main(){

    double a, b, x;
    cout<<"Put value a ";
    cin>> a;
    cout<<"Put value b ";
    cin>> b;
    x=pow(a,b);
    cout<<x<<endl;
    system ("pouse");
    return 0;
    }

