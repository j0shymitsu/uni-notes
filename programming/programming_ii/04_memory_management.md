# MEMORY MANAGEMENT  
N-D

---

## Contents
- Allocating Memory
- The Stack and the Heap
- Deallocation
- Quick Quiz
- Class-Based Memory Management
- Dynamic Array Class
- Resizing a Dynamic Array
- Example Usage
- Summary

---

## Allocating Memory
- To allocate dynamic memory in C++, declare a pointer that will store the address of the first element of a memory block.   
- The pointer has a type that specifies what kind of data the block will hold, for example `int* data;` for integers.   
- Use the `new` operator with array notation to allocate a block of memory, for example `int* data = new int[57];` allocates space for 57 integers.   
- Elements in this block can be accessed using array indexing syntax, such as `data[9] = 7;`.   

---

## The Stack and the Heap
- Fixed-size (non-pointer) arrays and normal local variables are often called static arrays and live on the stack.   
- Pointer-based arrays created with `new` are dynamic arrays and live on the heap, which allows their size to be chosen or changed at runtime.   
- The stack is relatively small; placing too much data on it can cause a stack overflow, in which case data should be allocated on the heap instead.   

---

## Deallocation
- Memory for stack variables and static arrays is automatically released when the function in which they are defined returns.   
- Heap memory is not freed automatically, so manually release it with `delete` to avoid memory leaks.   
- When deleting a dynamically allocated array, use `delete[]` to indicate that the whole array should be deallocated, not just the first element.   
- Example:  
  - `double* myNumbers = new double[75];`  
  - `// use myNumbers`  
  - `delete[] myNumbers;`   

---

## Quick Quiz
- Consider:  
  ```cpp
  int main()
  {
      int arr[] = {1,2,3,4};
      double darr[10];
      float* farr = new float[4];
      delete[] farr;
      return 0;
  }
  ```
- Questions (stack or heap):  
  - `arr[3]` lives in a stack-allocated array.   
  - `farr[0]` lives in a heap-allocated array.   
  - `darr[4]` lives in a stack-allocated array.   

---

## Class-Based Memory Management
- Classes often allocate dynamic memory in their constructor and deallocate it in a destructor.   
- A destructor has the same name as the class but is prefixed with `~`, for example `~dynArray()`.   
- Destructors are frequently declared `virtual` so that derived classes can provide their own cleanup logic when they allocate additional resources.   
- This design pattern, where resources are acquired and released based on object lifetime, is called scope-based resource management (SBRM).   

---

## Dynamic Array Class
- A sample class `dynArray` encapsulates a dynamically allocated array and its size.   
- It provides:  
  - A default constructor setting the pointer to `0` and size to `0`.   
  - A constructor that takes an integer size and allocates an array with `new int[sz];`.   
  - A `virtual` destructor that checks the pointer and frees the array with `delete[] data;`.   
  - An overloaded `operator[]` returning a reference to allow array-style access, and a `size()` method to return the array size.   

---

## Resizing a Dynamic Array
- The `dynArray` class can be extended with a `resize(int newSize)` method to change the number of elements at runtime.   
- The method typically:  
  - Allocates a new block with `new int[newSize];`.  
  - Copies existing elements from the old block to the new one using a loop.  
  - Frees the old block with `delete[] data;`.  
  - Updates the internal pointer to refer to the new block and sets `sz` to `newSize`.   
- A guard can ensure that resizing only happens when `newSize` is greater than the current size.   

---

## Example Usage
- Using `dynArray` in `main` might look like:  
  - Construct `dynArray arr(10);`.  
  - Assign `arr[3] = 4;` and read `cout << arr[2];` using the overloaded `operator[]`.   
- After calling `arr.resize(20);`, the array now has room for more elements, and new values can be read or written, for example `cin >> arr[13];`.   
- No manual `delete[]` is needed in `main` because the `dynArray` destructor automatically frees the internal array when `arr` goes out of scope.   

---

## Summary
- Dynamic memory in C++ is managed on the heap using `new` for allocation and `delete`/`delete[]` for deallocation.   
- Stack memory is automatically freed when scope ends, whereas heap memory must be explicitly released to avoid leaks.   
- Classes can encapsulate memory management in constructors and destructors, making code safer than working with raw pointers everywhere.   
- Resizing a dynamic array involves allocating a new block, copying data, deleting the old block, and updating the stored pointer and size.   



