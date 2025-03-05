# SIMULTANEOUS EQUATIONS
05-03-25

---

## Contents
- Introduction
- Revision: Linear Equations
- Solving Simultaneous Equations
  - Graphical Method
  - Substitution Method
  - Elimination Method
- Applications of Simultaneous Equations
  - Collision Detection
  - Cost Comparison
- Conclusion

---

## Introduction
- **Simultaneous equations** involve finding values for multiple unknowns.
- Common in **engineering, physics, computing, and economics**.
- Can be solved **algebraically or graphically**.

---

## Revision: Linear Equations
- A **linear equation** has the form `ax + b = c`.
- To solve for `x`:
  - **Simplify** (expand brackets, collect like terms).
  - **Rearrange** to isolate `x`.
  - **Check** by substituting the solution back.
- Example:
  ```math
  3x + 5 = 14
  3x = 9
  x = 3
  ```

---

## Solving Simultaneous Equations
### **Graphical Method**
- Each equation is plotted as a straight line (`y = mx + c`).
- **Solution** is where the lines intersect.
- Example:
  - `y = 2x + 3`
  - `y = -x + 5`
  - The lines cross at `(x, y) = (2, 7)`, so `x = 2`, `y = 7`.

### **Substitution Method**
- Rearrange one equation to express one variable in terms of the other.
- Substitute this into the second equation.
- Solve for one variable, then substitute back for the second.
- Example:
  ```math
  x + y = 10
  y = 10 - x (from eq.1)
  2x + (10 - x) = 12
  x = 2, y = 8
  ```

### **Elimination Method**
- Multiply equations (if needed) so that one variable cancels out when added/subtracted.
- Solve for the remaining variable.
- Substitute back for the second variable.
- Example:
  ```math
  3x + 2y = 14
  4x - 2y = 10
  Add: 7x = 24 → x = 24/7
  Substitute: y = 3
  ```

---

## Applications of Simultaneous Equations
### **Collision Detection in Games & Engineering**
- Objects follow paths modeled by equations.
- Solve for `x` and `y` to detect intersection points.
- Example: Aircraft flying in a circle, checking if it crosses a restricted area.

### **Cost Comparison**
- Used to compare **payment plans or financial models**.
- Example:
  - Plan A: `y = 20x` (cost per day)
  - Plan B: `y = 40 + 10x` (fixed fee + daily charge)
  - Equating both: `20x = 40 + 10x`
  - Solve for `x`: `x = 4`
  - **Result:** At `x = 4`, both plans cost the same; after that, Plan B is cheaper.

---

## Conclusion
- **Simultaneous equations** are crucial in **mathematics and computing**.
- They can be solved using **graphical, substitution, or elimination methods**.
- **Applications include** physics, game development, economics, and engineering.
- Understanding these methods ensures better problem-solving in **real-world and computational contexts**.
