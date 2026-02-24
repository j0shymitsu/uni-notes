# EXPLORING 32-BIT (i386) ASSEMBLY
N-D

---
## Contents
1. Last Lesson Review
2. Conditional Instructions
3. Loops – Theory
4. Comparison Options
5. CPU Registers and Flags
6. Exploring 32-bit Instructions
7. i386 vs x86_64 System Calls
8. 32-bit Function Calling Conventions
9. ELF Sections
10. Workshop

---
## Last Lesson Review
### Key Concepts Reviewed
- **cmp and jmp Instructions**:
    - Reviewed comparison and jump instructions from loop workshops
    - Used for implementing control flow in assembly programs

### Register State Management
- **Register Clobbering**:
    - Registers get clobbered between functions, library calls, and syscalls
    - Cannot rely on register values being preserved across calls
    - This is why we use the stack for preserving values

### Flag Register Behavior
- **Flag Modifications**:
    - Math operations affect flag registers
    - The `cmp` instruction also affects flags
    - Many operations can set/clear flags used for conditional jumps

---
## Conditional Instructions
### Unconditional Jump
- **JMP Instruction**: `JMP label`
    - Always jumps to the specified label
    - No condition evaluation

### Conditional Jump
- **J<condition> Instruction**: `J<condition> label`
    - Jumps to label only if condition is met
    - Condition based on flag register state

### Infinite Loop Pattern
```asm
label:
    ; do stuff    ; this part runs and re-runs repeatedly, forever
    jmp label
```

### Label Naming Rules
- Can be any name
- Cannot start with a number
- Cannot use certain special characters
- Convention: use descriptive names

---
## Loops – Theory
### Basic Loop Construction
**Common Loop Pattern**:
```asm
    mov rax, 10
label1:
    ; do stuff    ; put your code here, that you want to run X times
    dec rax       ; decrements (decrease by 1) the value in rax
    jnz label1    ; jump if not zero to label1
```

### Loop Iteration Count
- **Tracing the Loop**:
    - `rax` is 10 first time through the loop
    - Then 9, then 8, etc.
    - `rax` is 1 on the last iteration
    - Loop executes 10 times total

### Key Instructions Explained
- **mov rax, 10**: Moves the value 10 into register rax (loop counter)
- **dec rax**: Decrements (decreases by 1) the value in rax
- **jnz label1**: **J**ump if **N**ot **Z**ero to label1

### Register Flexibility
- **Counter Register Choice**:
    - Don't have to use `rax` for loop counter
    - Can use [almost*] any register
    - If `rax` is needed for something else, use: `rcx`, `rdx`, `rsi`, etc.
    - *Stray away from using stack registers (`rsp`, `rbp`, `esp`, `ebp`)

---
## Comparison Options
### Operand Types for Comparison
**Can directly compare two operands**:
1. The values held in two registers (with limitations)
2. The value in a register with an 'immediate' value (given explicitly in the instruction) (with limitations)

### Comparison Syntax
- **Example**: `cmp register, value`

### Reference Resources
- **x86 and amd64 instruction reference**: [http://www.felixcloutier.com/x86/](http://www.felixcloutier.com/x86/)
    - Lookup: [CMP](http://www.felixcloutier.com/x86/CMP.html)

### How Comparison Works
- **Flag Register Effects**:
    - The `cmp` instruction sets/clears bits in the special `rflags` register
    - Once these bits are set or cleared, we can perform a conditional jump

### Conditional Jump Instructions
| Instruction | Description |
|-------------|-------------|
| **JE** | Jump If **E**qual |
| **JNE** | Jump If **N**ot **E**qual |
| **JL** | Jump If **L**ess than |
| **JLE** | Jump If **L**ess than or **E**qual to |
| **JG** | Jump if **G**reater than |
| **JGE** | Jump If **G**reater than or **E**qual to |

### Implicit Comparisons
**Important Note**:
- Not only the `cmp` instruction sets/clears bits in `rflags`
- Many arithmetic operations also affect `rflags`:
    - Adding, subtraction
    - Decrementing (`dec`), incrementing (`inc`)
- Can perform conditional jump after these operations without explicit `cmp`

**Example**:
```asm
    mov rax, 10
label1:
    ; do stuff
    dec rax       ; dec affects flags (specifically Zero Flag)
    jnz label1    ; no cmp needed - dec already set flags
```

---
## CPU Registers (x86_64)
### Special Purpose Registers
**In addition to the 16 General Purpose 64-bit Data Registers**:

- **rflags**:
    - Flags of individual bits that get set (=1) or cleared (=0) as CPU's state changes

- **rip** (Instruction Pointer / Program Counter):
    - This is a 64-bit address for pointing to a place in RAM
    - This is the memory address where the CPU will pull the machine instruction for the FETCH stage of the pipeline

---
## CPU Flags Register (rflags/eflags)
### Register Overview
- **rflags**: 64-bit flags register
    - Individual bits get **set** (=1) or **cleared** (=0) as CPU's state changes
    - Same as **eflags** (32-bit) as the upper 32 bits of 64 are not yet used

### Flags of Interest
- **CF – Carry Flag**
- **PF – Parity Flag**
- **ZF – Zero Flag**
- **SF – Sign Flag**
- **OF – Overflow Flag**

---
## Carry Flag (CF)
### Definition
- **Set** (→1) when any operation requires a 'carry' or a 'borrow'

### Example: 8-bit Addition
**Consider ADD op1, op2 on 8-bit register**:
```
op1 = 197 = 11000101
op2 =  88 = 10110000
      ---------------
      285 = 100011101
```

### Carry Flag Behavior
- Result is 285 = 100011101 (nine bits)
- This is a **nine-bit value** so carry flag is set
- CPU can understand that result is greater than 8 bits
- Overflow stored in next higher bits of register

---
## Parity Flag (PF)
### Definition
- **Set** when an even number of bits are set in the resulting register for the last operation

### Examples
- **Parity set (→1)**: even number of bits → `00100111` (4 bits set)
- **Parity unset/cleared (→0)**: odd number of bits → `00001101` (3 bits set)

---
## Zero Flag (ZF)
### Definition
- **Set** (→1) when the resulting value of the last operation is zero

### Behavior
- Set to **1** if the result was zero
- Cleared to **0** if the result was not zero

### Common Usage
- Most frequently used for loop conditions
- `jnz` (jump if not zero) checks this flag

---
## Sign Flag (SF)
### Definition
- **Set** (→1) when the result of the last operation was a negative number
- Indicates that the most significant bit (MSB) is 1

### Instructions Affecting Sign Flag
- Can be set by all arithmetic instructions **except** `mul` and `div`
- Can also be set by compare and logical instructions (`and`, `or`, `xor`, etc.)

---
## Overflow Flag (OF)
### Definition
- **Set** (→1) when any operation on same-signed values gives the result with a different sign value

### Example: 8-bit Addition with Overflow
```
103 + 105 = 208 = 11010000
```
- On 8-bit register system, this result would be considered negative
- The **MSB (Most Significant Bit)** is set to **1**
- Result appears negative even though we added two positive numbers
- CPU sets the overflow flag to indicate this problem

### Purpose
- Mitigates problems with signed arithmetic overflow
- Allows software to detect when signed arithmetic produces incorrect sign

---
## Exploring 32-bit (i386) Instructions
### Relationship to 64-bit
- **64-bit operations have a 32-bit counterpart**
- All 32-bit instructions available on 64-bit systems

### Performance Considerations
- **Running 32-bit code** will have an effect on system performance depending on architecture
- Generally masks off the upper 32 bits of the 64-bit word

### Additional Resources
- [What happens if you use the 32-bit int 0x80 Linux ABI in 64-bit code?](https://stackoverflow.com/questions/46087730/what-happens-if-you-use-the-32-bit-int-0x80-linux-abi-in-64-bit-code)

---
## i386 vs x86_64 System Calls
### System Calling Convention
- **Must be followed to do syscalls**
- Different conventions for 32-bit vs 64-bit

### 32-bit Syscall Mechanism
- In 32-bit we use the **int instruction** – specifically with operand **0x80** (or 80h)
- This triggers a software interrupt to enter kernel mode

### Example Files
- **32-bit Linux syscall conventions** available on Moodle:
    - `exit32.s` - Example exit syscall
    - `write32.s` - Example write syscall

---
## exit32.s vs exit64.s Comparison
### 32-bit Exit (exit32.s)
```asm
;32bit
section .text
global _start
_start:
    mov eax, 1      ; the exit() call number
    mov ebx, 5      ; 5 // something to look at
    int 0x80        ; make the call
```

### 64-bit Exit (exit64.s)
```asm
;64bit
section .text
global _start
_start:
    mov rax, 60     ; the exit() call number
    mov rdi, 5      ; 5 // something to look at
    syscall         ; make the call
```

### Key Differences
- **Register names**: 32-bit uses `eax`, `ebx` vs 64-bit uses `rax`, `rdi`
- **Syscall numbers**: exit is 1 in 32-bit, 60 in 64-bit
- **Invocation**: `int 0x80` in 32-bit vs `syscall` in 64-bit

---
## write32.s vs write64.s Comparison
### 64-bit Write (write64.s)
```asm
;64bit
global _start
section .text
_start:
    mov rax, 1          ; write(
    mov rdi, 1          ;   STDOUT_FILENO,
    mov rsi, msg        ;   "Hello, world!\n",
    mov rdx, msglen     ;   sizeof("Hello, world!\n")
    syscall             ; );

section .rodata
msg: db "Hello, world!", 10
msglen: equ $ - msg

    mov rax, 60         ; exit(
    mov rdi, 0          ;   EXIT_SUCCESS
    syscall             ; );
```

### 32-bit Write (write32.s)
```asm
;32bit
global _start
section .text
_start:
    mov eax, 4          ; write(
    mov ebx, 1          ;   STDOUT_FILENO,
    mov ecx, msg        ;   "Hello, world!\n",
    mov edx, msglen     ;   sizeof("Hello, world!\n")
    int 0x80            ; );

section .rodata
msg: db "Hello, world!", 10
msglen: equ $ - msg

    mov eax, 1          ; exit(
    mov ebx, 0          ;   EXIT_SUCCESS
    int 0x80            ; );
```

### Key Differences Summary
| Aspect | 32-bit | 64-bit |
|--------|--------|--------|
| **Syscall number register** | eax | rax |
| **First argument** | ebx | rdi |
| **Second argument** | ecx | rsi |
| **Third argument** | edx | rdx |
| **Syscall invocation** | int 0x80 | syscall |
| **Write syscall number** | 4 | 1 |
| **Exit syscall number** | 1 | 60 |

---
## 32-bit Function Calling Conventions
### Overview
Multiple conventions exist for how functions are called:

### Caller Cleans the Stack
- **cdecl** – The original standard. And still so.
- **stdcall** – Microsoft naming convention. Not actually standard.

### Callee Cleans the Stack
- Less common in standard C programming

### Fastcall
- **Fastcall** – Pass some of the arguments in registers instead of the stack
- Borland compiler used this historically
- Callee cleans the stack

### Register Preservation
**Important**: All i386 calling conventions preserve the **EDI**, **ESI**, **EBP**, and **EBX** registers
- These must be saved if modified
- Must be restored before function returns

---
## cdecl Calling Convention
### Characteristics
- **Arguments are pushed right to left** onto stack
- **Caller cleans the stack** after function returns
- **Can accept a variable number of arguments** (e.g., `printf()`)

### Syntax
```c
return_type _cdecl func_name();
```

### Additional Resources
- See [https://en.wikipedia.org/wiki/X86_calling_conventions#cdecl](https://en.wikipedia.org/wiki/X86_calling_conventions#cdecl) for more info

---
## cdecl Example Code
### C Source Code
```c
#define _cdecl __attribute__((cdecl))

#include <stdio.h>

int _cdecl add2things(int, int);

int _cdecl add2things(int x, int y) {
    int result = x + y;
    return result;
}

int _cdecl main() {
    int result = add2things(5, 6);
    printf("%d\n", result);
    return 0;
}
```

---
## cdecl Assembly Analysis
### add2things Function
```asm
add2things:
    push ebp                        ; save old base pointer
    mov ebp, esp                    ; set up new stack frame
    sub esp, 16                     ; allocate local variable space
    mov eax, DWORD PTR [ebp+8]      ; load first parameter (x)
    mov edx, DWORD PTR [ebp+12]     ; load second parameter (y)
    add eax, edx                    ; result = x + y
    mov DWORD PTR [ebp-4], eax      ; store result in local variable
    mov eax, DWORD PTR [ebp-4]      ; load result into return register
    leave                           ; restore stack frame
    ret                             ; return to caller
```

### main Function (relevant section)
```asm
main:
    ...
    push 6                          ; push second argument (right to left)
    push 5                          ; push first argument
    call add2things                 ; call the function
    add esp, 8                      ; caller cleans stack (2 args × 4 bytes)
    ...
```

### Key Observations
- **Arguments pushed right to left**: 6 first, then 5
- **Parameters accessed via ebp**: `[ebp+8]` for first param, `[ebp+12]` for second
- **Caller cleans stack**: `add esp, 8` after call returns (8 bytes = 2 arguments)
- **Return value in eax**: Function result returned in eax register

### Stack Frame Layout During add2things
```
High addresses
+----------------+
| second param   |  [ebp+12] (y = 6)
+----------------+
| first param    |  [ebp+8]  (x = 5)
+----------------+
| return address |  [ebp+4]
+----------------+
| saved ebp      |  [ebp]
+----------------+
| local var      |  [ebp-4] (result)
+----------------+
| unused space   |  [ebp-8 to ebp-16]
+----------------+
Low addresses (esp)
```

---
## ELF Sections
### Overview
- **ELF** = Executable and Linkable Format
- Standard binary format for executables, object code, shared libraries
- Not specifically related to 32-bit, but important for assembly programming

### Learning Resource
- Brief overview using Wikipedia:
- [https://en.wikipedia.org/wiki/Executable_and_Linkable_Format](https://en.wikipedia.org/wiki/Executable_and_Linkable_Format)

### Common ELF Sections
- **.text** – Executable code
- **.rodata** – Read-only data (constants, strings)
- **.data** – Initialized writable data
- **.bss** – Uninitialized data (zeroed at load time)

---
## Workshop
### Task: Variable Argument Function
**In C, create a function that accepts a variable amount of arguments using va_list**:

1. **Functionality**:
    - Make it take a variable list of numbers
    - Print the average of those numbers

2. **Analysis**:
    - Examine the call stack in **edb** debugger
    - Observe how variable arguments are passed on stack
    - See how va_list accesses sequential stack locations

### Learning Goals
- Understand how variable argument functions work at assembly level
- See practical application of cdecl convention (caller cleans stack)
- Practice debugging and stack frame analysis
- Observe stack layout for non-fixed parameter count

---
## Summary
1. **Loops use registers as counters** with decrement and conditional jump instructions
2. **Comparison and arithmetic operations** both affect flag registers
3. **Five key flags**: Carry (CF), Parity (PF), Zero (ZF), Sign (SF), Overflow (OF)
4. **32-bit instructions** are subsets of 64-bit with different register names and syscall mechanisms
5. **Syscalls differ between architectures**: int 0x80 (32-bit) vs syscall (64-bit)
6. **cdecl convention** pushes arguments right-to-left, caller cleans stack
7. **Function calling conventions** define how arguments are passed and who cleans the stack
8. **Register preservation**: EDI, ESI, EBP, EBX must be preserved in i386 conventions
9. **Stack frames** allow functions to access parameters and local variables via ebp
10. **ELF format** organizes code and data into standard sections
