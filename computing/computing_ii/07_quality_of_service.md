# QUALITY OF SERVICE (QOS)
N-D

---

## Objectives

- Explain how network transmission characteristics impact quality
- Describe minimum network requirements for voice, video, and data traffic
- Describe queuing algorithms
- QoS Implementation Techniques

---

## Introduction to QoS

- **Quality of Service (QoS):** Ability to give different priority to different applications, users, or data flows; guarantee a certain level of performance to a data flow.
- When traffic > available bandwidth, devices queue (hold) packets until resources are available.
- Queuing causes delay; if queues fill, packets are dropped.

---

## Prioritizing Traffic

- QoS classifies data into multiple queues.
- QoS is only active when congestion occurs.

---

## Flow Characteristics (1/3)

- Main flow characteristics:
    - **Bandwidth:** bits per second; varies by application.
    - **Reliability:** network’s tolerance of failures/disruptions.
    - **Delay:** time for a packet to reach destination; acceptable delay differs by application.
    - **Jitter:** variation in packet delay within a flow.

---

## Flow Characteristics (2/3)

- **Network congestion** causes delay.
- Congestion points (aggregation, speed mismatch, LAN to WAN) are ideal for QoS mechanisms.

---

## Flow Characteristics (3/3)

- **Fixed delay:** Constant time for processes like placing bits onto media.
- **Variable delay:** Time depends on traffic and other factors.
- List some sources of delay.

---

## Packet Loss (1/2)

- Without QoS, time-sensitive packets (e.g. VoIP/video) are dropped as often as regular data.
- **Playout delay buffer:** Compensates for jitter, buffers, and ensures steady output stream in VoIP.

---

## Packet Loss (2/2)

- If jitter causes packets to arrive outside buffer range, they're discarded (audio dropouts).
- DSP can interpolate for small losses.
- In good network design, packet loss is near zero.

---

## Voice Traffic

- Predictable, smooth, sensitive to delay and loss.
- Must have higher priority.
- Can tolerate:
    - **Latency ≤ 150 ms**
    - **Jitter ≤ 30 ms**
    - **Packet Loss ≤ 1%**
    - **Bandwidth:** 30–128 Kbps

---

## Video Traffic

- Unpredictable, inconsistent, bursty; higher data per packet than voice.
- Real-Time Streaming deserves priority.
- Can tolerate:
    - **Latency ≤ 200–400 ms**
    - **Jitter ≤ 30–50 ms**
    - **Loss ≤ 0.1–1%**
    - **Bandwidth:** 384 Kbps–20 Mbps

---

## Data Traffic

- Data uses TCP (ensures retransmission of lost packets).
- Can be smooth or bursty.
- TCP applications can consume large part of network capacity (e.g. FTP).

---

## Data Traffic Characteristics

- Smooth/bursty
- Benign/greedy
- Drop insensitive
