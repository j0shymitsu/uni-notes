# FOR LOOPS
N-D

---

## Contents
- Introduction
- Basic For Loop
- Enhanced For Loop
- Nested For Loops
- Loop Control Statements
- Common Mistakes
- Best Practices
- Conclusion

---

## Introduction
- **For loops** are used to execute code repeatedly for a fixed number of times.
- Java provides **standard for loops** and **enhanced for loops**.
- Useful for **iterating over arrays, lists, and ranges of numbers**.

---

## Basic For Loop
- The most commonly used loop structure in Java.
- Executes a block of code **a specific number of times**.

### Syntax:
```java
for (initialization; condition; update) {
    // Code to execute in each iteration
}
```

### Example:
```java
for (int i = 0; i < 5; i++) {
    System.out.println("Iteration: " + i);
}
```

---

## Enhanced For Loop
- Also known as the **for-each loop**.
- Iterates over elements in an array or collection.

### Syntax:
```java
for (type variable : collection) {
    // Code to execute for each element
}
```

### Example:
```java
int[] numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    System.out.println("Number: " + num);
}
```

---

## Nested For Loops
- A **for loop inside another for loop**.
- Useful for **working with multi-dimensional structures**.

### Example:
```java
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        System.out.println("i: " + i + ", j: " + j);
    }
}
```

---

## Loop Control Statements
- **Break Statement:** Exits the loop prematurely.
- **Continue Statement:** Skips the current iteration and moves to the next one.

### Example:
```java
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break; // Exits loop when i == 3
    }
    System.out.println(i);
}
```

```java
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue; // Skips iteration when i == 3
    }
    System.out.println(i);
}
```

---

## Common Mistakes
1. **Infinite Loops**
   ```java
   for (int i = 0; i >= 0; i++) { // Never-ending loop
       System.out.println(i);
   }
   ```
   *Fix:* Ensure the loop **terminates properly**.

2. **Off-By-One Errors**
   ```java
   for (int i = 0; i <= 5; i++) {
       System.out.println(i);
   }
   ```
   *Fix:* Verify if the loop should run `<=` or `<`.

3. **Modifying Collection During Iteration**
   ```java
   for (int num : list) {
       list.remove(num); // Causes ConcurrentModificationException
   }
   ```
   *Fix:* Use **Iterator** for safe removal.

---

## Best Practices
- **Use meaningful loop variables** (`i`, `j` for indices; `item` for elements).
- **Keep loops simple** and avoid excessive nesting.
- **Prefer enhanced for loops** when iterating collections.
- **Minimize repeated calculations** inside loops.

---

## Conclusion
- **For loops** are essential for iteration in Java.
- Options include **basic for loops, enhanced for loops, and nested loops**.
- Proper **loop control** ensures efficient execution.
- Following **best practices** avoids common pitfalls and enhances code readability.