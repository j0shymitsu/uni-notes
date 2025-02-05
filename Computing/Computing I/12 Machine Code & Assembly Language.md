# MACHINE CODE & ASSEMBLY LANGUAGE
07-01-25

---

## Content Overview
1. Understanding Abstraction in Computing.
2. Introduction to Machine Code.
3. Assembly Language and Its Role.
4. Programming with Assembly Instructions.
5. Data Structures in Assembly.
6. Modern Instruction Sets.

---

## Abstraction in Computing
- **Definition**:
  - The concept of viewing a system at different levels of complexity.
- **Levels of Abstraction**:
  - **High-Level**: Applications and programming languages (e.g., Java, Python).
  - **Mid-Level**: Algorithms, compilers, and operating systems.
  - **Low-Level**: CPU design, buses, and logic gates.
  - **Hardware Level**: Transistors and circuits.

---

## Machine Code
- **Definition**:
  - The lowest level of software, consisting of binary instructions executed by the CPU.
- **Characteristics**:
  - Operates entirely on **binary numbers**.
  - Controlled by **data flowing through buses**.
  - Each CPU component reacts to specific **binary input patterns**.

### **Simple 4-bit CPU Example**
- Registers: **A** and **B** (store values from `0000` to `1111`).
- Example Instructions:
  - Store value in **A**.
  - Store value in **B**.
  - Output **A** or **B**.
  - Add **B** to **A**.
  - Subtract **B** from **A**.
  - Increment or decrement **A**.

---

## Assembly Language
- **Definition**:
  - A **human-readable representation** of machine code.
- **Purpose**:
  - Simplifies programming at the hardware level.
  - Uses **mnemonics** (short codes) instead of binary numbers.
- **Example Instructions**:

`STO A, 3 ; Store 3 in register A STO B, 5 ; Store 5 in register B ADD A, B ; Add B to A (A = A + B) OUT A ; Output the result`

---

## Programming with Assembly
### **Extending the Language**
- **More Registers**:
- Increase from **A and B** to **A-H** for more storage.
- **More Instructions**:
- `CMP A, B`: Compare A and B.
- `JEQ LABEL`: Jump to a label if the last comparison was equal.
- `JMP LABEL`: Jump to a label unconditionally.

### **Example: Multiplication by Repeated Addition**
- Multiplying `3 × 7` using loops:

`STO A, 0 ; Start with A = 0 STO B, 3 ; Set multiplier (3) STO C, 7 ; Set loop counter (7) Loop: ADD A, B ; Add B to A DEC C ; Decrease counter CMP C, 0 ; Check if counter is zero JEQ End ; If zero, jump to end JMP Loop ; Otherwise, repeat End: OUT A ; Output the result`

---

## Data Structures in Assembly
- **Stack Operations**:
- **PUSH**: Add a value to the top of the stack.
- **POP**: Remove a value from the stack.
- Example:
  ```
  PUSH A  ; Store A onto the stack
  POP B   ; Retrieve value from stack into B
  ```

---

## Modern Instruction Sets
- **Instruction Set Architectures (ISA)**:
- Define the machine code a CPU can execute.
- **Types**:
1. **RISC (Reduced Instruction Set Computing)**:
   - Simple, fast instructions.
   - Example: ARM processors.
2. **CISC (Complex Instruction Set Computing)**:
   - More complex instructions.
   - Example: x86 architecture.

---

## Summary
1. **Machine code** is binary-based and runs directly on hardware.
2. **Assembly language** provides a more readable way to write low-level programs.
3. **Programming in assembly** requires working with registers, jumps, and logic.
4. **Modern processors** use either **RISC** or **CISC** instruction sets.

