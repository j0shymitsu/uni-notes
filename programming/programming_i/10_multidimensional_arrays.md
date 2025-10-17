# MULTIDIMENSIONAL ARRAYS
N-D

---

## Contents
- Introduction
- Understanding 2D Arrays
- Creating 2D Arrays
- Accessing and Modifying Elements
- Iterating Through 2D Arrays
- Advantages and Disadvantages
- Conclusion

---

## Introduction
- **2D arrays** store data in a **grid-like structure** (rows and columns).
- Useful for **tables, matrices, and structured datasets**.
- Conceptually, think of **rows first, then columns**.

---

## Understanding 2D Arrays
- A **2D array** is an array of arrays.
- Each **row** is a separate array, and each row contains **columns**.
- Syntax:
  ```java
  dataType[][] arrayName = new dataType[rows][columns];
  ```

---

## Creating 2D Arrays
- **Empty 2D Array (Predefined Size):**
  ```java
  int[][] grid = new int[3][4]; // 3 rows, 4 columns
  ```
- **Initialized 2D Array:**
  ```java
  int[][] matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };
  ```

---

## Accessing and Modifying Elements
- Access an element using its **row and column index**.
  ```java
  int value = matrix[1][2]; // Gets value at row 1, column 2 (6)
  ```
- Modify an element:
  ```java
  matrix[2][1] = 10; // Sets row 2, column 1 to 10
  ```

---

## Iterating Through 2D Arrays
- **Using Nested Loops:**
  ```java
  for (int i = 0; i < matrix.length; i++) { // Row loop
      for (int j = 0; j < matrix[i].length; j++) { // Column loop
          System.out.print(matrix[i][j] + " ");
      }
      System.out.println();
  }
  ```

---

## Advantages and Disadvantages
### **Advantages:**
- **Efficient** for structured data storage.
- **Fast** lookup of adjacent elements.

### **Disadvantages:**
- **Fixed size** – cannot dynamically resize.
- **Complexity** – working with multi-dimensional data can be harder than alternatives.
- **Other techniques (e.g., objects, lists) may be superior in most cases**.

---

## Conclusion
- **2D arrays** are useful for structured, tabular data.
- **Accessing and modifying** elements requires **row-column indexing**.
- **Iteration** is typically done using **nested loops**.
- **More advanced techniques** (like objects or lists) may be preferred in larger applications.
