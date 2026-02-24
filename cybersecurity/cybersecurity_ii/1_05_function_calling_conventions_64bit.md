# FUNCTION CALLING CONVENTIONS (LINUX, 64 BIT)
N-D

***

## Contents

1. CPU Registers (x86_64) (Day 1 review)
2. System V ABI (AMD64) overview (Day 2 review)
3. Argument passing (registers + stack)
4. Return values
5. Caller vs callee responsibilities
6. Register clobbering and saving rules
7. Extra: GDB quick workflow

***

## CPU Registers (x86_64)

### Special registers

- In addition to the 16 general-purpose 64-bit registers, two special registers highlighted were:
- **rflags**: A collection of individual flag bits that get set (=1) or cleared (=0) as the CPU state changes.
- **rip** (instruction pointer / program counter): A 64-bit address pointing into RAM, indicating where the CPU will fetch the next machine instruction during the fetch stage.

***

## System V ABI (AMD64) overview

### What “calling convention” means here

- The presentation focuses on the 64-bit Linux function calling convention known as the **System V ABI (AMD64)**.
- Reference mentioned in the slides: “System V ABI (AMD64) – 3.2 Function Calling Sequence”.

***

## Argument passing

### First six integer/pointer args (registers)

For a call like `func(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)`, the first six arguments go in registers in this order:


| Argument | Register |
| :-- | :-- |
| arg1 | `rdi`  |
| arg2 | `rsi`  |
| arg3 | `rdx`  |
| arg4 | `rcx` (or `r10` for a syscall)  |
| arg5 | `r8`  |
| arg6 | `r9`  |

### Remaining args (stack)

- Arguments from **arg7 onwards** are passed on the call stack.
- They are pushed in **reverse order** (e.g., `arg9`, then `arg8`, then `arg7`).

***

## Return values

- If a function returns a value (e.g., `x = func1(arg1, arg2, arg3)`), the return value is passed from callee back to caller in **`rax`**.
- In that example, `rax` is described as holding the value that ends up in `x`.

***

## Caller vs callee

### Terminology

- For each function call there is a **caller** (the function that makes the call) and a **callee** (the function being called).
- Example given: when `main()` calls `func1(int, int)`, `main` is the caller and `func1` is the callee.


### Call-tree example (from slides)

```c
funcLast(int z) { /* ... */ }
funcX(int a, int b, int c) { /* ... */ }

func1(int x, int y) {
    funcX(a, b, c);
}

main() {
    func1(x, y);
    funcLast(z);
}
```

- This was used to motivate how nested calls build a call-tree and why conventions matter.

***

## Register clobbering and saving

### Why saving is needed

- Registers are effectively “global” to all functions, so any callee can overwrite values the caller cared about.
- To avoid values being “clobbered”, a callee saves registers (typically onto the call stack), uses them, then restores them before returning.


### Registers that can be used without saving (callee may clobber)

- The argument-passing registers `rdi`, `rsi`, `rdx`, `rcx`, `r8`, and `r9` can be used by the callee without saving them to the stack (as described on the slides).


### Registers the callee should save before using

- The slides state the callee should save these registers before using them: `rbx` (noted as optional base pointer), `rbp` (base pointer), and `r12`–`r15`.
- The stack pointer `rsp` is also often saved on function entry and restored before return (as noted in the slides).


### Note on conventions

- The slides note that more conventions exist in the System V ABI, and also that many programs don’t strictly follow conventions—especially if writing assembly “however you want,” which can make automated debugging harder.

***

## Extra: GDB quick workflow

- Run the syscall (write syscall) code in GDB, then use: `disassemble`, `break _start`, `stepi`, `info registers`, and `x/s <memory address>` to inspect memory as a string.

***

## Summary

1. x86_64 includes special registers like `rip` (next instruction address) and `rflags` (CPU state flags).
2. 64-bit Linux commonly uses the System V ABI (AMD64) calling convention.
3. The first six args are passed in `rdi`, `rsi`, `rdx`, `rcx` (or `r10` for syscalls), `r8`, `r9`; later args go on the stack in reverse order.
4. Return values are passed back in `rax`.
5. To prevent register clobbering across calls, callees save/restore certain registers using the call stack.
6. A practical GDB workflow shown: `disassemble`, `break _start`, `stepi`, `info registers`, and `x/s`.


