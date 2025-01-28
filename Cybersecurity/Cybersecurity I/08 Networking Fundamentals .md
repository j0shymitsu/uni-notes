# NETWORKING FUNDAMENTALS
25-11-24

---

## Content Overview
1. OSI Network Model.
2. TCP/IP Model.
3. Packet Analysis and Encapsulation.
4. HTTP and ARP Packets.
5. Wireshark.
6. Penetration Testing: Network Mapping and Scanning.

---

## Networking: OSI Seven-Layer Model
- **Definition**:
  - Conceptual model for communication between systems/devices without concern for their internal structure or technology.
- **Layers**:
  1. **Application**: Interfaces with end-user applications (e.g., APIs).
  2. **Presentation**: Translates and formats data (e.g., encryption, compression).
  3. **Session**: Manages sessions (e.g., establishing connections).
  4. **Transport**: Ensures reliable data transmission (e.g., TCP, UDP).
  5. **Network**: Handles addressing, routing, and traffic control (e.g., IP).
  6. **Data Link**: Manages frame transmission between nodes (e.g., MAC address).
  7. **Physical**: Sends/receives raw bit streams over a physical medium.

---

## Networking: TCP/IP Model
- **Definition**:
  - Practical implementation of the OSI model used for internet communication.
- **Layers**:
  1. **Application**: Handles processes, including libraries (e.g., HTTP, DNS).
  2. **Transport**: Ensures reliable data delivery (e.g., TCP, UDP).
  3. **Network**: Routes data between devices (e.g., IP).
  4. **Data Link/Physical**: Interfaces with networking hardware.

### Data Flow
- Data moves down the stack on the sender side and up the stack on the receiver side.
- **Encapsulation**:
  - Each layer adds headers to the data for communication.
  - Reversed during data reception to strip headers.

---

## Packet Analysis
1. **Packets**:
   - Protocol-dependent streams of bits for data exchange.
   - Components:
     - **Header**: Control information (e.g., source/destination).
     - **Payload**: User data.
2. **Packet Headers**:
   - Contain protocol-specific structures for interpreting data.

---

## HTTP Packets
1. **HTTP Request**:
   - Includes:
     - `GET`: Requests resources.
     - `Host`: Domain name.
     - `User-Agent`: Browser details.
   - Example:
     - Requesting a webpage sends a `GET` request to port 80 or 8080.
2. **HTTP Response Codes**:
   - 2xx: Success (e.g., 200 OK).
   - 3xx: Redirection (e.g., 301 Moved Permanently).
   - 4xx: Client Errors (e.g., 404 Not Found).
   - 5xx: Server Errors (e.g., 503 Service Unavailable).

---

## ARP Packets
- **Address Resolution Protocol**:
  - Maps IP addresses to MAC addresses in local networks.
  - Vulnerabilities:
    - ARP poisoning can intercept traffic by manipulating ARP tables.

---

## Wireshark
1. **Definition**:
   - Network monitoring tool to intercept and analyze traffic.
2. **Usage**:
   - Select network interface for analysis.
   - Filter traffic by protocol (e.g., ARP, TCP).
   - Analyze packet details, including headers and payloads.
3. **Key Features**:
   - Follows TCP streams to examine request/response pairs (e.g., HTTP sessions).
   - Displays traffic rows representing individual packets.

---

## Penetration Testing: Network Mapping and Scanning
1. **Network Mapping**:
   - Identifies live hosts and IPs within a network.
   - Results in a useful map for further scanning.
2. **Python for Network Scanning**:
   - **Example**:
     - Use `socket` or `python-nmap` to query network devices.
     - Identify open ports and active hosts using loops.

---

## Key Takeaways
1. **Network Models**:
   - OSI and TCP/IP models guide data communication and analysis.
2. **Packet Analysis**:
   - Understand headers and payloads for troubleshooting and security.
3. **Tools**:
   - Wireshark for traffic analysis.
   - Python for scripting network scans.