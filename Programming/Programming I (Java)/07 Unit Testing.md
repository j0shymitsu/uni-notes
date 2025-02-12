# UNIT TESTING
N-D

---

## Contents
- Introduction
- Why Use Unit Testing?
- JUnit Testing Framework
- Writing Test Classes
- Writing Test Methods
- Writing Assertions
- Conclusion

---

## Introduction
- So far, testing has been **manual**, where we run programs and check outputs.
- This works for **small programs** but is impractical for **large applications**.
- Writing **automated unit tests** allows for structured, repeatable testing.
- **JUnit5** is a commonly used framework for unit testing in Java.

---

## Why Use Unit Testing?
- Helps catch **bugs early** in development.
- Ensures that **methods behave as expected**.
- Provides **automated validation** instead of relying on manual checks.
- Helps with **code maintainability** by preventing unexpected changes from breaking functionality.

---

## JUnit Testing Framework
- JUnit is a popular **Java testing framework**.
- Test cases are written in a **separate class** that corresponds to the class being tested.
- **Key features:**
  - Annotation-based test cases (`@Test`).
  - Assertions to check expected outcomes.
  - Setup and teardown methods (`@BeforeEach`, `@AfterEach`).

### Example JUnit Test Class:
```java
import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class MainTest {
    @Test
    void testAddition() {
        assertEquals(5, 2 + 3, "2 + 3 should equal 5");
    }
}
```

---

## Writing Test Classes
- Each class should have a **corresponding test class**.
- Typically, test classes are placed in a **separate directory** (e.g., `src/test/java`).
- In **IntelliJ**, a test class can be auto-generated.

### Example:
For a class `Main.java`, create a test class `MainTest.java`.

```java
import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class MainTest {
    @Test
    void testMethod() {
        // Implement test logic
    }
}
```

---

## Writing Test Methods
- Each **method in the main class** should have a corresponding **test method**.
- The **`@Test` annotation** marks a method as a test case.
- The **main method is typically not tested**.
- IntelliJ can **auto-generate** test method templates.

### Example:
```java
@Test
void testSum() {
    int result = Main.sum(2, 3);
    assertEquals(5, result, "Sum should be 5");
}
```

---

## Writing Assertions
- Assertions **compare expected and actual results**.
- Different types of assertions exist:
  - `assertEquals(expected, actual)`: Check if values match.
  - `assertNotEquals(expected, actual)`: Check if values don’t match.
  - `assertTrue(condition)`: Check if condition is `true`.
  - `assertFalse(condition)`: Check if condition is `false`.
  - `assertNull(object)`: Check if object is `null`.
  - `assertNotNull(object)`: Check if object is **not null**.

### Example:
```java
@Test
void testBooleanCheck() {
    assertTrue(5 > 3, "5 should be greater than 3");
}
```

### Testing Multiple Scenarios
- It’s **good practice** to test methods with **different inputs**.
- Ensures the method handles **edge cases** correctly.

```java
@Test
void testMultiply() {
    assertEquals(10, Main.multiply(2, 5), "2 * 5 should equal 10");
    assertEquals(0, Main.multiply(0, 5), "0 * 5 should equal 0");
    assertEquals(-10, Main.multiply(-2, 5), "-2 * 5 should equal -10");
}
```

---

## Conclusion
- **Unit testing automates validation** and improves code quality.
- **JUnit5** is a widely used framework for writing and managing tests.
- **Assertions** allow for structured checking of expected outputs.
- Following **best practices** ensures that methods are well-tested and reliable.
- **Next Steps:** Implement more **comprehensive testing** using mocks and test-driven development (TDD).