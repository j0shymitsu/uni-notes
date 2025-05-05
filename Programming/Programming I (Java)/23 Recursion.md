# RECURSION
N-D 

---

## Contents
- Introduction
- What is Recursion?
- Recursion by Accident
- Base Case and Reduction Step
- Returning Values with Recursion
- Branching Recursion
- Summary

---

## Introduction
- **Recursion** is the process of a method calling itself.
- It continues until a **certain condition is met**, at which point it stops.
- Many problems solvable with recursion can also be solved using **loops**.

---

## What is Recursion?
- A method is **recursive** if it **calls itself**, either **directly** or **indirectly**.
- It's a way of applying the **same process repeatedly**.

### Example
```java
public void printNumbers(int n) {
    if (n <= 0) return;
    System.out.println(n);
    printNumbers(n - 1);
}
```

---

## Recursion by Accident
- New programmers may **accidentally call the method they're writing**.
- This causes a **stack overflow error**, often crashing the program.
- In some languages like **C#**, it throws an **uncatchable exception**.
- Always ensure there's a **clear exit condition** to prevent infinite recursion.

---

## Base Case and Reduction Step
- Every recursive method needs:
  1. A **base case** – when to stop.
  2. A **reduction step** – a call to the method with a **simpler version of the problem**.

### Example
```java
public void countTo100(int n) {
    if (n > 100) return;
    System.out.println(n);
    countTo100(n + 1);
}
```

---

## Returning Values with Recursion
- Recursion is often used to **compute and return a value**, not just output results.
- Typically:
  - The base case returns a known value.
  - The reduction step returns the result of the recursive call plus/minus some value.

### Example
```java
public int divideByTwo(int n) {
    if (n < 2) return n;
    return 1 + divideByTwo(n / 2);
}
```

---

## Branching Recursion
- In **branching recursion**, a method calls itself **multiple times**.
- Often used in **divide and conquer** strategies.

### Example: Fibonacci Sequence
```java
public int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```
- Note: this implementation is **not efficient**, and better solved with **iteration or memoization**.

---

## Summary
- Recursion is a **powerful tool** but can lead to issues if misused.
- Always include a **base case** to avoid infinite loops and stack overflow.
- For many problems, **iteration may be more efficient**.
- However, recursion is essential for understanding **certain algorithms**, especially in **data structures and algorithms** (Level 5 and beyond).
- Mastering recursion is a stepping stone to more advanced computer science topics.