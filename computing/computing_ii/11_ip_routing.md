# IP ROUTING CONCEPTS & OSPF
N-D 

---

## Learning Objectives
- How routers determine the best path to a destination
- Structure and use of the IP routing table
- Static vs dynamic routing: concepts, pros/cons, and use cases
- Basics of OSPF link‑state routing and SPF algorithm
- OSPF cost metric, router ID, packets, and DR/BDR election

---

## Router Functions and Path Determination
- A router’s primary function is to select the best path from its routing table and forward packets out the appropriate interface.
- The outgoing (egress) interface may be directly connected to the destination network or may lead to another router on the way to that network.

---

## Longest Prefix Match
- Each routing table entry contains a network prefix and prefix length; the router compares the destination IP to these entries bit by bit.
- The “best path” is the route with the longest matching prefix (most matching left‑hand bits) with the destination address.

### IPv4 / IPv6 Longest Match
- For IPv4, if several routes match 172.16.0.10, the entry with the longest prefix (for example /26 vs /18 vs /12) is chosen.
- For IPv6, if 2001:db8:c:0:0:9:9:4:8 matches /40 and /48 routes, the /48 route is preferred as the longest match.

---

## Routing Metrics and Best Path
- Routing protocols assign a numeric metric to each path, representing distance or cost to the destination.
- RIP uses hop count (max 15 hops), while OSPF uses cost based mainly on cumulative bandwidth, preferring higher‑bandwidth (lower‑cost) paths.

---

## Packet Forwarding Process
1. A data‑link frame carrying an IP packet arrives on an ingress interface.
2. The router examines the packet’s destination IP and searches for the longest matching route in the routing table.
3. The packet is encapsulated in a new data‑link frame and sent out the selected egress interface; if no route exists, the packet is dropped.

---

## Building the Routing Table
- Directly connected networks: learned automatically from active interfaces on the router.
- Remote networks: learned via static routes or dynamic routing protocols.
- Default route: a “catch‑all” pointing to a next hop when no more specific match exists in the table.

---

## Static Routing
- Static routes are manually configured by the administrator to specify exact paths for particular networks.
- They must be manually updated when topology changes, but are simple, predictable, and useful for small or hub‑and‑spoke networks and default routes.
- Static routes can also improve security by restricting paths for specific traffic.

---

## Dynamic Routing
- Dynamic routing protocols automatically discover remote networks and update routing information as the network changes.
- They maintain up‑to‑date routes, choose best paths using metrics, and recalculate routes when failures occur, supporting scalability.
- Common examples include OSPF and EIGRP.

---

## Static vs Dynamic Routing

| Feature              | Dynamic Routing                                | Static Routing                                      |
|----------------------|-----------------------------------------------|----------------------------------------------------|
| Configuration effort | Increases with network size                   | Roughly independent of size for small topologies   |
| Topology changes     | Automatically adapts                           | Requires manual reconfiguration                    |
| Scalability          | Suitable for simple to very large networks     | Best for small/simple networks                     |
| Security             | Security features must be configured           | More inherent control via explicit path definition |
| Resource usage       | Uses CPU, memory, and bandwidth for updates    | No protocol overhead; minimal extra resources      |
| Path predictability  | Depends on protocol and current topology       | Fully determined by admin‑defined routes           | 

---

## Introduction to OSPF
- OSPF is a link‑state dynamic routing protocol offering fast convergence and good scalability.
- A “link” is an interface or network segment; “link‑state” refers to information like prefix, prefix length, and cost for that link.
- OSPF organizes networks into areas, which group routers that share the same link‑state database.

---

## OSPF Areas
- Single‑Area OSPF: all routers are in one area, typically area 0; simple but less scalable.
- Multi‑Area OSPF: multiple areas in a hierarchy, all connected to backbone area 0; improves scalability and limits LSDB size.

---

## Dijkstra’s SPF Algorithm
- OSPF uses Dijkstra’s Shortest Path First algorithm to compute a loop‑free tree of shortest paths.
- Each router runs SPF with itself as the root, calculating the least‑cost path to every network and installing those routes in the forwarding database/routing table.

### Link‑State Steps
1. Establish neighbor adjacencies.  
2. Exchange Link‑State Advertisements (LSAs).  
3. Build the Link‑State Database (LSDB).  
4. Run the SPF algorithm.  
5. Install best routes in the routing table.

---

## OSPF Cost Metric
- OSPF cost is inversely proportional to interface bandwidth: higher bandwidth → lower cost (better path).
- A common formula is:  
  \(\text{Cost} = \dfrac{\text{reference bandwidth}}{\text{interface bandwidth}}\)
- Total path cost is the sum of link costs from source router to destination network.

---

## OSPF Router ID
- Router ID is a 32‑bit value in IPv4 address format that uniquely identifies an OSPF router.
- Selection order (if not manually set):  
  1. Highest IPv4 address of any loopback interface.  
  2. If no loopback, highest IPv4 address of an active physical interface.
- Manual configuration of router ID is recommended for predictability.

---

## OSPF Packet Types
- Hello: discovers neighbors and maintains adjacencies.
- Database Description (DBD): summarizes the LSDB for synchronization.
- Link‑State Request (LSR): asks a neighbor for specific LSAs.
- Link‑State Update (LSU): sends LSAs, including requested ones.
- Link‑State Acknowledgment (LSAck): confirms receipt of LSAs.

---

## OSPF and IPv4 Header
- OSPF packets are carried inside IPv4 packets and identified by the appropriate protocol field value in the IPv4 header.
- Type 1 OSPF packets are Hello packets used for neighbor discovery and adjacency formation.

---

## DR/BDR Election (Multiaccess Networks)
- On broadcast multiaccess networks (e.g., Ethernet), OSPF elects a Designated Router (DR) and Backup DR (BDR) to reduce LSA flooding.
- Election criteria, in order:  
  1. Highest OSPF interface priority (0–255; 0 means never DR/BDR).  
  2. If priorities tie, highest router ID becomes DR; second‑highest becomes BDR.
- DR/BDR election happens when the first OSPF router comes up; adding new routers later does not trigger a re‑election.