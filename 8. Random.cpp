#include <iostream>

void change(int *x)
{
    *x = 10;
}

int main()
{
    // int x = 5;
    int *x = new int(5); // problem with new keyword is that you are responsible for deallocating it in the heap

    std::cout << *x << std::endl;
    // change(&x);
    change(x);
    std::cout << *x << std::endl;

    delete x;

    return 0;
}