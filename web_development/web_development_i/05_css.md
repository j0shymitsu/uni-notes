# CSS
10-02-25

---

## Content Overview
- CSS context and history
- Linking to a CSS file
- Cascading
- CSS rules
- Selectors
- Classes and Ids
- Properties
- Fonts
- Colours
- Comments
- Browser support

---

## Cascading Style Sheets - Context
- CSS stands for Cascading Style Sheets
- Style Sheet Language
- Describes the presentation of markup (e.g., HTML)
- Invented by Håkon Wium Lie and Bert Bos
- Initially released in December 1996
- First draft of CSS 3 submitted in 1999
- CSS (3) is split into modules, different modules are at different levels
- Modules can have different statuses of development for a given level
- Recommendation status is effectively complete
- Browser support may pre-empt (or trail) recommendation status

---

## Adding CSS to an HTML file
- It is possible to include CSS inside an HTML file or inside an element. **DO NOT DO THIS**
- CSS should be created in a separate (external) file and linked from the `<head>` element, using a `<link>` element
- You can link to more than one CSS document
- The order in which styles are linked (and therefore applied) is important (hence the 'cascading' part of CSS)

---

## Cascading
- Rules for styling elements cascade
- The browser will apply the most specific rule it can find
- Example: If you apply a style to all `<h1>` elements that sets the text to blue, but elsewhere in the CSS there is code that sets `<h1>` elements with a specific class to red, then the red will win
- If the browser finds two rules with the same specificity, the later one overrides the earlier one (where they affect the same CSS attribute)

---

## CSS Rule Structure
Every CSS rule follows this basic structure:

```css
selector {
  property: value;
}
```

For example, to target every `<p>` on a page and change their text color to red:

```css
p {
  color: red;
}
```

- Rules are surrounded by matching curly braces `{}` (known as a declaration block)
- Every property is delimited by a colon `:` and ends with a semicolon `;`

---

## Selectors
Selectors define which elements will be styled. Some basic examples:

| Selector Type           | Example       | Description                |
|----------------------   |---------------|-------------               |
| **Element Selector**    | `a`           | Selects all `<a>` elements |
| **Group Selector**      | `h1, h2`      | Selects all `<h1>` and `<h2>` elements |
| **Descendant Selector** | `nav ul`      | Selects all `<ul>` elements inside `<nav>` elements |

---

## Classes and IDs
When building complex HTML structures, using only element selectors can be limiting. Instead, use classes and IDs:

```css
nav ul li a i {
  display: block;
  width: 40px;
  height: 40px;
}
```

- The `id` attribute is used for unique elements
- The `class` attribute allows multiple elements to share the same style

### Targeting by Class and ID
- **Class:** Use a dot `.`
- **ID:** Use a hash `#`

```css
.button {
  display: block;
  padding: 20px;
  color: white;
}

.green {
  background-color: green;
}

.red {
  background-color: red;
}

#logo {
  display: block;
  width: 100px;
  height: 25px;
  margin: 25px 25px 25px 50px;
  background-image: url("img/bg.png");
  background-size: 100px 25px;
  background-repeat: no-repeat;
}
```

---

## CSS Properties
- Over 600 properties exist, some still in the proposal stage
- Support varies by browser
- Common properties include:
  - `font-family`
  - `font-size`
  - `color`
  - `margin`
  - `background-color`
  - `text-align`
  - `height` / `width`
  - `border`
  - `padding`

More properties: [W3C CSS Properties](https://www.w3.org/Style/CSS/all-properties.en.html)

---

## Fonts
You can access any device font from CSS, but if a user does not have a certain font, a fallback is required.

Example:
```css
body {
  font-family: Calibri, sans-serif;
}
```

- If a user does not have Calibri, the browser will use `sans-serif`
- Font sizes can be defined in `pt` (point), `px` (pixels), or `em` (relative size, e.g., `2em` is twice the size of the current font)
- Web fonts can be loaded using services like [Google Fonts](https://fonts.google.com)

---

## Colour (Color)
- CSS uses American spelling (`color` instead of `colour`)
- CSS colors can be defined in multiple formats:
  - Named colors (e.g., `Gainsboro`, `blue`)
  - Hexadecimal values (e.g., `#DCDCDC`)
  - RGB / RGBA values (e.g., `rgb(220,220,220)` or `rgba(220,220,220,1)`)
  - HSL / HSLA values (e.g., `hsl(0,0,86)` or `hsla(0,0,86,1)`)

Example:
```css
.color-picker-gainsboro {
  color: Gainsboro;
  color: #DCDCDC;
  color: rgb(220,220,220);
  color: rgba(220,220,220,1);
  color: hsl(0,0,86);
  color: hsla(0,0,86,1);
}
```

---

## Comments
- CSS comments follow the same format as multiline comments in Java:

```css
/* This is a comment in CSS */
```

---

## Browser Support
- You can check browser support for CSS properties on [Can I Use](https://caniuse.com)
- Alternatively, test in all major browsers

[Can I Use - CSS Support](https://caniuse.com/)