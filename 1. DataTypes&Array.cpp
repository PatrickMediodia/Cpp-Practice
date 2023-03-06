#include <iostream>
using namespace std; // you can use this so that you dont have to do std:cout every time

int main()
{
    // double can store double the amount of float
    // char use single quote('), in string use double quote (")

    cout << "Hello";

    // if const cannot overwrite
    int age = 25;
    age = 26;
    float weight = 27.6l;
    double balance = 123443.878; // double the size of float
    char gender = 'm';
    string username = "HelloThisIsMyUsername";
    bool isTrue = false;

    // c++ aray specific space upfront, cannot store different data types in one array
    // you can also ommit size of array (in this case colors[])
    // you can also initialize string colors[10] with no values initially
    string colors[5] = {"red", "green", "pink", "blue", "black"};

    // iterate through array
    for (int x = 0; x < 5; x++)
    {
        cout << "\nIndex: ";
        cout << x;
        cout << ", Color: " + colors[x];
    }

    // get value and overwrite the value in the array
    int index;
    string newValue;

    cout << "\n\nEnter the index you want to change in the array (0 to 4): ";
    cin >> index;

    cout << "\n\nEnter the new value: ";
    cin >> newValue;

    colors[index] = newValue;
    cout << "New value at index " + to_string(index) + ": " + colors[index];

    return 0;
}
