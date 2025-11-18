# NETWORKS, PROTOCOLS AND MODELS
N-D

---

## Learning Objectives
- Network Components, Representation and Topologies
- Network Characteristics
- Common Types of Networks
- Network Protocols
- Reference Models
- Data Encapsulation
- Network Documentation

---

## Introduction

- Communication is essential.
- Networks connect us globally; enable world without boundaries.
- Global communities, human network.

---

## Network Components

### End Devices
- Origin or destination of messages.
- Data flows from one end device, through network, to another.

### Intermediary Network Devices
- Interconnect end devices.
- Regenerate/retransmit signals, keep pathway info, notify errors.
- Need physical media to connect devices.

---

## Client-Server Architecture

- Every computer is a host; some are clients.
- Servers provide info to end devices (email, web, file server).
- Clients send requests (web pages, email).

| Server Type | Description |
| :--- | :--- |
| Email | Email server software; client software accesses email. |
| Web | Web server software; browser accesses web pages. |
| File | Stores corporate/user files. |

---

## Network Representations and Topologies

- Topology diagrams use symbols for devices.
- **Physical topology**: Shows physical location, cabling.
- **Logical topology**: Shows devices, ports, addressing.

---

## Networks of Many Sizes

- **Small Home** networks: few computers + Internet.
- **Small Office/Home Office (SOHO)**: home/remote office connect to corporate network.
- **Medium/Large networks**: many locations, hundreds/thousands computers.
- **World Wide Networks**: internet.

---

## LANs and WANs

- Networks differ by size, users, services, area of responsibility.
- Most common: Local Area Network (LAN), Wide Area Network (WAN).

| LAN | WAN |
| :--- | :--- |
| End devices in limited area. | LANs over wide areas. |
| Single admin. | Service providers. |
| High-speed bandwidth. | Slower speed links between LANs. |

---

## The Internet

- Worldwide collection of interconnected LANs + WANs.
- Connects via copper, fiber, wireless.
- Internet is not owned; structured by:
    - IETF
    - ICANN
    - IAB

---

## Home and Small Office Internet Connections

| Connection | Description |
| :--- | :--- |
| Cable | High bandwidth, always on, via cable TV providers. |
| DSL | High bandwidth, always on, via telephone. |
| Cellular | Uses cell network to connect to internet. |
| Satellite | Helps rural areas without ISPs. |
| Dial-up Telephone | Cheap, low bandwidth, uses modem. |

---

## Businesses Internet Connections

| Type | Description |
| :--- | :--- |
| Dedicated Leased Line | Reserved circuits, private networking. |
| Ethernet WAN | Extends LAN into WAN. |
| DSL | Business DSL (e.g. SDSL). |
| Satellite | For locations without wired options. |

---

## The Converging Network

- Old: separate cabling for phone, video, data.
- Converged: single infrastructure for all (voice, data, video).

---

## Network Architecture

Must support:
1. Fault Tolerance
2. Scalability
3. Quality of Service (QoS)
4. Security

---

### 1. Fault Tolerance

- Limits impact of failures.
- Requires multiple (redundant) paths.
- Uses packet switching; packets take separate routes.

---

### 2. Scalability

- Expand easily for new users/applications.
- Design uses standards/protocols.

---

### 3. Quality of Service

- Real-time services (voice/video) demand high bandwidth.
- QoS ensures reliable delivery; router manages data/voice flow.

---

### 4. Network Security

- **Network infrastructure security**
- **Physical security**
- Prevent unauthorized access.
- **Information security**: confidentiality, integrity, availability.

---

## Recent Trends

- Networks evolve with new tech, devices.
- Trends: BYOD, online collaboration, cloud computing.

---

### Bring Your Own Device (BYOD)

- Users use their own devices (laptops, phones, tablets).
- Flexibility and personal tool access.

---

### Cloud Computing

- Store files, backup, run apps on remote servers.
- Data centers provide cloud services.

---

### Online Collaboration

- Work together on projects over network using collaboration tools.
- Important for business, education.

---

## Network Protocols

### Communications Protocols

- Devices must agree "how" to talk: sender, receiver, channel (media).
- Communications governed by protocols (rules).

---

### Network Protocol Overview

- Set of rules (protocols): software, hardware, or both.
- Define format, function, rules.

---

## Network Protocol Requirements

1. Message encoding
2. Formatting & encapsulation
3. Size
4. Timing
5. Delivery options

---

#### 1. Message Encoding

- Convert info for transmission.
- Decoding reverses transmission.

#### 2. Formatting and Encapsulation

- Structure depends on message & channel.

#### 3. Message Size

- Split message into bits/patterns for correct transmission & receipt.

#### 4. Message Timing

- Flow control, response timeout, access method.

#### 5. Delivery Options

- Unicast (one-to-one)
- Multicast (one-to-many, not all)
- Broadcast (one-to-all)

---

## Network Protocol Functions

| Function | Description |
| :--- | :--- |
| Addressing | IDs for sender and receiver |
| Reliability | Guarantees delivery |
| Flow Control | Regulates transfer rate |
| Sequencing | Tracks message segments |
| Error Detection | Finds corrupted data |

---

## Protocol Interaction

- Networks need multiple protocols, with layered functions.

| Protocol | Function |
| :--- | :--- |
| HTTP | Web client-server interaction |
| TCP | Conversation mgmt, guaranteed delivery, flow control |
| IP | Sends messages globally |
| Ethernet | Sends messages within LAN |

---

## Network Protocol Suites

- Related protocols work in layers: higher/lower.
- Examples: TCP/IP suite, OSI, AppleTalk.

---

## Reference Models

- Layered models simplify understanding and protocol design.
- Most common:
    - OSI Reference Model
    - TCP/IP Reference Model

---

### OSI Reference Model

| Layer | Description |
| :--- | :--- |
| Application | Protocols for processes |
| Presentation | Data representation |
| Session | Data exchange management |
| Transport | Segment, transfer, reassemble data |
| Network | Data piece exchange over network |
| Data Link | Frame exchange over media |
| Physical | Activate/maintain/deactivate physical connections |

---

### TCP/IP Reference Model

| Layer | Description |
| :--- | :--- |
| Application | Data presentation, encoding, dialog control |
| Transport | Device comm across diverse networks |
| Internet | Chooses network path |
| Network Access | Controls hardware/media |

---

## TCP/IP Protocol Suite

- Open, standard, used for internet.
- Approved for interoperability.

---

## Data Encapsulation

### Segmenting Messages

- Breaking messages into smaller chunks increases speed and efficiency.
- Only failed segments need retransmission.

### Sequencing

- Numbers segments for reassembly.
- TCP handles sequencing.

---

## Protocol Data Units (PDU)

- Each protocol layer adds info (encapsulation).
- PDUs:
    1. Data
    2. Segment
    3. Packet
    4. Frame
    5. Bits

---

## TCP/IP Communication Process

- Encapsulation is top-down as data moves out; each layer adds headers.
- De-encapsulation happens at destination as data moves up.

---

## Network Documentation

### Documentation Overview

- Necessary for design, monitoring, troubleshooting.
- Includes topology diagrams (physical/logical), device records, performance baseline.
- Should be securely stored and backed up.

---

### Establishing a Network Baseline

- Baseline = network’s normal performance.
- Collect performance data for vital ports/devices.
- Baseline reveals network capacity and bottlenecks.

---

### Data Collection for Baselines

- Select relevant variables (e.g. interface/CPU utilization).
- Start simply, refine over time.

---

## Troubleshooting With Layered Approach

- Use OSI and TCP/IP models to isolate problems by layers (physical, software, device, etc).

---

## Structured Troubleshooting Methods

| Approach | Description |
| :--- | :--- |
| Bottom-Up | Start with physical layer, good for hardware problems. |
| Top-Down | Begin with software/application, good for simple issues. |
| Divide-and-Conquer | Start mid-way (e.g. Layer 3) then test up/down. |
| Follow-the-Path | Trace traffic flow from source to destination. |
| Substitution | Swap out suspected faulty device. |
| Comparison | Compare non-working to working element. |
| Educated Guess | Use experience to hypothesize solution. |

