# ALGORITHMS  
N-D

---

## Contents
- Introduction to Algorithms  
- Reversing an Array  
- Finding Max/Min  
- Searching: Linear vs Binary  
- Binary Search Algorithm  
- Logarithmic Time  
- `<algorithm>` Overview  
- `find` and `binary_search`  

---

## Introduction to Algorithms
- An **algorithm** is a precisely defined process to solve a problem.  
- We use simple algorithms all the time to **reorganise** or **locate** items.  
- Today’s focus (with arrays/collections):  
  - Reversing elements.  
  - Finding maximum / minimum.  
  - Searching for a target value.  
- We’ll also see how these appear in the C++ **`<algorithm>`** header.

---

## Reversing an Array
Common strategies:

- **Copy to a second array (back → front)**  
  - Start at the **end** of the original array.  
  - Copy each element to the **front** of a new array, moving forwards.  

- **Use a stack**  
  - Push all elements onto a stack.  
  - Pop them off, writing back into the array → order is reversed.  

- **Two-pointer in-place swap** (most common)  
  - Have `left` at start, `right` at end.  
  - Swap `A[left]` and `A[right]`.  
  - Move `left++`, `right--`.  
  - Stop when `left >= right`.

---

## Finding Max/Min
- Goal: find the **largest** or **smallest** element in a collection.  
- Basic idea:  
  - Assume first element is current **best**.  
  - Scan through the array:  
    - If `A[i] > current_max`, update `current_max`.  
    - Similarly for `current_min`.  
- This is a **simple linear scan**: each element is inspected once.  

---

## Searching: Linear vs Binary
Two scenarios:

- **Unordered data**  
  - No sorting; items are in arbitrary order.  
  - Natural approach: **linear search** (check each element until match or end).  

- **Ordered data**  
  - Elements sorted (e.g. telephone book by surname).  
  - We can do **better** than linear search.  
  - Use comparisons (`<`, `>`) to **eliminate half** the remaining candidates each time → **binary search**.

---

## Binary Search Algorithm
To find item `i` in sorted array `A` of size `n`:

1. Look at the **middle** element.  
2. If middle element `< i`:  
   - Search **right half** only.  
3. If middle element `> i`:  
   - Search **left half** only.  
4. Otherwise:  
   - Middle element equals `i` → **found**.  
5. Repeat on the chosen half until item is found or the range is empty.

---

## Logarithmic Time
- Binary search is faster than **O(n)** but slower than **O(1)**.  
- Key question:  
  - How many times can we divide `n` by 2 until it becomes ≤ 1?  
- This is: find `k` such that \(2^k = n\).  
  - Answer: \(k = \log_2 n\).  
- So binary search runs in **O(log n)** time.  
- In Big-O, we usually just write **`O(log n)`**, base doesn’t matter.

---

## `<algorithm>` Overview
The C++ `<algorithm>` header provides many standard algorithms, including:

- **`std::max_element` / `std::min_element`**  
  - Find the **iterator** to the maximum / minimum element in a range.  
  - You must **dereference** the iterator to get the value.  
  ```cpp
  std::vector<int> data = {1,2,3,5,9,13,46,78};
  std::cout << *std::max_element(data.begin(), data.end()) << " ";
  std::cout << *std::min_element(data.begin(), data.end());
  ```

- **`std::reverse`**  
  - Reverses items in-place between two iterators.  
  ```cpp
  std::reverse(data.begin(), data.end());
  ```

---

## `find` and `binary_search`
- **`std::find`** (for unsorted or sorted ranges):  
  - Returns an **iterator** to the first element equal to the target,  
    or `end` if not found.  
  ```cpp
  if (std::find(data.begin(), data.end(), 12) != data.end())
      std::cout << "data contains a 12";
  ```

- **`std::binary_search`** (for **sorted** ranges only):  
  - Returns a **bool**: `true` if an element equal to the target exists.  
  ```cpp
  if (std::binary_search(data.begin(), data.end(), 12))
      std::cout << "data contains a 12";
  ```

