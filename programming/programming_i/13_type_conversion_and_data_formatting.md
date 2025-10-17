# TYPE CONVERSION AND DATA FORMATTING
N-D

---

## Contents
- Introduction
- Type Conversion
  - Converting Integers to Strings
  - Converting Strings to Integers
  - Conversion Between Numeric Types
- Formatting Data
  - Using DecimalFormat
  - Other Formatting Methods
- Conclusion

---

## Introduction
- In Java, data is often **converted between types** to perform calculations or display results.
- **Formatting data** ensures correct presentation, particularly when dealing with numbers.
- Understanding these concepts improves **data handling and display accuracy**.

---

## Type Conversion
### **Converting Integers to Strings**
- Java automatically converts integers to strings when **concatenating**:
  ```java
  int num = 10;
  String text = "Number: " + num; // Implicit conversion
  ```
- Explicit conversion methods:
  ```java
  String str1 = String.valueOf(42);
  String str2 = Integer.toString(42);
  ```
- **Radix (Base) Conversion**:
  ```java
  String binary = Integer.toString(42, 2); // Converts 42 to "101010"
  ```

### **Converting Strings to Integers**
- **Parsing** converts a string into an integer:
  ```java
  int number = Integer.parseInt("123");
  ```
- **Using a Radix** (e.g., binary, hexadecimal):
  ```java
  int decimal = Integer.parseInt("1010", 2); // Binary "1010" → 10
  ```
- **Alternative method using `valueOf`**:
  ```java
  Integer numObj = Integer.valueOf("123"); // Returns Integer object
  ```

### **Conversion Between Numeric Types**
- Convert integer to double:
  ```java
  int num = 5;
  double converted = Integer.valueOf(num).doubleValue();
  ```
- Convert double to integer (**rounds down** by default):
  ```java
  double decimal = 7.9999;
  int roundedDown = (int) decimal; // Becomes 7
  ```
- **Using `Math` class for rounding**:
  ```java
  int rounded = (int) Math.round(decimal); // Becomes 8
  ```

---

## Formatting Data
### **Using DecimalFormat**
- Useful for **controlling decimal places** in floating-point numbers.
- Create an instance of `DecimalFormat` with a format pattern:
  ```java
  import java.text.DecimalFormat;
  DecimalFormat df = new DecimalFormat("#.##"); // 2 decimal places
  String formatted = df.format(10.0 / 3.0); // Outputs "3.33"
  ```
- Format patterns:
  - `#` → Optional digit
  - `0` → Mandatory digit
  - Example:
    ```java
    DecimalFormat df = new DecimalFormat("0.00");
    System.out.println(df.format(5)); // Outputs "5.00"
    ```

### **Other Formatting Methods**
- **Using `String.format()`**:
  ```java
  String formatted = String.format("%.2f", 10.0 / 3.0); // Outputs "3.33"
  ```
- **Using `java.util.Formatter`**:
  ```java
  System.out.printf("%.2f\n", 10.0 / 3.0); // Outputs "3.33"
  ```

---

## Conclusion
- **Type conversion** is essential for handling different data types.
- **Parsing methods** allow safe conversion between strings and numbers.
- **Formatting tools** improve how numerical data is presented.
- Using the right **conversion and formatting techniques** enhances data accuracy and readability.