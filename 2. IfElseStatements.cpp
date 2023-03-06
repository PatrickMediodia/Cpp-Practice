#include<iostream>
using namespace std; //you can use this so that you dont have to do std:cout every time

int main()
{
    //if else condition
    bool gotoSchool = true;
    bool gotoLunch = false;
    
    if (gotoSchool == true && gotoLunch == true) {
        cout << "Go to school and go to lunch";
    } else if (gotoSchool == true || gotoLunch == true) {
        cout << "Go to school or go to lunch";
    } else if (gotoSchool == true) {
        cout << "Go to school";
    } else if (gotoLunch == true) {
        cout << "Go to lunch";
    }
    
    //Ternary operator
    //isTrue ? cout << "It is true" : cout << "It is false";
    
    /*
    //fizz buzz
    for(int x = 0; x < 100; x++) {
        if (x % 3 == 0 && x % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (x % 3 == 0) {
            cout << "Fizz" << endl;;
        } else if (x % 5 == 0) {
            cout << "Buzz" << endl;;
        } else {
            cout << x << endl;;
        }
    }
    */
    return 0;
}