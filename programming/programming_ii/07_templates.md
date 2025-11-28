# TEMPLATES
04-11-25

---

## Contents
- Introduction
- Generic Programming
- Function Overloading Recap
- Template Functions
- Template Classes
- Compile-Time Templates
- Tasks
- Summary

---

## Introduction
- In previous weeks, we explored **arrays** and **linked lists**.
- These are examples of **data structures** - different ways to organise data in memory.
- However, each version of a data structure (like `int`, `float`, or `double` arrays) required separate implementations.
- To make our code more **flexible and reusable**, C++ introduces **templates**.

---

## Generic Programming
### Motivation
- Instead of writing separate classes or functions for each data type (e.g. `int`, `double`, `char`), templates let us define **generic** code.
- Templates are the foundation of **generic programming** - code that works with any data type.

### Example Use Case
- Rather than defining multiple versions of a list for each data type:
  ```cpp
  list<int>
  list<double>
  list<string>
  ```
- We can define a single **template class** that works with **any type T**.

---

## Function Overloading Recap
- **Function overloading** allows multiple functions with the same name but different parameter types.
- Example:
  ```cpp
  float circleArea(float radius);
  double circleArea(double radius);
  long double circleArea(long double radius);
  ```
- Useful, but limited — requires separate definitions for each type.

---

## Template Functions
- Template functions solve this by letting the **compiler generate** the appropriate version automatically.

### Example
```cpp
template <class T>
T circleArea(T radius) 
{
    return 3.14159 * radius * radius;
}

int main() 
{
    double d = 3.4;
    float f = 2.1;
    cout << circleArea<double>(d) << ", " << circleArea<float>(f);
}
```

- The compiler automatically substitutes `T` with the correct type when called.

### Task 1
Write a **template function** that:
- Takes two numbers `a` and `b` as parameters.
- Returns the area of a rectangle with height `a` and width `b`.
- Test with `int`, `float`, and `double`.

> What happens when you pass a string?

---

## Template Classes
- Templates also work for **classes**, allowing them to handle any data type.

### Basic Syntax
```cpp
template <class T>
class Bag 
{
    T* data;
    
    public:
        Bag() {}
        // other methods...
};
```
- `T` acts as a **placeholder type** until the class is instantiated.

### Original (Non-Template) Example
```cpp
class dynArray 
{
    public:
        dynArray(int size): sz(size) { data = new int[sz]; }
        virtual ~dynArray() { if (data) delete[] data; }
        int& operator[](int idx) { return data[idx]; }
        int size() { return sz; }
    private:
        int* data;
        int sz;
};
```

### Template Version
```cpp
template<class T>
class dynArray 
{
    public:
        dynArray(int size): sz(size) { data = new T[sz]; }
        virtual ~dynArray() { if (data) delete[] data; }
        T& operator[](int idx) { return data[idx]; }
        int size() { return sz; }
    private:
        T* data;
        int sz;
};
```

### Usage Example
```cpp
int main() 
{
    dynArray<double> arr(10);
    arr[3] = 4.7;
    cout << arr[2];
    return 0;
}
```
- The compiler replaces `T` with the actual type (`double` in this case).

---

## Compile-Time Templates (Advanced Example)
C++ templates can even perform **compile-time computation** using **template recursion**.

### Factorial Example
```cpp
template <int N>
class FACTORIAL 
{
    public:
        static const int value = N * FACTORIAL<N - 1>::value;
};

template <>
class FACTORIAL<0> 
{
    public:
        static const int value = 1;
};

int main() 
{
    cout << FACTORIAL<5>::value; // Outputs 120
}
```
- Templates can define **compile-time constants**.
- Demonstrates **metaprogramming** in C++.

---

## Summary
- Templates make C++ code **generic**, **reusable**, and **type-safe**.
- **Template functions** allow generic operations for any type.
- **Template classes** allow creation of flexible data structures.
- **Compile-time templates** can compute values during compilation.
- Understanding templates is essential for modern C++ and the **Standard Template Library (STL)**.
