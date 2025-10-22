# C++ FUNCTIONS AND CLASSES  
17-10-25 

---

## Contents
- Code Reuse
- Functions
- Order of Execution
- Classes
- Declaring Attributes and Behaviours
- Implementing Member Functions (Methods)
- Instantiating and Using Objects
- Inheritance
- Summary

---

## Code Reuse
- We avoid writing the same code more than once. 
- Once a useful piece of code is written, it should be **encapsulated** and **reused**. 
- This is achieved by defining an **interface** — a way for other code to use it. 
- In C++, we achieve this using **functions** and **classes**.

### Example
```cpp
double radius(double circumference);
```

- This declaration tells another programmer how to use your function.

```cpp
double circOf2pCoin = whatever;
double radiusOf2pCoin = radius(circOf2pCoin);
```

- Here, `radius()` is a **function** that calculates the radius from a circumference.

---

## Functions
- A **function** has:
  - **Parameters** – input values.
  - A **return type** – output value.
  - A **name** – identifier for the function.

### Syntax
```cpp
return_type name(parameter1, parameter2)
```

- Parameters must have names to distinguish them in the implementation.

### Example
```cpp
double radius(double circumference)
{
    // scope again!!!
    return circumference / (2 * 3.1415);
}
```

---

## Order of Execution
- Think about what output a set of functions will produce. 
- Consider how many functions are on the **stack** at any one time.

> Each time a function is called, it is added to the **call stack**. 
> When a function finishes, it is removed from the stack.

---

## Classes
- **Classes** define **objects**. 
- Objects have:
  - **Attributes** (variables)
  - **Behaviours** (functions/methods)

- Think of an object as a collection of functions that share a **common state**.
- This shared state is stored in **private variables** accessible only by the class’s methods.

### Example
```cpp
class Whatever
{
private:
    // some variables here
public:
    // some functions here
};
```

> **Don’t forget the semicolon (;) after the class definition!**

---

## Declaring Attributes and Behaviours
- Attributes and behaviours are declared using **variables** and **methods**.
- All methods can access **private variables**, so you don’t need to pass them as parameters.
- The **constructor** function sets initial values for the class members.
- You can set member values either inside the function body or via an **initializer list**.

### Example
```cpp
class Circle
{
private:
    double radius;
public:
    Circle() : radius(0) {}
    void setRadius(double rad);
    double getRadius();
    double getArea();
    double getCircumference();
    double getDiameter();
    void scale(double factor);
};
```

---

## Implementing Member Functions (Methods)
- Methods can be implemented:
  1. **Inside** the class body.
  2. **Outside** the class using the **scope (::) operator**.

- It’s common to use two files:
  - `.h` file → class definition (header)
  - `.cpp` file → method implementations (source)

### Example (Mixed Implementation)
```cpp
class Circle
{
private:
    double radius;
public:
    Circle() : radius(0) {}
    void setRadius(double rad);
    double getRadius();
    double getArea() { return radius * radius * 3.1415; }
    double getCircumference();
    double getDiameter();
    void scale(double factor);
};

void Circle::scale(double factor)
{
    radius *= factor;
}
```

---

### Task
- Implement the remaining `Circle` class methods. 
- Add a **second constructor** that sets the radius to a specific value.

---

## Instantiating and Using Objects
- Once a class is defined, you can declare **objects** (instances of the class). 
- The **type** is the class name. 
- You use the **dot (.) operator** to access methods.

### Example
```cpp
Circle c;
c.setRadius(4.0);
std::cout << c.getArea() << ", " << c.getCircumference() << std::endl;

c.scale(0.5);
std::cout << c.getArea() << ", " << c.getCircumference() << std::endl;
```

---

## Inheritance
- **Inheritance** allows one class to **extend** another’s functionality. 
- This is often an **“is a”** relationship — e.g., a Car *is a* Vehicle.

### Example
```cpp
class Sphere : public Circle
{
public:
    Sphere() : Circle() {}
    double getVolume();
    double getSurfaceArea();
};
```

- The derived class inherits all methods and attributes from the base class. 
- You only implement the **new methods** (`getVolume`, `getSurfaceArea`) in `Sphere`. 
- The constructor calls the base class constructor using the **initializer list**.

---

### Final Tasks
- Implement the `Sphere` methods. 
- Add **inverse functions** for both `Circle` and `Sphere`:
  - Example: 
    ```cpp
    void setArea(double area);
    ```
    This should calculate and update the radius based on the area. 
- Do the same for all `get` methods. 
- You should still have **only one member variable** — `radius`.

---

### Challenge Questions
1. What is the circumference of a circle with area **13**?
2. What is the diameter of a sphere with volume **17**? 
3. What is the volume of a sphere with surface area **27.9**?

---

## Summary
- **Functions** encapsulate reusable logic. 
- **Classes** bundle data (attributes) with functionality (methods). 
- **Constructors** initialize objects; **methods** manipulate them. 
- **Scope resolution (::)** lets you define functions outside the class. 
- **Inheritance** enables code reuse and hierarchy between classes. 
- Practice building and extending classes to strengthen OOP understanding in C++. 
