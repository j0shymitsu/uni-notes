# DICTIONARIES
N-D

---

## Contents

- Keys and Values
- Dictionaries
- Binary Search Trees
- BST Keys
- BST Depth
- Hash Tables
- STL Dictionaries
- Examples
- Recap
- Tasks

---

## Keys and Values

- Arrays (e.g., `std::vector`) work very well when data is indexed by **continuous numeric indices** from `0` to `n-1`:

```cpp
std::vector<stuff> arr(n);
arr[1] = stuffInstance;         // assign the second item
std::cout << arr[6];            // output the seventh item
```

- But when we want to index data by:

    - names
    - non-continuous numbers
    - arrays become ineffective.
- Ideally, we want to look up values like:

```cpp
telephoneNumber["Mary Johnson"] = "01244 654356";
```

---

## Dictionaries

A **dictionary** enables key -> value lookups and is typically implemented in two ways:

1. **Binary Search Tree (BST)**

   - Stores items in a **sorted tree** structure.
   - Searching involves repeatedly comparing keys (similar idea to binary search).
   - Good **worst-case** efficiency, but average case varies.

2. **Hash Table**

   - Converts keys into array indices using a **hash function**.
   - Collisions are handled by chaining items in a linked list.
   - Good **average-case** efficiency, but worst case can degrade.

---

## Binary Search Trees

- A BST resembles a linked list, but each node has **two children**.
- Data are sorted left -> right.
- To search for a key `k`:

  1. Start at the root.
  2. While current key ≠ k:

     - If `key < k`, move to the **right child**
     - Else, move to the **left child**
     - If the required child doesn’t exist, the key is absent.
- Benefits:

  - Can use **any sortable data type** as keys.
  - Offers a middle ground between arrays and linked lists.

---

## BST Keys

- Operations such as insert, remove, and lookup take time **proportional to the tree depth**.
- The depth should grow **slowly** as the number of items increases.
- To maintain efficiency:

  - Ensure no branch becomes too deep.
  - A robust BST is **self-balancing**, reorganising itself on inserts/removals.
  - Balanced BST operations are typically **O(log n)**.

---

## BST Depth

- **Worst case**: a skewed tree (essentially a linked list).
- **Best case**: perfectly balanced tree with minimal depth.

---

## Hash Tables

- A hash table is essentially an **array of linked lists**.
- Insertion steps:

  1. Hash the key to generate an integer `k` in `0..arraySize-1`.
  2. Insert the item into the linked list at index `k`.
- Lookup:

  - Hash the key again and search only the list at the resulting index.
- Efficiency characteristics:

  - **Insertion:** constant time.
  - **Access/removal:** worst-case linear (if all keys collide).
  - Good hash functions aim for **even distribution** to avoid collisions.

---

## STL Dictionaries

- C++ STL provides two dictionary data structures:

  - `map` -> **BST**
  - `unordered_map` -> **Hash Table**
- Header files:

  - `#include <map>`
  - `#include <unordered_map>`
- Note: `unordered_map` requires support for C++11 (C++0x).

---

## Examples

- Binary Tree
```cpp
    #include <iostream>
    #include <map>
    #include <string>

    int main()
    {
        std::map<std::string, std::string> mappy;

        mappy["fred"]="horse";
        mappy["jemima"]="dog";
        mappy["arthur"]="sheep";
        std::cout << mappy["jemima"];

        return 0;
    }
```
- Hash Table
```cpp
    #include <iostream>
    #include <unordered_map>
    #include <string>

    int main()
    {
        std::unordered_map<std::string, std::string> mappy;

        mappy["fred"]="horse";
        mappy["jemima"]="dog";
        mappy["arthur"]="sheep";
        std::cout << mappy["jemima"];

        return 0;
    }
```

## Recap

- Dictionaries allow indexing data by **non-integer, non-sequential keys**.
- Implementations:

  - **BSTs:** best worst-case efficiency; internally sorted.
  - **Hash tables:** best average-case efficiency; not sorted.
- STL provides:

  - `map` = BST
  - `unordered_map` = Hash Table
- Further documentation:

  - C++ reference for `map`
  - C++ reference for `unordered_map`


