# Exam 07-02-25

---

- **Number Systems**:

    - Decimal (base-10): Uses digits 0-9
    - Binary (base-2): Uses digits 0 and 1. Fundamental for computing.
    - Hexadecimal (base-16): Uses digits 0-9 and A-F (A = 10, B = 11, etc)

    - Conversions:
        - Decimal --> Binary: Divide by 2, keep remainders
        - Binary --> Decimal: Multiply by powers of 2
        - Hex --> Binary: Convert each hex digit into a 4-bit binary value
        - Binary --> Hex: Group into 4-bit chunks and convert

    - Two's complement: Used for representing negative numbers in binary


- **Logic Gates and Boolean Algebra**:

    - Basic Gates:
        - NOT: Inverts input (A --> A')
        - AND: Output is 1 only if both inputs are 1 (A · B)
        - OR: Output is 1 if any input is 1 (A + B)

    - Derived Gates:
        - NAND: NOT AND (A · B)' - Universal gate
        - NOR: NOT OR (A + B)' - Universal gate
        - XOR: Output is 1 if inputs differ (A ⊕ B)
        - XNOR: Output is 1 if inputs are the same

    - Boolean Algebra Rules:
        - Idempotent: A + A = A, A · A = A
        - Complement: A + A' = 1, A · A = 0
        - De Morgan's Theorems:
            - (A · B) = A' + B'
            - (A + B) = A' · B'


- **Building Circuits**:

    - Truth Tables: Used to verify logic gate operations
    - Karnaugh Maps (K-Maps): Used for simplification of boolean expressions
    - Combinational Circuits: Output depends only on current inputs
    - Sequential Circuits: Outputs depend on current inputs + previous states (e.g., memory storage)
    - Flip-flops: Basic memory elements in digital circuits (SR, JK, D, T flip-flops)


- **Probability**:

    - Basic Probability:
        - P(A) = (Favourable outcomes) / (Total outcomes)
        - Independent events: Outcome of one event doesn't affect the other

    - Compound Probability:
        - AND rule: P(A ∩ B) = P(A) × P(B) (for independent events).
        - OR rule P(A ∪ B) = P(A) + P(B) - P(A ∩ B)

    - Random Numbers:
        - Pseudo-random numbers: Generated using algorithms, not truly random
        - Random seed: Used to ensure repeatability in random number generation
        - Normal distribution: A probability curve used in statistics


- **Machine Code / Assembly Language**:

    - Machine Code: Lowest-level code directly executed by the CPU (binary)
    - Assembly Language: Human-readable representation of machine code (mnemonics like MOV, ADD)
    - Registers: Small storage locations in the CPU

    - Basic Assembler Instructions:
        - `MOV A, B` --> Copy value from B to A
        - `ADD A, B` --> Add B to A
        - `SUB A, B` --> Subtract B from A
        - `CMP A, B` --> Compare A to B
        - `JMP Label` --> Jump to a specific line in code

    - Stack operations:
        - `PUSH` --> Save value to the stack
        - `POP` --> Retrieve value from the stack


- **Compilers and Linkers**:

    - Interpreter/Interpreted language: Executes code line by line (e.g., Python)
    - Compiler/Compiled language: Translates entire code into machine language before execution (e.g., C, Java)

    - Compilation Stages:
        1. Preprocessing: Handles directives such as `#define`
        2. Lexical analysis: Breaks code into tokens
        3. Parsing: Checks syntax and builds syntax tree
        4. Code generation: Converts syntax tree into assembly code
        5. Optimisation: Improves code efficiency
        6. Assembler: Converts assembly into machine code
        7. Linker: Combines multiple files and libraries into an executable

    - Linking:
        - Static linking: Libraries are included in the final executable
        - Dynamic linking: Libraries are linked at runtime


- **Data Formats**:

    - Endainness:
        - Big-endian: Most significant byte stored first
        - Little-endian: Least significant byte stored first
    - Character Encoding:
        - ASCII: 7-bit encoding for text
        - Unicode (UTF-8, UTF-16, UTF-32): Supports multiple languages
    - Numeric Representations:
        - BCD (Binary-coded decimal): Stores decimal numbers in binary
        - Floating-point representation: Used for real numbers
    - Multimedia formats:
        - Audio: MP3 (lossy), FLAC (lossless)
        - Image: PNG (lossless), JPEG (lossy)
        - Video: MP4, H.264 compression techniques
    - Compression:
        - Lossy compression: Data is lost
        - Lossless compression: Data is preserved


- **Finite State Machines**:

    - Definition: Abstract model of computation that transitions between states based on inputs

    - FSM Components:
        - States: Represent different conditions
        - Transitions: Define movement between states based on inputs
        - Inputs: Events that trigger state changes
        - Outputs (optional): Produced in response to state transitions
    
    - FSM Types:
        - Moore Machine: Output depends only on the current state
        - Mealy Machine: Output depends on both the current state and input
    
    - Applications:
        - Used in game development (e.g., AI behaviour)
        - Networking protocols
        - Digital hardware design