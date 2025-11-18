# INTRODUCTION TO OMNET++
N-D 

---

## Objectives

- Introduction to OMNET++ 6.0
- Using modeling in OMNET++
- What OMNET++ provides
- Creating a simple project in OMNET++

---

## Introduction to OMNET++ 6.0

- Development started mid-2018 (after OMNET++ 5.4)
- Analysis Tool rewrite started April 2017
- **Discrete event simulator**
- **Hierarchically nested modules**
- Modules communicate using messages
- Highly-structured, highly modular, not limited to network protocol simulations
- Free for academic use

---

## How does modelling work in OMNET++?

- Hierarchical modules (simple, compound)
- Modules communicate via messages, use gates and links
- Modeling can represent packet transmissions (data rate, propagation delay)
- Parameters allow flexibility
- Uses Network Description Language (NED)

---

## OMNET++ At A Glance

### Components

- **IDE**: Eclipse-based, manage projects and simulations, supports extensions
- **C++**: Models written in C++ (public source code), uses simulation kernel
- **NED**: Network Description Language; describes/assembles components. Dual editor: graphical and text (source mode)
- **Msg**: Defines message types exchanged by modules
- **Ini**: Sets parameters/configuration, supports multiple configs
- **Tools**: Command-line and IDE tools for simulating, logging, and analysis

---

## NED Language Features

- Declare simple modules and assemble as compound modules
- Supports:
    - Interfaces
    - Inheritance
    - Packages
    - Inner Types
    - Metadata annotations

---