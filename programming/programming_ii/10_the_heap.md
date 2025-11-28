# THE HEAP
N-D

---

## Contents
- Introduction to Heaps
- Binary Heaps
- Heap Insertion
- Extracting the Minimum
- Time Performance
- Array Implementation
- STL Priority Queue
- Heap Sort
- Summary  

---  

## Introduction to Heaps
- A **heap** is a partially sorted data structure that ensures the largest or smallest item is always at the root (top).   
- The rest of the elements may be in any order, but the structure maintains a specific **heap property**.   
- Heaps are useful for sorting algorithms and tasks like finding shortest paths in networks or maps.   
- Note: This "heap" (data structure) is different from "the heap" (dynamic memory area in C++).   
- The most common type is a **binary heap**, similar to a binary search tree but with relaxed ordering.   

---  

## Binary Heaps
- In a **binary heap**, each node is smaller than or equal to its children (in a min-heap) or larger (in a max-heap).   
- This relationship is called the **heap property**: every parent is greater than or equal to its children (min-heap) or less than or equal to them (max-heap).   
- The root is always the minimum (min-heap) or maximum (max-heap).   
- A max-heap reverses the comparison: parents are greater than children, so the root holds the largest value.   

---  

## Heap Insertion
- To insert a new item, place it at the last available position (bottom row, leftmost if needed).   
- Compare it with its parent: if it violates the heap property (e.g., smaller than parent in min-heap), swap them.   
- Repeat swapping upward until the property holds (the item **percolates up**).   
- This maintains the heap structure after addition.   

---  

## Extracting the Minimum
- To remove the root (minimum in min-heap), move the last element to the root position.   
- Compare the new root with its children: if it violates the heap property (e.g., larger than smallest child), swap with the smallest child.   
- Repeat swapping downward until the property holds (the item **percolates down**).   
- This restores the heap after extraction.   

---  

## Time Performance
- Heaps form a **compact binary tree**: each level fills completely before the next, so tree depth is logarithmic in the number of elements.   
- Adding a new level doubles the capacity (roughly 2^n nodes).   
- Insertion and extraction take **O(log n)** time due to the limited depth of swaps needed.   
- This efficiency makes heaps suitable for frequent insert/extract operations.   

---  

## Array Implementation
- Heaps can be stored in a **single array** instead of a linked tree, saving space and simplifying access.   
- Index the array starting from 1 (root at 1):  
  - Parent of node i is at i / 2 (integer division).  
  - Children of i are at 2*i and 2*i + 1.   
- Levels start at powers of 2: row 1 at index 1, row 2 at 2-3, row 3 at 4-7, etc.   
- This allows quick navigation without pointers.   

---  

## STL Priority Queue
- C++ STL implements heaps as **`std::priority_queue`** in `<queue>`.   
- By default, it's a max-heap (largest at top, accessed via `top()`).   
- Use `push(value)` to insert and `pop()` to remove the top.  

Example:
```cpp
#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> q;
    for (int i = 0; i < 12; ++i)
        q.push(rand() % 20);
    while (!q.empty()) {
        cout << q.top() << ", ";
        q.pop();
    }
    return 0;
}
```
- Output shows items in descending order (max first).   

---  

## Heap Sort
- **Heap sort** uses a heap to sort: build a heap from all elements, then repeatedly extract the min/max to a new array.   
- Each insert takes O(log n), and there are n inserts/extracts, so overall time is **O(n log n)**.   
- This is optimal for general-purpose sorting (though specialized cases like integer sorts can be faster).   
- For in-place version: use the array implementation, swap extracted items to the end of the array, and shrink the heap size.   

---  

## Summary
- Heaps maintain partial order with the extremum (min/max) at the root via the heap property.   
- Insertions percolate up and extractions percolate down, both in O(log n) time.   
- Array storage uses index math: parent at i/2, children at 2i and 2i+1.   
- STL `priority_queue` provides a max-heap by default; heap sort achieves O(n log n) efficiency. 

