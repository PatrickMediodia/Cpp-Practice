#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // initialize a vector
    // int is a generic vector
    // you can also have custom vectors from classes
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    // add values to a vector (adds them to the end of the vector)
    numbers.push_back(12);

    // access vector values (use index, starts with 0)
    cout << numbers.at(0) << endl;
    cout << numbers[0] << endl;

    // returns the size of the vector
    cout << numbers.size() << endl;

    // returns the first element of the vector
    cout << numbers.front() << endl;
    cout << numbers[0] << endl;

    // returns the last element of the vector
    cout << numbers.front() << endl;
    cout << numbers[numbers.size() - 1] << endl;

    // change the value at that index
    numbers[0] = 5;
    numbers.at(1) = 6;

    // remove last value from vector
    numbers.pop_back();

    // clears the whole vector
    numbers.clear();

    return 0;
}