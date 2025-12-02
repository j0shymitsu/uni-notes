# WIRELESS LAN (WLAN) 
WLAN Fundamentals

---

## Learning Objectives
- Describe common wireless technologies and WLAN components
- Explain WLAN operation (client–AP association, channels, mounting)
- Understand WLAN design requirements and site surveys
- Identify WLAN security threats and protection mechanisms
- Apply basic WLAN configuration guidelines

---

## Wireless Technologies and Types of Wireless Networks
- Bluetooth is an IEEE WPAN technology for low‑power, short‑range links, while cellular and satellite broadband provide wide‑area wireless access.
- WPANs (IEEE 802.15), WLANs (IEEE 802.11), and WWANs differ mainly in range, power, and use cases, from a few meters up to global coverage.
- WLANs extend wired LANs wirelessly over tens to hundreds of meters, typically using 2.4 GHz or 5 GHz bands.

---

## Introduction to WLAN and 802.11 Standards
- A WLAN is a wireless local area network based on IEEE 802.11, using RF to provide network access in homes, offices, and campuses.
- 802.11 standards specify MAC/PHY behavior and supported bands; common variants include 802.11b/g/n (2.4 GHz), 802.11a/ac (5 GHz), and 802.11ax (both bands, high‑efficiency).
- The 2.4 GHz band (UHF) and 5 GHz band (SHF) are the primary frequency ranges allocated for WLANs.

---

## WLAN Topology Modes
- Ad hoc mode connects wireless clients directly in a peer‑to‑peer fashion, without an access point.
- Infrastructure mode uses an AP to connect clients to the wired LAN and wider network, which is the dominant enterprise and home deployment.
- Tethering (personal hotspot) is an ad hoc‑style setup where a smartphone shares its cellular connection as a small WLAN.

---

## WLAN Components
- Wireless NICs in clients (laptops, phones, IoT) contain the radio transceiver needed for 802.11 communication.
- A typical small wireless router acts simultaneously as AP, Ethernet switch, and IP router, and can also provide DHCP, QoS, and basic security features.
- Standalone APs allow wireless devices to join an existing wired LAN, handling client discovery, authentication, and association.

---

## Client–AP Association
- Wireless clients first discover nearby APs, then authenticate, and finally associate to join the WLAN.
- Successful association requires matching key parameters: SSID, password (if used), 802.11 network mode, security mode (e.g., WPA2), and channel settings.

---

## AP Types and WLC Deployment
- Autonomous APs are standalone devices individually configured and managed; suitable when only a few APs are needed.
- Controller‑based (lightweight) APs offload control functions to a Wireless LAN Controller (WLC), which configures and manages many APs centrally.
- Centralized WLC deployments scale to thousands of APs and clients, offering strong centralized security at higher cost and complexity, while cloud‑managed WLCs trade some control for easier remote management and subscription pricing.

---

## Benefits and Challenges of WLANs
- Key benefits include fast installation, scalability, user mobility, flexibility, and improved collaboration.
- Challenges include variable QoS, environmental interference, limited capacity compared to wired links, and added security risks.

---

## Channel Selection and AP Mounting
- In 2.4 GHz 802.11b/g/n deployments, non‑overlapping channels 1, 6, and 11 are commonly used to minimize interference.
- The 2.4 GHz band has 22 MHz‑wide channels spaced 5 MHz apart, leading to overlapping channel spectra if not selected carefully.
- APs are typically ceiling‑mounted below obstructions for better coverage; wall mounts are used in high‑ceiling environments like hotels.

---

## WLAN Design Requirements
- General LAN requirements still apply: adequate capacity, broadcast support, connectivity, and reasonable coverage (typically 100–300 m).
- WLANs must also consider low power consumption, robustness, security, license‑free operation, roaming support, and dynamic configuration.

### Site Survey Factors
- Data rate targets and coverage needs determine AP density.
- Antenna type and placement, physical environment, obstructions, and building materials all strongly affect signal propagation.
- Line‑of‑sight paths between APs and clients improve performance, while metal and brick attenuate signals more than drywall.

---

## WLAN Security Threats
- WLANs are open to anyone within RF range who can associate, creating risks from outsiders and insiders (malicious or accidental).
- Common threats include data interception, unauthorized wireless intruders, DoS attacks, and rogue APs.

### DoS and Rogue APs
- Wireless DoS may result from misconfigured devices, deliberate jamming, or interference from other RF equipment.
- Rogue APs are unauthorized APs or hotspots connected to the corporate network, which can capture traffic or provide backdoor access.
- Mitigations include hardening devices, securing credentials, off‑hours changes, and WLC‑based rogue detection/monitoring.

---

## Man‑in‑the‑Middle and Evil Twin
- In a MITM attack, an attacker positions a device between two legitimate endpoints to intercept or modify traffic.
- An “evil twin” AP is a rogue AP configured with the same SSID as a legitimate AP, tricking clients into associating with the attacker.
- Defending against MITM requires authenticating devices, maintaining an inventory of legitimate APs/clients, and monitoring for anomalies.

---

## Basic WLAN Protection Mechanisms
- SSID cloaking hides the SSID from beacon frames, requiring clients to be manually configured with the network name.
- MAC address filtering allows or denies association based on client MAC addresses, providing light access control.
- 802.11 authentication options include open system (no password, typical for public hotspots) and shared key methods using WEP, WPA, WPA2, or WPA3 to authenticate and encrypt traffic; pre‑shared key modes require a common password.

---

## WLAN Configuration Guidelines
- Default router/AP IP addresses and admin credentials are widely known and must be changed as a first security step.
- Typical basic setup steps: review defaults, configure SSID, choose a strong security mode (e.g., WPA2/WPA3), and set a strong passphrase.
- Additional tuning includes choosing appropriate channels, transmit power, and possibly separating guest and internal WLANs.

---

## Summary
- WLANs extend LAN connectivity using 802.11 standards, APs, and wireless clients, with design choices around topology, channels, and AP placement.
- Proper WLAN design includes site surveys, capacity planning, and careful security configuration to mitigate DoS, rogue AP, and MITM risks.
- Secure operation relies on strong authentication/encryption (WPA2/WPA3), hardened devices, and continuous monitoring for unauthorized activity.
