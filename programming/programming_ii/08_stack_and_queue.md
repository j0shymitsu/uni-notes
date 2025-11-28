# STACKS AND QUEUES
N-D

---

## Contents

- Stacks and Queues Overview
- Stacks (LIFO)
- STL Stack Implementation
- Stack Quiz
- Queues (FIFO)
- STL Queue Implementation
- Queue Quiz
- The `empty()` Method
- Stack Functions on Vectors and Lists
- Lab Tasks

---

## Stacks and Queues Overview

- **Stacks and Queues** are simple data structures useful for implementing complex algorithms.
- Both allow access to **only one data item at a time**, unlike arrays and lists where you can access any element.
- They differ in **which item you can access**:
    - **Stacks**: Access the **last item inserted** (LIFO - Last In First Out)
    - **Queues**: Access the **first item inserted** (FIFO - First In First Out)
- These structures are fundamental in computer science and algorithm implementation.

---

## Stacks (LIFO)

### Concept

- A stack works like a **tube of tennis balls** — you can only remove the top ball, which is the last one you put in.
- Used in **computer architecture** to schedule function execution: the last function called must terminate before the preceding function can continue.
- Stack-like behaviour can be created using **recursion**.


### Key Operations

- **`push()`** — Place an item on the stack
- **`top()`** — View the last value pushed (without removing it)
- **`pop()`** — Remove a value from the stack

---

## STL Stack Implementation

```cpp
#include <stack>

int main()
{
    std::stack<double> s;
    //a stack of doubles
    
    s.push(12.34);
    //push means place an item on the stack
    
    s.push(11.23);
    
    std::cout << s.top();
    //output last value pushed
    
    s.pop();
    //pop means remove a value
    
    std::cout << s.top();
}
```

---

## Stack Quiz

**What will this code output?**

```cpp
int main()
{
    std::stack<int> st;
    for(int i=0; i<10; ++i)
        st.push(i*2);
    
    st.pop();
    std::cout << st.top() << "\n";      // Output 1
    std::cout << st.top() << "\n";      // Output 2
    
    st.pop();
    st.push(11);
    std::cout << st.top() << "\n";      // Output 3
    
    st.pop();
    std::cout << st.top() << "\n";      // Output 4
}
```

**Expected Output:**

```
16
16
11
14
```

- Loop pushes: 0, 2, 4, 6, 8, 10, 12, 14, 16, 18
- After first `pop()`: top is 16
- After second `pop()`: top is 14, then push 11
- Final `pop()` removes 11, revealing 14

---

## Queues (FIFO)

### Concept

- A queue works like a **real-world queue** — the first item in gets processed first, then the second, and so on.
- Items are added to the **back** and removed from the **front**.


### Key Operations

- **`push()`** — Place an item in the queue
- **`front()`** — View the first of remaining values queued (without removing it)
- **`pop()`** — Remove a value from the queue


### STL Queue Implementation

```cpp
#include <queue>

int main()
{
    std::queue<double> q;
    //a queue of doubles
    
    q.push(12.34);
    //push means place an item in the queue
    
    q.push(11.23);
    
    std::cout << q.front();
    //output first of remaining values queued
    
    q.pop();
    //pop means remove a value
    
    std::cout << q.front();
}
```

---

## Queue Quiz

**What will this code output?**

```cpp
int main()
{
    std::queue<int> q;
    for(int i=0; i<10; ++i)
        q.push(i*2);
    
    q.pop();
    std::cout << q.front() << "\n";     // Output 1
    std::cout << q.front() << "\n";     // Output 2
    
    q.pop();
    q.push(11);
    std::cout << q.front() << "\n";     // Output 3
    
    q.pop();
    std::cout << q.front() << "\n";     // Output 4
}
```

**Expected Output:**

```
2
2
4
6
```

- Loop pushes: 0, 2, 4, 6, 8, 10, 12, 14, 16, 18
- After first `pop()`: front is 2 (removed 0)
- After second `pop()`: front is 4 (removed 2), then push 11 to back
- Final `pop()` removes 4, revealing 6 (11 is still at back)

---

## The `empty()` Method

- Both **stacks and queues** have an `empty()` method that returns `true` if there are no items left.
- Useful for iterating through all remaining items:

```cpp
std::stack<int> st;
// put some things on the stack

while(!st.empty())
{
    std::cout << st.top();
    st.pop();
}
```

- Can be used to process all items until the structure is empty.

---

## Stack Functions on Vectors and Lists

### Vectors as Stacks

```cpp
std::vector<int> v(10);
v.push_back(3);         // push
int j = v.back();       // equivalent to top()
v.pop_back();           // pop
```


### Lists as Stacks or Queues

```cpp
std::list<int> l;
l.push_back(2);         // push to back
int j = l.front();      // access front
l.pop_front();          // pop from front

// A list lets you push/pop at both back and front,
// which makes queues possible!
```

- **Vectors and lists** have stack-like functions built in (`push_back`, `pop_back`, `back()`).
- **Lists** are particularly useful since they support operations at **both ends** (`push_back`, `push_front`, `pop_back`, `pop_front`), making them suitable for queue implementations.

---

## Summary

- **Stacks (LIFO)** — Last In First Out; access the most recently added item
- **Queues (FIFO)** — First In First Out; access the oldest item
- **STL provides `std::stack` and `std::queue`** for easy implementation
- **Key operations**: `push()`, `pop()`, `top()` (stack), `front()` (queue)
- **`empty()` method** allows safe iteration through all items
- **Vectors and lists** have built-in stack functions; lists are especially useful for queues
- Understanding stacks and queues is essential for algorithms, parsing, scheduling, and many other computer science applications