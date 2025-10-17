# HTTP & WEB FORMS
N-D

---

## Contents
- Introduction
- HTTP and Its Methods
  - Understanding HTTP
  - HTTP Methods (Verbs)
  - HTML5 Support for HTTP Methods
- GET Requests and Query Parameters
  - URL Encoding
- Web Forms
  - Form Structure
  - GET vs POST for Forms
  - Input Elements and Attributes
  - Other Form Elements
- Conclusion

---

## Introduction
- **HTTP (HyperText Transfer Protocol)** is the foundation of web communication.
- **Forms** allow user input to be sent to a server.
- Understanding HTTP methods and form behavior is essential for web development.

---

## HTTP and Its Methods
### **Understanding HTTP**
- **A protocol** defines how communication happens over a network.
- HTTP is a **stateless, application-level protocol** for distributed hypermedia.

### **HTTP Methods (Verbs)**
- **GET**: Requests data from a resource.
- **POST**: Sends data to a resource.
- **PUT**: Updates a resource.
- **DELETE**: Removes a resource.
- **HEAD**: Retrieves metadata without the body.

### **HTML5 Support for HTTP Methods**
- HTML5 **natively supports GET and POST**.
- Example:
  ```html
  <form action="/submit" method="POST">
      <input type="text" name="username">
      <button type="submit">Submit</button>
  </form>
  ```

---

## GET Requests and Query Parameters
### **Understanding GET Requests**
- A **GET request** retrieves data from a server.
- Example:
  ```
  https://www.google.com/search?q=web+development
  ```
- The **query string** follows `?` and contains key-value pairs.

### **URL Encoding**
- URLs can only include **ASCII characters**.
- Special characters are replaced with encoded values:
  - `#` → `%23`
  - `space` → `%20` or `+`
  - `é` → `%C3%A9`

---

## Web Forms
### **Form Structure**
- Forms collect user input and send it to a server.
- Basic example:
  ```html
  <form action="/search" method="GET">
      <input type="text" name="q">
      <button type="submit">Search</button>
  </form>
  ```

### **GET vs POST for Forms**
| GET | POST |
|------|------|
| Sends data in the URL | Sends data in the request body |
| Not secure (data is visible in the URL) | More secure (data is not cached) |
| Suitable for simple requests | Used for sensitive data (e.g., login forms) |

### **Input Elements and Attributes**
- The `<input>` element collects user data.
- **Types of inputs:**
  - Text, password, email, number, date, file, checkbox, radio.
- **Attributes:**
  - `required`, `placeholder`, `maxlength`, `readonly`, `min`, `max`.
- Example:
  ```html
  <input type="text" name="username" required placeholder="Enter your username">
  ```

### **Other Form Elements**
- **`<textarea>`**: Multi-line text input.
- **`<select>` with `<option>`**: Dropdown menu.
- **`<input type="submit">`**: Submit button.
- **Example:**
  ```html
  <select name="category">
      <option value="tech">Technology</option>
      <option value="health">Health</option>
  </select>
  ```

---

## Conclusion
- **HTTP is essential for web communication**, with **GET and POST** being the most commonly used methods.
- **Web forms enable user input collection**, processed via HTTP requests.
- **Understanding input elements, attributes, and form methods** is key for frontend and backend developers.
- Secure handling of form data prevents vulnerabilities and improves user experience.