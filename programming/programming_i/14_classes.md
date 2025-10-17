# CLASSES
N-D

---

## Contents
- Introduction
- Understanding Classes
  - Properties
  - Methods
  - Constructors
- Working with Objects
- Encapsulation and Data Hiding
- Conclusion

---

## Introduction
- **Classes** act as **blueprints** for creating objects.
- They define **how an object should behave, what data it holds, and how it should be created**.
- Object-Oriented Programming (OOP) in Java revolves around the **use of classes and objects**.

---

## Understanding Classes
### **Properties**
- Properties (also called **instance variables**) define the **state** of an object.
- Example:
  ```java
  public class Employee {
      private String name;
      private int age;
  }
  ```

### **Methods**
- Define the **behavior** of an object.
- Used to **read and modify properties**.
- Example:
  ```java
  public class Employee {
      private String name;

      public void setName(String name) {
          this.name = name;
      }

      public String getName() {
          return name;
      }
  }
  ```

### **Constructors**
- Special methods used to **initialize objects**.
- A constructor **has the same name as the class** and **does not have a return type**.
- Example:
  ```java
  public class Employee {
      private String name;

      public Employee(String name) {
          this.name = name;
      }
  }
  ```

---

## Working with Objects
### **Creating an Object**
- Objects are **instances of classes**.
- Created using the `new` keyword.
- Example:
  ```java
  Employee emp1 = new Employee("Alice");
  System.out.println(emp1.getName()); // Outputs: Alice
  ```

### **Using Getters and Setters**
- Methods to **retrieve and update values**.
- Helps **protect instance variables** (encapsulation).
- Example:
  ```java
  Employee emp2 = new Employee("Bob");
  emp2.setName("Charlie");
  System.out.println(emp2.getName()); // Outputs: Charlie
  ```

---

## Encapsulation and Data Hiding
- **Encapsulation** ensures data **is not directly accessible from outside the class**.
- **Instance variables should be private**, and **accessors (getters) and mutators (setters) should be used**.
- Example:
  ```java
  public class BankAccount {
      private double balance;

      public void deposit(double amount) {
          if (amount > 0) {
              balance += amount;
          }
      }

      public double getBalance() {
          return balance;
      }
  }
  ```

- **Benefits of Encapsulation:**
  - Prevents **direct modification of fields**.
  - Allows **controlled access to data**.
  - Enhances **code maintainability**.

---

## Conclusion
- **Classes define objects**, which have **properties, methods, and constructors**.
- **Encapsulation** ensures data security and proper access control.
- **Getters and setters** provide controlled access to private variables.
- **Constructors initialize objects**, making them ready for use.
- Understanding these concepts is **essential for object-oriented programming in Java**.