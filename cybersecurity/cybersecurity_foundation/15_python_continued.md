# PYTHON CONTINUED
18-11-24

---

## Content Overview
1. Control Flow and Loops.
2. Storing Data (Lists, Dictionaries).
3. Functions.
4. Importing and Using Libraries.
5. Formative Assessment Task.

---

## Control Flow in Python
- **Definition**:
  - Structures to manage the program's execution.
  - Includes conditional statements and loops.

### If-Else
- Syntax:
    ```python
    if(condition):
        statement
    else(condition):
        statement
    ```
 **Indentation**:
- Crucial for Python; groups code within control blocks.

---

## Loops
1. **While Loops**:
 - Repeats while a condition is `True`.
 - Syntax:
   ```python
   while condition:
       statement(s)
   ```
2. **For Loops**:
 - Iterates over items in a sequence (e.g., list, string, range).
 - Syntax:
   ```python
   for item in sequence:
       statement(s)
   ```
3. **Range Function**:
 - Generates a sequence of numbers.
 - Syntax:
   - `range(stop)`
   - `range(start, stop[, step])`

---

## Storing Data
1. **Lists**:
 - Ordered collections of objects (mutable).
 - Example:
   ```python
   numbers = [0, 1, 2, 3]
   ```
 - Operations:
   - `list.pop(x)`: Removes an element at index `x`.
   - `list.reverse()`: Reverses the list.
   - `list.sort()`: Sorts elements.

2. **Dictionaries**:
 - Key-value pairs for efficient data storage.
 - Example:
   ```python
   dictionary = {'key1': 8, 'key2': 'text'}
   ```
 - Access keys:
   - `dictionary['key1']`
 - Check existence:
   - `'key1' in dictionary`

---

## Functions
- **Definition**:
- Reusable blocks of code defined with `def`.
- Syntax:
  ```python
  def myfunction():
      statement(s)
      return
  ```
- **Local vs. Global Variables**:
- **Local**: Exist only within the function.
- **Global**: Accessible throughout the program using the `global` keyword.

---

## Importing Libraries
- **Install Libraries**:
1. Update system: `sudo apt-get update`.
2. Install `pip`: `sudo apt-get install pip`.
3. Install library: `pip install library_name`.
- **Example**:
- Import `nmap` for network scanning:
  ```python
  import nmap
  ```

---

## Formative Assessment Task
- Write two Python scripts to:
1. Use loops to process data.
2. Implement functions and data storage (lists or dictionaries).
- **Deadline**: Complete by Week 8.
- **Purpose**: Familiarize with Python syntax and logic.

---

## Key Takeaways
1. **Control Flow**:
 - If-else and loops manage execution paths.
2. **Data Storage**:
 - Use lists and dictionaries for flexible and efficient storage.
3. **Functions**:
 - Simplify repetitive tasks and improve code organization.
4. **Libraries**:
 - Extend Python's capabilities by importing external modules.