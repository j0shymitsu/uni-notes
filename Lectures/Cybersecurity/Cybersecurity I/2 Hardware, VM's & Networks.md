
Date: 07/10/24
Topics: Cybersecurity, hardware, computer architecture, virtual machines, virtual network adapters

---

## Key Concepts

-
-
-

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


---

## To-do

- [ ] 

---

## Reading List

- [ ] 