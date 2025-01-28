# SECURITY AUDITING & LOGGING
11-11-24

---

## Content Overview
1. Introduction to Security Auditing.
2. Security Logging.
3. Event Logging and Configuration.
4. Group Policy Editor for Log Management.
5. Analysing Log Data.
6. Security Auditing Tools.

---

## Security Auditing
- **Definition**:
  - Comprehensive review of IT infrastructure to identify threats, vulnerabilities, and high-risk practices.
  - Retrospective analysis of audit trails helps reconstruct past attacks and develop countermeasures.
- **Process**:
  - Periodically collect and examine log files.

---

## Security Logging
- **Definition**:
  - Recording important system events into logs for future analysis.
- **Log Locations**:
  - Linux: `/var/log` directory.
  - Windows: Event Viewer.
- **Purpose**:
  - Monitor logs for unauthorized or suspicious activity to identify attacks.

---

## Event Logging
1. **What to Log**:
   - Decide based on business priorities and system requirements:
     - Access attempts to sensitive files.
     - Security events triggering alerts or notifications.
   - Avoid excessive logging, as it can impact performance and overwrite valuable logs.

2. **How to Log**:
   - **Local Logging**:
     - Stores events on the local machine.
   - **Remote Logging**:
     - Sends logs to a remote system for secure storage.
     - Requires specific configuration on receiving systems (e.g., Windows Event Forwarding).

3. **Event Viewer**:
   - Types of Logs:
     - **Application**: Logs from installed applications.
     - **Security**: Security-related events.
     - **System**: OS-level events.
     - **Forwarded Events**: Logs from other systems.
   - Log Levels:
     - Critical, Error, Warning, Information, Audit Success.

---

## Group Policy Editor
- **Definition**:
  - Windows tool for configuring local system and network policies.
- **Categories**:
  1. **Computer Configuration**:
     - Policies apply to the system and all users.
  2. **User Configuration**:
     - Policies apply to specific users.
- **Settings**:
  - Software settings, security policies, and administrative templates.

### Example: Configuring Audit Policy
1. Open `gpedit` → Navigate to:
   - Computer Configuration → Security Settings → Local Policies → Audit Policy.
2. Modify “Audit Logon Events” to log:
   - **Success**: Logs successful logins.
   - **Failure**: Logs failed login attempts.

---

## Analysing Log Data
1. **Profiling Normal Behaviour**:
   - Develop baselines for typical user, system, and network activity.
   - Baselines help identify anomalies by comparing deviations from the norm.
2. **Anomaly Detection**:
   - Define thresholds and criteria for what constitutes an anomaly.
   - Example Questions:
     - How long must a deviation persist before flagging?
     - What anomalies trigger alerts?

3. **Log Security**:
   - Techniques to secure logs:
     - Remote logging for offsite storage.
     - Printer logging for high-security environments.
     - Cryptographic signatures to verify authenticity.

---

## Security Auditing Tools
1. **IP/Port Scanners**:
   - Identify open ports and potential vulnerabilities.
2. **Vulnerability Scanners**:
   - Assess weaknesses in systems and networks.
3. **Integrity Checking**:
   - Verify system integrity against known baselines.
4. **Penetration Testing**:
   - Simulate attacks to evaluate security controls.

---

## Key Takeaways
1. **Security Auditing**:
   - A proactive process to uncover risks and mitigate vulnerabilities.
2. **Event Logging**:
   - Essential for monitoring and analysing system events to detect intrusions.
3. **Group Policy Editor**:
   - Enables fine-grained control of logging and auditing policies on Windows systems.