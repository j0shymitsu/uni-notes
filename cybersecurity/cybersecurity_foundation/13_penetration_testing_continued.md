# PENETRATION TESTING CONTINUED
13-01-25

---

## Content Overview
1. Penetration Testing Lifecycle Review.
2. Information Gathering and Scanning Tools.
3. Vulnerability Assessment Tools.
4. Exploitation Tools.
5. Metasploit Framework.

---

## Penetration Testing Lifecycle
1. **Engagement Phase**:
   - Define scope, goals, and responsibilities.
   - Establish legal agreements and permissions (e.g., NDAs, Rules of Engagement).
2. **Information Gathering Phase**:
   - Use OSINT and tools to collect details about the target.
3. **Footprinting and Scanning Phase**:
   - Map the network, identify hosts, and scan for vulnerabilities.
4. **Vulnerability Assessment**:
   - Analyze identified vulnerabilities and prioritize risks.
5. **Exploitation**:
   - Verify vulnerabilities by executing exploits to access systems.
6. **Post-Exploitation**:
   - Leverage results to find sensitive data or additional systems.

---

## Tools and Techniques
### Information Gathering Tools
1. **Canary Tokens**:
   - Unique links designed to detect unauthorized access.
   - Alerts include IP address, browser details, and OS information.
2. **Social Media and OSINT**:
   - Sources: LinkedIn, Facebook, Instagram, WHOIS, Google Maps.

---

### Network Mapping Tools
1. **Ping**:
   - Test system reachability using ICMP echo requests.
2. **Ping Sweeping**:
   - Automate pings across an IP range using tools like `fping`.
3. **Nmap**:
   - Open-source tool for network exploration and security auditing.
   - Scans live hosts, open ports, and services.

---

### Vulnerability Assessment Tools
1. **Nessus**:
   - Commercial vulnerability scanner with a free version for limited IPs.
   - Scans for known vulnerabilities using a robust database.
2. **OpenVAS**:
   - Open-source vulnerability assessment scanner.
   - Requires setup and synchronization (e.g., `openvas-setup`).
3. **Nmap Scripting Engine (NSE)**:
   - Extend functionality with prebuilt or custom scripts.

---

## Exploitation Tools
1. **Metasploit Framework**:
   - Open-source tool for vulnerability exploitation.
   - Key Features:
     - Search for exploits by vulnerability name.
     - Configure payloads (e.g., shells, RDP connections).
     - Launch exploits and gain access to target systems.
   - Commands:
     - Start: `msfconsole`
     - Database setup: `service postgresql start` → `msfdb init`
     - Search exploits: `search <vulnerability>`

---

## Key Takeaways
1. **Penetration Testing**:
   - Follows a structured lifecycle from planning to exploitation.
2. **Tools**:
   - Use dedicated tools like Nmap, Nessus, and Metasploit to streamline testing.
3. **Skill and Analysis**:
   - Success depends on expertise and thorough analysis beyond automated tools.