# CSS ADVANCED
03-03-25

---

## Contents
- Introduction
- The Box Model
  - Margins, Borders, and Padding
  - Setting Margins and Padding
  - Setting Borders
- Element Display Types
  - Block Elements
  - Inline Elements
- Controlling Layout Flow
  - Floating Elements
  - Clearing Floats
- Advanced CSS Concepts
  - Sizing Units
  - Pseudo Selectors
  - Inheritance
- Responsive Design
  - Media Queries
  - Viewport Configuration
- Conclusion

---

## Introduction
- Every HTML element can be thought of as a **box**.
- CSS helps control the **spacing, positioning, and styling** of these elements.
- Understanding **layout flow, inheritance, and responsive design** is crucial for modern web development.

---

## The Box Model
### **Margins, Borders, and Padding**
- **Margins**: Space outside the element.
- **Borders**: Defines a stroke around the element.
- **Padding**: Space inside an element, between the content and the border.

### **Setting Margins and Padding**
- Using **shorthand properties**:
  ```css
  margin: 10px 20px 30px 20px; /* Top, right, bottom, left */
  padding: 5px 10px; /* Top/bottom, left/right */
  ```
- Using **individual properties**:
  ```css
  margin-top: 10px;
  margin-right: 20px;
  ```

### **Setting Borders**
- Basic border properties:
  ```css
  border: 1px solid #000;
  border-radius: 5px;
  ```
- **Rounded borders**:
  ```css
  border-radius: 10px 5px 0px 0px; /* Top-left, top-right, bottom-right, bottom-left */
  ```

---

## Element Display Types
### **Block Elements**
- Take up the **full width** of their container.
- Force following elements onto a **new line**.
- Examples: `<h1>`, `<p>`, `<div>`.

### **Inline Elements**
- Take up only as much space as **necessary**.
- Do not force a new line.
- Examples: `<span>`, `<a>`, `<img>`.

---

## Controlling Layout Flow
### **Floating Elements**
- Allows block elements to **exist alongside other elements**.
- Float properties:
  ```css
  float: left;
  float: right;
  ```

### **Clearing Floats**
- **Preventing layout issues caused by floated elements:**
  ```css
  .clearfix::after {
      content: "";
      display: block;
      clear: both;
  }
  ```

---

## Advanced CSS Concepts
### **Sizing Units**
- **Absolute units:** `px`, `pt`, `cm`.
- **Relative units:** `em`, `rem`, `%`.

### **Pseudo Selectors**
- Modify elements based on **user interaction or state**.
- Examples:
  ```css
  a:hover { color: red; }
  input:focus { border: 2px solid blue; }
  ```

### **Inheritance**
- **Child elements inherit styles from parent elements.**
- Example:
  ```css
  .parent {
      color: white;
      background-color: #333;
  }
  ```
- Child elements can **override inherited styles**.

---

## Responsive Design
### **Media Queries**
- Allow styles to **adapt to different screen sizes**.
- Example:
  ```css
  @media (max-width: 900px) {
      .container { width: 100%; }
  }
  ```

### **Viewport Configuration**
- Ensures mobile devices render the page correctly:
  ```html
  <meta name="viewport" content="width=device-width, initial-scale=1">
  ```

---

## Conclusion
- **CSS provides powerful tools** for layout and styling.
- **Understanding the box model, display types, and layout flow** is essential.
- **Responsive design ensures websites work across all devices.**
- Mastering these concepts allows for **flexible and visually appealing designs**.