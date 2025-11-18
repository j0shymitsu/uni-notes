# NETWORK LAYER
N-D 

---

## Learning Objectives
- Network Layer Characteristics
- IPv4 and IPv6 Packets
- Introduction to Routing
- Subnetting

---

## Functions of Network Layer
- Provides services to allow end devices to exchange data
- **Protocols:** IPv4 and IPv6 are the principal network layer protocols
- Four basic operations:
    - Addressing end devices
    - IP encapsulation
    - Routing
    - IP de-encapsulation

---

## IP Encapsulation
- IP encapsulates transport layer (Layer 4) PDU (segment)
- Can use IPv4 or IPv6 packet—does not impact Layer-4 segment
- IP packet examined by Layer-3 devices as it traverses the network

---

## Characteristics of IP

- **Low Overhead:** Only necessary functions to deliver packet from source to destination
- **Connectionless:** No connection established before sending packet; no synchronizations or acknowledgements
- **Best Effort:** No guarantee of delivery; no re-transmission or acknowledgement
- **Media Independent:** Can be sent over copper, fiber, wireless; doesn't care about data link or physical media specifics

---

### 1. Connectionless

- IP does not establish a connection before sending
- No control info needed
- Destination receives packet when it arrives; no pre-notification

---

### 2. Best Effort

- IP does not guarantee delivery
- No mechanism to resend lost packets
- Reduced overhead, no acknowledgments

---

### 3. Media Independent

- IP is unreliable (can't detect, fix, or retransmit undelivered/corrupt packets)
- Functionality like error correction handled by other protocols
- Can run on any media type (copper, fiber, wireless)

---

## IPv4 and IPv6 Packets

### IPv4 Packet Header

- Ensures packets sent to correct destination
- Contains info for Layer-3 devices along the packet path
- Fixed 20-byte header
- Most important fields: source, destination IP addresses

---

### IPv4 Packet Header Fields

| Function        | Description                                                        |
|-----------------|--------------------------------------------------------------------|
| Version         | 4-bit field (0100 for IPv4)                                        |
| Differentiated Services | Used for QoS (Type of Service/ToS)                        |
| Header Checksum | Error detection for packet                                         |
| Identification  | For fragmentation/reassembly                                       |
| Time-to-Live    | Layer-3 hop count, drops packet if zero                            |
| Protocol        | Identifies next protocol (ICMP, TCP, UDP, etc.)                    |
| Source Address  | 32-bit source IP                                                   |
| Destination Address | 32-bit destination IP                                          |

---

## Check Your Understanding

- Not all IPv4 addresses are routable on Internet—some are private for LAN use.
- List the three private IPv4 address ranges?

---

## Network Address Translation (NAT) Overview

- Private addresses (RFC1918) used locally; not routable over Internet
- NAT translates private addresses to public for Internet access
- NAT conserves public IPv4 addresses

| Class | Private IPv4 Range                      |
|-------|----------------------------------------|
| A     | 10.0.0.0 - 10.255.255.255              |
| B     | 172.16.0.0 - 172.31.255.255            |
| C     | 192.168.0.0 - 192.168.255.255          |

---

## How NAT Works

- Devices with private IP communicate externally via NAT router
- Border router translates internal/private to external/public addresses

---

### Example NAT Table

| Inside Local      | Inside Global       | Outside Local      | Outside Global      |
|-------------------|--------------------|--------------------|---------------------|
| 192.168.10.10     | 209.165.200.226    | 209.165.201.1      | 209.165.201.1       |

---

## IPv6 Overview

- **IPv4 address depletion** – we’ve run out of IPv4 addresses
- **IPv6:** 
    - 128-bit address space
    - Simplified header
    - No NAT needed due to huge address space
- **What is NAT64?** (explore further)

---

### IPv6 Packet Header Fields

| Function     | Description                                                             |
|--------------|-------------------------------------------------------------------------|
| Version      | 4-bit field for v6 (0110)                                               |
| Traffic Class| Used for QoS, like DiffServ (DS field)                                  |
| Flow Label   | Informs about identical flows, 20 bits                                  |
| Payload Len  | 16 bits—data portion/payload length                                     |
| Next Header  | Type of data carried (ICMP, TCP, UDP, etc)                              |
| Hop Limit    | Like TTL in IPv4                                                        |
| Source Addr  | 128-bit source IP                                                       |
| Dest Addr    | 128-bit destination IP                                                  |

---

## Layer-3 Logical Address (IP Addressing)

- **IPv4:** 32 bits, dotted decimal format (e.g. 192.168.1.1)
- Source IP: sending device, Destination IP: receiving device

IP addresses have two parts:
- **Network Portion (IPv4) / Prefix (IPv6):** Left-most bits/groups, shared by devices in a network
- **Host Portion (IPv4) / Interface ID (IPv6):** Right-most bits, unique to each device

---

## Network & Host Portions in IPv4

- **Subnet mask** determines network vs host parts
- **Bitwise ANDing** of IP and subnet mask yields network address

### Prefix Length

| Subnet Mask           | Binary Representation                       | Prefix Length |
|-----------------------|---------------------------------------------|--------------|
| 255.0.0.0             | 11111111.00000000.00000000.00000000         | /8           |
| 255.255.0.0           | 11111111.11111111.00000000.00000000         | /16          |
| 255.255.255.0         | 11111111.11111111.11111111.00000000         | /24          |
| 255.255.255.128       | 11111111.11111111.11111111.10000000         | /25          |
| 255.255.255.192       | 11111111.11111111.11111111.11000000         | /26          |
| ...                   | ...                                         | ...          |

---

## Check Your Understanding

1. Host-A: IP 10.5.4.100 / 255.255.255.0 → What’s network address?
2. Host-B: IP 172.16.4.100 / 255.255.0.0 → What’s network address?
3. Why is subnet mask important for analyzing IPv4 address?
4. Host with IP 192.168.10.25/24; default gateway 192.168.20.1—why can’t it access the internet?
5. Host has IP and subnet mask, but no default gateway—what works?

---

## IPv4 Unicast, Broadcast, Multicast

- **Unicast:** one-to-one (PC at 172.16.4.1 to printer at 172.16.4.253)
- **Broadcast:** one-to-all (PC at 172.16.4.1 to all IPv4 hosts)
- **Multicast:** one-to-group (PC at 172.16.4.1 to group 224.10.10.5)

---

## Introduction to Routing

### Host Forwarding Decision

Hosts have own routing tables:
- Send to itself (127.0.0.1)
- Local hosts (same LAN)
- Remote hosts (not on same LAN), via default gateway

Use commands:
- Windows: `route print` or `netstat -r`

---

### Default Gateway (DGW)

- Required for remote network access
- DGW must have IP in LAN range
- Forwards traffic outside LAN
- No/incorrect DGW = cannot leave LAN

--- 

### DGW Configuration

- IPv4: static or DHCP
- IPv6: static or router solicitation (RS)

---

### Router Forwarding Decision

When router receives a frame:
1. Receives packet, removes Layer 2 header/trailer
2. Reads destination IPv4 address, checks routing table for best match
3. Encapsulates packet in new Ethernet header/trailer, forwards to next hop

---

### Example R1 Routing Table

| Route                 | Next Hop / Exit Interface         |
|-----------------------|-----------------------------------|
| 192.168.10.0 /24      | G0/0/0                            |
| 209.165.200.224 /30   | G0/0/1                            |
| 10.1.1.0 /24          | via R2                            |
| Default Route 0.0.0.0 | via R2                            |

---

## Subnetting

### Why Segment Networks?

- Switches propagate broadcasts out all interfaces except incoming one
- Many protocols are broadcast (e.g. DHCP)
- Routers stop broadcasts—each interface forms its own broadcast domain
- Subnetting reduces broadcast domains/size, traffic, improves performance

---

- Subnet by location, device type, or function
- Octet boundaries are easiest to subnet: /8, /16, /24

| Prefix | Subnet Mask     | n/h pattern                                      | Hosts     |
|--------|-----------------|--------------------------------------------------|-----------|
| /8     | 255.0.0.0       | nnnnnnnn.hhhhhhhh.hhhhhhhh.hhhhhhhh              | 16777214  |
| /16    | 255.255.0.0     | nnnnnnnn.nnnnnnnn.hhhhhhhh.hhhhhhhh              | 65534     |
| /24    | 255.255.255.0   | nnnnnnnn.nnnnnnnn.nnnnnnnn.hhhhhhhh              | 254       |

Why is the number of hosts less than \( 2^{h} \) ?

---

### Example 1: 3 Subnets in 172.16.0.0/16

- /16: 172.16.0.0 network, mask 255.255.0.0
- Borrow 2 bits from host portion (\( 2^2=4 \) subnets)
- New mask: /18 (255.255.192.0)
- Block size in 3rd octet = 64
- Network addresses:
    - 172.16.0.0/18
    - 172.16.64.0/18
    - 172.16.128.0/18
    - 172.16.192.0/18

---

### Example 2: 100 Subnets in 172.16.0.0/16

- Need at least 100 subnets; borrow 7 bits (\( 2^7=128 \))
- Up to 14 host bits can be borrowed (last two can't)—why?

---

| Borrowed bits | Subnets produced |
|---------------|-----------------|
| 1             | 2               |
| 2             | 4               |
| 3             | 8               |
| 4             | 16              |
| 5             | 32              |
| ...           | ...             |
| 7             | 128             |

---

### Create Subnets with /16 Prefix

| Prefix Length | Subnet Mask       | n/h pattern (+in binary)                       | Subnets | Hosts  |
|---------------|-------------------|-----------------------------------------------|---------|--------|
| /17           | 255.255.128.0     | NNNNNNNN.NNNNNNNN.nhhhhhhh.hhhhhhhh           | 2       | 32766  |
| /18           | 255.255.192.0     | NNNNNNNN.NNNNNNNN.nnhhhhhh.hhhhhhhh           | 4       | 16382  |
| /19           | 255.255.224.0     | NNNNNNNN.NNNNNNNN.nnnhhhhh.hhhhhhhh           | 8       | 8190   |
| /20           | 255.255.240.0     | NNNNNNNN.NNNNNNNN.nnnnhhhh.hhhhhhhh           | 16      | 4094   |
| ...           | ...               | ...                                           | ...     | ...    |

---

## Summary

- Role and characteristics of the Network Layer
- IPv4 & IPv6 packet structures, addressing, header fields
- Addressing methods: unicast, broadcast, multicast
- Use of default gateways, routing decisions
- Subnetting for efficient address allocation and segmentation

