
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
The Windows registry is a ==large database of information, settings, options, user preferences and other values== for software and hardware installed on a system running the Windows operating system. The Microsoft definition states it is: ==a central hierarchical database used in Microsoft Windows 98, CE, NT, and 2000 used to store information that is necessary to configure the system for one or more users, applications and hardware devices.== The registry stores:
- Operating system settings
- Hardware configurations
- User preferences/settings
- Application settings
##### Values Stored in the Registry
Examples of values stored within the Windows Registry include:
- Computer name
- Last logged in user
- Startup applications/drivers
- User account names
- Application settings preferences
- Recently accessed;
	- Programs
	- Web Pages
	- Files
- Previously connected;
	- Wireless/wired networks
	- USB devices/storage
##### Registry Structure
Components include:
- [[Hives]]
- [[Root Keys]]
- Keys
- Sub-keys
- Values

The structure is a hierarchical structure akin to a directory/folder structure. Root keys can contain keys and sub-keys, and keys/sub-keys can contain sub-keys and values.
##### Registry Root Keys
The Windows Registry and it's contents are organised into five distinct root keys, based upon their contents:
- *HKEY_CLASSES_ROOT* - Contains ==application and filetype== associations.
- *HKEY_CURRENT_USER* - Contains the ==actively logged-on users' profile==.
- *HKEY_LOCAL_MACHINE* - Contains ==system-specific hardware/software configs==.
- *HKEY_USERS* - Contains ==settings for actively loaded user profiles==.
- *HKEY_CURRENT_CONFIG* - Contains ==current hardware configs==.
##### Registry Monitoring
We can modify the Windows Registry to alter the way in which Windows and applications behave on the system. The Windows Registry is a place of interest for a Digital Forensic Investigator as ==Registry modification indicates a change in the systems state.== Changes made to the Windows Registry could indicate that additional software/hardware has been installed, preferences have changed, or malicious/suspicious changes have been made.

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
