# ARRAYLISTS
N-D

---

## Contents
- Introduction
- Understanding ArrayLists
- Array Searching Techniques
- Iterators for Safe Traversal
- Conclusion

---

## Introduction
- **Arrays** are limited in Java (fixed size, no built-in methods for insertion/deletion).
- **ArrayLists**, a type of **Collection**, offer a **resizable array** with added functionality.
- Searching and filtering arrays or lists is a common programming task.
- **Iterators** provide a safe way to **traverse and modify collections**.

---

## Understanding ArrayLists
- **ArrayLists** are more flexible than arrays:
  - Can **grow or shrink** dynamically.
  - Provide methods such as `.add()`, `.remove()`, `.get()`, `.contains()`.
- **Important restriction:** Cannot store primitive types directly:
  - Must use **wrapper classes** (`Integer` for `int`, `Double` for `double`).

### Example:
```java
import java.util.ArrayList;
ArrayList<String> names = new ArrayList<>();
names.add("Alice");
names.add("Bob");
System.out.println(names.get(1)); // Outputs: Bob
```

---

## Array Searching Techniques
- Default methods like `.contains()` check if a value exists.
- Custom searches use **loops or streams**.
- Common tasks include:
  - **Finding if any element matches a condition**.
  - **Creating a filtered list based on criteria**.

### Example: Find names starting with "A":
```java
ArrayList<String> names = new ArrayList<>();
names.add("Alice");
names.add("Bob");
for (String name : names) {
    if (name.startsWith("A")) {
        System.out.println(name);
    }
}
```

---

## Iterators for Safe Traversal
- **Important:** It is **unsafe to remove elements** from a collection using a `for` or `foreach` loop.
- **`Iterator`** is the only safe method for removing elements during iteration.

### Syntax:
```java
import java.util.ArrayList;
import java.util.Iterator;
ArrayList<String> names = new ArrayList<>();
names.add("Alice");
names.add("Bob");
names.add("Ann");

Iterator<String> iterator = names.iterator();
while (iterator.hasNext()) {
    String name = iterator.next();
    if (name.startsWith("A")) {
        iterator.remove();
    }
}
```

- **Explanation:**
  - `iterator.next()` retrieves the next element.
  - `iterator.remove()` safely deletes the current element.
- Attempting removal with a for-each loop causes a **`ConcurrentModificationException`**.

---

## Conclusion
- **ArrayLists** provide flexible, dynamic arrays.
- **Searching techniques** enable filtering and finding specific elements.
- **Iterators** ensure safe removal during iteration.
- Mastering these concepts is essential for **efficient and error-free programming**.