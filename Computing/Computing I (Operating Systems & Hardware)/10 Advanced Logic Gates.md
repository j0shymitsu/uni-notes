# ADVANCED LOGIC GATES
07-01-25

---

# CO4224 - Computing I: Week 10  
**Advanced Logic Gates**

---

## Content Overview
1. Logic Circuits and Boolean Expressions.
2. Storing Data with Logic Gates (Memory).
3. Karnaugh Maps for Simplifying Logic.
4. Constructing a Seven-Segment Display Decoder.

---

## Logic Circuits and Boolean Expressions
- **Boolean expressions** define how logic circuits function.
- **Task**: Construct circuits in **logic.ly** using Boolean expressions.
- **Example Boolean Expression**:
  - `D = (A.B.C) + (A.B.C) + (A.B.C) + (A.B.C)`

### **Truth Tables**
- Used to determine the output of a Boolean expression for all input combinations.
- Essential for verifying logic circuit correctness.

---

## Storing Data with Logic Gates (Memory)
- **Feedback Mechanism**:
  - Memory storage is achieved through **feedback loops** in logic circuits.
  - A simple **flip-flop** circuit stores one bit of information.
- **State Persistence**:
  - On startup, memory circuits may be in an **undefined state** until a **set** or **reset** command is issued.
  - Usually, a system-wide **reset** is performed when powered on.
- **Clocked Memory**:
  - A **clock signal** determines when memory bits are updated.
  - Additional **AND gates** help manage input changes based on clock pulses.

---

## Karnaugh Maps (K-Maps)
- **Purpose**:
  - A **graphical method** to simplify Boolean expressions.
  - Helps minimize logic circuits by reducing the number of required gates.
- **Structure**:
  - A two-dimensional array representing all possible input values.
  - Inputs are arranged along the edges, with corresponding outputs inside the table.

### **Rules for Simplifying Boolean Expressions**:
1. **Group ones into rectangles**:
   - Each group must contain **1, 2, 4, or 8 cells** (powers of 2).
   - No groups of **3, 5, or 6** cells.
2. **Overlapping is allowed**.
3. **Groups can wrap around the table**.
4. **Each group represents a simplified Boolean expression**.

---

## Seven-Segment Display Decoder
- **What is a Seven-Segment Display?**:
  - A common display used for **numbers (0-9)** and **hexadecimal (A-F)**.
  - Composed of **7 LED segments** labeled **a-g**.
- **How it Works**:
  - The display is controlled by **binary inputs (A to D)**, representing numbers 0-9.
  - Each segment (**a-g**) is turned on or off based on the input number.
- **Creating a Seven-Segment Decoder**:
  1. **Construct a truth table** for each segment (`a` to `g`).
  2. **Use Karnaugh Maps** to simplify logic for each segment.
  3. **Implement the logic using logic gates**.

---

## Summary
1. **Logic gates** are the foundation of all digital circuits.
2. **Boolean expressions, truth tables, and Karnaugh Maps** help design and simplify circuits.
3. **Flip-flops store memory bits**, essential for computing systems.
4. **Seven-segment displays** use logic circuits to represent numbers efficiently.

