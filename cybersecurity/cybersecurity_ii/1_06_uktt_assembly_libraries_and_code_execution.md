# UKTT ASSEMBLY: LIBRARIES AND CODE EXECUTION WAYS
N-D

***

## Contents

1. Libraries (static and dynamic linking)
2. Assembling and linking an assembly program (review)
3. Executable file formats
4. Linking to libc and calling library functions
5. Function prologue and epilogue (call stack detail)
6. Code execution ways (return-oriented, self-writing, JIT)

***

## Libraries

### What are libraries?

- **Libraries** are reusable code packaged into a file that can be loaded into memory when needed


### Two key ways to use libraries

1. **Static Linking (SL)**: The required library becomes part of the executable (ELF) file you generate
2. **Dynamic Linking**: Two ways…
    - **DL i.**: Library loading and linking done at program load time when the program is loaded into memory for running as a process. The OS's 'loader' handles this
    - **DL ii.**: The program itself may request a new library at any time using `dlopen` (dynamic library open)
        - Try: `$ man dlopen`

### Libraries in C/C++ vs Assembly

- When compiling a C/C++ program, the compiler automatically links to **libc** (the standard C Library)
- Functions are exposed in header files included using `#include <headerfile>` – This provides **DL i.**
- Example: `printf("")` or `cout << ""` in C/C++ leads to a call to `puts()` in libc
- In assembly, we can do something similar...

***

## Assembling and Linking an Assembly Program - Review

### The build process

The typical workflow follows these stages:


| Stage | Tool | Input | Output |
| :-- | :-- | :-- | :-- |
| **Assemble** | `nasm` (assembler) | Assembly source code file | Object file (.o) |
| **Link** | `ld` (linker) | Object file(s) | Executable |
| **Load** | OS loader | Executable | Process in memory |

**Process flow**:

```
assembly file → ASSEMBLER → object file → LINKER → Executable → LOAD INTO MEMORY → Process
```


### Executable file formats by OS

Different operating systems use different executable formats:


| OS | File Format | Expansion |
| :-- | :-- | :-- |
| **Linux** | ELF | Executable Linkable Format |
| **Windows** | PE | Portable Executable |
| **UNIX** | COFF / ELF | Common Object File Format (incl. ECOFF, XCOFF) |
| **OS X / iOS** | Mach-O | - |
| **Amiga** | Hunk / ELF | - |

**Important**: Because assemblers and linkers generate different file formats on different OSs, a program compiled on one OS cannot be run on another OS, even if for the same CPU

- Linux will not run Windows or OS X binaries
- Windows will not run Linux or OS X binaries
- OS X will not run Linux or Windows binaries
- A similar situation exists for libraries!

***

## Assembling and Linking with Libraries

### Linking multiple object files

- It is possible, and sometimes necessary, to link multiple object files into an executable, including externally provided object files


### Static Linking (SL)

- The linker can include libraries when the executable is built
- The libraries are included as part of the executable code
- Process includes static library files during linking stage


### Dynamic Linking (DL i.)

- The linker can include code to indicate to the loader to dynamically load and link the libraries at **program load time**
- Special object file: **crt1.o** (C runtime) provides the ready-made `_start` routine


### Dynamic Linking (DL ii.)

- The program itself can run library or system calls to request the loading and linking of dynamic libraries at **run time**


### Combination

- In reality, any combination of these approaches can be done together

***

## Linking to Libc

### Writing a main function instead of _start

Instead of using `_start`, we can write a `main` function:

**Key requirements:**

1. **Declare main globally** (so it is visible to the linker)
    - If not declared, the linker will indicate an "undefined reference to 'main'" in function `_start`
    - We are using a ready-made `_start` routine that is in the **crt1.o** object file
    - Try: `$ objdump -d /usr/lib64/crt1.o` (32-bit version at: /usr/lib/crt1.o)
2. **Use `.text` section** directive to instruct the assembler to put the following into the code (".text") section of the ELF and therefore when run, into the code section of memory
3. **Create a function** from the label `main` until the `ret`[urn] instruction
4. **Manage stack and base pointer registers** (rsp/rbp)
5. **Return from function** instead of doing an `exit` syscall
    - When finished, instead of exit syscall, just return from the function

### Assembly vs build commands

**Assemble**:

```bash
$ nasm -f elf64 lib_64.s -l lib_64.lst
```

Output: → `lib_64.o`

**Link** (using gcc to run the linker for us):

```bash
$ gcc -m64 -o lib_64 lib_64.o
```

The long way (not needed):

```bash
$ ld -o lib_64 -dynamic-linker /lib64/ld-linux-x86-64.so.2 \
  /usr/lib64/crt1.o /usr/lib64/crti.o -lc lib_64.o /usr/lib64/crtn.o
```

**Run**:

```bash
$ ./lib_64
```

**Explore the binary**:

```bash
$ readelf -a ./lib_64    # shows: /lib64/ld-linux-x86-64.so.2
$ objdump -d ./lib_64    # see _start routine from crt0.o
```

Also, **crti.o** and **crtn.o** are merged and included (`/usr/lib64/crt*.o`)

***

## Function Prologue and Epilogue (Call Stack Detail)

### Review: Functions and the Stack (CO4611)

C/C++ code is transformed during compilation:

```c
int main(void)
{
    Some extra code: The Function Prologue
    
    Make space on the stack for variables (int something;)
    
    the code (machine code translation of your C code)
    
    Some extra code: The Function Epilogue
    
    return (Jump back to the place where it was before)
}
```

**Note**: The prologue and epilogue are extra code invisible to the C/C++ programmer

### Function Prologue

The **first** thing done inside the function:

1. Save the old BP (base pointer) to the Stack
2. Set the current BP to the top of the Stack
3. **...that enables our new Stack Frame!**

### Function Epilogue

The **last** thing done inside the function:

1. Restore the old BP from the Stack
2. Return to the caller
3. **...that restores the caller's Stack Frame!**

### Return value

- The **return value** is put into **rax**
- In the example shown: `rax` is xor'd with itself, thus making `rax = 0`


### C/C++ equivalent

```c
int main(void)
{
    // your code here
    return 0;
}
```


***

## Calling library functions (puts example)

### Adding a call to puts

To call `puts` from libc:

1. **Add a `.data` or `.rodata` section** at the bottom. Put the string here – label it 'msg'
    - The C-string must end in a zero byte
2. **Before calling**, move the address of the c-string (i.e. the address 'msg') into the register representing argument 1: **rdi**
    - Following the 64-bit Function Calling Convention
3. **Declare a link to the external symbol**: `puts`
4. **Call the puts function** (which is in Libc)

### Build and run

**Assemble**:

```bash
$ nasm -f elf64 lib_puts64.s -l lib_puts64.lst
```

Output: → `lib_puts64.o`

**Link**:

```bash
$ gcc -m64 -o lib_puts64 lib_puts64.o
```

**Run**:

```bash
$ ./lib_puts64    # Should call the standard C Library to print to screen
```


***

## Code Execution Ways

### Normal code execution

CPU execution flow:

- CPU executes a machine instruction, then steps onto the next instruction
- If a **jmp** or **j\<cc>** is encountered, it [may] jump to another location
- If a **call** is encountered, it pushes the next machine instr. address onto the stack and jumps to the new location
- If a **ret** is encountered, it pops from the stack an address and puts it into the **i**nstruction **p**ointer, therefore executing from the address to return to

**Summary**: CPU executes instructions sequentially + **jmp**, **j\<cc>**, **call**, and **ret** to control execution flow

### Other ways code can be executed

Beyond normal execution:

1. **Return Oriented Execution**
2. **Self-writing code**
3. **JIT (Just-In-Time) Code / Compilation**

***

## Return-Oriented Execution

### How ret instruction works

Return-Oriented Execution relies heavily on the **ret** (return) instruction

**To understand how Return-Oriented Execution works, first understand what happens when the ret instruction is executed**:

- The SP (Stack Pointer) (**rsp** or **esp**) is pointing to the **top** of the Call Stack
- When the IP (Instr. Pointer) (**rip** or **eip**) encounters a **ret** instruction:
    - A word (64b or 32b) is moved from the location the SP is pointing to into the IP
    - The SP is increased to point to the previous data structure in the Stack

**Consider a chain of returns** in sequence

***

## Self-writing code

### Modifying code at runtime

If the code section is writable, or code is being executed from any page with +w flag on it, then the code may be modified as it goes along:

- This is **self-modifying** or **self-writing code**
- Consider example of code being modified ahead of itself
- **Very hard to debug**

***

## JIT (Just-In-Time) Code / Compilation

### Dynamic code transformation

Code is transformed from another language (usually a special intermediate language rather than a human-programmable language) into machine instructions just before or just as it needs to be executed.

**Characteristics**:

- **First run of code is slow**
- **Subsequent runs of code may be very fast**
    - Optimised to the CPU it is running on
- **Very hard to debug**

***

## Summary

1. Libraries can be used via **static linking** (bundled into executable) or **dynamic linking** (loaded at load time or runtime)
2. Assembly programs can link to libc by writing a `main` function instead of `_start`, using the ready-made `_start` from **crt1.o**
3. Different OSs use different executable formats (ELF, PE, COFF, Mach-O, Hunk), making binaries non-portable across OSs
4. Calling library functions requires following calling conventions (e.g., first arg in `rdi` for 64-bit)
5. **Function prologue** saves old BP and sets up new stack frame; **function epilogue** restores old BP and returns
6. Return values are passed back in `rax`
7. Beyond normal execution flow (sequential + jmp/call/ret), code can execute via **return-oriented execution**, **self-writing code**, or **JIT compilation**

