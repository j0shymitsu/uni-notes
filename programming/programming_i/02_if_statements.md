# IF STATEMENTS
08-10-24

---

## Content Overview
1. Basics of If Statements.
2. Comparison Operators.
3. Negation in Conditions.

---

## If Statements
- **Definition**:
  - Allows specific parts of a program to execute only if a given condition is met.
  - Technically evaluates whether a statement is **true** or **false**.
- **Use of Boolean Values**:
  - If statements typically work with boolean values (true/false).
- **Demo**:
  - If statement using a boolean value:

        ```java
        boolean isRaining = true;

        if (isRaining) {
            System.out.println("Don't forget your umbrella!");
        }
        - Example of an if statement with equality checks.
        ```

---

## Comparison Operators
- **Purpose**:
  - Used to compare values within conditions.
  - Common Operators:
    - `==` (equal to).
    - `>` (greater than).
    - `<` (less than).
    - `>=` (greater than or equal to).
    - `<=` (less than or equal to).
- **Examples**:
  - `if (x > y) { ... }` checks if `x` is greater than `y`.
  - `if (a <= b) { ... }` checks if `a` is less than or equal to `b`.
- **Demo**:
  - Using greater than and less than operators:

        ```java
        int age = 18;

        if (age >= 18) {
            System.out.println("You are eligible to vote.");
        }

        if (age < 18) {
            System.out.println("You are not eligible to vote.");
        }
        ```

---

## Negation
- **Purpose**:
  - Check if a condition is **not met**.
- **Operator**:
  - Use `!` to negate a condition.
  - Example:
    - `if (!isLoggedIn) { ... }` runs the code block if `isLoggedIn` is false.
- **Demo**:
  - Negation operator with equality checks;
  - Negation operator with boolean values:

    ```java
    String username = "admin";
    boolean isLoggedIn = false;

    if (!username.equals("guest")) {
        System.out.println("Welcome, " + username + "!");
    }

    if (!isLoggedIn){
        System.out.println("Please log in,");
    }
    ```

---

## Key Takeaways
1. **If Statements**:
   - Core to conditional programming.
   - Execute code only when specific conditions are true.
2. **Comparison Operators**:
   - Provide flexibility in checking relationships between values.
3. **Negation**:
   - Useful for handling cases where conditions are not satisfied.