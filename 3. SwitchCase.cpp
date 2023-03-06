#include<iostream>
using namespace std; //you can use this so that you dont have to do std:cout every time

//enums can be accessed through index like arrays
enum EyeColor { Brown, Blue, Green, Gray, Other };

int main()
{
    //switch case, does not check on boolean
    EyeColor eyeColor = Blue;
    
    switch(eyeColor) {
        case Brown:
            cout << "80% of people have brown eyes.";
            break;
        case Blue:
            cout << "10% of people have brown eyes.";
            break;
        case Green:
            cout << "2% of people have brown eyes.";
            break;
        case Gray:
            cout << "1% of people have brown eyes.";
            break;
        case Other:
            cout << "7% of people have some other eye color.";
            break;
        default:
            cout << "Not valid eye color";
            break;
    }
    
    return 0;
}