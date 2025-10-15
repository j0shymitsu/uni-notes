# COMPILERS AND LINKERS
14-01-25

---

## Overview
- **Focus**: Exploring the role of compilers and linkers in converting high-level code into machine code.
- **Topics Covered**:
  - Interpreters vs. Compilers.
  - Components and processes involved in compilation.
  - Practical examples and use cases.

---

## Interpreters
- **Definition**: Programs that execute code line-by-line, analyzing and producing results in real time.
- **Advantages**:
  - Easy to stop or debug.
  - Rarely crashes entirely when errors occur.
- **Disadvantages**:
  - Slow due to repeated analysis during execution.
- **Examples**: BASIC, Python, JavaScript.

---

## Compilers
- **Definition**: Converts the entire program into assembly language, then machine code, creating a "ready-to-run" executable.
- **Advantages**:
  - Fast execution of compiled code.
  - Does not require an interpreter during runtime.
  - Platform-independent (if machine code matches the base).
- **Disadvantages**:
  - Debugging compiled code is harder.
  - Compilation after every change takes time.
  - Crashes can be severe.
- **Examples**: FORTRAN, Java, C++.

---

## Compiler Components
1. **Pre-Processor**:
   - Handles directives like `#define` in C++.
   - Replaces macros and merges source files.
2. **Compiler**:
   - **Lexical Analysis**:
     - Converts code into tokens (e.g., keywords, identifiers, constants).
   - **Parsing**:
     - Creates a Syntax Tree from tokens, analyzing code structure.
   - **Code Generation**:
     - Converts the Syntax Tree into assembly code, optimizing for registers, loops, and memory hierarchy.
3. **Assembler**:
   - Transforms assembly code into machine code (binary instructions).
4. **Linker**:
   - Combines machine code with external libraries and other source files.
   - Produces the final executable.

---

## Compilation Workflow
1. **Pre-Processing**:
   - Example: Replace `#define NUMPLAYERS (2)` with `(2)` wherever used.
2. **Lexical Analysis**:
   - Example code: `if (x >= y) y = 42;`
     - Tokens: `IF`, `LPAREN`, `ID(x)`, `GEQ`, `ID(y)`, `RPAREN`, etc.
3. **Parsing**:
   - Converts tokens into a Syntax Tree:
     ```
     ifStmt
       >=
      ID(x)
      ID(y)
       assign
      ID(y)
      INT(42)
     ```
4. **Code Generation**:
   - Produces assembly instructions optimized for performance:
     ```
     mov eax, [ebp+16]
     cmp eax, [ebp-8]
     jl L17
     mov [ebp-8], 42
     L17:
     ```
5. **Assembly and Linking**:
   - Generates machine code and integrates libraries (e.g., `math::sqrt`).

---

## Key File Types
- Source: `.java`, `.c`, `.cpp`
- Pre-processed: `.i`, `.ii`, `.pch`
- Assembly: `.s`
- Machine Code: `.o`, `.obj`
- Executables: `.exe`

---

## Debugging Tools
- **Symbol Table**:
  - Maps assembly code to functions and variables.
  - Useful for debugging but not necessary for running executables.
- **Disassembly**:
  - Converts machine code back to assembly to analyze program behavior.

---

## Review of Topics Covered
1. History of Computers.
2. Computer System Architecture.
3. Components of Modern Computers.
4. Number Systems (Binary, Decimal, Hexadecimal).
5. Logic Gates and Boolean Algebra.
6. Building Circuits.
7. Machine Code and Assembly Language.
8. Compilers and Linkers.

---

## Next Topics
- Data Formats.
- Finite State Machines.
- Preparation for the second in-class test (07-02-2025).

---

## Further Reading and Tools
- [W3C Validator](https://validator.w3.org/)
- Explore more about compilers, assembly, and linkers to understand their importance in cybersecurity.

---