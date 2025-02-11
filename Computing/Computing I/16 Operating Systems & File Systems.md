# OPERATING SYSTEMS AND FILE SYSTEMS
11-02-25

---

## Contents
- Introduction
- Key Components of an OS
- User Interface
- Kernel
- Security and User Control
- Networking
- Bootstrap
- File Systems
- File Types
- Logical vs. Physical File Systems
- File System Management
- Examples of File Systems
- Different Types of Operating Systems
- Conclusion

---

## Introduction
- **Operating System (OS)**: A collection of programs that integrate hardware components and allow users or applications to interact with them efficiently.
- Provides a **working environment** by managing hardware, communication between users and devices, and software execution.

---

## Key Components of an OS
1. **User Interface**
2. **Kernel**
3. **Security and User Control**
4. **Networking**

### 1. User Interface
- **Command Line Interface (CLI)**:
  - Text-based.
  - Example: MS-DOS.
  - Offers greater control but requires technical knowledge.
- **Graphical User Interface (GUI)**:
  - Visual elements (windows, buttons, icons).
  - Easier to use but resource-intensive.

### 2. Kernel
- **Core component** of the OS, permanently resides in memory.
- **Functions:**
  - Manages CPU tasks.
  - Controls memory allocation.
  - Organizes data storage.
  - Coordinates device drivers.
- **Key Features:**
  - **CPU Mode Management:** Restricts access to hardware.
  - **Program Execution:** Loads and manages processes.
  - **Multitasking:** Controls CPU/GPU scheduling.
  - **Interrupt Handling:** Manages priority events.
  - **Memory Management:** Allocates and releases memory.
  - **Virtual Memory:** Uses disk space as additional memory.
  - **Disk/File System Access:** Manages file operations.
  - **Device Drivers:** Provides hardware abstraction.
  - **Error Handling:** Detects and recovers from faults.

### 3. Security and User Control
- OS controls hardware access, distinguishing between **legitimate and malicious requests**.
- Uses **privileged processes** to grant different access levels:
  - Kernel-level (full access)
  - Driver-level (restricted access)
  - User/application-level (minimal access)
- **Authorization** grants permissions as needed.

### 4. Networking
- **Integral to modern OS functionality**.
- Supports:
  - **Network addressing (IP, DNS).**
  - **File sharing.**
  - **Resource management (e.g., printer sharing).**
  - **Dedicated server OS setups.**

---

## Bootstrap
- **First software executed on a computer.**
- Typically stored in the **BIOS**.
- Loads the rest of the OS.
- May perform basic hardware checks.

---

## File Systems
### What is a file?
- A **container** for storing data.
- Attributes include:
  - **Name, type, location, size, and protection.**

### File Types
- Executable
- Object
- Source code
- Text file
- Library
- Multimedia

### What is a File System?
- **Organizes data storage and retrieval.**
- Without it, data would be stored as **raw binary**.
- **Determines:**
  - **Storage method** (blocks, clusters).
  - **Capacity, speed, and security.**

---

## Logical vs. Physical File Systems
- **Logical File System:**
  - Provides a **user-friendly interface** for files and directories.
  - Functions: Open, create, read, write, delete.
- **Physical File System:**
  - Manages how files are stored at the hardware level.
  - Uses structures like **blocks and file tables**.

### Slack Space
- A **small file still occupies a full block**.
- Example: A 1-byte file may take up **4KB of disk space**.

---

## File System Management
- File systems provide:
  - **Naming and hierarchy**
  - **File manipulation tools** (copy, move, delete)
  - **Metadata tracking**
  - **Security permissions**
  - **Backup and recovery options**
  - **File compression and encryption**
  - **Disk tools (format, defragment, integrity checking)**
  - **Bad sector marking**

---

## Examples of File Systems
### Windows File Systems
- **FAT (File Allocation Table):**
  - Variants: FAT12, FAT16, FAT32.
  - Used in early Windows versions.
  - Limitations: FAT32 has a **4GB file size cap**.
- **NTFS (New Technology File System):**
  - Introduced with Windows NT.
  - Supports **encryption, compression, and quotas**.
  - More efficient file storage.
- **exFAT:**
  - Optimized for **SD cards and flash storage**.
  - **Larger file size support** than FAT32.

### Unix/Linux File Systems
- **Unix-like File System:**
  - Single hierarchical structure.
  - Drives and devices appear as directories.
  - Supports **symbolic links**.
- **APFS (Apple File System):**
  - Used by macOS.
  - Optimized for SSDs.
  - Supports snapshots and encryption.

---

## Different Types of Operating Systems
1. **Single-user, single-task OS** (obsolete).
   - Example: Early computers like **ZX Spectrum**.
2. **Single-user, multi-tasking OS** (common today).
   - Examples: Windows, macOS, Linux.
3. **Mainframe Systems**
   - Handles **large-scale computing resources**.
   - Supports **batch processing and high I/O**.
4. **Network Servers**
   - Focused on **client-server interaction**.
   - Features **virtualization, backup, and security**.
5. **Mobile OS**
   - Designed for **smartphones and tablets**.
   - Optimized for **low power, touch interfaces**.
6. **Real-time OS (RTOS)**
   - Used in **critical applications** (e.g., aerospace, automotive).
   - Processes must meet strict timing constraints.
7. **Embedded OS**
   - Designed to control **specific hardware** (e.g., microwaves, ATMs).
   - Often includes **real-time processing**.
8. **Distributed OS**
   - Operates across **multiple networked systems**.
   - Example: **Distributed Computing Environment (DCE)**.

---

## Conclusion
- We explored **Operating System fundamentals**.
- Discussed **kernel functions and security**.
- Examined **file systems and management**.
- Covered **different OS types and use cases**.
