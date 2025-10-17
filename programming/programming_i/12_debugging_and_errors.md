# DEBUGGING AND ERRORS
N-D

---

## Contents
- Introduction
- Debugging Techniques
  - Using Print Statements
  - Using a Debugger and Breakpoints
- Types of Errors
  - Compilation Errors
  - Runtime Errors
  - Logic Errors
- Conclusion

---

## Introduction
- **Debugging** is the process of identifying and fixing errors in a program.
- Errors occur in **all programs**, even experienced developers make mistakes.
- Understanding **types of errors** and using effective debugging tools can make troubleshooting easier.

---

## Debugging Techniques
### **Using Print Statements**
- A common method to debug code is by adding `System.out.println()` statements.
- Helps track values of variables and control flow.
- However, this method is **tedious and inefficient** for large programs.

### **Using a Debugger and Breakpoints**
- Modern IDEs provide **debugging tools** to inspect program execution.
- **Breakpoints** pause execution at specific lines to check variable values.
- **Step-by-step execution** allows tracing the flow of code.
- Helps understand **which variables are in scope** and **why certain conditions are met or not**.

Example of setting a breakpoint in Java (IntelliJ):
```java
public class DebugExample {
    public static void main(String[] args) {
        int x = 5;
        int y = 10;
        int sum = x + y; // Set a breakpoint here
        System.out.println("Sum: " + sum);
    }
}
```

---

## Types of Errors
Errors in programming can be categorized into three main types:

### **Compilation Errors**
- Occur when the **compiler** detects an issue that prevents execution.
- **Examples:**
  - **Syntax errors:** Missing semicolons, misspelled keywords.
  - **Invalid statements:** `int number = "Hello"; // Type mismatch`
  - **Incomplete structures:** `if (x > 5) // Missing braces`
- **Solutions:**
  - Carefully check **compiler messages**.
  - Follow **IDE suggestions** for quick fixes.

### **Runtime Errors**
- Program **compiles successfully** but crashes during execution.
- Usually caused by invalid operations or exceptions.
- **Examples:**
  - **Array Index Out of Bounds:** Accessing an element beyond an array's size.
  - **Division by Zero:** `int result = 10 / 0;`
  - **Null Pointer Exception:** Trying to access a method on a `null` object.
- **Solutions:**
  - Check the **exception message** to identify the issue.
  - Use **if statements** to handle potential errors.
  - Implement **try-catch blocks** for handling exceptions gracefully.

Example:
```java
try {
    int[] numbers = {1, 2, 3};
    System.out.println(numbers[5]); // Error: Index 5 does not exist
} catch (ArrayIndexOutOfBoundsException e) {
    System.out.println("Error: Array index out of bounds.");
}
```

### **Logic Errors**
- Program **runs without crashing** but does **not produce the expected results**.
- Often the hardest errors to detect.
- **Examples:**
  - Incorrect mathematical calculations.
  - Wrong conditions in `if` statements.
  - Incorrect algorithm implementation.
- **Solutions:**
  - **Break down the program into small testable methods**.
  - **Use unit testing** to validate expected behavior.
  - **Use a debugger** to step through code and inspect variable values.

Example of a logic error:
```java
public class LogicErrorExample {
    public static void main(String[] args) {
        int x = 10;
        int y = 5;
        int average = (x + y) / 2; // Incorrect formula, should be (x + y) / 2.0
        System.out.println("Average: " + average);
    }
}
```

---

## Conclusion
- **Debugging is a crucial skill** in software development.
- **Using a debugger** is more efficient than print statements.
- Understanding **compilation, runtime, and logic errors** helps in troubleshooting.
- Good debugging practices lead to **efficient and reliable programs**.