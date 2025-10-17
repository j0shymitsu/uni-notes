# ARRAYS
N-D

---

# Arrays and Array Iteration in Java

## Contents
- Introduction
- Understanding Arrays
- Array Indexing
- Array Operations
- Iterating Through Arrays
  - For Loop Iteration
  - Foreach Loop
- Conclusion

---

## Introduction
- **Arrays** are containers that store a fixed number of elements of the same type.
- Used to **store and access multiple values** efficiently.
- **Iteration** is essential for working with arrays, allowing us to **process data sequentially**.

---

## Understanding Arrays
- Arrays in Java have **fixed sizes**.
- An array can store multiple elements **of the same type**.
- Elements are **ordered** and can be accessed via an index.
- **Values can be modified** after creation.
- **Empty slots are allowed** in an array.
- **Analogy:** An array is like a **shot glass holder** where each position holds a specific item.

---

## Array Indexing
- Arrays use **zero-based indexing**.
- The **first element** is at index `0`, the **last element** is at `size - 1`.
- Accessing an **out-of-bounds index** results in a **runtime error**.
- Example:
  ```java
  int[] numbers = {10, 20, 30, 40, 50};
  System.out.println(numbers[0]); // Outputs 10
  System.out.println(numbers[4]); // Outputs 50
  ```

---

## Array Operations
- **Creating an Array**
  ```java
  int[] numbers = new int[5]; // Creates an empty array of size 5
  ```
- **Creating an Array with Initial Values**
  ```java
  String[] fruits = {"Apple", "Banana", "Cherry"};
  ```
- **Accessing Elements**
  ```java
  System.out.println(fruits[1]); // Outputs "Banana"
  ```
- **Modifying Elements**
  ```java
  fruits[2] = "Orange"; // Changes "Cherry" to "Orange"
  ```

---

## Iterating Through Arrays

### For Loop Iteration
- Used to iterate through an array **using an index**.
- General syntax:
  ```java
  for (int i = 0; i < array.length; i++) {
      System.out.println(array[i]);
  }
  ```
- Example:
  ```java
  int[] numbers = {1, 2, 3, 4, 5};
  for (int i = 0; i < numbers.length; i++) {
      System.out.println(numbers[i]);
  }
  ```

- **Reverse Iteration**
  ```java
  for (int i = numbers.length - 1; i >= 0; i--) {
      System.out.println(numbers[i]);
  }
  ```
- **Skipping Elements (e.g., Every 2nd Element)**
  ```java
  for (int i = 0; i < numbers.length; i += 2) {
      System.out.println(numbers[i]);
  }
  ```

- **Use Cases:**
  - **Populating arrays** (user input, files, another array).
  - **Processing numbers** (finding max, sum, average).

---

### Foreach Loop
- A simpler alternative for iterating through an array.
- **Does not provide access to the index**.
- Syntax:
  ```java
  for (int num : numbers) {
      System.out.println(num);
  }
  ```

- **Example:**
  ```java
  String[] names = {"Alice", "Bob", "Charlie"};
  for (String name : names) {
      System.out.println(name);
  }
  ```

---

## Conclusion
- Arrays **store multiple values** efficiently but have **fixed sizes**.
- Elements are accessed **via indexing**, starting at `0`.
- **For loops** provide full control over iteration.
- **Foreach loops** simplify iteration but lack index access.
- Proper array iteration **prevents errors and optimizes performance**.