# JAVASCRIPT
N-D

---

## Contents
- Introduction
- Why JavaScript?
- History of JavaScript
- Characteristics of JavaScript
- Uses of JavaScript
- Variables in JavaScript
- Key Data Types
- Collections
- Iteration Methods
- Functions
- Documenting Functions
- Including JavaScript in HTML
- Modifying the DOM
- Attaching Events to Elements
- Conclusion

---

## Introduction
- JavaScript enables **interactivity** on web pages.
- A key tool for **dynamic content**, **form handling**, and **client-side logic**.

---

## Why JavaScript?
- JavaScript allows **real-time interactions** based on user input.
- Example:
  - An insurance form shows different fields depending on vehicle fuel type.
- Enhances the **user experience**.

---

## History of JavaScript
- Designed by **Brendan Eich** at Netscape.
- Initially called **LiveScript**, released in **1995**.
- Now formalized as **ECMAScript** (latest: ECMAScript 2018).
- JavaScript is a **living standard**.
- **Important:** JavaScript ≠ Java.

---

## Characteristics of JavaScript
- **High-level language**.
- **Dynamically-typed**: Variables can change type.
- **Interpreted**: Code is run directly by the browser at runtime.

---

## Uses of JavaScript
- **Historically browser-based** (client-side scripting).
- Now also used for:
  - **Server-side** programming (e.g., Node.js).
  - **Desktop applications** (e.g., Electron).

---

## Variables in JavaScript
- **Use `const` by default**.
- Use `let` if the value needs to change.
- `var` is outdated (only in legacy code).

Example:
```javascript
const name = "John";
let age = 30;
```

---

## Key Data Types
- `Number`
- `String`
- `Boolean`
- `Null`
- `Undefined`
- `BigInt`

---

## Collections
- **Array** – ordered list.
- **Map** – key-value pairs.
- **Set** – unique values only.

---

## Iteration Methods
- **Standard for loop**:
  ```javascript
  for (let i = 0; i < array.length; i++) { }
  ```
- **forEach** method (on Arrays):
  ```javascript
  array.forEach((element, index, array) => { });
  ```

---

## Functions
- Functions **do not specify types**.
- No declared return type.
- Example:
  ```javascript
  function greet(name) {
      return "Hello " + name;
  }
  ```
- Always use `===` for equality checking.

---

## Documenting Functions
- Important to **document functions** for clarity.
- Allows IDEs to provide **inline documentation**.

Example:
```javascript
/**
 * Adds two numbers.
 * @param {number} a
 * @param {number} b
 * @returns {number}
 */
function add(a, b) {
  return a + b;
}
```

---

## Including JavaScript in HTML
- Use `<script>` tag.
- Without `defer`, the browser **fetches and executes** immediately, pausing page parsing.
- With `defer`, JavaScript **executes after the HTML is parsed**.

Example:
```html
<script src="script.js" defer></script>
```
- Avoid inline JavaScript for better organization.

---

## Modifying the DOM
- **Document Object Model (DOM)**: Represents page elements as a tree structure.

### Operations:
- **Get elements** (e.g., `getElementById`, `querySelector`).
- **Create and append elements** dynamically.

Example:
```javascript
let p = document.createElement('p');
p.textContent = "New paragraph!";
document.body.appendChild(p);
```

---

## Attaching Events to Elements
- Use `addEventListener()` to react to user actions.

Example:
```javascript
document.getElementById("myButton").addEventListener("click", function() {
    alert("Button clicked!");
});
```
- Can handle various events (click, change, submit, etc.).

---

## Conclusion
- JavaScript is essential for **building dynamic, interactive web applications**.
- Mastering **variables, functions, DOM manipulation, and event handling** is crucial.
- Modern JavaScript development emphasizes **clarity, structure, and separation of concerns** (external scripts, documentation, etc.)