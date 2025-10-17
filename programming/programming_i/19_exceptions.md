# EXCEPTIONS
N-D 

---

# Exceptions in Java

## Contents
- Introduction
- try-catch Blocks
- Exception Messages
- Handling Different Exception Types
- Declaring Methods that Throw Exceptions
- Exception Class Hierarchy
- Multiple Catch Blocks
- The finally Block
- Conclusion

---

## Introduction
- Java uses **exceptions** to handle runtime errors.
- They allow programs to **catch and manage errors** without crashing.
- The `try` and `catch` keywords are used to define code that may fail and handle that failure.

---

## try-catch Blocks
- Code that might fail is placed in a `try` block.
- Code to handle the failure goes in a `catch` block.
- Example:
  ```java
  try {
      // risky code
  } catch (Exception ex) {
      System.out.println(ex.getMessage());
  }
  ```

- **getMessage()** can provide useful information to the developer.
- Avoid showing raw exception messages to the user (security, clarity).

---

## Handling Different Exception Types
- Errors such as file access may fail for different reasons:
  - File not found → `FileNotFoundException`
  - File not readable or corrupted → `IOException`
  - Class mismatch during object reading → `ClassNotFoundException`, `InvalidClassException`

---

## Declaring Methods that Throw Exceptions
- Methods that may fail can declare the exceptions they throw using `throws`.
- Example:
  ```java
  public void loadData() throws IOException {
      // file reading code
  }
  ```
- When calling such methods, the caller must either:
  - Handle with `try-catch`, or
  - Declare it with `throws` too (method chaining)

---

## Exception Class Hierarchy
- Exception types are organised in a class hierarchy:
  - `FileNotFoundException` extends `IOException`
  - `IOException` extends `Exception`
- Allows general or specific exception handling.

---

## Multiple Catch Blocks
- You can catch different types of exceptions using **multiple catch blocks**:
  ```java
  try {
      // risky code
  } catch (FileNotFoundException e) {
      // specific handling
  } catch (IOException e) {
      // general I/O handling
  }
  ```
- A generic catch-all can be used:
  ```java
  catch (Exception e) { }
  ```

---

## The finally Block
- Code in the `finally` block runs **regardless of what happens in try/catch**.
- Used to clean up resources (e.g., close file streams).
- Even runs if there's a `return`, `continue`, or `break` inside try/catch.

Example:
```java
try {
    // open file
} catch (IOException e) {
    // handle error
} finally {
    // close file
}
```

---

## Conclusion
- Java provides a structured way to handle runtime errors.
- Use `try`, `catch`, and optionally `finally` blocks for robust programs.
- Declare exceptions in method signatures using `throws`.
- Handle specific exception types to improve clarity and safety.
- **Good exception handling** improves user experience and debugging.