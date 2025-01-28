# LOGICAL OPERATORS
11-10-24

---

## Overview
1. Introduction to Logical Operators.
2. Logical AND (&&).
3. Logical OR (||).
4. Logical NOT (!).
5. Short-Circuit Evaluation.

---

## Introduction to Logical Operators
- **Purpose**:
  - Combine multiple boolean expressions.
  - Control the flow of program execution based on conditions.

---

## Logical AND (&&)
- **Function**:
  - Returns true if **both** operands are true.
- **Syntax**:
  condition1 && condition2

---

## Logical OR (||)
- **Function**:
  - Returns true if **at least one** operand is true.
- **Syntax**:
  condition1 || condition2

---

## Logical NOT (!)
- **Function**:
  - Inverts the boolean value of an operand.
- **Syntax**:
  !condition

---

## Short-Circuit Evaluation
- **Description**:
  - Logical operations stop evaluating as soon as the result is determined.
- **Logical AND (&&)**:
  - If the first operand is false, the second operand is **not** evaluated.
- **Logical OR (||)**:
  - If the first operand is true, the second operand is **not** evaluated.

---

## Key Takeaways
1. **Logical Operators**:
   - Essential for combining boolean expressions and controlling program flow.
2. **Short-Circuit Behavior**:
   - Enhances efficiency by avoiding unnecessary evaluations.