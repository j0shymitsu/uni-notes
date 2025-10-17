# C++ OVERVIEW
15-10-25

--- 

## Contents
- Introduction
- Structure of a Simple C++ Program
- Variables and Data Types
- Casting
- Scope
- Control Structures
  - Selection
  - Iteration
- Arrays
- Summary

---

## Introduction
- C++ programs consist of **functions**, starting with a `main()` function.
- Unlike Java, C++ does **not** require all functions to be inside a class.
- Input/output is handled using **`cin`** and **`cout`** with the `>>` and `<<` operators.
- `cout` sends data to the console, `cin` receives it from the user.

---

## Structure of a Simple C++ Program
```cpp
#include <iostream>
using namespace std;

int main() 
{
    cout << "Please enter a number" << endl;
    int myNumber;
    cin >> myNumber;
    cout << "You entered " << myNumber;
    return 0;
}
```
- Demonstrates basic input/output.
- The `main()` function is where execution begins.
- Multiple `<<` and `>>` operators can be chained for convenience.

---

## Variables and Data Types
- Programs store and process **data** using **variables**.
- Each variable has:
  - A **name** (identifier).
  - A **type** (defines how data is interpreted).

### Example
```cpp
int Bill;
```

### Common Primitive Types
- `int` — integers
- `double` — floating point numbers
- `char` — single characters
- `bool` — true/false values

---

### Big List of Data Types
- Variants exist based on **size** and **sign**:
  - `unsigned int` - positive numbers only
  - `short`, `long`, `long long` - different storage sizes
- The more bytes used, the larger the representable range.

---

## Casting
- Casting tells the compiler to treat one data type as another.

### Example (Old Style)
```cpp
char letter = 'a';
int ascii = (int) letter;
cout << "ASCII code for a is: " << ascii;
```

### Modern C++ Style
```cpp
char letter = 'a';
int ascii = static_cast<int>(letter);
cout << "The ASCII code of a is: " << ascii;
```

- `static_cast<>()` is preferred in modern C++.

---

## Scope
- Variables exist only within the **block** they are declared in.
```cpp
{
    int myVariable;
    // accessible here
}
// myVariable no longer accessible
```
- If used outside their scope, a **compiler error** occurs.
- To use data outside its scope, **pass it as a parameter**.

> **Tip:** Always use indentation for readability.

---

## Control Structures
Control structures control **execution flow** based on conditions.
Two main types:
1. **Selection** – chooses between options (`if`, `switch`).
2. **Iteration** – repeats actions (`while`, `for`, `do-while`).

### Example – if/else
```cpp
if (condition) 
{
    // do this if condition is true
} 
else 
{
    // do this if condition is false
}
```

### Example – switch
```cpp
switch(variable) 
{
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    default: cout << "Other";
}
```

### Example – for loop
```cpp
for (int i = 0; i < 10; ++i) 
{
    cout << i << endl;
}
```

### Example – while loop
```cpp
while (condition) 
{
    // repeat while condition true
}
```

### For Loop as While Equivalent
```cpp
initialise;
while (condition) 
{
    // code here
    inc;
}
```

---

## Arrays
- An **array** stores multiple values of the **same type**.
- Each element is accessed by an **index (starting at 0)**.

### Example
```cpp
int numbers[10];
numbers[0] = 5;
numbers[1] = 10;
```

### Using Loops with Arrays
```cpp
for (int i = 0; i < 10; ++i) 
{
    numbers[i] = 42;
}

for (int i = 0; i < 10; ++i) 
{
    cout << numbers[i] << ", ";
}
```

> Accessing outside the array bounds causes **undefined behaviour**.

---



---

## Summary
- **C++ control structures** determine program flow.
- **Variables** store data, **scope** limits visibility.
- **Casting** converts between data types safely.
- **Arrays** hold multiple related values.
- Practising with loops and conditions builds a strong foundation for programming in C++.
