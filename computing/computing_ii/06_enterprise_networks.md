# ENTERPRISE NETWORKS
N-D

---

## OBJECTIVES

- Explain the characteristics of scalable network architecture
- Explain hierarchical networks
- Enterprise network architecture and design
- Enterprise Network Management and Monitoring

---

## THE NEED TO SCALE THE NETWORK

- Organizations increasingly rely on network infrastructure for mission-critical services.
- Networks must scale to support:
    - Converged network traffic
    - Critical applications
    - Diverse business needs
    - Centralized administrative control
- Campus network designs range from one LAN switch to very large networks with thousands of connections.

---

## DESIGN FOR SCALABILITY

- **Scalability:** Network grows while maintaining availability and reliability.
- Design strategies:
    1. Redundancy
    2. Multiple Links
    3. Wireless Connectivity
    4. Scalable Routing protocol

---

### 1. PLAN FOR REDUNDANCY

- Prevent disruptions by minimizing single points of failure:
    - Duplicate equipment
    - Failover services for critical devices
    - Redundant physical paths for high availability
- Redundant paths can cause Layer 2 loops; solution: Spanning Tree Protocol (STP).

---

## REDUCE FAILURE DOMAIN SIZE

- Control traffic and limit the impact of failures.
- **Failure domain:** Area affected by a device/service failure.
- Using switch blocks (paired routers/switches) localizes failures.
- If one switch block fails, others remain unaffected.

---

## CHECK YOUR UNDERSTANDING

- Identify the failure domain of S1, S2, S3, AP1.
- (Hint: Failure domain of router highlighted in yellow.)

---

### 2. INCREASE BANDWIDTH

- **Link aggregation (EtherChannel):** Combines multiple physical links into one logical link (Port Channel).
- Increases bandwidth and supports load balancing between links.

---

### 3. EXPAND THE ACCESS LAYER

- **Wireless LANs (WLANs):** 
    - Flexible, low-cost, easily scaled.
    - Consider device types, coverage, interference, security.
- Growing popularity for access layer connectivity.

---

### 4. Scalable Routing Protocols

- Routing protocols enable routers to exchange path information and build efficient routing tables.
- Example: **OSPF** (Open Shortest Path First)
    - Link-state, uses areas for hierarchical networks.
    - Routers maintain neighbor adjacencies and synchronize link-state databases.
    - Link-state updates follow network changes.

---

## HIERARCHICAL LAN DESIGN MODEL

- Network is divided into modular layers 
    - Simplifies design, scaling, deployment, and fault containment.
    - Allows for modular expansion and easier troubleshooting.
    - Components can be added/removed with minimal impact.

---

## ROLE OF SWITCHED NETWORKS

- Networks now rely on switched LANs, arranged hierarchically.
- Advantages: flexibility, traffic management, QoS, security.
- Hierarchical networks use access, distribution, and core layers—each with a defined role.

---

## ACCESS, DISTRIBUTION, AND CORE LAYER FUNCTIONS

### Access Layer
- Direct network access for end users
- Switches connect to distribution layer

### Distribution Layer
- Implements QoS, security, manages large-scale networks
- Limits Layer 2 broadcast domains
- Connects access and core layers

### Core Layer
- Network backbone—high-speed connectivity between distribution layers
- Foundation for large-scale environments

---

## SCALABLE LAYER DESIGN

- Number of layers depends on network size/site
    - Small campus: access and distribution
    - Medium/large: access, distribution, and core
- Modular layers provide uniform services and design methods.

---

## HIERARCHY IN SWITCHED NETWORK

- Two frameworks:
    - With/without separate distribution and core layers (depends on organization size)
    - Proven approach for scalable campus networks

---

## THREE-TIER AND TWO-TIER EXAMPLES

### Three-tier Campus Network
- Extended-star topology from a central location to all buildings

### Two-tier Campus Network
- Collapsed core design; for smaller campuses/single buildings

---

## SIZE MATTERS

- Small Campus
- Large Campus

---

## BORDERLESS SWITCHED NETWORK

- Connect anyone, anywhere, anytime, on any device—securely and reliably
- Unifies wired and wireless access
- Hierarchical, modular, resilient, and flexible infrastructure

---

## BUSINESS CONSIDERATIONS FOR SWITCH SELECTION

| Consideration | Description |
|:---|:---|
| Cost | Price varies by port/speed/features/expansion capability |
| Port density | Sufficient ports for network devices |
| Power | PoE (Power over Ethernet) for APs, phones, compact switches; some support redundant power |
| Reliability | Continuous network access |
| Port speed | High-speed connections for end users |
| Frame buffers | Store frames—important during congestion |
| Scalability | Ability to add users/devices over time |

---

## FORM FACTORS

- Switches: fixed, modular, stackable/non-stackable form factors
    - Fixed: features/ports are predetermined

---

## PORT DENSITY

- Number of ports per switch
    - Common: 12, 24, or 48 port (fixed config)
    - Modular switches support very high port densities (e.g. Catalyst 9400—384 switchports)

---

## Network Management and Monitoring

---

## Why Network Management is Important

- Involves monitoring, configuring, troubleshooting components
- Ensures performance, fault tolerance, redundancy, security
- Requires documenting hardware, software, user accounts
- Network management tools simplify these tasks

---

## 2. SYSLOG

- Syslog sends event notification messages across IP networks.
    - Functions:
        - Gather logging info (monitor/troubleshoot)
        - Select types of events collected
        - Specify destination for logs

---

## SYSLOG OPERATION

- Devices generate syslog messages for network events.
- Messages include severity level and facility.
- Lower numerical levels = higher severity

| Severity Name  | Level | Explanation                     |
|:---|:---:|:---|
| Emergency      | 0    | System Unusable                 |
| Alert          | 1    | Immediate Action Needed         |
| Critical       | 2    | Critical Condition              |
| Error          | 3    | Error Condition                 |
| Warning        | 4    | Warning Condition               |
| Notification   | 5    | Normal but Significant Event    |
| Informational  | 6    | Informational Message           |
| Debugging      | 7    | Debugging Message               |

---

## SUMMARY

- Features of scalable enterprise networks; need for hierarchy
- Two-tier and three-tier models (access, distribution, core)
- Redundancy, failure domains, EtherChannel, wireless growth
- Switch selection: business criteria, port density, modular design
- Network management: SNMP/Syslog for monitoring & performance