# INFOSEC, ACCESS CONTROL, NUMBER SYSTEMS & FILE PERMISSIONS
Date: 28-10-24

---

## Content Overview
1. Information Security and the CIA Triad.
2. Disclosure, Alteration, and Denial (DAD Triad).
3. Access Control.
4. Linux File Permissions.
5. Number Systems (Binary, Octal, Hexadecimal).

---

## CIA Triad
1. **Confidentiality**:
   - Ensures information is not accessed by unauthorized individuals.
   - Threats: Eavesdropping, packet sniffing, accidental leaks.
   - Mitigation: Access controls, encryption, security policies.

2. **Integrity**:
   - Protects data from unauthorized or accidental modification.
   - Threats: Identity theft, hardware failure, content modification.
   - Mitigation: Digital signatures, data validation.

3. **Availability**:
   - Ensures authorized users have access to systems and data.
   - Threats: Denial-of-service attacks, hardware vulnerabilities.
   - Mitigation: Firewalls, antivirus, load balancing, and hardening.

---

## DAD Triad
- The **DAD Triad** is the adversary's counterpart to the CIA Triad:
  1. **Disclosure**: Breaching confidentiality through unauthorized access.
  2. **Alteration**: Compromising integrity via data modification.
  3. **Denial**: Preventing access to systems or data.

---

## Access Control
1. **Definition**:
   - Methods to manage user access to systems and data while supporting confidentiality and integrity.
2. **Principle of Least Privilege**:
   - Users are granted the minimum access needed for their tasks.
3. **Control Categories**:
   - **Administrative**: Policies, training, monitoring.
   - **Logical**: User authentication, encryption.
   - **Physical**: Fences, locked doors.

---

## Access Control Techniques
1. **Mandatory Access Control (MAC)**:
   - Security labels define access based on sensitivity and clearance levels.
2. **Discretionary Access Control (DAC)**:
   - Access granted based on user identity and permissions.
3. **Nondiscretionary Access Control**:
   - Role-based access determined by job responsibilities.

---

## File Permissions in Linux
1. **User Categories**:
   - `User (U)`: File owner.
   - `Group (G)`: Users grouped together for permissions.
   - `Other (O)`: Everyone else.
2. **Permission Types**:
   - `Read (R)`: View file contents.
   - `Write (W)`: Modify or delete files.
   - `Execute (X)`: Run executables or access directories.
3. **Examples**:
   - `rwx`: Full access.
   - `rw-`: Read and write only.
   - `r--`: Read-only.

---

## Changing File Permissions
1. **Permission Levels**:
   - `rwx` = `7`, `rw-` = `6`, `r--` = `4`, `---` = `0`.
   - Represented in binary (e.g., `rwx` = `111` = `7`).
2. **Commands**:
   - Create files: `echo "Hello World" > filename`.
   - Change ownership: `chown user filename`.
   - Change permissions: `chmod 600 filename`.

---

## Number Systems
1. **Binary (Base 2)**:
   - Uses `0` and `1` (e.g., `48` = `00110000`).
2. **Octal (Base 8)**:
   - Digits `0-7` (e.g., `8` = `010` in octal).
3. **Hexadecimal (Base 16)**:
   - Digits `0-9` and `A-F` (e.g., `16` = `10` in hexadecimal).

---

## Authentication Methods
1. **Types**:
   - **Type 1**: Knowledge-based (passwords, PINs).
   - **Type 2**: Possession-based (smart cards, tokens).
   - **Type 3**: Biometric (fingerprints, facial recognition).
2. **Considerations**:
   - Balance security with usability to prevent circumvention.

---

## Password Attacks
1. **Brute Force**:
   - Systematically tries all possible combinations.
   - Guaranteed success but time-intensive.
2. **Dictionary Attack**:
   - Uses precompiled lists of common passwords.
3. **Spoofing**:
   - Tricks users into entering credentials on fake websites.

---

## Key Takeaways
1. **CIA Triad**:
   - Ensures confidentiality, integrity, and availability of systems and data.
2. **Access Control**:
   - Techniques and principles safeguard resources and manage user permissions.
3. **File Permissions**:
   - Manage access rights on Linux systems using commands like `chmod` and `chown`.
4. **Number Systems**:
   - Binary, octal, and hexadecimal are integral to understanding permissions and file systems.