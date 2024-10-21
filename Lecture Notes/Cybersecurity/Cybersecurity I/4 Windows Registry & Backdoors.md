
Date: 21-10-24
Topics: Cybersecurity, registry, data, backdoors

---
## Key Concepts

- The registry is a **centralised database** of information that Windows **continually references during operation**. 
- Registry changes **should not be made** unless you are clear and understanding about what it is you're about to change.
- Changes made to the registry **could indicate** that **malicious/suspicious changes have been made**.
- A [[Backdoor|backdoor]] can be installed as an **administrative tool** as **well as** a means of attack.

---
## Detailed Notes
### Windows Registry
##### What is the Registry?

##### Values Stored in the Registry

##### Registry Structure

##### Registry Root Keys

##### Registry Monitoring

### Backdoors
##### Setup

##### Persistent Backdoor Setup

---
## Practical
#### Questions
*"Why could having a registry modification run automatically when you log on to the system be a problem?"*
	- A hacker with unauthorised access could run malware without you knowing, even if you power off your PC.

#### Tasks
- [ ]  Registry modification - Modify "Run" key at: *“Computer\HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\ Windows\ CurrentVersion\Run”.*
#### Relevant Software
- [x]  [[https://sourceforge.net/projects/regshot/|Regshot]]
- [ ]  [[https://nmap.org/|Nmap]]
---
