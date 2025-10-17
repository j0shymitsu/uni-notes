# SORTING AND COMPARING
N-D

---

## Contents
- Introduction
- Natural Order Sorting
  - Using Collections.sort()
  - Implementing Comparable
- Sorting Custom Objects
  - Comparable Interface
  - Interface Analogy
- Sorting by Custom Attributes
  - Using Comparator
- Conclusion

---

## Introduction
- Sorting is a fundamental part of programming.
- Java provides tools to sort **built-in types** and **custom objects**.
- This lecture introduces `Comparable` and `Comparator` interfaces to help with sorting logic.

---

## Natural Order Sorting
### **Using Collections.sort()**
- Built-in types like `String`, `Integer`, and `Double` have a **natural order**:
  - Alphabetical for Strings
  - Numerical for numbers
- To sort a list:
  ```java
  Collections.sort(myArrayList);
  ```
- This works only if the elements **implement Comparable**.

### **Implementing Comparable**
- To sort custom objects by their natural order, implement the `Comparable` interface.
- `Comparable` requires implementing the `compareTo()` method.
- Example:
  ```java
  public class Animal implements Comparable<Animal> {
      private String name;

      @Override
      public int compareTo(Animal other) {
          return this.name.compareTo(other.name);
      }
  }
  ```
- The `compareTo()` method returns:
  - A **negative number** if `this` is less than `other`.
  - **Zero** if they are equal.
  - A **positive number** if `this` is greater than `other`.

---

## Sorting Custom Objects
### **Comparable Interface Analogy**
- Think of an interface like a **specification**, similar to how a plug follows BS 1363-1.
- The spec defines **how it should behave**, but doesn't provide the plug itself.
- Similarly, `Comparable` defines a method, and your class **implements that behavior**.

---

## Sorting by Custom Attributes
- Sometimes you need to sort objects in **different ways**.
- Example: You may want to sort an `Animal` class by:
  - Name
  - Species
  - Weight
  - Date of birth
  - Fierceness

### **Using a Custom Comparator**
- Create a **Comparator** that defines how to compare by a specific attribute.
- Example:
  ```java
  Comparator<Animal> byWeight = new Comparator<Animal>() {
      @Override
      public int compare(Animal a1, Animal a2) {
          return Double.compare(a1.getWeight(), a2.getWeight());
      }
  };

  Collections.sort(animalList, byWeight);
  ```
- Modern Java versions support **lambda syntax**:
  ```java
  Collections.sort(animalList, (a1, a2) -> a1.getName().compareTo(a2.getName()));
  ```

---

## Conclusion
- Use `Comparable` for **natural ordering**.
- Use `Comparator` for **custom sorting** based on specific attributes.
- Interfaces like `Comparable` define **expected behavior**, ensuring compatibility with tools like `Collections.sort()`.
- Understanding sorting in Java is essential for **efficient data organization and manipulation**.