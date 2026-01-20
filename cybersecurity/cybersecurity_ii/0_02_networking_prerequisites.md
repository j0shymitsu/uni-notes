# NETWORKING PREREQUISITES
N-D

---
## Content Overview
1. Introduction to Networking for Cybersecurity.
2. The OSI Model (7 Layers).
3. The TCP/IP Model (4 Layers).
4. Data Encapsulation and Decapsulation.
5. IP and MAC Addresses.
6. TCP vs UDP Protocols.
7. Ports and Services.
8. Common Protocols and Their Security Implications.
9. The Three-Way Handshake.
10. Subnetting Basics.
11. How Firewalls Use Ports and Protocols.

---
## Introduction to Networking for Cybersecurity
- **Why Networking Matters**:
    - Every cybersecurity skill depends on understanding how computers communicate.
    - Packet analysis, scanning, exploitation, and incident response all require networking knowledge.
- **Foundation for Understanding**:
    - How communication is structured (OSI Model).
    - How the real internet works (TCP/IP Model).
    - What ports, protocols, and services mean.
- **Real-World Attack Context**:
    - MITM attacks (Layer 2).
    - DNS spoofing (Layer 7).
    - SYN flood DDoS (Layer 4).
    - Port scans and fingerprinting.

---
## The OSI Model (7 Layers)
- **Definition**:
    - Standard model for discussing different layers of a network .
    - Best mental map for understanding where attacks happen and defences work.
- **Structure**:
    - Each layer performs a specific job and passes data to the layer above or below.


### OSI Layer Summary
| Layer | Name | Function | Examples | Security Relevance |
| :-- | :-- | :-- | :-- | :-- |
| 7 | Application | User-facing services | HTTP, DNS, SMTP, FTP | SQLi, XSS, authentication flaws |
| 6 | Presentation | Formatting, encryption | TLS/SSL, encoding | Expired certs, weak ciphers |
| 5 | Session | Opening/closing sessions | Session management | Session fixation/hijacking |
| 4 | Transport | End-to-end communication | TCP, UDP | Port scanning, SYN floods |
| 3 | Network | IP addressing, routing | IPv4, IPv6, ICMP | IP spoofing, routing misconfig |
| 2 | Data Link | Local network communication | MAC, ARP, Ethernet | ARP spoofing, VLAN hopping |
| 1 | Physical | Hardware and signals | Cables, Wi-Fi, switches | Physical access, rogue APs |

---
## The TCP/IP Model (4 Layers)
- **Definition**:
    - The model that real networks actually use.
    - Simpler and more practical than OSI.
    - What routers, operating systems, firewalls, and tools actually follow.


### TCP/IP Layer Summary
| Layer | Name | OSI Equivalent | Function | Examples |
| :-- | :-- | :-- | :-- | :-- |
| 4 | Application | Layers 5, 6, 7 | User interaction | HTTP, HTTPS, DNS, SMTP, SSH |
| 3 | Transport | Layer 4 | Ports, reliability, sessions | TCP, UDP |
| 2 | Internet | Layer 3 | IP addressing, routing | IPv4, IPv6, ICMP |
| 1 | Link | Layers 1, 2 | Local network communication | MAC, ARP, Ethernet, Wi-Fi |

### OSI vs TCP/IP
- **OSI** = Theory → used for learning, explaining, analysing issues.
- **TCP/IP** = Implementation → used by real protocols and devices.

---
## Data Encapsulation and Decapsulation
- **Encapsulation**:
    - Process of wrapping data as it moves down through layers.
    - Each layer adds its own header.
- **Decapsulation**:
    - Reverse process when data arrives.
    - Layers unwrap headers bottom-to-top.


### Encapsulation Process (Sending Data)
1. **Application Layer**: Raw data (e.g., HTTP request).
2. **Transport Layer**: Adds source/destination ports → becomes **Segment** (TCP) or **Datagram** (UDP).
3. **Network Layer**: Adds source/destination IP → becomes **Packet**.
4. **Data Link Layer**: Adds source/destination MAC → becomes **Frame**.
5. **Physical Layer**: Converts to bits (0s and 1s) → transmitted as signals.

### Why Encapsulation Matters for Security
- **Every attack lives on a specific layer**:
    - ARP spoofing → Layer 2.
    - IP spoofing → Layer 3.
    - SYN flood → Layer 4.
    - SQL injection → Layer 7.
- **Firewalls use this structure**:
    - Packet filters (L3) check IP addresses.
    - Stateful firewalls (L4) check TCP/UDP behaviour.
    - WAF (L7) checks HTTP content.

---
## IP and MAC Addresses
### IP Addresses
- **Definition**:
    - Logical address used to identify devices on a network .
    - Essential for understanding network segmentation and attack surface.
- **Types**:
    - **IPv4**: 32-bit address (e.g., 192.168.1.1).
    - **IPv6**: 128-bit address.
- **Security Relevance**:
    - Understanding scope boundaries during penetration testing.
    - IP spoofing attacks.


### MAC Addresses
- **Definition**:
    - Hardware address identifying network interface cards .
    - First three segments indicate vendor (OUI).
- **Security Relevance**:
    - Fundamental for ARP (Address Resolution Protocol).
    - Enables MITM and ARP cache poisoning attacks.
    - Vendor identification aids enumeration.

---
## TCP vs UDP Protocols
### Comparison Table
| Feature | TCP | UDP |
| :-- | :-- | :-- |
| Connection | Connection-based | Connectionless [^2] |
| Handshake | 3-way handshake | None |
| Reliability | Guaranteed delivery | Best effort |
| Speed | Slower | Faster |
| Spoofing | Harder | Easier |
| Used By | HTTP, SSH, FTP, Email | DNS, streaming, gaming, DHCP [^2] |
| Attack Vectors | SYN flood, session hijack | DDoS amplification |

---
## The Three-Way Handshake
- **Purpose**:
    - Establishes TCP connection between client and server .

### Handshake Steps
1. **Client → Server: SYN** - "I want to open a connection; my sequence = X."
2. **Server → Client: SYN-ACK** - "Here's my sequence = Y, acknowledgement = X+1."
3. **Client → Server: ACK** - "Acknowledgement = Y+1. Connection open."

### Important TCP Flags
- **SYN**: Synchronise - initiates connection.
- **ACK**: Acknowledgement - confirms receipt.
- **RST**: Reset - terminates connection immediately.
- **FIN**: Finish - gracefully closes connection .

---
## Ports and Services
### Port Categories
| Category | Range | Purpose | Examples |
| :-- | :-- | :-- | :-- |
| Well-Known | 0–1023 | System services | HTTP (80), SSH (22), DNS (53) [^4] |
| Registered | 1024–49151 | Applications | MySQL (3306), PostgreSQL (5432) |
| Dynamic | 49152–65535 | Temporary/outgoing | Client-side connections [^2] |

### Key Ports to Memorise
| Port | Service | Security Notes |
| :-- | :-- | :-- |
| 22 | SSH | Brute-force target [^4] |
| 23 | Telnet | Unencrypted, insecure |
| 25 | SMTP | Email sending |
| 53 | DNS | Poisoning, tunnelling |
| 80 | HTTP | Unencrypted web traffic |
| 443 | HTTPS | Secure web (TLS) |
| 445 | SMB | Ransomware vector (WannaCry) [^4] |
| 3389 | RDP | Ransomware entry point |

---
## Subnetting Basics
- **Definition**:
    - Dividing a network into smaller sub-networks.[^5]
- **Security Relevance**:
    - Stay within scope during penetration testing .
    - Pivot effectively to adjacent networks once inside.

### Common Subnet Masks
| CIDR | Subnet Mask | Usable Hosts |
| :-- | :-- | :-- |
| /24 | 255.255.255.0 | 254 |
| /26 | 255.255.255.192 | 62 |
| /30 | 255.255.255.252 | 2 |

---
## How Firewalls Use Ports and Protocols
### Firewall Types
- **Packet Filter (L3/L4)**: Filter based on IP, ports, protocols.[^2]
- **Stateful**: Remember active connections, track TCP handshake.
- **Next-Generation (L7)**: Inspect application content, detect DNS tunnelling.

### Key Security Tools
| Tool | Purpose |
| :-- | :-- |
| **Nmap** | Port scanning, service detection [^4] |
| **Wireshark** | Packet capture and analysis |
| **Snort/Suricata** | IDS/IPS - deep inspection [^2] |

