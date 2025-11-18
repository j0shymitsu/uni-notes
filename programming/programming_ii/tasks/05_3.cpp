// Write a function that accepts a collection (array or list) of integers and inserts the **square of each integer** immediately after it.

#include <iostream>
#include <vector>
#include <list>
#include <cmath>
using namespace std;

vector<int> return_squares_vec(vector<int> int_list);
list<int> return_squares_list(list<int> int_list);

int main()
{
    vector<int> vec_to_square = {2, 5, 7, 10};
    list<int> list_to_square = {3, 6, 9, 12};

    vector<int> vec_result = return_squares_vec(vec_to_square);
    list<int> list_result = return_squares_list(list_to_square);

    for (int x : vec_result)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int x : list_result)
    {
        cout << x << " ";
    }
    cout << endl;  
    
    return 0;
}

vector<int> return_squares_vec(vector<int> int_list)
{
    vector<int> list_with_squares = int_list;

    for (size_t i = 0; i < list_with_squares.size(); i += 2)
    {
        int square = pow(list_with_squares[i], 2);
        list_with_squares.insert(list_with_squares.begin() + i + 1, square);
    } 

    return list_with_squares;
}

list<int> return_squares_list(list<int> int_list)
{
    list<int> list_with_squares = int_list;
    list<int>::iterator i = list_with_squares.begin();

    while (i != list_with_squares.end())
    {
        int square = pow(*i, 2);
        i = list_with_squares.insert(++i, square);
        ++i;
    }

    return list_with_squares;
}