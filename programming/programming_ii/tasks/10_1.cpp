#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> scores;    // max-heap of ints
    int score;

    cout << "Enter 5 scores:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Score " << (i + 1) << ": ";
        cin >> score;

        // Push the new score into the heap
        scores.push(score);             // O(log n) insert into priority_queue

        // Top of heap always highest score
        cout << "Current high score: " << scores.top() << "\n";    // O(1)
    }

    return 0;
    
}