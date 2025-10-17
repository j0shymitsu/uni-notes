# METHOD OVERLOADING
N-D

---

# Method Overloading in Java

## Contents
- Introduction
- What is Method Overloading?
- Parameter Variations
- Overloading Constructors
- Subtypes and Overloading
- Collections and Overloading
- Conclusion

---

## Introduction
- **Method overloading** allows multiple methods with the **same name** but **different parameter lists**.
- Commonly used throughout Java (e.g., `System.out.println()` works for strings, integers, etc.).
- It improves code **readability and flexibility**.

---

## What is Method Overloading?
- Overloading involves defining **multiple methods with the same name**, but with **different types or numbers of parameters**.
- Example:
  ```java
  public void print(String message) {
      System.out.println(message);
  }

  public void print(int number) {
      System.out.println(number);
  }
  ```
- Java selects the appropriate method **based on the arguments provided**.

---

## Parameter Variations
- You can overload methods by changing:
  1. **Number of parameters**
  2. **Data types of parameters**
  3. **Order of parameters** (if types are different)

Example:
```java
Integer.toString(23);      // returns "23"
Integer.toString(23, 16);  // returns "17"
```
- Overloading is also commonly used when creating **multiple constructors**:
  ```java
  public MyClass() { }
  public MyClass(String name) { }
  ```

---

## Overloading Constructors
- Constructors can be overloaded to allow for **different initialization scenarios**:
  ```java
  public Person(String name) {
      this.name = name;
  }

  public Person(String name, int age) {
      this.name = name;
      this.age = age;
  }
  ```
- Allows objects to be created with **different sets of initial values**.

---

## Subtypes and Overloading
- Overloading works with **subtypes** (e.g., subclasses).
- The method chosen is based on the **declared type**, not the actual object type.

Example:
```java
public void print(Animal a) { ... }
public void print(Dog d) { ... }

Animal a = new Dog();
print(a);  // Calls method for Animal, not Dog
```

---

## Collections and Overloading
- When iterating over collections, the **declared type** of the elements affects which method is used.

Example:
```java
public void handle(Animal a) { ... }
public void handle(Dog d) { ... }

List<Animal> animals = new ArrayList<>();
// even if animals contain Dogs
for (Animal a : animals) {
    handle(a);  // Calls method for Animal
}
```
- To invoke the overloaded method for a subtype, **you must cast explicitly**:
  ```java
  for (Animal a : animals) {
      if (a instanceof Dog) {
          handle((Dog) a);
      }
  }
  ```

---

## Conclusion
- Method overloading allows methods with the **same name** to behave differently depending on **parameter types or counts**.
- Java uses the **method signature** to determine which method to call.
- Be aware of how **declared types and inheritance** interact with overloading.
- Overloading is a core technique for writing **clean, flexible, and intuitive Java code**.
