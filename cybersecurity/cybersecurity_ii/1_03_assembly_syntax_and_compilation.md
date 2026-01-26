# x86 ASSEMBLY SYNTAX: AT&T vs INTEL
N-D

---
## Contents
1. Compilation and Disassembly
2. Machine Code Instructions
3. Assembly Syntax Overview
4. AT&T vs Intel Syntax Differences
5. Instruction Examples
6. Memory Addressing Modes
7. GNU Toolset Configuration

---
## Compilation and Disassembly
### Basic Compilation Process
- **Simple Program Example**:
    - Source code: `int main(void) { return 0; }`
    - Compile with: `$ gcc simple.c -o simple`
- **Disassembly Tools**:
    - Use `objdump -d simple` for AT&T syntax
    - Use `objdump -d simple -M intel` for Intel syntax
- **Purpose**:
    - Static analysis of compiled programs
    - Reveals machine instructions in human-readable form

### Example: Main Function Disassembly (AT&T Syntax)
```

080483eb <main>:
80483eb:  55              push %ebp
80483ec:  89 e5           mov %esp, %ebp
80483ee:  b8 00 00 00 00  mov \$0x0, %eax
80483f3:  5d              pop %ebp
80483f4:  c3              ret
80483f5:  66 90           xchg %ax, %ax
...
80483ff:  90              nop

```

---
## Machine Code Instructions
### Structure of Disassembled Output
- **Memory Address**: Location where instruction is stored (e.g., `080483eb`)
- **Machine Code**: Binary instruction in hexadecimal format (e.g., `55`)
- **Assembly Mnemonic**: Human-readable instruction (e.g., `push %ebp`)

### Key Characteristics
- **Variable Instruction Length**:
    - Instructions range from 1 byte to multiple bytes
    - Example: `push %ebp` is 1 byte (`55`), `mov $0x0, %eax` is 5 bytes
- **One-to-One Mapping**:
    - Unique correspondence between machine code and assembly
    - Disassembly is unambiguous
- **Binary Representation**:
    - Machine sees electrical voltages (high = 1, low = 0)
    - Hexadecimal used for human readability

---
## Assembly Syntax Overview
### Two Major Syntaxes
- **AT&T Syntax**:
    - Used by GNU tools (gcc, gdb, objdump)
    - Characterized by percentage signs on registers
    - Default for many Linux development tools
- **Intel Syntax**:
    - Used by Intel documentation, NASM, MASM
    - No percentage signs on registers
    - Commonly used in Windows development

### Identifying Syntax
- **Quick Identification**: Look for percentage signs (`%`)
- **AT&T**: Has `%` prefix on registers (e.g., `%eax`)
- **Intel**: No prefixes on registers (e.g., `eax`)
- **Learning Curve**: Neither syntax is inherently easier to learn

---
## AT&T vs Intel Syntax Differences
### Fundamental Differences

| Feature | AT&T Syntax | Intel Syntax |
|---------|-------------|--------------|
| **Operand Order** | `mov source, dest` | `mov dest, source` |
| **Register Prefix** | `%ebp` | `ebp` |
| **Immediate Values** | `$1` | `1` |
| **Hexadecimal** | `$0xff` | `0ffh` |
| **Memory Access** | `(%ebx)` | `[ebx]` |
| **Offset Addressing** | `3(%ebx)` | `[ebx+3]` |

### Critical Note on Operand Order
- **AT&T**: Source comes first, destination second
- **Intel**: Destination comes first, source second
- **Confusion Risk**: Very easy to misinterpret when switching between syntaxes
- **Example**: `mov %esp, %ebp` (AT&T) = `mov ebp, esp` (Intel)

---
## Instruction Examples
### Basic Move Instructions

| AT&T Syntax | Intel Syntax | Description |
|-------------|--------------|-------------|
| `mov %esp, %ebp` | `mov ebp, esp` | Copy esp to ebp |
| `mov $1, %eax` | `mov eax, 1` | Move immediate value 1 to eax |
| `mov $0xff, %ebx` | `mov ebx, 0ffh` | Move 255 to ebx |

### Key Instructions Explained
- **push %ebp**:
    - Percentage sign indicates direct register value transfer
    - Value in ebp register is pushed onto stack
    - Stack pointer (sp) automatically updated
- **mov %esp, %ebp**:
    - Copies data from source (esp) to destination (ebp)
    - Does not modify source register
    - Common in function prologue setup

---
## Memory Addressing Modes
### Direct vs Indirect Addressing

| AT&T Syntax | Intel Syntax | Description |
|-------------|--------------|-------------|
| `mov $0x80, %eax` | `mov eax, 80h` | Direct: Move immediate value |
| `mov (%ebx), %eax` | `mov eax, [ebx]` | Indirect: Move from memory address in ebx |
| `mov 3(%ebx), %eax` | `mov eax, [ebx+3]` | Offset: Memory at ebx + 3 |
| `add (%ebx,%ecx), %eax` | `add eax, [ebx+ecx]` | Indexed: Memory at ebx + ecx |
| `sub -0x20(%ebx,%ecx), %eax` | `sub eax, [ebx+ecx-0x20]` | Complex: With negative offset |

### Syntax Indicators
- **AT&T**: Uses parentheses `()` for memory dereferencing
- **Intel**: Uses square brackets `[]` for memory dereferencing
- **Immediate Values**: AT&T requires `$` prefix, Intel does not

---
## GNU Toolset Configuration
### Switching Between Syntaxes
- **GCC Compiler**:
    - Flag: `-masm=intel` (or `-masm=att`)
    - Controls assembly output syntax
- **GDB Debugger**:
    - Command: `(gdb) set disassembly-flavor intel` (or `att`)
    - Changes disassembly display format
- **objdump and objcopy**:
    - Flag: `-M intel` (or `-M att`)
    - Affects disassembly output

### Further Learning Resources
- **Instruction Reference**: [https://www.felixcloutier.com/x86/](https://www.felixcloutier.com/x86/)
    - Comprehensive x86 instruction documentation
    - Look up individual instructions (MOV, PUSH, POP, etc.)
- **NASM Tutorial**: [https://cs.lmu.edu/~ray/notes/nasmtutorial/](https://cs.lmu.edu/~ray/notes/nasmtutorial/)
    - Intel syntax assembler tutorial
    - Practical assembly programming examples

---
## Summary
1. **Compilation produces machine code** that can be disassembled using tools like objdump.
2. **Machine instructions have variable length** (1+ bytes) and map one-to-one to assembly mnemonics.
3. **Two syntaxes exist**: AT&T (GNU tools) and Intel (Intel docs, NASM).
4. **Operand order is reversed** between syntaxes: AT&T uses source-first, Intel uses destination-first.
5. **Register prefixes differ**: AT&T requires `%`, Intel has no prefix.
6. **Immediate values** use `$` in AT&T, no prefix in Intel.
7. **Memory addressing** uses `()` in AT&T, `[]` in Intel.
8. **Complex addressing modes** support offsets and indexed addressing in both syntaxes.
9. **GNU toolset can be configured** to use either syntax via flags and settings.
10. **Neither syntax is easier** to learn; choose based on tools and documentation you'll use.
```

The notes follow the same format as your example, including the date format, section structure with horizontal rules, bullet points with bold definitions, markdown tables for comparisons, code blocks for examples, and a numbered summary at the end.[^1]

<div align="center">⁂</div>

[^1]: 1_02_core_architecture_registers.md

[^2]: UKTT-Assembly-W1-1-x86-Syntax-ATT-vs-Intel.pdf

