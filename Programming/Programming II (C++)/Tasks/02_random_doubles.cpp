// Write a program to;
//  - Create an array of 20 doubles.
//  - Assign random values between 0 and 1 using `rand()`.
//  - Count how many are below 0.5.
//  - Then (in one line) count how many are ≥ 0.5.

#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    double nums[20];
    int below_half = 0;
    
    for (int i = 0; i < 20; i++)
    {
        nums[i] = (static_cast<double>(rand()) / (RAND_MAX + 1.0));
        if (nums[i] <= 0.5) { below_half++; };
    }    
    
    cout << "Random number list:\n" << endl;

    for (int i = 0; i < 20; i++)
    {
        cout << nums[i] << endl;
    }

    cout << "\nNumbers in the list below 0.5: " << below_half << endl;

    return 0;
}