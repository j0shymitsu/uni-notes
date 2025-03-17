# ARCHITECTURE & DESIGN PATTERNS
N-D

---

## Contents
- Introduction
- What is Software Architecture?
- Common Architectural Patterns
  - Layered Pattern
  - Client-Server Pattern
  - Model-View-Controller (MVC) Pattern
- Reusability and Maintainability in Architecture
- Architectural Patterns vs. Design Patterns
- What are Design Patterns?
- Conclusion

---

## Introduction
- **Software architecture** defines the **structure and organization** of a system.
- It describes how **components interact** and ensures scalability, maintainability, and reusability.
- **Design patterns** provide solutions to common software problems at a smaller scale.

---

## What is Software Architecture?
- **Software architecture** refers to the fundamental structures of a system.
- It defines **components, relationships, and interactions**.
- Architecture provides the **high-level skeleton** of a system, while design focuses on **code-level implementation**.

### **Why System Design is Important**
- Helps **visualize** and communicate system structure.
- Ensures **modularity and scalability**.
- Provides **guidance for future maintenance and expansion**.

---

## Common Architectural Patterns
### **Layered Pattern**
- Organizes a system into **logical layers**, each responsible for specific functionality.
- **Typical layers:**
  1. **Presentation Layer** (UI)
  2. **Application Layer** (Services)
  3. **Business Logic Layer** (Domain logic)
  4. **Data Access Layer** (Database operations)
- **Usage:**
  - Desktop applications
  - E-commerce websites

### **Client-Server Pattern**
- **Two components:**
  - **Client:** Sends requests for services.
  - **Server:** Responds to requests and provides services.
- **Continuous communication:** Server listens for client requests.
- **Usage:**
  - Email services
  - Online banking
  - Document sharing applications

### **Model-View-Controller (MVC) Pattern**
- Divides applications into three **interdependent components:**
  1. **Model:** Contains core logic and data.
  2. **View:** Presents data to the user.
  3. **Controller:** Handles user input and updates the model.
- **Usage:**
  - Web applications
  - GUI-based applications
  - Mobile apps

---

## Reusability and Maintainability in Architecture
- **Software architecture should be reusable**, meaning design elements can be applied to multiple systems.
- **Software maintenance** is crucial:
  - Fixing bugs
  - Enhancing features
  - Improving performance
- A well-designed system **reduces modification costs** and allows seamless updates.

---

## Architectural Patterns vs. Design Patterns
### **Differences:**
| Architectural Patterns | Design Patterns |
|------------------------|----------------|
| Define the **high-level structure** of a system. | Define the **solution to a common coding problem**. |
| Affect entire subsystems. | Affect specific classes and objects. |
| Example: MVC, Layered, Client-Server. | Example: Observer, Singleton, Factory. |

- **Design patterns** help implement **architectural patterns**.
- Example: The **Observer pattern** (design pattern) can be used to implement an **MVC** system.

---

## What are Design Patterns?
- **Design patterns** provide reusable solutions to **common programming challenges**.
- They offer a **blueprint for software design** but are **not complete implementations**.

### **Key Characteristics of Design Patterns:**
1. **Reusability** – Can be applied across different projects.
2. **Scalability** – Helps manage growing complexity.
3. **Efficiency** – Reduces development time by leveraging proven solutions.

---

## Conclusion
- **Software architecture** provides the foundation of a system.
- **Architectural patterns** define high-level system structures.
- **Design patterns** solve recurring coding problems within architectures.
- Understanding these concepts leads to **better software design, scalability, and maintainability**.
