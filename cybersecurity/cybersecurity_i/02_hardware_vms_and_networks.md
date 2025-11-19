# HARDWARE, VM'S & NETWORKS
07-10-24

---

## Content Overview
1. Physical Hardware and Computer Systems.
2. Computer Architecture.
3. Introduction to Virtual Machines.
4. Virtual Network Adapters.

---

## Types of Computers
- Desktops.
- Laptops.
- Servers.
- NAS (Network Attached Storage).
- Smartphones.
- Tablets/iPads.
- Smart Devices.

---

## Computer Parts
- **Key Components**:
  - Motherboard.
  - CPU (Central Processing Unit).
  - Memory/RAM.
  - Network Interface Card (NIC).
  - HDD/SSD and Controllers.
  - Graphics Card.
  - Sound Card/Audio peripherals.
  - Firmware/BIOS/UEFI.
  - I/O Devices (keyboard, mouse, monitor).

- **NIC (Network Interface Card)**:
  - Allows a computer to connect to a network (wired or wireless).
  - Acts as a "door" for network communication.

- **I/O Devices**:
  - Handles input (e.g., keyboard, mouse) and output (e.g., monitor, speakers).
  - Manages data flow between internal components and external devices.

---

## Computer Storage
- **Applications and OS Storage**:
  - HDD/SSD.
  - Memory/RAM.
- **User Data Storage**:
  - HDD/SSD.

---

## Bus Types
1. **Control Bus**:
   - Manages read/write commands between the CPU and peripherals.
   - Bidirectional.
2. **Address Bus**:
   - Transfers memory addresses for data access.
   - Unidirectional.
3. **Data Bus**:
   - Transfers actual data to/from the CPU.
   - Bidirectional.

---

## MMU and CPU
- **Memory Management Unit (MMU)**:
  - Maps components to addresses.
  - Ensures data is directed to the correct hardware.
- **CPU**:
  - Reads data from the disk via specialized addresses.
  - Writes processed data to memory addresses.

---

## Physical vs. Virtual Machines
### Physical Machines
- Direct utilization of physical hardware (e.g., processors, memory, hard drives).
- Single operating system controls the hardware.

### Virtual Machines
- **Hardware Emulation**:
  - Virtual hardware, including processors, memory, and storage.
- **Features**:
  - Encapsulation: Entire VM stored in a file.
  - Snapshots: Save and restore VM states.
  - Portability: Export and migrate VMs across systems.

---

## Benefits of Virtual Machines
1. **Testing and Development**:
   - Isolated environments for experimentation.
2. **Compatibility**:
   - Run legacy software on modern hardware.
3. **Disaster Recovery**:
   - Restore damaged VMs using snapshots.
4. **Cost Reduction**:
   - Consolidate multiple VMs on one physical system.

---

## Virtual Machine Network Adapters
- **Types**:
  1. **Bridged Adapters**:
     - VMs get unique IPs on the host's network.
     - VMs can communicate with other machines and the internet.
  2. **NAT (Network Address Translation)**:
     - VMs are invisible to external networks but can access the internet.
     - Traffic is routed through the host's IP.
  3. **Host-Only Adapters**:
     - VMs communicate with the host and other VMs on a private network.
     - No external connectivity unless configured.

- **Practical Use**:
  - Use NAT for isolated environments.
  - Use Bridged for full network access.
  - Use Host-Only for private VM-to-VM or VM-to-host communication.

---

## Activities
- **Discussion Topics**:
  - Bus types: Control, Address, Data.
  - Memory Management Unit (MMU).
  - Loading programs from disk into memory.

---

## Key Takeaways
1. **Computer Systems**:
   - Understand the components and their roles in computing.
2. **Virtual Machines**:
   - Offer flexibility, portability, and cost savings for testing and development.
3. **Network Adapters**:
   - Different configurations serve specific use cases in virtualized environments.

