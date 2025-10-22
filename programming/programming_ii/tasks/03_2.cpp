#include <iostream>
using namespace std;

int main()
{
    int b = 27;
    int * ptr;      // pointer to an int
    ptr = &b;       // store b's address using ptr

    cout << "The address of b is: " << ptr;
    cout << "\nThe value of b is: " << b << endl;

    return 0;
}