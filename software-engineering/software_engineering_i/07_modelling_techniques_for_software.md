# MODELLING TECHNIQUES FOR SOFTWARE
03-03-25

---

## Contents
- Introduction
- What is System Modelling?
- Unified Modelling Language (UML)
  - Use Case Diagrams
  - Activity Diagrams
  - Sequence Diagrams
  - Class Diagrams
  - State Diagrams
- Why Use System Models?
- Implementing Standards in Models
- Conclusion

---

## Introduction
- **System modelling** is the process of creating abstract representations of a system.
- These models help **developers, analysts, and stakeholders** understand system requirements and design.
- Unified Modelling Language (**UML**) provides standardised diagrams for effective software documentation.

---

## What is System Modelling?
- A **blueprint** for designing a software system.
- Used to understand **system behaviour, structure, and interactions**.
- Helps identify **potential issues before implementation**.
- Models can be used for **discussion, documentation, and system implementation**.

---

## Unified Modelling Language (UML)
- UML is a **standard modelling language** used for software development.
- Developed in the **1990s by Rumbaugh, Booch, and Jacobson**.
- UML consists of different diagram types, each representing a specific aspect of a system.

### **Use Case Diagrams**
- Show **interactions between a system and its environment**.
- Components:
  - **Actors** (users, systems interacting with the system).
  - **Use cases** (functional requirements of the system).
  - **System boundary** (defines the scope of the system).
- Example:
  ```
  [Customer] --- (Place Order) --- [E-commerce System]
  ```

### **Activity Diagrams**
- Represent **workflow and processes** within a system.
- Useful for **visualizing process flows, conditions, and decision points**.

### **Sequence Diagrams**
- Show **interactions between system components and actors over time**.
- Elements:
  - **Objects (participants)**
  - **Messages exchanged**
  - **Execution order (time progresses downward)**

### **Class Diagrams**
- Represent **the structure of a system** by showing:
  - **Classes** (blueprints of objects).
  - **Attributes** (characteristics of classes).
  - **Methods** (functions that classes perform).
  - **Relationships** between classes.

### **State Diagrams**
- Represent **how objects change states based on interactions**.
- Useful for **modelling lifecycle changes of objects**.

---

## Why Use System Models?
- **Facilitates discussions** between developers, analysts, and stakeholders.
- **Identifies missing requirements** early, saving time and cost.
- **Improves software quality** by offering a clear system design.
- **Simplifies testing and implementation**.

---

## Implementing Standards in Models
- **ISO 27001 in UML**:
  - Identifies **security actors and roles**.
  - Defines **security use cases**, such as **access control and audit logging**.
  - Maps UML components to **security policies**.
- **PCI-DSS in UML**:
  - Ensures **secure authentication processes**.
  - Implements **data encryption and access control** in the design phase.

---

## Conclusion
- **System modelling** is a crucial step in software development.
- **UML diagrams** help structure and document system requirements.
- **Applying security standards** in models ensures compliance with best practices.
- Well-structured models lead to **better software design and implementation**.