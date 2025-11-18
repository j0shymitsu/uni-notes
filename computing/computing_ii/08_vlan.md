# VIRTUAL LANS (VLANS)
N-D 

---

## Objectives

- Explain the purpose of VLANs in a switched network
- Explain how a switch forwards frames based on VLAN configuration in a multi-switch environment
- Understand Inter-VLAN routing

---

## VLAN Definitions

- VLANs are logical connections with other similar devices.
- Placing devices into various VLANs:
    - Provides segmentation of groups of devices on the same switches
    - Provides organization that is more manageable
    - Each VLAN has its own unique range of IP addressing

---

## Networks With VLANs vs. Networks Without VLANs

- Without VLANs: All devices connected to switches receive all unicast, multicast, and broadcast traffic.
- VLANs isolate unicast, multicast, and broadcast traffic within the same VLAN.
- Devices in **different VLANs** cannot communicate without a Layer 3 device to route traffic between them.

---

## Benefits of a VLAN Design

| Benefits | Description |
|:-:|:-:|
| Smaller Broadcast Domains | Dividing the LAN reduces the number of broadcast domains |
| Improved IT Efficiency | VLANs group devices with similar requirements (e.g., faculty vs. students) |
| Reduced Cost | One switch can support multiple groups/VLANs |
| Simpler Management | Similar groups need similar applications/resources |

---

## Types of VLANs

- **Default VLAN**
    - Cannot be deleted or renamed
    - VLAN 1 is the default; all interfaces assigned here
- **Data VLAN**
    - Dedicated to user-generated traffic (email, web)
- **Native VLAN**
    - Used for trunk links only
    - Frames on 802.1Q trunk links *not* tagged if on the native VLAN
- **Management VLAN**
    - Used for SSH/Telnet traffic; separated from end user traffic

---

## Data and Voice VLANs

- An access port can only be assigned to one data VLAN
- It *may* also be assigned to one voice VLAN when a phone and an end device share the same switchport

---

## Trunk and Access Links on Switches

- **Trunk:** Point-to-point link between network devices
    - Allows more than one VLAN
    - Extends VLANs throughout the network
    - By default, supports all VLANs
- **Access Port:** Switch port assigned to a *single* VLAN; connects end devices

---

## Trunk Example

- VLANs 10, 20, and 30 support Faculty, Student, and Guest computers
    - VLAN 10: Faculty/Staff - 172.17.10.0/24
    - VLAN 20: Students - 172.17.20.0/24
    - VLAN 30: Guests - 172.17.30.0/24
- F0/1 port on S1 and S2 is configured as a trunk and forwards traffic for all VLANs

---

## 802.1Q

- IEEE 802.1Q (“Dot1q”) is the industry standard for VLAN identification/tagging on Ethernet
- Tagging is applied to *all* VLANs except the native VLAN
- Native VLAN mainly for legacy use

---

## Catalyst Switch VLAN Ranges

- Catalyst 2960 & 3650 switches support over 4000 VLANs
- **Normal Range:** VLAN 1–1005 (Small/Medium businesses; 1002–1005 reserved for legacy)
    - VLAN 1, 1002–1005 auto-created and undeletable
- **Extended Range:** VLAN 1006–4095 (used by service providers/large networks; fewer features)

---

## Dynamic Trunking Protocol (DTP)

- Negotiates trunk links between switches automatically
- Enabled by default on Catalyst 2960/2950 switches
- **Interface modes:**
    - Access
    - Dynamic Auto
    - Dynamic Desirable
    - Trunk

| Option | Description |
|:-:|:-:|
| Access | Permanent access mode; negotiates neighboring link into access mode |
| Dynamic Auto | Will become trunk if neighbor is trunk or desirable |
| Dynamic Desirable | Actively tries to become trunk by negotiating |
| Trunk | Permanent trunking mode; negotiates trunk with neighbor |

---

## Results of a DTP Configuration

|         | Dynamic Auto | Dynamic Desirable | Trunk   | Access |
|:-------:|:------------:|:-----------------:|:-------:|:------:|
| Dynamic Auto | Access | Trunk | Trunk | Access |
| Dynamic Desirable | Trunk | Trunk | Trunk | Access |
| Trunk | Trunk | Trunk | Trunk | Limited connectivity |
| Access | Access | Access | Limited connectivity | Access |

---

## VLAN Configuration Example

- VLAN logic is implemented in LAN switches (MAC level)
- Router or Layer-3 switch required for inter-VLAN communication
- Devices in same VLAN communicate via MAC level; inter-VLAN requires L3 device

---

### What is Inter-VLAN Routing

- Forwarding traffic between VLANs
- Three options:
    1. Legacy Inter-VLAN Routing
    2. Router-on-a-Stick
    3. Layer-3 Switch

---

## 1. Legacy Inter-VLAN Routing

- Uses a router with *multiple* Ethernet interfaces, each connected to a different VLAN/switch port
- Not scalable (physical interface limitations)

---

## 2. Router-on-a-Stick Inter-VLAN Routing

- Uses one physical router interface, configured as an 802.1Q trunk
- Interface divided into sub-interfaces, each for a VLAN (VLAN ID, IP address as DGW)
- Traffic routed via matching sub-interface, VLAN-tagged, sent out via physical interface
- Does not scale past ~50 VLANs

| Subinterface | VLAN | IP Address         |
|:-----------:|:----:|:------------------:|
| G0/0/1.10   | 10   | 192.168.10.1/24    |
| G0/0/1.20   | 20   | 192.168.20.1/24    |
| G0/0/1.30   | 99   | 192.168.99.1/24    |

---

## 3. Inter-VLAN Routing Through Layer-3 Switch

- Uses Layer-3 switch and Switch Virtual Interfaces (SVI)
    - SVI is a virtual interface for any VLAN on the switch; acts as DGW for that VLAN
    - L3 switch operates at Layer 2 & Layer 3

Steps to configure:
1. Create the VLANs (e.g., 10 and 20)
2. Create the SVIs for VLANs; configure IP address as DGW
3. Configure access ports; assign ports to VLANs
4. Enable IP routing to allow traffic exchange between VLANs

- **Advantages**:
    - No need for external links to router for routing
    - Lower latency (data stays within switch)
    - Preferred in enterprise campus LANs
    - **Disadvantage**: L3 switches are more expensive

---

## Routing Scenario

- L3 switch (D1) connected to router (R1)
- Inter-VLAN routing on D1; R1 advertises networks (e.g., OSPF)

---

## Common Inter-VLAN Routing Issues

| Issue Type               | How to Fix                                                                                  |
|:------------------------:|:------------------------------------------------------------------------------------------:|
| Missing VLANs            | Create/re-create the VLAN; assign host port to correct VLAN                                |
| Switch Trunk Port Issues | Configure trunk appropriately; enable desired port                                         |
| Switch Access Issues     | Assign correct VLAN to access port; enable port; check host subnet configuration           |
| L3 Switch Issues         | Ensure VLAN interfaces (SVIs) created/enabled for each VLAN                                |
| Router Issues            | Correct IPv4 address on router subinterface; ensure 802.1Q encapsulation; correct VLAN ID  |

---

## Summary

- VLAN concept and purpose in switched networks
- How switches forward frames using VLAN configuration in multi-switch environments
- Inter-VLAN routing options and process
- Troubleshooting Inter-VLAN routing issues
