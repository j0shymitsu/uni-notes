// Write a program that:
//  - Outputs the ASCII code of all letters in the alphabet
//  - Identifies whether each is a vowel or consonant
//  - Use a for loop and an if/switch

#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII Values of alphabet letters (lowercase):\n" << endl;

    for (char c = 'a'; c <= 'z'; c++)
    {
        cout << c << ": " << static_cast<int>(c);

        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << " - vowel" << endl;
                break;
            default:
            cout << " - consonant" << endl;
        }
    }
}