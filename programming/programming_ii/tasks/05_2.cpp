// Write a program that asks the user to enter a series of strings and store them in an STL list

#include <list>
#include <iostream>
using namespace std;

int main()
{
    string word;
    list<string> words;

    while (word != "exit")
    {
        cout << "Enter a word: (Type 'exit' in lowercase to exit)" << endl;
        cin >> word;
        words.push_back(word);
    }

    for (list<string>::iterator i = words.begin(); i != words.end(); i++)
    {
        cout << *i << " ";
    }
    
    return 0;
    
}