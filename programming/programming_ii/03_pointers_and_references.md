# C++ POINTERS AND REFERENCES  
22-10-25  

---

## Contents
- Introduction
- Outputting the Address of a Variable
- Storing Addresses
- Dereferencing
- Value and Reference Semantics
- Syntax
- Example: Value, Reference, and Pointer Passing
- Practical Usage
- Summary

---

## Introduction
- All variable names are **labels** that refer to an **address in memory**.  
- The data assigned to a variable is stored in an **address** in the computer’s memory during execution.  
- You can use C++ to:
  - Find out the **addresses** of variables.
  - **Manipulate** them for advanced operations.
- **Pointers** are special variables that store memory addresses.

---

## Outputting the Address of a Variable
- A computer’s memory is addressed **numerically**.
- Depending on the architecture, addresses are:
  - **32-bit** or **64-bit** numbers.
  - Each address identifies **one byte** of memory.
- In C++, use the **`&` operator** to access a variable’s address.

### Example
```cpp
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int b = 27;
    cout << "The address of b is: " << &b;
    cout << "\nThe value of b is: " << b;
    return 0;
}
```

- This program outputs both the **address** and **value** of `b`.  
- In some systems, the memory addresses shown may be shortened or offset.

---

## Storing Addresses
- Some variables store the **addresses of other variables** - these are **pointers**.  
- Pointers are declared using the **`*` operator**.

### Example
```cpp
int main()
{
    int b = 27;
    int* ptr;      // a pointer to an int
    ptr = &b;      // store b's address in ptr

    cout << "The address of b is: " << ptr;
    cout << "\nThe value of b is: " << b;

    return 0;
}
```

- `ptr` now **points** to the memory location of `b`.  
- The value stored in `ptr` is the **address** of `b`.

---

## Dereferencing
- We can access the **value** of a variable using only a **pointer** to it.  
- This is called **dereferencing**.

### Example
```cpp
#include <iostream>
using std::cout;

int main()
{
    int b = 27;
    int* ptr = &b;

    cout << "Address of b is: " << ptr;
    cout << "\nValue of b is: " << *ptr;
    return 0;
}
```

- `*ptr` means “the value at the address stored in `ptr`.”  
- **Dereferencing** allows access to the original data through its pointer.  
- You must ensure the pointer **actually points** to a valid address before dereferencing it.

### Dangerous Example
```cpp
int b = 27;
int* ptr;

cout << "Value of ptr is: " << ptr;
cout << "\nValue pointed to is: " << *ptr;      // undefined behaviour
```

- Dereferencing an **uninitialized pointer** leads to **crashes** or **unpredictable behaviour**.

---

## Value and Reference Semantics
When passing parameters to functions, C++ offers **three methods**:

1. **Pass by Value** - copies the value; the function works with its own copy.  
2. **Pass by Reference** - passes the variable’s **address**; changes affect the original.  
3. **Pass by Pointer** - similar to reference, but more flexible (the pointer itself can be changed).

---

## Syntax
### Pass by Value
```cpp
void myFunction(int this, double that);
```

### Pass by Reference
```cpp
void myFunction(int& this, double& that);
```

### Pass by Pointer
```cpp
void myFunction(int* this, double* that);
```

- `&` = reference (alias to existing variable).  
- `*` = pointer (stores address, must be dereferenced to access value).

---

## Example: Value, Reference, and Pointer Passing
```cpp
void halfValue(int n)
{
    n /= 2;
}

void halfReference(int& n)
{
    n /= 2;
}

void halfPointer(int* n)
{
    *n /= 2;    // must dereference pointer to access value
}

int main()
{
    int number = 10;
    halfValue(number);
    cout << number << "\n";

    halfReference(number);
    cout << number << "\n";

    halfPointer(&number);   // must pass address
    cout << number << "\n";
}
```

- `halfValue()` → no effect on `number`.  
- `halfReference()` → modifies `number` directly.  
- `halfPointer()` → also modifies `number`, but requires address as input.


---

## Practical Usage
- **Pass by reference** or **pointer** when you want a function to:
  - Modify external variables.
  - Return **multiple outputs**.
  - Avoid copying **large data structures**.
- You can also use **`const` references** to prevent modification:
  ```cpp
  void display(const std::string& name);
  ```

- This improves **efficiency** and **clarity** in code.

---

## Summary
- Every variable refers to an **address in memory**.  
- **Pointers** store these addresses; **dereferencing** accesses their values.  
- **Pass by value** copies data, while **references** and **pointers** allow direct access.  
- Using references and pointers efficiently is key to mastering **C++ memory management**.  
