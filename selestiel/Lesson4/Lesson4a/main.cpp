#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double PW_R(double a, double b) {


    return pow(a, b);

};
const char o = 'y'|| 'n';
double Power() {
    while (o == 'y') {
        string name;
        double a;
        double b;
        cout << "Hello User" << endl;
        cout << "Please enter your name:" << endl;
        cin >> name;
        cout << "Dear " << name << ", please enter the nubmers You want to power:" << endl;
        cout << "First number to be powered:";	cin >> a;
        cout << "Second number of power to:";	cin >> b;
        cout << "You entered: " << a << " to power of " << b << "." << endl;
        cout << " Result: " << PW_R(a, b) << endl;

    }
    cout << "Do you want to power again? yes - 'y'/ no - 'n'" << endl;
    cin >> o;
    if (o == 'n') {
        system("pause");
        return 0;
    }
}
