# METHODS IN JAVA
N-D

---

## Contents
- Introduction
- What Are Methods?
- Declaring a Method
- Method Parameters and Return Types
- Method Scope
- Best Practices
- Conclusion

---

## Introduction
- **Methods** allow code reuse by encapsulating functionality into named blocks.
- Avoids repetition, following the **DRY (Don't Repeat Yourself)** principle.
- Helps organize code, making it more readable and maintainable.
- Facilitates **unit testing** by isolating functionality.

---

## What Are Methods?
- Methods are **blocks of reusable code** that perform a specific task.
- A method can be invoked multiple times without duplicating code.
- Java provides many built-in methods, but we can also create our own.

---

## Declaring a Method
A method consists of:
1. **Access Modifier** (e.g., `public`, `private`).
2. **Return Type** (e.g., `void`, `int`, `String`).
3. **Method Name** (should be meaningful and follow camelCase).
4. **Parameters** (optional, define input values).
5. **Method Body** (contains the executable statements).
6. **Return Statement** (if applicable, must match return type).

### Syntax:
```java
accessModifier returnType methodName(parameters) {
    // Method body
    return value; // If returnType is not void
}
```

### Example:
```java
public int addNumbers(int a, int b) {
    return a + b;
}
```

---

## Method Parameters and Return Types
- **Parameters** allow passing values into methods.
- **Return types** specify the type of value the method returns.
- A method **must return a value** if its return type is not `void`.

### Example:
```java
public String greet(String name) {
    return "Hello, " + name + "!";
}
```

- Methods without a return value use `void`.

```java
public void printMessage() {
    System.out.println("This is a message");
}
```

---

## Method Scope
- **Local variables** declared inside a method are only accessible within that method.
- Methods **cannot directly access variables** declared in another method.

### Example:
```java
public void exampleMethod() {
    int x = 5; // x is only accessible inside this method
}
```

---

## Best Practices
- **Use meaningful method names** to improve readability.
- **Keep methods short and focused** on a single task.
- **Avoid too many parameters**; consider grouping related parameters into objects.
- **Use method overloading** when similar functionality requires different parameters.
- **Document methods** using comments or JavaDoc for clarity.

---

## Conclusion
- Methods **enhance reusability and modularity** in Java programs.
- They allow for **clear separation of concerns**, making debugging easier.
- Following best practices ensures **maintainability and efficiency** of the codebase.