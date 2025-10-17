# SWING GUI
N-D

---

## Contents
- Introduction to Java UI
- Swing Framework Overview
- Forms and Panels
  - Layout Managers
  - Fields and Elements
- Event Handling with ActionListener
- Conclusion

---

## Introduction to Java UI
- Java provides **cross-platform support** for UI development.
- Multiple options for UI creation:
  - **Swing** (covered in this lecture)
  - **JavaFX** (uses FXML and CSS, similar to web development)
- Swing is a **lightweight UI toolkit** built on top of AWT (Abstract Window Toolkit).

---

## Swing Framework Overview
- Swing allows creation of GUI applications that run on **any platform**.
- Part of the Java Foundation Classes (JFC).
- Provides standard components: **buttons, text fields, tables, etc.**
- Components are customizable and **look consistent** across systems.

---

## Forms and Panels
- A **form** is the main UI container (appears as a window).
- Typically has a **bound class** that governs its behaviour.

### **Structure**
- A form contains a **panel** (layout container).
- UI **elements** (e.g. labels, text boxes, buttons) are added to the panel.
- Different **layout managers** control how elements are arranged:
  - FlowLayout
  - BorderLayout
  - GridLayout
  - BoxLayout

### **Element Access**
- Elements within the form (including the panel) are given **field names**.
- These fields can be accessed **programmatically** from the class.

### **Main Method**
- A main method needs to be included to launch the form:
  ```java
  public static void main(String[] args) {
      JFrame frame = new MyForm();
      frame.setVisible(true);
  }
  ```

---

## Event Handling with ActionListener
- A UI without **interactivity** is of little use.
- Swing uses the `ActionListener` interface to handle events (like button clicks).

### **How It Works**
- The UI Designer (e.g. IntelliJ or NetBeans) can generate **boilerplate code** when adding an event handler.
- It creates a new instance of `ActionListener` **in-line**.
- You override the `actionPerformed` method to define the **custom behavior**:

Example:
```java
myButton.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent e) {
        // Define what happens when button is clicked
        System.out.println("Button was clicked!");
    }
});
```
- Each component (e.g. button) can have **its own listener** with unique behaviour.

---

## Conclusion
- Swing is a powerful, **cross-platform UI framework** in Java.
- You build interfaces using **forms, panels, layout managers, and standard components**.
- **Events** are handled using listeners like `ActionListener`, enabling responsive and interactive UIs.
- While JavaFX is a modern alternative, Swing remains widely used and supported.