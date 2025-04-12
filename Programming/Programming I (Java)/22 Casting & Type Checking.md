# CASTING & TYPE CHECKING
N-D

---

## Contents
- Definition of Casting
- Type checking demonstration
- Exact type matching

---

## What is Casting?
- Sometimes the type of an object is unknown, so an object can be "cast" as some other type
- Examples:
    - Items added to a **JComboBox** can be any type
    - We might choose to add **String** items
    - Retrieving the selected item returns an **Object**
    - Casting allows us to denote that the object is actually a **String**
    - From there we can access the atteibute of **String rather than just Object**
- We cast an object by specifying the type in brackets before the object:
    ```java
    String myString = (String)comboBox.getSelectedItem();
    ```

---

## Type Checking
- When retrieving items from a collection, the type of any given object may not be known:
    - The components in a **JPanel** will all be of type *'Component'*, but they are likely to be a subclass
    - We can check if a component is of a specific type using the keyword:
        ```java
        instanceof
        ```
    - For example:
        ```java
        if(component instanceof JButton)
        {
            // do something knowing component is a JButton
        }
    - Be aware that it will also return **true** if the object is a subtype of the one being checked.

---

## Exact Type Matching
- Objects have a method called **getClass()**
- For example:
    ```java
    if(someInstance.getClass() == SomeClass.class)
    {
        // do something
    }

---

## Conclusion
- **Casting** and **type checking** are essential when working with objects of **unknown types** in Java.
- **Casting** allows us to explicity treat an object as a specific type.
- **Type checking** with `instanceof` helps ensure safe operations.