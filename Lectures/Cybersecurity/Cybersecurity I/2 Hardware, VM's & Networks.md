
Date: 07/10/24
Topics: Cybersecurity, hardware, computer architecture, virtual machines, virtual network adapters

---
## Key Concepts

- *Virtual Machines use network interface cards to transmit and receive network traffic.*

- *The three main types of virtual network adaptors are: bridged, NAT, host-only*

--- 
## Detailed Notes

### Types of Computers
-  Desktops
-  Laptops
-  Servers
-  [[NAS]]
-  Smartphones
-  Tablets
-  Smart devices


### Computer Components
-  [[Motherboard.png|Motherboard]]
-  CPU (central processing unit)
-  Memory/RAM
-  Wireless card/ethernet card ([[NIC]])
-  HD/SSD
-  [[HD & SSD controllers]]
-  Graphics cards
-  Sound cards
-  Firmware; BIOS, [[UEFI]]
-  I/O devices


### Internal Communication Paths:
##### Control Bus:
A ==bidirectional== component of a computers internal communication system that manages and coordinates the flow of information between the CPU and other hardware. It transmits control signals and commands, such as read/write, interrupt and clock signals. ==This ensures operations are carried out in the correct sequence.==

##### Address Bus:
A ==unidirectional== component that carries [[memory addresses]] for data storage or retrieval from the CPU to memory or I/O devices. The address bus specifies the physical location in memory where data is to be read from or written to.

##### Data Bus:
A ==bidirectional== subsystem that transfers actual data to and from components.

##### MMU (Memory Management Unit):
Handles memory related operations. It is ==integrated into the processor== and manages all aspects of memory and caching operations associated with the processor. Also enables the use of [[virtual memory]].

##### Northbridge & Southbridge:
A distinction in computer architecture. The [[Northbridge & Southbridge.png|northbridge]] is located closer to the CPU on the motherboard, and manages flow between the CPU, RAM and graphics card. The [[Northbridge & Southbridge.png|southbridge]] is located further from the CPU and handles slower I/O operations.


### Physical Machines vs Virtual Machines (VM's)

| Physical Hardware                              | [[Virtual Machines]]                         |
| ---------------------------------------------- | -------------------------------------------- |
| Processors, memory, chipsets, hard disks, etc. | Hardware emulation                           |
| Direct utilisation of physical resources.      | A collection of virtual hardware.            |
| Singular operating system (usually)            | Encapsulates the OS and application state    |
| Operating system controls hardware             | Shares physical hardware between several VMs |
| Tightly coupled to the physical hardware       | Isolates them from eachother.                |
|                                                | "Snapshots"                                  |
|                                                | Can run legacy software.                     |
##### Benefits of VM's:
- Can be used to test and develop software; used for experimentation purposes
- If the VM becomes damaged it may be restored to an earlier point using a snapshot.
- Cost reduction: multiple VM's can be ran all performing different roles on the same server/system.

##### Virtual Machine Network Adaptors:
**The three main types of virtual network adaptor**:
- [[Bridged]]
- [[Network Adaptors]]
- [[Network Adaptors|Host-only]]

---

##### "*How do you write/send data to other chips and not just to locations in memory?*" -
To write or send data to other chips and not just locations in memory, there are several mechanisms and interfaces used in modern computer systems:
-  [[PCIe]]
-  [[DMA]]
-  Inter-Integrated Circuit ([[I2C]]) and Serial Peripheral Interfaces
-  USB

##### "*Before an application is executed, how do you get the program off the disk into memory/ram?*" -
Before an application is executed, the process of getting the program off the disk and into memory/RAM typically involves the following steps:

1. ==Program Loading==:
	- The operating systems loader reads the executable file from disk.
	- Examines the file's headers to determine memory requirements
2. ==Memory Allocation==:
	- The OS allocates virtual memory space for the program's code, data, and stack.
3. ==Memory Mapping==:
	- The loader creates [[memory mappings]] between the allocated virtual memory and the executable file on disk.
	- This doesn't necessarily copy all data into [[RAM]] immediately.
4. ==Initial Loading==:
	- Critical sections of the program (like the entry point) are loaded into physical memory.
	- Other sections may be loaded on-demand later ([[demand paging]]).
5. ==Address Resolution==:
	- The loader adjusts [[Memory Addresses|memory addresses]] in the program if necessary (relocation).
6. ==Initialisation==:
	- The programs static data is initialised.
	- [[Dynamic libraries]] are loaded if required.
7. ==Execution Preparation==:
	- The CPU registers, including the program counter, are set up.
8. ==Control Transfer==:
	- The OS transfers control to the program's entry point, beginning execution.


---

## To-do

- [x]  Kali Linux bootable drive
- [x] Set up Kali in VM
- [ ] Kali Linux bundle tools
- [ ] Set up a host-only adaptor on Kali Linux in a VM

---

## Reading List

- *The Linux Command Line, 2nd Edition - Shotts, W. E. (2019)