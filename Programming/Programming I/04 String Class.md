# STRING CLASS
22-10-24

--- 

## Overview
1. Introduction to the String Class.
2. String Immutability.
3. Common Methods in the String Class.
4. String Comparisons.
5. StringBuilder and StringBuffer.

---

## Introduction to the String Class
- **Definition**:
  - A `String` in Java represents a sequence of characters.
  - Strings are objects in Java, part of the `java.lang` package.
- **Declaration and Initialization**:
  - Strings can be created using:
    - String literals: `String greeting = "Hello";`
    - The `new` keyword: `String name = new String("John");`
- **Note**: Strings created using literals are stored in the **String Pool**, a special memory area for optimizing storage.

---

## String Immutability
- **What is Immutability?**:
  - Once created, a `String` object cannot be changed. Any modification creates a new `String` object.
  - Example: When concatenating strings, a new object is created:
    - `String fullName = firstName + " " + lastName;`
- **Advantages**:
  - Improved security.
  - Thread safety.
  - Better performance due to String Pool optimization.

---

## Common Methods in the String Class
- **Length**:
  - `length()`: Returns the number of characters in the string.
  - Example: `"Hello".length();` → 5.

- **Substring**:
  - `substring(int beginIndex, int endIndex)`: Extracts part of the string.
  - Example: `"Hello".substring(1, 4);` → `"ell"`.

- **Character Retrieval**:
  - `charAt(int index)`: Returns the character at the specified index.
  - Example: `"Hello".charAt(0);` → `'H'`.

- **Concatenation**:
  - `concat(String str)`: Joins two strings.
  - Example: `"Hello".concat(" World");` → `"Hello World"`.

- **Case Conversion**:
  - `toUpperCase()` and `toLowerCase()`: Converts the string to uppercase or lowercase.
  - Example: `"hello".toUpperCase();` → `"HELLO"`.

- **Trim**:
  - `trim()`: Removes leading and trailing spaces.
  - Example: `"  Hello  ".trim();` → `"Hello"`.

---

## String Comparisons
- **Equality Check**:
  - `equals(String anotherString)`: Checks if two strings are equal.
  - Example: `"Hello".equals("Hello");` → `true`.

- **Ignore Case**:
  - `equalsIgnoreCase(String anotherString)`: Compares strings ignoring case.
  - Example: `"hello".equalsIgnoreCase("Hello");` → `true`.

- **Comparison**:
  - `compareTo(String anotherString)`: Lexicographically compares two strings.
  - Returns:
    - `0` if equal.
    - Negative value if the first string comes before.
    - Positive value if it comes after.

---

## StringBuilder and StringBuffer
- **Why Use Them?**:
  - Since `String` objects are immutable, repeated modifications (e.g., concatenations) can lead to performance issues.
  - `StringBuilder` and `StringBuffer` are mutable alternatives.

- **Differences**:
  1. **StringBuilder**:
     - Faster, but not thread-safe.
  2. **StringBuffer**:
     - Slower, but thread-safe.

- **Key Methods**:
  - `append(String str)`: Adds a string to the end.
  - `insert(int offset, String str)`: Inserts a string at a specific index.
  - `reverse()`: Reverses the string.

---

## Key Takeaways
1. **String Class**:
   - Represents immutable sequences of characters.
2. **Immutability**:
   - Enhances security and performance.
3. **Common Methods**:
   - Provide functionality like substring extraction, concatenation, and case conversion.
4. **StringBuilder and StringBuffer**:
   - Used for mutable strings to improve performance in specific use cases.