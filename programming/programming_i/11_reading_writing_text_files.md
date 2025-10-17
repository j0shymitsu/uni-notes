# READING & WRITING TEXT FILES
N-D

---

## Contents
- Introduction
- Reading Files
  - Using Scanner and File Classes
  - Reading Files into an ArrayList
- Writing Files
  - Writing Data to a File
  - Using java.nio for Efficient File Writing
- Conclusion

---

## Introduction
- **Hardcoding data** into programs is generally **a bad practice**.
- Instead, programs often **read data from files** for flexibility.
- Likewise, saving data ensures **persistence between program executions**.
- Java provides built-in libraries to handle **file input and output (I/O)**.

---

## Reading Files
### **Using Scanner and File Classes**
- Java allows reading files using the **`Scanner`** class in combination with the **`File`** class.
- This is similar to reading user input from the console.
- **Example:**

  ```java
  import java.io.File;
  import java.io.IOException;
  import java.util.Scanner;

  public class ReadFileExample {
      public static void main(String[] args) {
          try {
              File file = new File("data.txt");
              Scanner scanner = new Scanner(file);
              while (scanner.hasNextLine()) {
                  System.out.println(scanner.nextLine());
              }
              scanner.close();
          } catch (IOException e) {
              System.out.println("An error occurred.");
          }
      }
  }
  ```

### **Reading Files into an ArrayList**
- Files are often read into a **collection** such as an **ArrayList**.
- **Example:**

  ```java
  import java.io.*;
  import java.util.*;

  public class ReadFileToList {
      public static void main(String[] args) throws IOException {
          File file = new File("data.txt");
          Scanner scanner = new Scanner(file);
          List<String> lines = new ArrayList<>();

          while (scanner.hasNextLine()) {
              lines.add(scanner.nextLine());
          }
          scanner.close();

          System.out.println(lines);
      }
  }
  ```

---

## Writing Files
### **Writing Data to a File**
- Writing data to a file ensures **data persistence**.
- Java provides multiple ways to write files, but **`PrintWriter`** is a simple option.
- **Example:**

  ```java
  import java.io.*;

  public class WriteFileExample {
      public static void main(String[] args) {
          try {
              PrintWriter writer = new PrintWriter("output.txt");
              writer.println("Hello, World!");
              writer.println("Writing to a file in Java.");
              writer.close();
          } catch (IOException e) {
              System.out.println("An error occurred.");
          }
      }
  }
  ```

### **Using java.nio for Efficient File Writing**
- The **`java.nio`** package provides a modern approach for handling file operations.
- More efficient for writing large amounts of data.
- **Example:**

  ```java
  import java.nio.file.*;
  import java.io.IOException;
  import java.util.*;

  public class WriteFileNIO {
      public static void main(String[] args) {
          List<String> lines = Arrays.asList("Hello, World!", "This is Java NIO");
          try {
              Path filePath = Paths.get("output.txt");
              Files.write(filePath, lines);
          } catch (IOException e) {
              System.out.println("An error occurred.");
          }
      }
  }
  ```

---

## Conclusion
- **Reading and writing files** in Java allows for **dynamic data handling**.
- **`Scanner` and `File` classes** are commonly used for reading files.
- **`PrintWriter` and `java.nio.Files.write()`** provide efficient ways to write data.
- Mastering file handling is essential for **data persistence and program flexibility**.
