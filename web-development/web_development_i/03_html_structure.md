# HTML DOCUMENT STRUCTURE
27-01-25

---

## Content Overview
1. Attributes and Values.
2. Identifying and Classifying HTML Elements (`id` and `class` attributes).
3. Hyperlinks and Linking to Relative URLs.
4. Semantic and Non-Semantic Document Structure.

---

## Attributes and Values
- **Purpose**:
  - Add additional information to elements.
  - Examples:
    - Identifying elements for styling.
    - Configuring elements, such as setting a link destination.
- **Format**:
  - Attributes are defined within HTML tags.
  - Example: `<p lang="en">Text here</p>`.
  - **Boolean Attributes**:
    - Certain attributes can omit values.
    - Example: `<input disabled>`.

---

## Identifying and Classifying Elements
1. **`id` Attribute**:
   - Specifies a unique identifier for an element.
   - Guidelines:
     - No spaces in values.
     - Must be unique per page.
   - Example: Linking to an element using `#aboutme` in the URL.

2. **`class` Attribute**:
   - Used to classify elements, especially for styling.
   - Can apply the same class to multiple elements.
   - Naming:
     - No strict standard, but methodologies like **BEM** are recommended.
     - [BEM Methodology](http://getbem.com/).

---

## Hyperlinks
- **Purpose**:
  - Allows documents to link to each other.
- **HTML Element**:
  - `<a>` (anchor element).
  - `href` Attribute:
    - Specifies the link's destination.
    - Always include the protocol for external sites (e.g., `https://`).
- **Best Practices**:
  - Link text should be descriptive for accessibility.
  - Avoid using "click here" as link text.

---

## Relative URLs
- **Linking Within a Project**:
  1. **Same Folder**:
     - Use the file name directly.
     - Example: `<a href="page.html">Link</a>`.
  2. **Subfolder**:
     - Include the folder name and file name.
     - Example: `<a href="images/picture.jpg">Image</a>`.
  3. **Parent Folder**:
     - Use `../` to navigate to the parent directory.
     - Example: `<a href="../file.html">Parent Link</a>`.

---

## Document Structure
- **Semantic Elements**:
  - Define sections with clear meaning.
  - Examples:
    - `<header>`, `<nav>`, `<main>`, `<article>`, `<section>`.
    - `<aside>`, `<footer>`, `<address>`.
- **Non-Semantic Elements**:
  - Used for grouping without inherent meaning.
  - Examples: `<div>`, `<span>`.

---

## Demonstrations
1. **Attributes**:
   - Add the `lang` attribute to the `<html>` tag for validation.
2. **IDs**:
   - Link elements on the same page or across pages.
3. **Hyperlinks**:
   - Link to:
     - Pages in the same folder.
     - Subfolders or parent folders.

---

## Summary
1. **Attributes**:
   - Add configuration or identification to HTML elements.
2. **`id` and `class`**:
   - Key for styling and navigation.
3. **Hyperlinks**:
   - Connect pages and resources using absolute or relative paths.
4. **Document Structure**:
   - Semantic elements improve readability and organisation.
