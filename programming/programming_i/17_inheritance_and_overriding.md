# INHERITANCE & OVERRIDING
N-D

---

# Inheritance and Method Overriding in Java

## Contents
- Introduction
- What is Inheritance?
  - Benefits of Inheritance
  - Example: Employee and TemporaryEmployee
  - Key Notes
- Subclassing and Constructors
  - Calling Superclass Constructors
  - Access Modifiers
- Inheritance vs Composition
- Method Overriding
  - Purpose of Overriding
  - Syntax and Best Practices
  - Using super
- Conclusion

---

## Introduction
- Inheritance is a key feature of **object-oriented programming (OOP)**.
- It allows classes to **reuse code and extend functionality** without duplication.
- Combined with method overriding, it provides powerful tools for customization and extension.

---

## What is Inheritance?
- Enables one class (**subclass**) to inherit from another (**superclass**).
- In Java, this is done using the `extends` keyword.

### **Benefits of Inheritance**
- Promotes **code reuse**.
- Enables **specialization** of behavior.
- Avoids **code duplication**.

### **Example: Employee and TemporaryEmployee**
- A `TemporaryEmployee` has all properties of an `Employee`, plus a **contract termination date**.
- It wouldn't be efficient to:
  - Add termination date to all employees.
  - Create a new class from scratch.

```java
public class Employee {
    private String name;
    // Other properties and methods
}

public class TemporaryEmployee extends Employee {
    private LocalDate contractEndDate;
    // Additional methods
}
```

### **Key Notes**
- A subclass **is a** superclass: `TemporaryEmployee` **is an** `Employee`.
- Java only supports **single inheritance**.

---

## Subclassing and Constructors
### **Calling Superclass Constructors**
- Constructors are **not inherited**.
- You must explicitly call the superclass constructor using `super()`.

```java
public TemporaryEmployee(String name, LocalDate contractEndDate) {
    super(name); // calls Employee constructor
    this.contractEndDate = contractEndDate;
}
```

### **Access Modifiers**
- `private` members are **not accessible** in subclasses.
- Use `protected` or public **getters/setters** to allow controlled access.

---

## Inheritance vs Composition
| Inheritance | Composition |
|------------|-------------|
| IS-a relationship | HAS-a relationship |
| Subclass extends a class | Class contains instances of other classes |
| Only one superclass allowed | Can contain multiple object types |

Example:
- `TemporaryEmployee` **is an** `Employee` → Inheritance
- `Employee` has a `Manager` object → Composition

---

## Method Overriding
### **Purpose of Overriding**
- Sometimes a subclass needs to **change behavior** defined in a superclass.
- Overriding allows a method to be **redefined** in the subclass.

### **Syntax and Best Practices**
- Use the `@Override` annotation above the method.
- Method signature must match exactly (name, return type, parameters).

```java
@Override
public void indicateRight() {
    // new behavior
}
```

### **Using `super`**
- If you want to retain the original behavior and extend it:

```java
@Override
public void indicateRight() {
    super.indicateRight(); // call parent method
    // add new logic here
}
```

### **Example: Car and Tesla**
- A `Car` might have a basic `indicateRight()` method.
- A `Tesla` might override it to account for **autonomous lane change logic**.

---

## Conclusion
- **Inheritance** simplifies class hierarchies and supports code reuse.
- **Method overriding** allows for **customized behavior** in subclasses.
- Constructors and access modifiers require special attention when subclassing.
- Understanding these principles is key to writing **flexible and maintainable object-oriented code**.
