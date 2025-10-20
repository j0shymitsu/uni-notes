# EXPLORING MODERN PROCESSORS
16-10-25

---

## Contents
- Factors affecting CPU performance
- Instruction-Level Parallelism (ILP)
- ILP Techniques

---

## Key Components of a Computer System
- From the early days of vacuum tubes to the current era of compact high-speed integrated circuits (ICs), each generation has brought significant advancements in terms of **speed**, **reliability**, and **accessibility**.
- Key components of a modern computer system include:
    - CPU
    - RAM
    - Storage
    - GPU
    - Peripherals
- Each components plays a crucial role in processing and manipulating data, enabling diverse applications from gaming to scientific simulations.

---

## Key Factors Influencing CPU Performance
- **Clock Frequency** - The rate at which the CPU's transistors switch states, dictating the number of clock cycles per second.
- **Instructions per Cycle (IPC) and Microarchitecture** - IPC measures instructions retired per clock cycle, enhanced by superscalar execution. Architectures like AMD Zen 4 or Intel Alder Lake achieve 1.5-2x higher IPC than predecessors.
- **Core Count and Threading (Parallelism)** - Multi-core designs enable simultaneous multithreading.
- **Cache Hierarchy and Memory Subsystem** - On-chip caches (L1, L2, L3) exploit temporal/spatial locality to bridge the latency game between registers and DRAM.
- **Power, Thermal and Efficiency Constraints** - TDP caps sustained power via DVFS (dynamic voltage/frequency scaling). 

*Doubling the number of cores does not make your computer twice as fast due to relying on parallelism.*

---

## Calculating CPU Execution Time
- Considering a CPU clock speed of 3GHz (i.e, 1 clock cycle = 1 / 3,000,000,000 seconds).
- Calculate CPU time for sequential execution (no parallelism) using these assumptions:

| Instruction Type | Cycles/Instruction | No. of Instructions | Total Cycles |
|------------------|--------------------|---------------------|--------------|
| ALU              | 1                  | 500m                | 500m*1       |
| Branch/Jump      | 2                  | 150m                | 150m*2       |
| Store Word (SW)  | 2                  | 80m                 | 80m*2        |
| Load Word (LW)   | 3                  | 100m                | 100m*3       |
| Total            |                    |                     | 1260m        |

    - CPU Time = *Total clock cycles / Clock rate*
    - CPU Time = 1260m / 3 * (10^9)
    - CPU Time = 0.42s

---

## Instruction Level Parallelism (ILP) Concept
- Programs consist of a sequence of instructions.
- Not all instructions are dependent on others; many instructions can be executed withot waiting for the previous ones to be done.
- The independent instructions can be executed in parallel, improving the overall speed of the program execution.
- Modern processors use advanced techniques to maximise the performance.
- **ILP Concept**: Overlapping the execution of ordinary instructions. It is the ability of a computer processor to execute multiple instructions simultaneously, resulting in faster execution and better performance.
- Instruction Level Parallelism focuses on executing multiple instructions from a single program concurrently within a single processor, in contrast to parallel processing that distributes tasks across multiple cores

### Adantages of ILP
- Improved performance. 
- Efficient resource utilisation
- Reduced instruction dependency
- Enhanced instruction throughput
- Become popular in last few decades; now dominant topic in CPU architecture

### Example of ILP Concept
- Considering the following program:
    1. E = A + B
    2. F = C + D
    3. G = E + F

- Operation **3** depends on the results of operation **1** and **2**, so it cannot be executed until both **E** and **F** are computed.
- However, operations **1** and **2** do not depend on another operation, so they can be computed *simultaneously*.
- Assuming each ADD operation is completed in one clock cycle, then sequential execution will take 3 cycles, while ILP will take 2.

---

## Computing Using ILP
- An example of **sequential** source code:
    1. W = W1 * W1
    2. X = X1 * X1
    3. WX_SUM = W + X
