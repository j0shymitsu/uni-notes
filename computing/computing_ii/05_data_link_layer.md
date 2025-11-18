# DATA LINK LAYER
N-D

---

## Learning Objectives

- Purpose of Data Link Layer
- Data Link Layer Frame
- MAC Address Table and Frame Processing
- Data Access
- Workshop

---

## Purpose of Data Link Layer

- Responsible for communication between devices’ network interface cards (NICs).
- Allows upper layer protocols to access the physical layer media and encapsulates Layer-3 packets (IPv4/IPv6) into Layer-2 frames.
- Performs error detection and rejects corrupted frames.
- Data Link Layer address = physical (MAC) address, contained in the frame header, used for local delivery, updated at each device hop.

---

## Ethernet Encapsulation

- Ethernet operates at Data Link Layer and Physical Layer.
- Family of networking technologies defined by IEEE 802.2 (LLC) and 802.3 (MAC).
- Data Link Layer: two sublayers:
    - **LLC (Logical Link Control; IEEE 802.2):** Identifies protocol for the frame, interfaces between networking software and hardware.
    - **MAC (Media Access Control; IEEE 802.3/802.11/802.15):** Responsible for data encapsulation and media access.

| Network | LLC Sublayer | MAC Sublayer           | Fast Ethernet | Gigabit Ethernet Fiber | Gigabit Ethernet Copper | 10 Gigabit Ethernet Fiber |
|---------|--------------|------------------------|---------------|-----------------------|------------------------|--------------------------|

- Responsible for compatibility and access to varied media.

---

## LAN TOPOLOGIES

- Star/extended star topologies (easy to install, scalable, troubleshoot).
- Early Ethernet/token ring: bus (chained/terminated) & ring (connected circularly).

---

## DATA LINK LAYER FRAME

- Encapsulates network layer packet with header & trailer to form frame:
    - **Header**
    - **Data**
    - **Trailer**

Frame fields differ by protocol (Ethernet, WiFi).

### Frame Fields

| Field            | Description                                      |
|------------------|--------------------------------------------------|
| Frame Start/Stop | Beginning/end of the frame                       |
| Addressing       | Source/destination node info                     |
| Type             | Network layer protocol indicator                 |
| Control          | Flow control services                            |
| Data             | Frame payload                                    |
| Error Detection  | Transmission error check                         |

---

### Ethernet Frame Fields

- Minimum: 64 bytes
- Maximum: 1518 bytes (excluding preamble)
- <64 bytes = "collision fragment"/"runt"; >1500 bytes = "jumbo"/"baby giant"
- Invalid frames (wrong size) are dropped.

| Field          | Size      |
|----------------|-----------|
| Preamble/SFD   | 8 bytes   |
| Dest MAC Addr  | 6 bytes   |
| Src MAC Addr   | 6 bytes   |
| Type/Length    | 2 bytes   |
| Data           | 45–1500   |
| FCS            | 4 bytes   |

---

## MAC Address and Hexadecimal

- Used for device identification and local addressing.
- 48-bit (6-byte), represented in 12 hexadecimal digits.
- Each byte: two hex digits (00 to ff).
- Often shown with 0x prefix or h/16 subscript.

---

### Ethernet MAC Address

- Every device/interface has unique 48-bit MAC.
- MAC = vendor OUI (6 hex digits, 24 bits) + vendor-assigned value (48 bits total).
- OUI examples: 00-14-22 (DELL), 00-40-96 (Cisco).
- Large manufacturers have multiple OUIs.

---

## MAC Address Table and Frame Processing

- NIC receives frame, checks destination MAC.
    - If no match: frame discarded.
    - If match: frame passed up OSI layers, de-encapsulated.
    - Broadcast/multicast frames also accepted.
- Switches use MAC tables to forward frames; table populated from source MAC in received frames.

---

## FRAME STRUCTURE

Frame Structure

| Field          | Description                        |
|----------------|------------------------------------|
| Preamble       | Synchronization                    |
| Dest MAC       | Destination address                |
| Src MAC        | Source address                     |
| Type/Length    | Network layer protocol/size        |
| Data           | Payload                            |
| End of Frame   | Frame end indicator                |

MAC Table: Know where frames are forwarded (unicast/broadcast/flooded/dropped).

---

## Unicast, Broadcast, and Multicast MAC Addresses

- **Unicast:** Unique address, frame sent device-to-device.
- **Broadcast:** Sent to all devices (MAC FF-FF-FF-FF-FF-FF).
- **Multicast:** Sent to a group
    - IPv4 Multicast: 01-00-5E prefix
    - IPv6 Multicast: 33-33 prefix

---

## Data Access and Addressing

- Network Layer: delivers IP packet from source to final destination (global).
- Data Link Layer: delivers frame from one NIC to another on same network (local).
- MAC addressing is per-hop (source + destination for each segment).

    - First segment: PC1 (source), RouterDGW (destination)
    - Second: Router-exit (source), Router2 (destination)
    - Last: Router-exit (source), Web server NIC (destination)

- IP address doesn’t change hop-to-hop; MAC address does.

---

### Same IP Network

- Frame uses destination NIC’s actual MAC address.

### Different IP Networks

- Frame uses router interface MAC for DGW.
- DGW is “gateway” to external networks (must be set on LAN devices).

---

## Duplex and Speed Settings

- Switch port: set speed (bandwidth) and duplex mode.
- Both sides should match!
- Autonegotiation enables connected devices to select matching best options.

---

## ARP Overview

- Address Resolution Protocol maps Layer-3 IP to Layer-2 MAC.
    - Resolves IPs to MACs
    - Maintains ARP table of mappings

---

## SUMMARY

- Data Link Layer: purpose, functions, frame structure
- LLC vs MAC sublayers
- LAN physical topologies
- Frame fields (Ethernet)
- MAC addressing (format, forwarding, table)
- Unicast, broadcast, multicast
- Data link vs network addressing
- ARP overview

