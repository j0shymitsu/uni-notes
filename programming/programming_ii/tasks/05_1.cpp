// Write a program that asks the user to enter a series of strings and store them in an STL vector

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    string word;
    vector<string> words;

    while (word != "exit")
    {
        cout << "Enter a word: (Type 'exit' in lowercase to exit)" << endl;
        cin >> word;
        words.push_back(word);
    }

    for (size_t i = 0; i < words.size() - 1; i++)
    {
        cout << words[i] << " ";
    }
    
    return 0;
    
}