#include <iostream>
using namespace std;

// In this, the outer loop runs over the first array, and the inner loop over the second.
// Therefore, time complexity is O(nm). If both arrays are the same length, that is O(n^2)

int main()
{
    int nums[8] = {4, 14, 50, 102, 115, 33, 70};
    int nums_two[8] = {5, 18, 25, 2, 8, 11, 19, 101};

    for (size_t i = 0; i < (sizeof(nums) / sizeof(nums[0])) - 1; i++)
    {
        for (size_t j = 0; j < (sizeof(nums_two) / sizeof(nums_two[0])) - 1; j++)
        {
            if (nums[i] % nums_two[j] == 0)
            {
                cout << nums[i] << " is divisible by " << nums_two[j] << endl;
            }
        }
    }
}
