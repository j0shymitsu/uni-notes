# INTRODUCTION TO PYTHON
18-11-24


---

## Content Overview
1. Introduction to Python.
2. Downloading and Installing Python.
3. Python Environments (Terminal, IDLE).
4. Variables and Types.
5. Input and Output.
6. Control Flow, Logical, and Boolean Operators.

---

## The Python Programming Language
- **Definition**:
  - Interpreted, object-oriented, high-level programming language with dynamic semantics.
- **Key Features**:
  - Free and cross-platform.
  - Commonly used in scripting, especially in cybersecurity.
  - No compilation required before execution.
  - Combines with other software components and languages.

---

## Installing Python
1. **Kali VM**:
   - Python 3 is pre-installed.
   - Open the terminal and type `python3` to use Python 3.
2. **Other Platforms**:
   - Download from [python.org](https://www.python.org/downloads/).
3. **Optional Configuration**:
   - Set Python 3 as the default with the command:
     ```bash
     alias python=python3
     ```

---

## Python Environments
1. **Terminal**:
   - Use `python3` to access Python 3 (recommended).
   - Type code directly into the terminal for immediate execution.
2. **IDLE**:
   - Install with:
     ```bash
     sudo apt-get install idle
     ```
   - Combines an interactive interpreter with a code editor.
3. **Interactive Prompt**:
   - Execute code immediately without saving.
   - Ideal for testing and debugging small scripts.
4. **Non-Interactive Prompt**:
   - Write scripts in a text editor and save with `.py` extension.
   - Execute scripts with:
     ```bash
     python3 script.py
     ```

---

## Python Command Flow and Structure
- **Indentation**:
  - Python uses whitespace for block structure instead of `{}`.
  - Indentation errors prevent code execution.
- **Example**:
  - Code blocks are determined by consistent indentation levels.

---

## Variables and Types
1. **Declaration**:
   - No need to declare types explicitly.
   - Example:
     ```python
     a = 10
     b = "text string"
     ```
2. **Dynamic Typing**:
   - Variables can be reassigned to different data types.
3. **String Delimiters**:
   - Use single (`'`), double (`"`), or triple quotes (`'''` or `"""`).

---

## Input and Output
1. **Input**:
   - Use `input()` to receive user input (default is string).
   - Convert input to other types as needed:
     ```python
     num = int(input("Enter a number: "))
     ```
2. **Output**:
   - Use `print()` to display data.

---

## Control Flow in Python
1. **Boolean Values**:
   - False values: `0`, `False`, `None`, empty strings/lists.
   - Everything else evaluates as `True`.
2. **Logical Operators**:
   - `<`, `<=`, `>`, `>=`, `==`, `!=`: Comparison operators.
   - `and`, `or`, `not`: Logical operators.
   - `is`, `is not`: Object identity.
   - `in`, `not in`: Membership testing.
3. **Conditional Statements**:
   - **If-Else**:
     - Executes code based on a condition.
   - **If-Elif-Else**:
     - Handles multiple conditions.
   - **Nested If**:
     - Allows conditions within other conditions.

---

## Key Takeaways
1. **Python Basics**:
   - Interpreted and user-friendly for scripting and rapid prototyping.
2. **Environments**:
   - Choose between terminal, IDLE, or script files depending on use case.
3. **Dynamic Typing**:
   - Simplifies variable handling compared to statically typed languages.
4. **Control Flow**:
   - Boolean and logical operators enable effective decision-making structures.