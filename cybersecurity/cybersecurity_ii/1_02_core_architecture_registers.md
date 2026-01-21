# CORE ARCHITECTURE REGISTERS AND SYSCALL
15-01-26

---
## Contents
1. Software
2. Language Levels
3. Software Exploitation
4. Machine Code
5. Fetch-Decode-Execute
6. CPU Registers/Architecture
7. Access Patterns
8. Syscalls


---
## Software
- **Definition**:
    - Software is a *set of instructions*, data or programs used to operated computers and *execute specific tasks*. There are two main categories of software:
- **Application Software**:
    - Fulfils a specific need or perform tasks
- **System Software**:
    - Designed to run a computers hardware and provide a platform for applications to run on top of.

---
## Language Levels
- **Low Level Languages**:
    - Assembly Language
    - Assembler is used to convert code into binary
    - Mostly used in embedded systems (gadgets, smart devices, etc)
- **Medium Level Languages**:
    - C, C++
    - Compiler is used to convert code into binary
    - Mostly used for developing system software
- **High Level Languages**:
    - Python, PHP, JS
    - Interpreter is used to convert code into binary
    - Mostly used for developing application software

---
## Software Exploitation
- **Definition**:
    - An exploit can be defined as a piece of software, code or *sequence of commands* that takes advantage of a security flaw or *software vulnerability* to trigger an unintended or *unexpected behaviour* to take place on hardware, operating system, computer software, networks, applications, or any computerised electronic system.
- **Examples**:
    - DoS
    - Data theft
    - Escalation of privileges
    - Malware deployment
    - Backdoors

---
## Machine Code Execution Architecture
### How Programs Run
1. **Loading**: Entire program file loaded from disk into RAM.
2. **Fetching**: Machine code instructions moved one at a time from RAM into CPU.
3. **Execution**: Each instruction executed one at a time inside CPU.

### Simplified Execution Model
- **Assumption**:
  - Each machine instruction is one word in size.
  - Instruction size matches machine size (32-bit or 64-bit).
  - Instruction size matches width of Data Bus.

### Key Components
- **MMU (Memory Management Unit)**:
  - Controls which address goes to which hardware.
  - Routes to memory, graphics, or platform controller.
- **Data Bus**: Carries data between components (e.g., 32-bit or 64-bit wide).
- **Address Bus**: Carries memory addresses.
- **Control Lines**: Indicate READ or WRITE operations.

---
## The Fetch-Decode-Execute Pipeline
### Classical RISC Pipeline Stages
The CPU executes instructions through a five-stage cycle: *FETCH → DECODE → EXECUTE → MEM → WB*

### Stage 1: FETCH
1. CPU puts address of next instruction onto Address Bus.
2. Control line set to READ.
3. RAM control circuits push word of data onto Data Bus.
4. Data contains next machine instruction.
- **Result**: Instruction is now inside the CPU.

### Stage 2: DECODE
- Instruction bits activate appropriate electronic circuits (logic units).
- Different instructions activate different circuits.
- Example: `add` instruction activates different logic than `mov` instruction.

### Stage 3: EXECUTE
- Instruction is performed.
- May access CPU's internal memory (Registers).
- Registers are extremely quick to access.
- May decide to access RAM (but must wait for next stage).

### Stage 4: MEMORY ACCESS (MEM)
- Instruction may need to access RAM again.
- Can *read* data from memory into a CPU Register.
- Can *write* data from a Register out to memory.
- Control line indicates READ or WRITE.

### Stage 5: WRITE BACK (WB)
- CPU updates internal registers.
- Updates internal state of CPU.
- **Cycle Complete**: One machine instruction has been executed.

### Pipeline Summary
1. Fetch instruction from RAM.
2. Decode the instruction.
3. Execute the instruction.
4. Memory access (read/write) if needed.
5. Write back to CPU registers.
6. **Repeat cycle** for next instruction.

### Important Note
- This is an *extreme simplification* of the Classical RISC Pipeline.
- Real x86 CPUs are far more complex than this model.

---
## CPU Registers (x86_64 Architecture)
### General Purpose Data Registers
- *16 registers*, each holding *64 bits (8 bytes)* of data.
- Total: *128 bytes* of immediate access to data in CPU.

### Register Names and Purposes

| Register | Alternative Name | Historic Purpose | Register | Alternative Name |
|----------|------------------|------------------|----------|------------------|
| r0 | rax | Accumulator | r8 | - |
| r1 | rcx | Counter | r9 | - |
| r2 | rdx | Data | r10 | - |
| r3 | rbx | Base | r11 | - |
| r4 | rsp | Stack Pointer | r12 | - |
| r5 | rbp | Base Pointer | r13 | - |
| r6 | rsi | Source Index | r14 | - |
| r7 | rdi | Destination Index | r15 | - |

### Special Registers
- **rip (Instruction Pointer)**:
  - Also called Program Counter.
  - 64-bit address pointing to a place in RAM.
  - Memory address where CPU pulls next instruction for FETCH stage.
- **rflags (Flags Register)**:
  - Individual bits that get set (=1) or cleared (=0).
  - Reflects CPU's state changes.

---
## Register Access Patterns
### Accessing Parts of Registers
Registers can be accessed in multiple ways to read/write different portions.

### Example: r0 (rax) Register Access
| Access Name | Bit Range | Size | Description |
|-------------|-----------|------|-------------|
| **rax** | 63:0 | 64 bits | Full 64-bit register |
| **eax** | 31:0 | 32 bits | Lower 32 bits |
| **ax** | 15:0 | 16 bits | Lower 16 bits |
| **ah** | 15:8 | 8 bits | Second lowest byte (high byte) |
| **al** | 7:0 | 8 bits | Lowest byte (low byte) |

### Why Multiple Access Modes?
- Backwards compatibility with 32-bit (eax), 16-bit (ax), and 8-bit (al/ah) code.
- Allows efficient manipulation of smaller data types.
- Legacy from x86 architecture evolution.

---
## Example: CPU Register Usage
### Problem: Add Two Numbers
Given: x = 5, y = 6 in memory. Calculate: z = x + y

### Steps Using Registers
1. **Move** (copy) x value (5) into CPU register r0.
2. **Move** y value (6) into CPU register r2.
3. **Add** r2 to r0, result goes into r0.
4. **Move** value from r0 into memory location z.

### Machine Instructions Used
- **mov**: Copies data between registers, or to/from memory and register.
- **add**: Adds two registers together.

### Key Question
*Q: Why can't we just add two numbers directly in memory?*

*A: This is how machines work at the hardware level. The CPU does the computation!*
- ALU (Arithmetic Logic Unit) operates on registers, not directly on RAM.
- RAM access is slower than register access.
- Separation of memory and computation is fundamental to Von Neumann architecture.

---
## Machine Code Representation
### What Does Machine Code Look Like?
- In RAM: Different electrical voltages (high = 1, low = 0).
- Not visible as "numbers" but represented as binary.
- **Best representation**: Hexadecimal (each byte = 2 hex digits).

### Example: Machine Code in Hexadecimal
```
(gdb) x /24bx main
0x4004e6 <main>:    0x55  0x48  0x89  0xe5  0xbf  0x80  0x05  0x40
0x4004ee <main+8>:  0x00  0xe8  0xfc  0xfe  0xff  0xff  0xb8  0x00
0x4004f6 <main+16>: 0x00  0x00  0x00  0x5d  0xc3  0x0f  0x1f  0x44
```

### Disassembly: Human-Readable Form
```
(gdb) x /7i main
0x4004e6 <main>:      push   rbp
0x4004e7 <main+1>:    mov    rbp,rsp
0x4004ea <main+4>:    mov    edi,0x400580
0x4004ef <main+9>:    call   0x4003f0 <puts@plt>
0x4004f4 <main+14>:   mov    eax,0x0
0x4004f9 <main+19>:   pop    rbp
0x4004fa <main+20>:   ret
```

- **Disassembly**: Process of converting machine code back to assembly mnemonics.
- Makes code readable and understandable.

---
## x86 Assembly Syntax: AT&T vs Intel
### Two Syntaxes, Same Instructions
- **AT&T Syntax**: Used by GNU tools (GCC, GDB, GAS).
- **Intel Syntax**: Used by Intel documentation, NASM, MASM.

### Key Differences
| Feature | AT&T Syntax | Intel Syntax |
|---------|-------------|--------------|
| **Source/Dest Order** | `mov source, dest` | `mov dest, source` |
| **Register Prefix** | `%rax` | `rax` |
| **Immediate Values** | `$10` | `10` |
| **Memory Access** | `(%rax)` | `[rax]` |

### Example Comparison
- **AT&T**: `movq $5, %rax` (move value 5 into rax)
- **Intel**: `mov rax, 5` (move value 5 into rax)

*Note*: Very confusing! Be aware which syntax you're reading.

---
## Calling Conventions
### Definition
- **Call**: When one piece of code allows/makes another piece of code run.
- **Convention**: Agreed way to make that happen without problems.

### Purpose
- Enables software to inter-operate with one another.
- Ensures predictable behaviour across boundaries.

### Three Types of Calling Conventions
| Type | Scope | Purpose |
|------|-------|---------|
| **Function Calling Convention** | Within a program | Internal function calls |
| **Library Calling Convention** | Program ↔ Library | Must be followed to call standard library code |
| **System Calling Convention** | Process ↔ Kernel | Must be followed to make system calls |

### Why Calling Conventions Matter
- **Function Calling**: Lots of code doesn't strictly follow proposed conventions.
- **Library Calling**: Must be followed to call standard library code correctly.
- **System Calling**: Must be followed to make syscalls to kernel.

### Multiple Conventions Exist
- x86 has *many* system call conventions:
  - 16-bit (~1970s), 32-bit (1980s+), 64-bit (2000+).
  - Different for each OS: DOS, OS/2, Windows (multiple versions), BeOS, BSD, Linux, AROS.
  - Potentially *tens or hundreds* of different conventions!

---
## Linux System Call Interface (64-bit)
### Overview
- Linux is a modern UNIX-offshoot OS.
- Has two calling conventions on x86:
  - 32-bit (original).
  - 64-bit (current era).
- **Focus**: 64-bit Linux SCI Calling Convention.

### Syscall Mechanics
| Component | Register/Instruction | Purpose |
|-----------|---------------------|---------|
| **Instruction** | `syscall` | Transitions to kernel mode |
| **Syscall Number** | `rax` | Indicates which system call to execute |
| **Return Value** | `rax` | Contains system call result |

### System Call Arguments
| Argument | Register |
|----------|----------|
| **arg1** | rdi |
| **arg2** | rsi |
| **arg3** | rdx |
| **arg4** | r10 |
| **arg5** | r8 |
| **arg6** | r9 |

### How to Make a System Call
1. Put **syscall number** in `rax`.
2. Put **argument 1** in `rdi`.
3. Put **argument 2** in `rsi`.
4. Put **argument 3** in `rdx`.
5. Put **argument 4** in `r10`.
6. Put **argument 5** in `r8`.
7. Put **argument 6** in `r9`.
8. Execute **`syscall`** instruction.
9. **Result** returned in `rax`.

### Finding Syscall Numbers
- **Linux Syscalls Manual**: `man syscalls` or http://man7.org/linux/man-pages/man2/syscalls.2.html
- **Syscall Table Resource**: http://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/

### Common System Calls (x86_64 Linux)
| Syscall Number | Name | Purpose | Arguments |
|----------------|------|---------|-----------|
| 0 | read | Read from file descriptor | fd, buffer, count |
| 1 | write | Write to file descriptor | fd, buffer, count |
| 2 | open | Open file | filename, flags, mode |
| 3 | close | Close file descriptor | fd |
| 60 | exit | Exit process | error_code |

---
## Summary
1. **Software** is categorised as application or system software, developed at different language levels.
2. **Software exploitation** targets security flaws to trigger unintended behaviour.
3. **Machine code execution** follows load → fetch → execute pattern using RAM and CPU.
4. **Fetch-Decode-Execute pipeline** is a 5-stage cycle (FETCH → DECODE → EXECUTE → MEM → WB).
5. **x86_64 has 16 general-purpose registers** (64-bit each) plus special registers (rip, rflags).
6. **Registers provide fast access** to data; CPU computations happen on registers, not directly on RAM.
7. **Machine code** is represented in hexadecimal; disassembly converts it to readable assembly.
8. **Two assembly syntaxes exist**: AT&T and Intel (confusingly different!).
9. **Three calling conventions**: Function, Library, and System Call conventions.
10. **Linux 64-bit syscalls** use `rax` for syscall number, `rdi/rsi/rdx/r10/r8/r9` for arguments.