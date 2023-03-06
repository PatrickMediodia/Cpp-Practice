#include<iostream>
using namespace std;

void celebrateBirthday(int* age);

//&variable -> get address of this variable
//*address -> get value of this pointer
//DataType* variable -> stores a pointer of that data type
//arrayVariable -> if you print this, it is the start of the array address

int main()
{
    int myAge = 22;
    cout << "Before function " << myAge << endl;
    celebrateBirthday(&myAge);      //gives us address of a variable, referencing a variable
    cout << "After function " << myAge << endl;

    //luckyNumbers holds the first address of the array
    int luckyNumbers[5] = {1, 3, 5, 7, 9};
    //cout << luckyNumbers << endl;
    //cout << &luckyNumbers[0] << endl;

    int* luckyPointer = luckyNumbers;
    //cout << "Pointing to " << luckyPointer << " Value: " << *luckyPointer << endl;  //gives first value in array
    //luckyPointer++;
    //cout << "Pointing to " << luckyPointer << " Value: " << *luckyPointer << endl;  //gives second value in array since it in contigous in memory

    //it can cause problems if you try to access memory values not in the array

    int counter = 5;

    while(counter > 0) {
        cout << "Pointing to " << luckyPointer << " Value: " << *luckyPointer << endl;
        luckyPointer++;
        counter--;
    }

    return 0;
}

//allows your program to access the same data locations
void celebrateBirthday(int* age) {
    (*age)++;   //dereference a variable
    cout << *age << " Birthday Celebrated" << endl;
}
