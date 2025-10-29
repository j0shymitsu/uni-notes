#include <iostream>
using namespace std;

// This is a constant-time operation (O(1)): the entire programs complexity is constant.
// This is regardless of input size.

bool divisible_by_seven(int num_to_check);

int main()
{
    int test_num = 14;
    int test_num_2 = 18;

    cout << divisible_by_seven(test_num) << endl;
    cout << divisible_by_seven(test_num_2) << endl;

    return 0;
}

bool divisible_by_seven(int num_to_check)
{
    return num_to_check % 7 == 0;
}