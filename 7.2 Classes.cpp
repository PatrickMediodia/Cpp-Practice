#include <iostream>

using namespace std;

class BankAccount
{
private:
    string name;
    int balance;
    string pin;
    string address;
    string id;

public:
    BankAccount(string Name, int Balance, string Pin, string Address, string Id)
    {
        name = Name;
        balance = Balance;
        pin = Pin;
        address = Address;
        id = Id;
    }

    string getName() { return name; }

    void widthdraw(int amount)
    {
        balance = balance - amount;
        cout << name << " has widthdrawn " << amount << endl;
        cout << balance << " is the remaining balance" << endl;
    }

    void getBalance()
    {
        cout << name << " has a balance of " << balance << endl;
    }
};

int main()
{
    BankAccount bankAccount(
        "Patrick Mediodia",
        100000,
        "1234",
        "San Lorenzo South Sta. Rosa Laguna",
        "1");

    cout << "Account owner " << bankAccount.getName() << endl;
    bankAccount.widthdraw(1000);
    bankAccount.getBalance();
    return 0;
}