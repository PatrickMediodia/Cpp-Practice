#include <iostream>
using namespace std;

// classes are user define data types

// in c++, all members of the class are private by default
class Car
{
private:
    string Color;
    double Price;

protected: // if protected it can be accessed in the derived classes
    bool isBroken;
    string Name;

public:
    // constructors are automatically called when you create an instance of a class
    // 1. no return type, 2. same name as class
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }

    // no need to say carInstance.Name since these are gotten directly in the class
    void getAttributes()
    {
        cout << "Name: " << Name << endl;
        cout << "Color: " << Color << endl;
        cout << "Price: " << Price << endl;
    }

    void setName(string name) { Name = name; }
    string getName() { return Name; }

    void crashCar()
    {
        cout << Name << " crashed" << endl;
        isBroken = true;
    }
    void repairCar()
    {
        cout << Name << " repaired" << endl;
        isBroken = false;
    }

    void move()
    {
        if (isBroken)
        {
            cout << Name << " is broken" << endl;
        }
        else
        {
            cout << Name << " is driving" << endl;
        }
    }
};

// FlyingCar -> Derived class, Car -> Base class
class FlyingCar : public Car
{ // public modifider means whatever is public in base will also be public in derived
public:
    FlyingCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    void move()
    {
        if (isBroken)
        {
            cout << Name << " is broken" << endl;
        }
        else
        {
            cout << Name << " is flying" << endl;
        }
    }
};

class UnderwaterCar : public Car
{ // public modifider means whatever is public in base will also be public in derived
public:
    UnderwaterCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    // overrides the base Car method
    void move()
    {
        if (isBroken)
        {
            cout << Name << " is broken" << endl;
        }
        else
        {
            cout << Name << " is diving" << endl;
        }
    }
};

int main()
{
    // not using constructor
    /*
    Car newCar;

    newCar.Name = "BMW";
    newCar.Color = "Blue";
    newCar.Price = 16000;

    cout << "Name: " << newCar.Name << endl;
    cout << "Color: " << newCar.Color << endl;
    cout << "Price: " << newCar.Price << endl;
    */

    // using constructor
    Car car1("Toyota", "Silver", 5000);
    car1.getAttributes();

    Car car2("Honda", "Blue", 15000);
    car2.getAttributes();

    car2.setName("New name");
    cout << car2.getName() << endl;

    car2.crashCar();
    car2.move();

    car2.repairCar();
    car2.move();

    FlyingCar flyingCar("Flying car 1", "Green", 160000);
    flyingCar.getAttributes();

    UnderwaterCar underwaterCar("Underwater car 1", "Blue", 200000);
    underwaterCar.getAttributes();

    // using pointers of objects
    Car *carPtr1 = &flyingCar;
    Car *carPtr2 = &underwaterCar;
    carPtr2->getAttributes();

    car2.move();
    underwaterCar.move();
    flyingCar.move();

    return 0;
}