# NETWORK SERVICES & NETWORK SECURITY CONCEPTS
N-D

---

## Contents
- Introduction
- IP Addressing: IPv4 and IPv6
  - Limitations of IPv4
  - IPv6 Features and Notation
- Network Services
  - DNS
  - DHCP
  - ARP
  - PING
- Network Security Fundamentals
  - Types of Network Attacks
  - Security Mitigation Strategies
  - AAA: Authentication, Authorization, Accounting
- Conclusion

---

## Introduction
- Modern networking requires not only **efficient protocols** but also **robust security practices**.
- This lecture introduces **network services** and **core security concepts** to manage and secure a network.

---

## IP Addressing: IPv4 and IPv6
### **Limitations of IPv4**
- IPv4 supports ~4.2 billion addresses.
- Public IPv4 addresses have nearly been exhausted.
- **Network Address Translation (NAT)** allows multiple private addresses to share a single public IP address.

### **IPv6 Features and Notation**
- IPv6 uses 128-bit addresses (e.g., `2001:0db8:acad::7330`), supporting 3.4 x 10³⁸ unique addresses.
- **Benefits of IPv6:**
  - Vast address space
  - Simplified packet handling
  - Eliminates NAT
- **IPv6 Notation Rules:**
  - **Rule 1:** Omit leading zeros (e.g., `01ab` → `1ab`)
  - **Rule 2:** Use `::` for a single consecutive string of zeros (e.g., `2001:db8:cafe:1:0:0:0:1` → `2001:db8:cafe:1::1`)

---

## Network Services
### **DNS – Domain Name System**
- Converts human-readable domain names (e.g., `chester.ac.uk`) into IP addresses.
- Acts like a **phone directory** for the internet.

### **DHCP – Dynamic Host Configuration Protocol**
- **Automates IP address assignment** in a network.
- Process:
  - `DHCPDISCOVER` → Client looks for servers
  - `DHCPOFFER` → Server proposes lease
  - `DHCPREQUEST` → Client accepts
  - `DHCPACK` → Server confirms

### **ARP – Address Resolution Protocol**
- Resolves **IP to MAC addresses** within a LAN.
- Uses **broadcast messages** to find the MAC address associated with an IP.

### **PING – Testing Connectivity**
- Verifies that a host is reachable.
- Sends packets and waits for echo replies.
- Used for **basic troubleshooting**.

---

## Network Security Fundamentals
### **Security Weaknesses**
- Users are often the weakest link due to:
  - Poor password habits
  - Disregard for security policy

### **Types of Network Attacks**
- Gaining access through:
  - Software vulnerabilities
  - Password guessing
  - Hardware manipulation
- Potential threats:
  - Information theft
  - Data loss or corruption
  - Identity theft
  - Denial of service

### **Security Mitigation Strategies**
- **Defense-in-Depth:** Multi-layered security approach.
- Techniques include:
  - Securing devices (routers, switches, endpoints)
  - Frequent **backups** (ideally offsite)
  - Up-to-date **antivirus** and **automatic updates**

### **AAA: Authentication, Authorization, Accounting**
- **Authentication:** Verifying identity (username, password, MFA).
- **Authorization:** Determining access levels (file, printer permissions).
- **Accounting:** Logging activity for audit and security monitoring.

Example:
- Like a **credit card**:
  - Who uses it (AuthN)
  - What they can buy (AuthZ)
  - What they actually bought (Accounting)

---

## Conclusion
- Understanding **IPv4 and IPv6** is critical to modern networking.
- **Network services** (DNS, DHCP, ARP, PING) provide the foundation for connectivity.
- Implementing **security fundamentals and layered protection** ensures network resilience.
- The **AAA framework** is central to managing access and accountability in secure systems.