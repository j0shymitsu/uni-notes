# SECURITY & DEPENDABILITY
31-03-25

---

# Security and Dependability

## Contents
- Introduction
- Security Threats
- Cybersecurity Measures
- Causes of System Failure
  - Hardware
  - Human
  - Software
- Human Factors in Error
- Dependability in Software
  - Principle Properties
  - Supporting Properties
- Ensuring Dependability
- Error Detection and Fault Management
- Software Reuse
- Sociotechnical Systems
- Conclusion

---

## Introduction
- Software systems are increasingly complex and embedded in critical infrastructure.
- **Dependability** and **security** are vital for user trust and system success.
- Failures can result in serious consequences, both operationally and reputationally.

---

## Security Threats
### **Examples of Threats**
- **Cyber:** DNS attacks, viruses, ransomware.
- **Internal:** Data breaches, phishing.
- **Human Error or Theft:** Mistakes by users or developers.

---

## Cybersecurity Measures
- To keep software secure:
  - **Secure and isolate databases.**
  - **Encode and validate data.**
  - **Enforce strict access controls.**
  - **Implement logging and auditing.**
  - **Use authentication and authorization protocols.**

---

## Causes of System Failure
### **Hardware Failure**
- Occurs due to design flaws, manufacturing defects, or wear-and-tear.
- Costly and difficult to predict.

### **Human Error**
- Operators make mistakes—now the **leading cause** of system failures.
- Can occur at the user level or during development.

### **Software Failure**
- Bugs in **specification, design, or implementation**.
- Includes logic errors, integration issues, or unexpected input handling.

---

## Human Factors in Error
- Developers can introduce coding mistakes.
- Users may cause issues through **misuse or misunderstanding**.
- Examples:
  - Deleting databases accidentally.
  - Incorrect form submissions.

---

## Dependability in Software
### **Importance of Dependability**
- Trust is essential for user acceptance.
- Undependable systems can be **rejected**, even if otherwise functional.
- Strong dependability makes software **marketable and valuable**.

### **Principle Properties**
1. **Availability** – Is it ready for use when needed?
2. **Reliability** – Does it consistently perform correctly?
3. **Safety** – Does it operate without causing harm?
4. **Security** – Is it protected from unauthorized access?

### **Supporting Properties**
- **Repairability** – Can it be fixed after failure?
- **Maintainability** – Can it be updated or changed easily?
- **Survivability** – Can it function under attack?
- **Error Tolerance** – Can it handle incorrect user input?

---

## Ensuring Dependability
- **Reliability is crucial**, especially in enterprise systems.
- Common practices include:
  - Rigorous **testing and debugging**.
  - Using **reliable third-party components**.
  - Careful **requirements engineering**.

---

## Error Detection and Fault Management
### **Failure Chain**
1. **Fault**: Defect in the system.
2. **Error**: Activation of that fault.
3. **Failure**: System stops working properly.

### **Mitigation Strategies**
- **Fault Avoidance** – Preventing defects during development.
- **Fault Detection & Removal** – Testing and debugging.
- **Fault Tolerance** – System continues functioning despite faults.

---

## Software Reuse
- Developing software by **reusing existing components**.
- Reduces **development time, cost, and risk**.

### **Types of Software Reuse**
- **Internal Reuse**: Components built in-house.
- **External Reuse**: Third-party libraries, platforms (e.g. WordPress, Wix).
- **Forms**:
  - Copy/paste code
  - Libraries/frameworks
  - APIs

### **Benefits**
- Accelerated development
- Use of expert code
- Greater reliability
- Standards compliance

### **Risks**
- Dependency on external vendors
- Lack of updates
- Licensing and compatibility issues

---

## Sociotechnical Systems
- Systems involving **technical and human/social components**.
- Examples:
  - Facebook, Twitter → not just websites, but platforms involving users, developers, hardware, policies.
- Changes at one layer (e.g., user interface) can ripple through others (e.g., server logic).

---

## Conclusion
- **Security and dependability** are essential properties in modern software systems.
- Risks include **hardware issues, human error, and cyber threats**.
- Dependability relies on **robust design, error handling, and security practices**.
- Reusing software can be powerful but should be carefully managed.
- Sociotechnical awareness helps manage complexity in real-world systems.