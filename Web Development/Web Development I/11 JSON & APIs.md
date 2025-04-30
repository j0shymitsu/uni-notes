# JSON & API's
N-D

---

## Contents
- Introduction
- JSON (JavaScript Object Notation)
- Web APIs
- Using fetch() to Access APIs
- HTML5 Canvas
- Conclusion

---

## Introduction
- JavaScript supports **data exchange**, **web service consumption**, and **graphic rendering**.
- Key technologies include:
  - **JSON** for structured data
  - **APIs** for retrieving data
  - **Canvas** for 2D drawing in the browser

---

## JSON (JavaScript Object Notation)
- A lightweight format for storing and transporting data.
- Widely used in **web development** and **APIs**.
- Structure:
  ```json
  {
    "name": "Alice",
    "age": 25,
    "skills": ["JavaScript", "HTML", "CSS"]
  }
  ```
- Used in JavaScript for creating **objects and arrays**.
- Example:
  ```javascript
  const person = {
    name: "Alice",
    age: 25,
    skills: ["JavaScript", "HTML", "CSS"]
  };
  ```

---

## Web APIs
- **API**: Application Programming Interface – a system through which software can interact.
- **Web APIs** allow JavaScript to retrieve or send data over the internet.
- Most web APIs return data in **JSON format**.
- Examples:
  - Weather data
  - Financial information
  - News headlines
  - Game or app metadata

---

## Using fetch() to Access APIs
- JavaScript provides the `fetch()` method to make HTTP requests.
- Basic structure:
  ```javascript
  fetch("https://api.example.com/data")
    .then(response => response.json())
    .then(data => console.log(data))
    .catch(error => console.error("Error:", error));
  ```
- Supports **promises** for asynchronous data handling.
- Can be used in combination with **DOM manipulation** to display results dynamically.

---

## HTML5 Canvas
- The `<canvas>` element allows for drawing graphics using JavaScript.
- Can be used for:
  - Games
  - Charts
  - Data visualisation
  - Interactive graphics

### Example:
```html
<canvas id="myCanvas" width="200" height="100"></canvas>
```

```javascript
const canvas = document.getElementById("myCanvas");
const ctx = canvas.getContext("2d");
ctx.fillStyle = "red";
ctx.fillRect(20, 20, 150, 50);
```
- All drawing is done with JavaScript using a 2D context.

---

## Conclusion
- **JSON** enables structured data to be shared between client and server.
- **Web APIs** provide dynamic external data sources.
- JavaScript’s `fetch()` method is central to **API interaction**.
- The HTML5 **Canvas** allows interactive and dynamic rendering directly in the browser.