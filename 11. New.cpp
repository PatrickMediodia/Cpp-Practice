#include <iostream>
using namespace std;

class PlayerAccount
{
private:
    string name;
    int score;

public:
    PlayerAccount(string Name, int Score)
    {
        name = Name;
        score = Score;
    }

    void displayDetails()
    {
        cout << name << endl;
        cout << score << endl;
    }
};

int main()
{
    // if you use the new keyword, it will stored in the heap rather than the stack
    int *x = new int(5);

    // that means you have to delete it afterwards (see malloc() and free())
    // always delete afterward
    delete (x);

    /*
        You usually just do
        PlayerAccount account;
        account.displayDetails();
    */
    PlayerAccount *account = new PlayerAccount("Patrick", 0);

    // to use this object pointer, dereference it and wrap it in ()
    (*account).displayDetails();

    // shorthand operation
    account->displayDetails();

    // you can use dynamic memory to inrease the size of an array at runtime
    // but most of the time you should be using a vector (basically a dynamic array)
    // std:: vector<int> variable = { 1, 2, 3, 4, 5};
    // see vectors.cpp file

    return 0;
}
