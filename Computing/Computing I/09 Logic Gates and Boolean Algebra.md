# LOGIC GATES AND BOOLEAN ALGEBRA
26-11-24

---
## Content Overview
1. Introduction to Logic Gates.
2. Boolean Algebra and Logical Operations.
3. Logic Gate Symbols and Truth Tables.
4. De Morgan’s Laws.
5. Functional Completeness (NAND & NOR).
6. Logic Gates in Computing (Binary Addition and Decision Making).

---

## Introduction to Logic Gates
- **Definition**:
  - Logic gates are the fundamental building blocks of digital circuits.
  - Built using **transistors**, which act as electronic switches.
- **Purpose**:
  - Perform logical operations based on binary inputs (0 and 1).
  - Used in processors, memory, and digital devices.

---

## Boolean Values
- **Binary states**:
  - `0` (Low, False, Off).
  - `1` (High, True, On).
- Boolean values represent **logical states** rather than numerical values.

---

## Basic Logic Gates
### **1. NOT Gate (Inverter)**
- **Symbol**: `¬A` or `A'`
- **Operation**: Inverts input (0 → 1, 1 → 0).

| A | Out |
|---|-----|
| 0 |  1  |
| 1 |  0  |

---

### **2. AND Gate**
- **Symbol**: `A • B`
- **Operation**: Returns `1` only if **both** inputs are `1`.

| A | B | Out |
|---|---|-----|
| 0 | 0 |  0  |
| 0 | 1 |  0  |
| 1 | 0 |  0  |
| 1 | 1 |  1  |

---

### **3. OR Gate**
- **Symbol**: `A + B`
- **Operation**: Returns `1` if **at least one** input is `1`.

| A | B | Out |
|---|---|-----|
| 0 | 0 |  0  |
| 0 | 1 |  1  |
| 1 | 0 |  1  |
| 1 | 1 |  1  |

---

### **4. NAND & NOR Gates**
- **NAND** = **AND + NOT** (`(A • B)'`)
- **NOR** = **OR + NOT** (`(A + B)'`)
- **Properties**:
  - NAND and NOR gates can be used to build any other gate (**Functional Completeness**).

---

### **5. XOR & XNOR Gates**
- **XOR (Exclusive OR)**:
  - Output is `1` when inputs **differ**.
- **XNOR (Exclusive NOR)**:
  - Output is `1` when inputs **match**.

---

## Boolean Algebra
- **Definition**:
  - Mathematical system for representing and simplifying logic circuits.
- **Basic Operators**:
  - **NOT** (`¬A` or `A'`)
  - **AND** (`A • B`)
  - **OR** (`A + B`)

### **De Morgan’s Laws**
1. **Complement of OR**:

`(A + B)' = A' • B'`

2. **Complement of AND**:

`(A • B)' = A' + B'`

---

## Functional Completeness: NAND & NOR
- **Any circuit can be built using only NAND or only NOR gates**.
- **Why?**
- NAND and NOR gates **combine** all basic logic functions.

### **Example: Constructing AND from NAND**

`A AND B = (A NAND B)'`

---

## Binary Addition Using Logic Gates
- **Half Adder**:
  - Uses **XOR** for sum and **AND** for carry.
- **Full Adder**:
  - Chains multiple half-adders to add multi-bit numbers.

---

## Decision Making in Logic Circuits
- **IF statements in programming** map directly to logic gates.
- **1-bit Decision Maker**:
  - A switch between two binary inputs based on a **control input**.

---

## Summary
1. **Logic gates** are the building blocks of computing.
2. **Boolean algebra** helps design and simplify circuits.
3. **De Morgan’s Laws** transform logical expressions.
4. **NAND & NOR gates** provide functional completeness.
5. **Logic circuits** enable **binary addition and decision making**.
