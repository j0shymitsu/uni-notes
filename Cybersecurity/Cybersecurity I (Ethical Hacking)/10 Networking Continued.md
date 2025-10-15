# NETWORKING CONTINUED
06-01-25

---

## Content Overview
1. Review: OSI and TCP/IP Models.
2. Network Addressing (IPv4, IPv6, Subnetting, Allocation).
3. Transport Layer Protocols (TCP, UDP).
4. Networking Protocols (ARP, ICMP, DHCP, DNS).
5. Linux Networking Tools.
6. Python for Network Footprinting and Scanning.

---

## Review: OSI Seven-Layer Model
- **Definition**:
  - Conceptual model for communication between systems/devices.
- **Layers**:
  1. Application (Data) – APIs, remote file access.
  2. Presentation – Translation, encryption, data compression.
  3. Session – Establishes and manages connections.
  4. Transport (Segment) – Reliable transmission (TCP/UDP).
  5. Network (Packet) – Routing and addressing (IP).
  6. Data Link (Frame) – MAC addressing, transmission.
  7. Physical (Bit) – Transmission of raw bit streams.

---

## Review: TCP/IP Model
- **Layers**:
  1. Application – Processes and protocols (e.g., HTTP, DNS).
  2. Transport – Manages data flow and reliability (TCP, UDP).
  3. Network – Handles IP routing and addressing.
  4. Data Link/Physical – Interfaces with hardware.

### Data Flow:
- Data passes through each layer, with headers added or removed at each step during sending and receiving.

---

## Network Addressing
1. **IPv4**:
   - 32-bit addresses (e.g., 192.168.1.1).
   - Supports ~4.3 billion unique addresses.
   - Subnetting with CIDR notation (e.g., /24 for 255.255.255.0).
2. **IPv6**:
   - 128-bit addresses (e.g., 2001::7B).
   - Supports 340 undecillion addresses.
   - Subnetting uses `/64` for network segmentation.
3. **Subnetting**:
   - Divides a network into smaller, manageable sub-networks.
   - CIDR examples:
     - /16 = 65536 addresses.
     - /24 = 256 addresses.

---

## Transport Layer Protocols
1. **UDP (User Datagram Protocol)**:
   - Connectionless, faster, but unreliable.
   - Use case: Streaming, VoIP.
2. **TCP (Transmission Control Protocol)**:
   - Reliable and connection-oriented.
   - Ensures ordered and error-checked delivery of data.
   - Uses a 3-way handshake: SYN → SYN-ACK → ACK.

---

## Networking Protocols
1. **ARP (Address Resolution Protocol)**:
   - Maps IPv4 addresses to MAC addresses.
   - Security concerns: ARP spoofing, ARP poisoning.
2. **ICMP (Internet Control Message Protocol)**:
   - Error reporting and diagnostics (e.g., ping).
   - Types:
     - Echo Request (Type 8), Echo Reply (Type 0).
     - Destination Unreachable (Type 3), Time Exceeded (Type 11).
3. **DHCP (Dynamic Host Configuration Protocol)**:
   - Automatically assigns IP addresses.
   - Process:
     - Discover → Offer → Request → Acknowledge (DORA).
4. **DNS (Domain Name System)**:
   - Resolves domain names to IP addresses.
   - Hierarchical structure with root servers (e.g., `.com`, `.uk`).

---

## Linux Networking Tools
1. **Legacy Tools**:
   - `ifconfig`, `arp`, `netstat`.
2. **Modern Replacements**:
   - `ip addr`, `ip neigh`, `ss`.
3. **Commands**:
   - `arp -a`: Display ARP cache.
   - `netstat -neopa`: Show active connections.

---

## Python for Network Scanning
1. **Socket Module**:
   - Query local host's IP address.
2. **`python-nmap` Library**:
   - Scan networks and identify active hosts.
   - Example: Port scanning with loops to find open ports and services.

---

## Key Takeaways
1. **Networking Models**:
   - OSI and TCP/IP models underpin communication processes.
2. **Protocols**:
   - Understand key protocols like ARP, ICMP, DHCP, and DNS.
3. **Tools**:
   - Use modern Linux tools and Python libraries for scanning and analysis.
