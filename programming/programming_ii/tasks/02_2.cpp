#include <iostream>
using namespace std;

void print1()
{
    cout << "S";
}

int print2(int x)
{
    cout << "H";
    return x-2;
}

void print3(int z)
{
    int y = print2(4);

    for (int i = 0; i < y + z; ++i)
    {
        cout << "Q";
    }
}

int main()
{
    cout << "A";

    print3(4);
    print2(3);
    print1();

    return 0;
}