# NUMBER SYSTEMS AND ARITHMETIC OPERATIONS
19-11-24

---

## Content Overview
1. Introduction to Number Systems.
2. Decimal (Denary) Number System.
3. Binary Number System.
4. Decimal-to-Binary and Binary-to-Decimal Conversion.
5. Hexadecimal Number System.
6. Binary Addition and Subtraction.
7. Two’s Complement for Negative Numbers.
8. Octal Number System.

---

## Introduction to Number Systems
- Number systems are used to **store, process, and represent data** in computing.
- Commonly used number systems:
  1. **Binary (Base-2)**
  2. **Decimal (Base-10)**
  3. **Hexadecimal (Base-16)**
  4. **Octal (Base-8)**

---

## Decimal (Denary) Number System
- **Base-10** system, the standard number system used worldwide.
- Uses **digits 0-9**.
- Each digit's place represents a **power of 10**:
  - `245 = (2 × 100) + (4 × 10) + (5 × 1)`

---

## Binary Number System
- **Base-2** system used by computers.
- Uses only **two digits**: `0` (off) and `1` (on).
- Each digit’s place represents a **power of 2**:
  - `1010 = (1 × 8) + (0 × 4) + (1 × 2) + (0 × 1) = 10 in decimal.`

### **Counting in Binary**
1. 0, 1
2. 10, 11
3. 100, 101, 110, 111
4. 1000, 1001, 1010, 1011 …

---

## Decimal-to-Binary Conversion
1. **Divide the decimal number by 2**.
2. **Record the remainder**.
3. **Repeat until the quotient is 0**.
4. **Reverse the remainders** for the binary result.
  Example:
  - `54 ÷ 2 → remainder 0 27 ÷ 2 → remainder 1 13 ÷ 2 → remainder 1 6 ÷ 2 → remainder 0 3 ÷ 2 → remainder 1 1 ÷ 2 → remainder 1 Binary: 110110 (54₁₀ = 110110₂)`

---

## Binary-to-Decimal Conversion
1. Multiply each binary digit by **its positional value** (powers of 2).
2. Sum the results.
  Example:
  - `110110₂ = (1 × 32) + (1 × 16) + (0 × 8) + (1 × 4) + (1 × 2) + (0 × 1) = 54₁₀`


---

## Hexadecimal Number System
- **Base-16** system, often used in computing.
- Uses **digits 0-9 and letters A-F** (A=10, B=11, …, F=15).
- More compact than binary for representing large values.
  Example:
  - `2F₁₆ = (2 × 16) + (15 × 1) = 32 + 15 = 47₁₀`


### **Hexadecimal to Binary**
- Each **hex digit** corresponds to **4 binary digits**.
  Example:
  - `A2B₁₆ = 1010 0010 1011₂`



---

## Two’s Complement (Negative Numbers)
- Computers represent negative numbers using **two’s complement**.
- Steps:
  1. Invert the bits (one’s complement).
  2. Add `1` to the result.
Example:
`54₁₀ = 00110110₂ One’s Complement: 11001001 Two’s Complement: 11001010 (−54 in binary)`


---

## Octal Number System
- **Base-8** system, previously used in computing.
- Uses digits **0-7**.
- Groups **3 binary digits** per octal digit.
- Example:

`101110₂ = 56₈`


### **Octal to Decimal Conversion**
1. Multiply each octal digit by powers of 8.
2. Example:

`257₈ = (2 × 64) + (5 × 8) + (7 × 1) = 175₁₀`


---

## Summary
1. **Binary (Base-2)** is used in computers.
2. **Decimal (Base-10)** is the standard human numbering system.
3. **Hexadecimal (Base-16)** is compact and maps easily to binary.
4. **Two’s Complement** allows binary representation of negative numbers.
5. **Octal (Base-8)** was historically used in early computing.
