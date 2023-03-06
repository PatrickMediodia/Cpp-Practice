#include<iostream>

using namespace std;

int main()
{
    //while loop
    int whileCounter = 1;
    cout << "While counter" << endl;
    while(whileCounter <= 10) {
        cout << whileCounter << endl;
        whileCounter++;
    }

    //do while loop
    //will execute atleast once because it "does" it before it checks
    cout << "\nDo While counter" << endl;
    int doWhileCounter = 1;
    do {
        cout << doWhileCounter << endl;
        doWhileCounter++;
    } while(doWhileCounter <=10);

    //for loop is used if you know how many iterations you have in advanced
    string animals[5] = {"cat", "dog", "cow", "goat", "bee"};

    //initialize counter;
    for(int x = 0; x < 5; x++) {
        cout << animals[x] << endl;
    }

    return 0;
}
