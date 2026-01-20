# THE SYSTEM BUS AND CPU
N-D (CATCH UPS)


---
## Content Overview
1. Key Terminologies (Binary, Bits, Bytes).
2. Central Processing Unit (CPU) Architecture.
3. Von Neumann Architecture.
4. CPU Components (Control Unit, ALU, Registers).
5. Fetch-Decode-Execute Cycle.
6. Factors Affecting CPU Performance.
7. System Bus (Data, Address, Control).
8. Chipset and I/O Buses.
9. Bus Types (Dedicated vs Multiplexed).


---


## Key Terminologies

| Term | Definition |
|------|------------|
| **Binary** | Counting system using just 0 and 1 |
| **Bit** | Binary digit - represents on/off or 1/0 |
| **Byte** | 8 bits - basic building block of computers. One byte can represent 0 to 255 (2⁸ = 256) |
| **I/O** | Input/Output |
| **KB** | Kilobyte = 1,024 bytes (2¹⁰ bytes) |
| **MB** | Megabyte = 1,024 KB |
| **GB** | Gigabyte = 1,024 MB |


---


## Central Processing Unit (CPU)
- **Definition**:
  - Traditionally called a **Microprocessor**.
  - Complex electronic circuitry that executes stored program instructions.
- **Three Main Components**:
  - **Control Unit** - coordinates operations.
  - **Arithmetic Logic Unit (ALU)** - performs calculations.
  - **Registers** - onboard high-speed storage.
- **Additional Features**:
  - Cache memory for faster data access.
  - Modern processors contain 1,000,000 times more components than the Intel 4004 (1971).


---


## Von Neumann Architecture
- **Definition**:
  - System where a single control unit manages the Fetch-Execute cycle.
  - Both instructions and data stored in the same memory unit.
- **Key Features**:
  - Processing unit with ALU and Control Unit.
  - Program counter to track instruction location.
  - Memory to store both data and instructions.
  - External storage and I/O mechanisms.
- **Design Principle**:
  - Program stored in main memory.
  - Instructions fetched and executed sequentially.
  - Single memory and bus system for accessing both data and programs.


---


## The Control Unit
- **Function**:
  - Receives input information and converts it into control signals.
  - Directs and coordinates the entire computer system.
  - Acts as the **central nervous system** for other components.
- **Key Responsibilities**:
  - Controls the Machine/Instruction Cycle (Fetch/Decode/Execute).
  - Does not perform actual data processing.
  - Must communicate with both memory and ALU.
  - Tells attached hardware what operations to carry out.


---


## The Arithmetic Logic Unit (ALU)
- **Structure**:
  - Combinational logic circuit built from complex digital components.
  - Output changes in response to input changes.
- **Operations Performed**:
  - **Bitwise arithmetic operations**: Addition, subtraction.
  - **Bitwise logical operations**: AND, OR, XOR, One's Complement.
  - **Bit shift operations**: Used to multiply or divide by 2.
- **Components**:
  - **A and B**: Inputs to the ALU.
  - **R**: Output or Result.
  - **F**: Code or Instruction from Control Unit.
  - **D**: Output status indicator.


---


## Registers
- **Definition**:
  - High-speed temporary storage areas located within the CPU.
  - Work under direction of the Control Unit.
  - Hold information the CPU is currently working on.


### **1. Program Counter (PC)**
- Holds the memory address of the next instruction to be executed.
- Ensures CPU knows where it has reached in program execution.
- Allows CPU to resume at the correct point after interruption.


### **2. Current Instruction Register (CIR)**
- Holds the current instruction while being decoded and executed.
- Faster than continually checking memory location directly.


### **3. Accumulator (ACC)**
- Holds the result of operations performed by the ALU.
- Functions like the memory function on a calculator.


### **4. Memory Address Register (MAR)**
- Stores memory addresses involved in instructions.
- Control unit checks this register to know which memory address to access.


### **5. Memory Data Register (MDR)**
- Holds instruction or data obtained from memory.
- Data is first placed here before being moved to desired location.


### **6. Flag Register**
- Contains 1-bit status flags.
- Flags change as result of ALU operations.


---


## Fetch-Decode-Execute Cycle
- **Overview**:
  - For a program to run, it must be loaded into main memory.
  - Processor is given start address of where program is stored.
  - Each instruction processed one at a time in sequence.


### **Three Stages**
1. **Fetch**:
   - Retrieve instruction from memory address held in Program Counter.
   - Copy instruction to Current Instruction Register.
   - Increment Program Counter to point to next instruction.

2. **Decode**:
   - Control Unit decodes the instruction.
   - Determines what operation is required.
   - Identifies what data is needed.

3. **Execute**:
   - Instruction is carried out.
   - May involve ALU calculations or data movement.
   - Results stored in appropriate registers or memory.


---


## Factors Affecting CPU Performance

### **1. Clock Speed/Clock Frequency**
- **Definition**:
  - Number of clock cycles CPU can perform in one second.
  - Clock cycle = single electrical pulse during which CPU performs a basic task.
- **Measurement**:
  - Expressed in Hz (1 GHz = 1 billion cycles per second).
  - Clock Speed = Base Clock × CPU Multiplier.
- **Example**:
  - Motherboard base clock: 100MHz.
  - CPU multiplier: 40x.
  - Resulting CPU speed: 4GHz.


### **2. Number of Cores**
- **Definition**:
  - Core = individual processing unit within a CPU.
  - Multi-core processors have multiple processing components.
- **Performance**:
  - Theoretically, two cores = twice as fast.
  - In practice, depends on whether programs are designed for multiple cores.
  - Multiple cores can work on different programs in parallel.


### **3. Cache Memory**
- To be covered in next lecture.


---


## Threading
- **Multithreading**:
  - Single program with separate parts operating asynchronously.
  - Does not need to happen in strict order.
- **Use Case**:
  - When processor needs to wait (e.g., fetching data from memory).
  - Other code can execute during wait time.
- **Example**:
  - Game processing physics and graphics simultaneously.
  - Each part runs on different cores/threads as available.


---


## BIOS (Basic Input/Output System)
- **Function**:
  - Contains operating instructions for chipset.
  - Performs **Power-On Self-Test (POST)** at boot.
  - Checks main hardware components during startup.
- **Storage**:
  - Traditionally stored in non-volatile memory.
  - Now stored in Flash memory for updates.
- **Evolution**:
  - Most modern computers use **UEFI** (Unified Extensible Firmware Interface).
  - UEFI provides additional features and improved security over legacy BIOS.


---


## What is a Bus?
- **Definition**:
  - Network of wires connecting two or more components.
  - Communication pathway for data transfer.
- **Characteristics**:
  - Multiple devices connect to the bus.
  - Signal from one device available to all others.
  - **Only one device can transmit at a time**.
- **Structure**:
  - Each line transmits signals representing binary 1 and 0.
  - Computer systems contain multiple buses at different hierarchy levels.


---


## System Bus
- **Definition**:
  - Bus connecting major computer components (processor, memory, I/O).
  - Consists of multiple lines, each with specific function.
- **Three Functional Groups**:
  1. Data Bus
  2. Address Bus
  3. Control Bus


---


## Data Bus
- **Function**:
  - Connects all computer components to CPU and main memory.
  - Highway on which data travels within the system.
- **Characteristics**:
  - **Bidirectional** - information flows both ways.
  - Width determines data transfer capacity.
- **Examples**:
  - 16-bit bus: transmits 16 bits (2 bytes) at a time.
  - 32-bit bus: transmits 32 bits (4 bytes) at a time.
- **Performance Impact**:
  - Bus size is critical parameter for system performance.


---


## Address Bus
- **Function**:
  - Identifies particular location in main memory.
  - Width determines maximum memory capacity.
- **Characteristics**:
  - **Unidirectional** - address information always from CPU.
  - Address sent to locate memory position.
- **Example**:
  - 32-bit address bus: can address 2³² = 4,294,967,296 (4 GB) locations.


---


## Control Bus
- **Purpose**:
  - Provides order to data and address bus operations.
  - Carries commands from and returns status to CPU.
  - Transmits command and timing information.


### **Typical Control Signals**
- **Memory Read**: Causes data from addressed location to be placed on Data Bus.
- **Memory Write**: Causes data on bus to be written to addressed location.
- **I/O Read**: Causes data from addressed I/O port to be placed on bus.
- **I/O Write**: Causes data on bus to output to addressed I/O port.


### **Memory Read Example**
1. CPU sends address (e.g., 2453) on address bus.
2. CPU sends R/W = 1 signal on control bus (READ operation).
3. CPU waits for data from memory on data bus.
4. Memory retrieves value from location 2453 and sends on data bus.


### **Memory Write Example**
1. CPU sends address (e.g., 2453) on address bus.
2. CPU sends value (e.g., 53) on data bus.
3. CPU sends R/W = 0 signal on control bus (WRITE operation).
4. Memory stores value 53 at location 2453.


---


## Chipset
- **Function**:
  - Controls how system hardware interacts with CPU and motherboard.
  - Allows CPU to communicate with memory, storage, video, and I/O devices.


### **Two Components**

**1. Northbridge**
- Controls access to RAM and video card.
- Manages speeds at which CPU communicates with these components.
- Video card sometimes integrated into Northbridge.

**2. Southbridge**
- Allows CPU to communicate with hard drives, sound card, USB ports.
- Manages slower peripheral devices.
- Components may be integrated into Southbridge.


---


## I/O Buses
- **Definition**:
  - Specific system buses connecting CPU to other components.
  - Differ in size and speed.
  - Each ends at controller chip forming bridge to other buses.


### **Common I/O Bus Types**
- **PCIe/PCI Express**: Peripheral Component Interconnect - for expansion cards.
- **USB**: Universal Serial Bus - for external peripherals.
- **SATA**: Serial ATA - for storage devices.
- **Front Side Bus (FSB)**: Carries data between CPU and Northbridge.
- **Back Side Bus**: Connects CPU with cache memory.


### **Specific I/O Bus Functions**
- **Front Side Bus**: CPU ↔ Northbridge controller.
- **Back Side Bus**: CPU ↔ cache (secondary/external cache).
- **Memory Bus**: Northbridge ↔ memory.
- **ATA/SATA Bus**: Southbridge ↔ disk drives.
- **PCIe Buses**: Specialized fast buses (e.g., PCIe 16x) for graphics cards.


---


## Bus Types

### **1. Dedicated Buses**
- **Structure**:
  - Separate buses for data and address information.
- **Trade-off**:
  - **Good for performance** but **increases cost**.


### **2. Multiplexed Buses**
- **Structure**:
  - Data and address information **time-multiplexed** on shared bus.
- **Trade-off**:
  - **Poor performance** but **reduced cost**.


### **Time Multiplexing Process**
1. At beginning of transfer, address placed on bus.
2. Address Valid control line activated.
3. Each module copies address and checks if it's the target.
4. Address removed from bus.
5. Same connections used for subsequent read/write data transfer.
- **Advantage**: Uses fewer physical lines.


---


## Summary
1. **CPU** consists of Control Unit, ALU, and Registers.
2. **Von Neumann architecture** stores instructions and data in same memory.
3. **Fetch-Decode-Execute cycle** is how CPU processes instructions.
4. **Clock speed** and **number of cores** significantly affect performance.
5. **System bus** has three types: Data (bidirectional), Address (unidirectional), Control.
6. **Chipset** (Northbridge/Southbridge) manages communication between components.
7. **Different bus types** balance performance vs cost through dedicated or multiplexed design.
