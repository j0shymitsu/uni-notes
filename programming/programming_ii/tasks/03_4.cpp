#include <iostream>
using namespace std;

void half_value(int n)
{
    n /= 2;
}

void half_reference(int& n)
{
    n /= 2;
}

void half_pointer(int* n)
{
    *n /= 2;    // Must dereference pointer to access value
}

int main()
{
    int number = 10;

    half_value(number);         // Doesn't alter "number" as outside function scope
    cout << number << endl;
    
    half_reference(number);
    cout << number << endl;

    half_pointer(&number);      // Must pass the address of the number
    cout << number << endl;

    return 0;
}