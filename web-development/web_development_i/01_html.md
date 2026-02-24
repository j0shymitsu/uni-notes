# HTML Pages, Headings & Validation
13-01-25

--- 

## Overview of HTML
- **HTML**: HyperText Markup Language
- **Current Version**: HTML5
- Standards defined by:
  - **WHATWG**: Living standard
  - **W3C**: Fixed snapshots of the standard
- Browser and working group-driven development.
- Not all HTML features are supported across all browsers.
  - Check compatibility on [caniuse.com](https://caniuse.com/).

### References:
- [WHATWG HTML Specification](https://html.spec.whatwg.org/)
- [W3C HTML 5.2 Standard](https://www.w3.org/TR/html52/)

---

## Structure of an HTML Document
1. **DOCTYPE**: Declares the document as HTML5.
2. **`<html>`**: Root element of the HTML document.
3. **`<head>`**:
   - Includes metadata (not directly visible).
   - Contains the `<title>` element (appears in browser tab).
4. **`<body>`**:
   - Contains all visible content.

---

## Tags and Elements
- HTML uses **tags**:
  - Example: `<h1>Hello World</h1>`
    - `<h1>`: Opening tag.
    - `</h1>`: Closing tag.
- Self-closing tags:
  - Example: `<br />`
  - Avoid omitting the `/` to ensure XML compliance.
- **Element**: Everything between an opening and closing tag.
- Nesting:
  - Example: `<title>` must go inside `<head>`.

---

## Rules for Valid HTML
1. Only two elements are allowed directly inside `<html>`:
   - `<head>` and `<body>` (in that order).
2. The `<title>` element must be in `<head>` and included exactly once.
3. Nested elements must be closed before their parent:
   - Valid: `<body><h1>Hello</h1></body>`
   - Invalid: `<body><h1>Hello</body></h1>`
4. Complex rules exist for nesting, but common sense helps.

---

## Styling HTML
- Historically, HTML included inline styling.
- Modern best practice:
  - **HTML**: Structure and content only.
  - **CSS**: Aesthetics (separate file).
- Browsers provide default styles, which may vary.

---

## HTML Files
- Static HTML files:
  - Used when no dynamic content is served.
  - Common home page filename: **index.html**.
- If a web server is not configured for dynamic content, it will typically look for static HTML files.

---

## Basic Text Elements
1. **Headings**:
   - `<h1>` to `<h6>`.
   - Rules:
     - First heading must be `<h1>`.
     - Subsequent headings must be the same rank, one rank higher, or one rank lower.
     - Invalid: `<h1>` followed by `<h3>`.
2. **Paragraphs**:
   - `<p>` for text content in paragraph format.

---

## Demo
- The tutor demonstrated creating a basic HTML file:
  - Included:
    - Title.
    - Top-level heading (`<h1>`).
    - Two paragraphs.
  - Previewed the page in a browser.

---

## Browser Interpretation of Code
- HTML syntax errors are often forgiven by browsers:
  - Browsers will attempt to parse and display content despite errors.
  - Different browsers may interpret errors differently.
- Best practice:
  - Validate code using:
    - [W3C Validator](https://validator.w3.org/)
    - [WHATWG Validator](https://whatwg.org/validator/)

---

## Summary of Slides
1. Introduction to HTML.
2. Explanation of standards (WHATWG and W3C).
3. HTML document structure.
4. Tags and elements.
5. Rules for valid HTML.
6. Styling principles.
7. Static HTML files and naming conventions.
8. Text elements (headings and paragraphs).
9. Demonstration of HTML basics.
10. Browser behavior and validation tools.
