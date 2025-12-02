# STP and EtherChannel
N-D 

---

## Learning Objectives
- Problems in redundant switched networks (loops, broadcast storms)
- Purpose and operation of Spanning Tree Protocol (STP)
- STP roles, root election, and cost calculation
- EtherChannel concept, benefits, and restrictions
- LACP and PAgP negotiation modes and outcomes

---

## Why Spanning Tree Protocol?
- Redundancy in Layer-2 design is needed to avoid single points of failure, but multiple parallel links can create switching loops.
- Layer-2 loops cause broadcast, multicast, and unicast frames to circulate endlessly, leading to MAC table instability, high CPU usage, and saturated links.
- STP (IEEE 802.1D) allows redundant physical paths while logically blocking some links to maintain a loop‑free topology.

---

## Broadcast Storms and Loops
- A broadcast storm is an abnormal flood of broadcast traffic that can disable a network in seconds.
- Storms can be caused by faulty NICs or, critically, by Layer‑2 loops in a switched topology.
- Without STP, switches continually relearn MAC addresses from looping frames, preventing stable forwarding decisions.

---

## STP Basics
- STP builds a logical spanning tree over a physical redundant topology by blocking selected ports.
- BPDUs (Bridge Protocol Data Units) are exchanged between switches (by default every 2 seconds) to share bridge IDs and path information.
- When a link fails, STP recalculates and transitions previously blocked ports to forwarding, restoring connectivity.

---

## Spanning Tree Algorithm (STA)
- STA selects a single root bridge that acts as the reference point for all path calculations.
- Redundant paths are intentionally blocked so there is only one active Layer‑2 path between any two switches.
- If the active path fails, STA re‑evaluates costs and unblocks an alternate port, preserving redundancy.

---

## Bridge ID (BID) and Root Election
- Each switch has a Bridge ID consisting of: priority value, extended system ID (VLAN ID), and MAC address.
- The lowest BID (priority + extended system ID + MAC) becomes the root bridge; lower priority values are more preferred.
- When priorities are equal, the switch with the lowest MAC address wins, so admins typically lower the desired root’s priority.

---

## STP Path Cost
- After the root bridge is elected, each switch computes the cost of its paths to the root.
- Root path cost is the sum of per‑port costs along the path; default costs depend on link speed (e.g., higher speed = lower cost).
- Administrators can manually adjust port cost to influence which links are preferred by STP.

---

## STP Port Roles
- Root Port: on every non‑root switch; the single port with the lowest cost path to the root bridge, always forwarding.
- Designated Port: has the best path to the root on a given segment; all root‑bridge ports and access‑ports to end devices are designated.
- Alternate/Blocked Port: non‑forwarding port used as backup path to prevent loops; moves to forwarding if the active path fails.
- Disabled Port: administratively shut down, not participating in STP.

---

## Steps to Loop‑Free Topology
1. Elect the root bridge using the lowest BID.
2. Elect a single root port on each non‑root switch based on the lowest path cost.
3. Elect designated ports on each segment; the others become alternate/blocked ports.

---

## STP Variants
| Variant  | Description |
|---------|-------------|
| STP (802.1D) | Original standard, one spanning‑tree instance for the entire bridged network.  |
| PVST      | Cisco enhancement; one STP instance per VLAN with extra features like PortFast, UplinkFast, BPDU guard, etc.  |
| 802.1D-2004 | Updated STP standard incorporating Rapid STP concepts.  |
| RSTP (802.1w) | Rapid Spanning Tree Protocol with faster convergence than classic STP.  |
| MSTP (802.1s) | Multiple Spanning Tree; maps multiple VLANs to a smaller number of STP instances.  |

---

## EtherChannel Overview
- EtherChannel aggregates multiple physical Ethernet links into a single logical port‑channel interface.
- It increases available bandwidth, provides redundancy, and allows load‑balancing of traffic across member links.
- Because STP sees one logical link, redundant physical links inside an EtherChannel are not blocked by STP.

---

## EtherChannel Characteristics
- Originally a Cisco technology for bundling FastEthernet or GigabitEthernet switch ports.
- Configuration is primarily applied to the logical port‑channel; the configuration is then inherited by member interfaces.
- If any single physical link in the bundle fails, traffic continues using remaining links without a topology change.

---

## EtherChannel Restrictions
- All member interfaces must be of the same type and speed; mixing FastEthernet and GigabitEthernet in one channel is not allowed.
- Port configuration (access/trunk, VLANs, speed, duplex) must match on both ends of the EtherChannel.
- Inconsistent configurations across member ports prevent the channel from forming or cause it to be suspended.

---

## Auto‑Negotiation Protocols
- LACP (Link Aggregation Control Protocol) is an IEEE standard that supports multivendor EtherChannel negotiation.
- PAgP (Port Aggregation Protocol) is Cisco‑proprietary with similar negotiation behavior.
- Both protocols ensure only ports with compatible settings join the same aggregation group.

---

## LACP Modes
- On: forces the link into an EtherChannel without sending LACP packets; requires matching “on” at the other side.
- Active: port actively sends LACP packets to form a channel.
- Passive: port only responds to received LACP packets; does not initiate negotiation.

### LACP Channel Outcomes (S1 vs S2)
- On + On -> Channel forms.
- Active + Active -> Channel forms.
- Active + Passive -> Channel forms.
- Passive + Passive -> No channel (no side initiates).
- On + Active/Passive -> No LACP‑based negotiation; mode mismatch if not also forced “on” both sides.

---

## PAgP Modes
- On: forces channel without PAgP negotiation; peer must also be “on” to succeed.
- Desirable: actively sends PAgP frames to form an EtherChannel.
- Auto: listens for PAgP frames but does not initiate; forms a channel only if the other side is Desirable.

### PAgP Channel Outcomes (S1 vs S2)
- On + On -> Channel forms.
- Desirable + Desirable -> Channel forms.
- Desirable + Auto -> Channel forms.
- Auto + Auto -> No channel (neither initiates).
- On + Desirable/Auto -> No PAgP negotiation; modes are incompatible.

---

## EtherChannel Configuration Notes
- Configure speed, duplex, trunk/access mode, and VLAN settings consistently on all member ports before adding them to the port‑channel.
- Changes made to the port‑channel interface apply automatically to all its physical member interfaces.
- Misconfiguration of a single member can prevent the whole EtherChannel from establishing correctly.

---

## Summary
- STP prevents Layer‑2 loops by electing a root bridge and assigning root, designated, and alternate/blocked port roles based on BID and path cost.
- EtherChannel combines several physical links into one logical interface, improving bandwidth and redundancy while appearing as a single link to STP.
- LACP (IEEE) and PAgP (Cisco) provide negotiation mechanisms with specific mode combinations that determine whether an EtherChannel is formed.
