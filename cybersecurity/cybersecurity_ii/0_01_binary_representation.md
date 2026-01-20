# PREREQUISITE: BINARY REPRESENTATION
N-D

---
## Contents

---
## Understanding Hexadecimal
- Why use binary?
    - Each character {0, 1} represents exactly **one** bit [base 2].
- Why use octal?
    - Each character {0, ..., 7} represents exactly **three** bits [base 8].
- Why use hexadecimal?
    - Each character {0, ..., F} represents exactly **four** bits [base 16].
- Why *not* use decimal [base 10]?
    - Each character kind of represents between three and four bits (imprecise). Computers count in base 2, on or off.

### Useful Information:
    - A hexadecimal character represents four bits. 4 bits is called a 'nibble'.
    - Two hexadecimal characters represent 8 bits. 8 bits are a 'byte'.
    
    - 32 bits can be represented as 4 bytes, which can be written as 8 hexadec chars.
    - 64 bits can be represented as 8 bytes, which can be written as 16 hexadec chars.
        - ^ You find these last two in memory models; - The address is shown in hexadec chars.

---
## Computer Architecture and the Memory Model of a 'Process'
- 32-bit computers have a 32-bit data bus; 64-bit computers have a 64-bit data bus.

- In Intel/AMD x86-compatible architecture: 
    - Every *byte* in memory is addressable. This address is:
        - A 32-bit address on x86  [e.g. 0x00600A07C]
        - A 64-bit address on x86_64 (a.k.a AMD64 or x64) [e.g. 0x000000000060B0D8]

- In Intel/AMD architecture, each byte is addressable*
    - A 32-bit CPU has a 32-bit logical address space:
        - This space is linear; from 0x00000000 to 0xFFFFFFFF
        - This space represents 4,294,967,296 (2^32^) bytes of addressable memory (4GiB)
    - A 64-bit CPU has a 64 bit logical address space:
        - This space is also linear; from 0x0000000000000000 to 0xFFFFFFFFFFFFFFFF
        - This represents 2(^64^) bytes of addressable memory (16EiB or 17179869185GiB)

*\*Each byte is addressable, but 32 bit machines can pull/push 4 bytes of data at onen time, and 64-bit can do it at 8 bytes a time*

---

