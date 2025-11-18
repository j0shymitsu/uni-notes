# ARRAYS & LINKED LISTS
N-D

## Contents
- Introduction
- Arrays
- Linked Lists
- Linked List Insertion and Removal
- Doubly and Circular Linked Lists
- The Standard Template Library (STL)
- Iterators in the STL
- Summary
- Practical Tasks

---

## Introduction
- Both **arrays** and **linked lists** are fundamental data structures used for storing collections of elements.
- They differ in **memory layout**, **performance**, and **operations**.
- Understanding both is key to choosing the right data structure for a given problem.

---

## Arrays
### What is an Array?
- An **array** is a **contiguous block of memory** containing multiple data items of the same type.
- Each element is accessed using an **index**.

### Strengths
- **Random access:** Constant time lookup (`O(1)`).
- **Simple structure:** Easy to locate and update items.

### Weaknesses
- **Resizing:** Requires reallocating memory and copying all elements.
- **Insertion/removal:** Expensive when done at the start or middle (`O(n)`).
- **Fixed size:** Usually declared with a predefined length.

---

## Linked Lists
### Overview
- A **linked list** is a collection of **nodes**, where each node contains:
  - **Data**, and
  - A **pointer** to the next node.
- The list begins at a pointer called the **head**, and the last node points to `NULL`.

### Advantages
- Nodes can be **anywhere in memory**.
- **Easy to insert or remove** elements - just change pointers.
- **No need to reallocate** large blocks of memory.

---

## Linked List Insertion and Removal
### Insertion
To insert a node `B` after node `A`:
1. Make `B`'s pointer equal to `A`'s pointer.
2. Set `A`'s pointer to `B`.

- If `B` is added at the end, its pointer will be `NULL`.
- This operation is **O(1)** - constant time.

### Removal
To remove a node `B`:
1. Set `A`'s pointer to `B`'s next pointer.
2. Optionally deallocate `B`’s memory.

- Preserves `NULL` if the last node is deleted.
- Also **O(1)** - very efficient.

### Drawback
- **Accessing an element** from only the head pointer is **O(n)**, since each node must be followed sequentially.

---

## Doubly and Circular Linked Lists
### Doubly Linked List
- Each node has two pointers:
  - One to the **next** node.
  - One to the **previous** node.
- Makes it easier to traverse **backwards** or remove elements efficiently.

### Circular Linked List
- The **last node points back to the head**, forming a continuous loop.
- Useful for **round-robin** style operations (e.g., scheduling, buffering).

---

## The Standard Template Library (STL)
- The **C++ STL** provides built-in **template classes** for data structures:
  - `std::vector<T>` - dynamic array.
  - `std::list<T>` - doubly linked list.
  - Other containers include **stacks**, **queues**, **trees**, and **hash tables**.

### Usage
```cpp
#include <vector>
#include <list>
using namespace std;
```

- `vector` and `list` can store **any data type** using templates.

---

## Vector Example
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<double> arr(10); // 10 elements
    arr[3] = 4.7;
    cout << arr[2];
    arr.resize(24);
    cin >> arr[21];
    return 0;
}
```
- Supports **random access** and **resizing**, though resizing is slower.

---

## List Example
```cpp
#include <iostream>
#include <list>
using namespace std;

int main() 
{
    list<double> listy;
    listy.push_back(21.34); // insert at end
    listy.push_back(13.2);
    return 0;
}
```
- Efficient for **insertion/removal** at any point.
- No direct index access; use **iterators**.

---

## Iterating Across Vectors and Lists
### Vector Iteration
```cpp
vector<int> vec;
for (int i = 0; i < vec.size(); ++i) 
{
    // process vec[i]
}
```

### List Iteration
```cpp
list<int> lst;
for (list<int>::iterator i = lst.begin(); i != lst.end(); ++i) 
{
    cout << *i << endl;
}
```

- Iterators provide a **universal way** to traverse STL containers.

---

## STL Iterators
- Every STL container defines an **iterator** type: `container_type::iterator`.
- Containers provide:
  - `begin()` - points to the first element.
  - `end()` - points past the last element.
- Enables writing **generic algorithms** that work across different data structures.

---

## Summary
- **Arrays** → Fast access/modification, but slow insert/remove.
- **Lists** → Slow access, but fast insert/remove.
- **STL Templates** → Allow flexible, reusable data structures.
- Iterators and template parameters make STL containers **powerful and generic**.

---

### Task 2
Write a function that accepts a collection (array or list) of integers and inserts the **square of each integer** immediately after it.

Example:
```
[1, 3, 2, 5] → [1, 1, 3, 9, 2, 4, 5, 25]
```

Which data structure (array or list) performs better and why?
