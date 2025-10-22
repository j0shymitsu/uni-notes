#include <iostream>
using namespace std;

int main()
{
    int b = 27;
    int* ptr;

    cout << "Address of ptr is: " << ptr;
    cout << "\nValue pointed to is: " << *ptr << endl;

    return 0;
}