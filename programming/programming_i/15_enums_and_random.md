# ENUMS
N-D

---

## Contents
- Introduction
- Enums in Java
  - Why Use Enums?
  - Common Alternatives and Their Pitfalls
  - Declaring and Using Enums
  - Enum Implementation Approaches
- Generating Random Values in Java
  - Pseudo-Randomness and Seeding
  - Math.random() Method
  - java.util.Random Class
  - Generating Custom Ranges
- Conclusion

---

## Introduction
- This lecture covers **two essential Java concepts**:
  - Using **Enums** for fixed sets of constants.
  - Using **Random** to generate pseudo-random values.
- Both are crucial for writing **robust, predictable, and maintainable code**.

---

## Enums in Java
### **Why Use Enums?**
- Situations often arise where we must refer to **predefined categories or options**.
- Example: Contract types for a university employee.
  - Options: `Academic`, `Professional`, `Research`

### **Common Alternatives and Their Pitfalls**
- **Strings** – Error-prone due to typos and inconsistent casing.
  ```java
  String contractType = "academic"; // prone to error
  ```
- **Integer Codes** – Lack clarity.
  ```java
  int contractType = 1; // What does 1 mean?
  ```
- **Static Constants** – Better, but still not foolproof.
  ```java
  public static final int ACADEMIC = 1;
  ```

### **Declaring and Using Enums**
- Enums provide **type safety and clarity**.
- Example:
  ```java
  public enum ContractType {
      ACADEMIC, PROFESSIONAL, RESEARCH
  }
  ```

- Usage:
  ```java
  ContractType type = ContractType.ACADEMIC;
  ```

### **Enum Implementation Approaches**
- Enums can be **nested inside a class** or declared **in their own file**.
- Nesting keeps context local.
- Separate files promote reusability.

---

## Generating Random Values in Java
### **Pseudo-Randomness and Seeding**
- Computers generate pseudo-random numbers using a **seed**.
- If the **same seed** is used, the same sequence is produced.
- For **secure randomness**, hardware inputs or libraries conforming to IETF RFC 1750 may be used.

### **Math.random() Method**
- Returns a `double` between **0 (inclusive) and 1 (exclusive)**.
- Example:
  ```java
  double randomValue = Math.random();
  ```

### **java.util.Random Class**
- Offers methods to generate different types of random values.
- Example:
  ```java
  import java.util.Random;

  Random rand = new Random();
  int randomInt = rand.nextInt(10); // 0 to 9
  boolean randomBool = rand.nextBoolean();
  double randomDouble = rand.nextDouble(); // 0.0 to 1.0
  ```

### **Generating Custom Ranges**
- For values in a specific range `x` to `y`:
  ```java
  int value = rand.nextInt(y - x) + x;
  ```
  - This gives a value `>= x` and `< y`

---

## Conclusion
- **Enums** help represent **fixed categories safely and clearly**, avoiding common pitfalls of Strings or numeric codes.
- **Random values** can be generated using either `Math.random()` or `java.util.Random`.
- Understanding **range manipulation and seeding** is crucial for both **predictable testing** and **unpredictable outcomes** (e.g., games, simulations).
- Both topics support **cleaner, more reliable, and versatile Java code**.
