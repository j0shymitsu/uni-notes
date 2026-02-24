# LISTS, TABLES, IMAGES & RICH MEDIA
03-02-25

---

## Content Overview
1. Lists in HTML.
2. Tables and their correct usage.
3. Adding and formatting Images.
4. Rich Media (Video and Audio).
5. Browser Inspectors.

---

## Lists in HTML
- Lists help organize and present grouped content.
- **Types of Lists**:
  1. **Unordered List (`<ul>`)**:
     - Items appear in bullet points.
     - Example: Recipe ingredients.
  2. **Ordered List (`<ol>`)**:
     - Items appear in a numbered sequence.
     - Example: Recipe steps.
  3. **Definition List (`<dl>`)**:
     - Used for key-value pairs (e.g., glossaries).
- **List Items**:
  - Each item in a list is wrapped in the `<li>` tag.

---

## Tables in HTML
- **Correct Usage**:
  - Tables should only be used for **data representation**, not page layout.
  - Data should be organized in rows and columns for easy lookup.
- **Table Structure**:
  - `<table>`: Defines the table.
  - `<thead>`: Contains title row(s).
  - `<tbody>`: Contains the data rows.
  - `<tfoot>`: Contains footer row(s).
  - `<tr>`: Represents a row.
  - `<th>`: Represents a header cell.
  - `<td>`: Represents a data cell.
- **Nesting Rules**:
  - `<td>` and `<th>` must be inside `<tr>`.
  - `<tr>` must be inside `<thead>`, `<tbody>`, or `<tfoot>`.
  - `<thead>`, `<tbody>`, and `<tfoot>` must be inside `<table>`.

---

## Images in HTML
- **Best Practices**:
  - **Informative images** should be in HTML.
  - **Decorative images** should be in CSS.
- **`<img>` Attributes**:
  - `src`: URL of the image.
  - `alt`: Alternative text (used by screen readers or when the image fails to load).
  - `width` / `height`: Defines image dimensions (without units).
  - `srcset`: Provides images in different resolutions for different devices.

---

## Web Image Formats
- **Browser-Supported Formats**:
  - **JPEG, PNG, GIF** (older, widely supported).
  - **WebP, AVIF, APNG** (newer, better compression and transparency).
  - **SVG** (scalable vector format).
- **Considerations**:
  - **Compression efficiency** (lossy vs. lossless).
  - **Transparency support**.
  - **Animation support**.
- **Tools**:
  - [Can I Use?](https://caniuse.com/) – Check browser support.
  - [MDN Image Guide](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Image_types).

---

## The `<picture>` Element
- **Purpose**:
  - Offers different images for different devices.
- **Usage**:
  - Must contain at least one `<img>` tag.
  - Contains multiple `<source>` elements with `srcset` attributes.
  - Can include media queries to adjust images based on **screen width** or **device orientation**.

---

## Rich Media in HTML
- **Elements**:
  - `<video>`: Embeds video content.
  - `<audio>`: Embeds audio content.
- **Attributes**:
  - `src`: Defines the media file.
  - `controls`: Enables playback controls.
  - `muted`: Mutes audio by default.
  - `autoplay`: Starts playback automatically (only allowed if muted).
  - `loop`: Repeats the media.
- **Multiple `<source>` Elements**:
  - Allows fallback support for different media formats.

---

## Rich Media Formats
### **Audio Formats**:
- **Well-supported**:
  - PCM, MP3, AAC (MP4 container), Vorbis (Ogg container), Opus (WebM container), FLAC.

### **Video Formats**:
- **Well-supported**:
  - H.264 (MP4), VP8 & VP9 (WebM).

---

## Browser Inspectors
- **Definition**:
  - Built-in browser tools for debugging and inspecting web pages.
- **How to Access**:
  - Right-click → **Inspect** (Chrome, Firefox, Edge).
  - Safari: **Settings → Advanced → Enable Developer Tools**.
- **Functions**:
  - Modify HTML and CSS in real time.
  - View network activity and console logs.

---

## Key Takeaways
1. **Lists (`<ul>`, `<ol>`, `<dl>`)** help organize content.
2. **Tables (`<table>`)** should be used only for displaying structured data.
3. **Images (`<img>`, `<picture>`)** should have alt text and responsive sizing.
4. **Rich media (`<video>`, `<audio>`)** enhance web content.
5. **Browser Inspectors** assist in web development debugging.

For further learning, refer to **MDN Web Docs**.