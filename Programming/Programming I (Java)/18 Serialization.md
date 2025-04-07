# SERIALIZATION
N-D

---

## Contents
- Introduction
- Challenges with Text File Writing
- Serializable Interface
  - Marker Interface Pattern
  - Excluding Fields with `transient`
- Writing Objects to File
- Reading Objects from File
- Conclusion

---

## Introduction
- Java allows us to write and read **objects to and from files**.
- This is useful when working with **complex object structures** and **collections**.
- To do this efficiently, Java uses a feature called **serialization**.

---

## Challenges with Text File Writing
- Writing to text files requires **manual parsing** of lines/tokens.
- It's **tedious** and complicated when handling **mixed data types**.
- The process becomes even more difficult when using **object composition** (i.e., objects inside objects).

---

## Serializable Interface
- Java provides a built-in interface called `Serializable`.
- It is a **marker interface**:
  - No methods to implement.
  - Used to indicate that a class can be serialized.
- Declaration:
  ```java
  public class Person implements Serializable {
      private String name;
      private int age;
  }
  ```

### **Marker Interface Pattern**
- A **design pattern** where the presence of an interface signals something to the Java runtime.
- Serializable uses **reflection** to examine the object structure (you don’t need to implement methods).

### **Excluding Fields with `transient`**
- Fields marked `transient` will **not be serialized**.
- Example:
  ```java
  private transient String unsavedText;
  ```

---

## Writing Objects to File
- To serialize an object:
  1. The object **must implement Serializable**.
  2. All **nested objects or fields** must also be serializable.
- Many built-in classes (like `ArrayList`) already implement Serializable.

### **Required Imports:**
```java
import java.io.*;
```

### **Steps:**
```java
FileOutputStream fileOut = new FileOutputStream("data.ser");
ObjectOutputStream out = new ObjectOutputStream(fileOut);
out.writeObject(myObject);
out.close();
fileOut.close();
```

---

## Reading Objects from File
- To deserialize an object:
  1. Use `FileInputStream` and `ObjectInputStream`.
  2. Call `readObject()`.
  3. **Cast** the result to the correct type.

### **Steps:**
```java
FileInputStream fileIn = new FileInputStream("data.ser");
ObjectInputStream in = new ObjectInputStream(fileIn);
MyClass obj = (MyClass) in.readObject();
in.close();
fileIn.close();
```

- The method `readObject()` returns type `Object`, so **casting is required**.

---

## Conclusion
- Serialization allows for easy **persistence of objects to disk**.
- Use `implements Serializable` to make your class serializable.
- Use `transient` to exclude sensitive or non-serializable fields.
- Java’s built-in IO streams (`FileOutputStream`, `ObjectOutputStream`, etc.) handle the process.
- Useful for **saving state, data storage, and object transmission**.