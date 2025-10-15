# NETWORKING DEVICES & OPERATION
18-03-25

---

## Contents
- Introduction
- Advantages and Disadvantages of Networking
- Identifying Data for Applications
- Networking Devices
  - Network Interface Card (NIC)
  - Switches
  - Routers
  - Wireless Access Points
- Routing and Routing Protocols
- Internet Connections
- IP Addressing and Subnetting
- Conclusion

---

## Introduction
- **Networking** enables communication and resource sharing between devices.
- It involves **hardware, software, protocols, and addressing schemes** to ensure efficient data transfer.

---

## Advantages and Disadvantages of Networking
### **Advantages**
- **Connectivity & Communication:** Enables global access to information and collaboration.
- **Data Sharing:** Supports sharing of **text, multimedia, and metadata**.
- **Hardware Sharing:** Allows multiple devices to share **servers, storage, and printers**.
- **Security & Management:** Centralized security and access control.

### **Disadvantages**
- **Setup and Maintenance Costs:** Requires **hardware, administration, and security monitoring**.
- **Undesirable Sharing:** May lead to **illegal activity or security breaches**.
- **Data Security Risks:** Increased exposure to **hacking and data loss**.

---

## Identifying Data for Applications
- **Multiple applications run simultaneously** on a network.
- Each application is assigned a **port number** to identify its data.
- **Transport Layer Responsibilities:**
  - **Source Port Number:** Identifies the sending application.
  - **Destination Port Number:** Identifies the receiving application.

Example:
- Web servers use **port 80 (HTTP)** or **port 443 (HTTPS)** for requests.

---

## Networking Devices
### **Network Interface Card (NIC)**
- Provides a **physical interface** between a device and a network.
- Handles **data transmission and reception**.
- Built into most modern **computers, laptops, and mobile devices**.

### **Switches**
- Connects devices in a **Local Area Network (LAN)**.
- Uses **MAC addresses** to direct traffic efficiently.
- Builds a **MAC Address Table** to track device locations.

### **Routers**
- Connects **different networks**, including **LANs and the Internet**.
- Uses **IP addresses and subnet masks** to determine data routes.
- Stores a **routing table** to decide the best path for data.
- Uses **routing protocols** to dynamically update paths.

### **Wireless Access Points (WAPs)**
- Connects wireless devices to a wired network.
- Supports **multiple Wi-Fi networks simultaneously**.
- Often integrated into **routers**.

---

## Routing and Routing Protocols
- Routers **make decisions** based on:
  - **Destination IP address**
  - **Subnet mask**
  - **Routing table**
- **Routing protocols** determine the best path for data:
  - **Routing Information Protocol (RIP):** Uses **hop count** as a metric.
  - **Open Shortest Path First (OSPF):** Considers **bandwidth, latency, and congestion**.

---

## Internet Connections
- **Broadband** (DSL, fiber, cable) is the most common type.
- **Leased lines** provide secure, dedicated connections for businesses.
- **Encapsulation & De-encapsulation:**
  - Converts data from one protocol to another (e.g., **Ethernet to DSL**).

---

## IP Addressing and Subnetting
- **IP addresses** have two parts:
  1. **Network part** – Identifies the network.
  2. **Host part** – Identifies the device.
- **Subnet masks** define how an IP address is divided.
- **ANDing** helps determine the network portion of an address.

Example:
- **IP:** 192.168.5.19/23
- **Subnet mask:** 255.255.254.0
- **Network Address Calculation:** Performed using AND operation.

### **Subnetting**
- **Divides a network into smaller subnetworks.**
- **Benefits:**
  - Improves **security** and **network performance**.
  - Reduces **broadcast traffic**.
  - Allows **better management of IP addresses**.
- **Subnet mask changes** as bits are borrowed for subnetting.
- **Example:** Splitting **192.168.1.0/24** into four **/26** networks.

---

## Conclusion
- **Networking devices enable communication** between systems.
- **Routers, switches, and NICs play key roles** in data transmission.
- **Subnetting improves efficiency and security** in large networks.
- **Routing protocols determine optimal paths** for data flow.
- Mastering these concepts is **essential for network administration**.