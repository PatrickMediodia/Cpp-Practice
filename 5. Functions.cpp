#include<iostream>

using namespace std;

//function declaraction
float sum(float num1, float num2);  //function that returns a value
//default value of age is 0
void introduceMe(string name, int age=0); //function that does not return a value

int main()
{
    cout << sum(1.1,2.2) << endl;
    introduceMe("Patrick", 22);
    introduceMe("Job");
    return 0;
}

//function definition, comes after main function
float sum(float num1, float num2)
{
    return num1 + num2;
}

void introduceMe(string name, int age)
{
    cout << "My name is " + name << endl;
    cout << "My age is " << age << " years old" << endl;
}
