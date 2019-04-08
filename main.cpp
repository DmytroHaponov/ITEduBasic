#include <iostream>
#include <string>
using namespace std;

class Devices
{
private:
    bool CheckOn(){
        return true;
    }
public:
    void Start(){
        if (CheckOn()){
            cout << "Hello!" << endl;
        } else{
            cout << "Turn me on!" << endl;
        }

    }
    Devices() {}
};

class Phones : public Devices
{
public:
    Phones()
    {
        speaker = "there's";
        keyboard = "there's";
        flashlight = "no";
    }

    //    void showConfig()
    //    {
    //        cout << "\nThe phone has this configuration:\n";
    //        cout << "Speaker = " << speaker << endl;
    //        cout << "Keyboard = " << keyboard << endl;
    //        cout << "Flashlight = " << flashlight << endl;
    //    }


private:
    string speaker;
    string keyboard;
    string flashlight;
};

class Smarphones : public Phones
{
public:
    Smarphones()
    {
        display = "there's";
        miniJack = "3.5 mm ";
        charge = "there's";
        fingerprintScanner = "there's";
    }

private:
    string display;
    string miniJack;
    string charge;
    string fingerprintScanner;
};

class Apple : public Smarphones
{
public:
    Apple()
    {
        OS = "IOS";
    }
private:
    string OS;
};

class Iphone : public Apple
{
public:
    Iphone()
    {
        model = "IPhone X";
        price = 1000;
        waterProof = "IP67";
        mAh = 2716;
        screenResolution = "2436 x 1125";
        frontCam = 7;
        backCam = 24;
    }
private:
    string model;
    int price;
    string waterProof;
    int mAh;
    string screenResolution;
    int frontCam;
    int backCam;
};

class MacBook : public Apple
{
public:
    MacBook()
    {
        model = "MacBook Pro";
        price = 2330;
        graphicAdapter = "Radeon Pro 555 with 2 ГБ GDDR5";
        weight = 1.83;
        battery = "Up to 10 hours";
    }
private:
    string model;
    int price;
    string graphicAdapter;
    double weight;
    string battery;
};

int main()
{
    Iphone IPhoneX;
    MacBook MacBookPro;
    return 0;
}
