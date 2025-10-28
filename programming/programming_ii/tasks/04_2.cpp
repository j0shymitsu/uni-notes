#include <iostream>
using namespace std;

int main()
{
    int nums[8] = {4, 14, 50, 102, 115, 33, 70, '\0'};

    for (size_t i = 0; i < (sizeof(nums) / sizeof(nums[0])) - 1; i++)
    {
        if (nums[i] % 7 == 0)
        {
            cout << nums[i] << " is divisible by 7." << endl;
        }
    }
}