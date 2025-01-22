# DATA FORMATS
21-01-25

---

## Overview
1. How data is stored digitally.
2. Various data formats.
3. Endianness.
4. Compression techniques.

---

## Digital vs. Analog
- **Analog**:
  - Continuous signals (e.g., audio tapes, sound, thermometers, film).
  - Most human-perceived data is analog.
- **Digital**:
  - Computers store information as binary digits (bits).
  - Data must be converted from analog to digital, often referred to as **digitising**.

---

## Storing Numbers and Text
1. **Numbers**:
   - **Bytes**: Represent integers (e.g., 0–255 in unsigned, -128 to 127 in signed).
   - Larger numbers:
     - **int32**: -2,147,483,648 to 2,147,483,647.
     - **int64**: For extremely large values.
   - **Fractions**:
     - **Binary-Coded Decimal (BCD)**: Encodes digits and decimal points in binary.
     - **Floating Point**:
       - Uses scientific notation (e.g., mantissa and exponent).

2. **Text**:
   - **ASCII**:
     - Represents characters with 7 or 8 bits.
     - Supports basic English letters, numbers, and symbols.
   - **Unicode**:
     - **UTF-8**: Most websites use this; 1–4 bytes per character.
     - **UCS-2** and **UTF-32**: Support additional characters.

---

## Endianness
- **Definition**: Order of bytes in memory.
- **Big-Endian**: Most significant byte stored first.
- **Little-Endian**: Least significant byte stored first.
- Example:
  - Hexadecimal `4F52`:
    - **Big-Endian**: Stored as `4F 52`.
    - **Little-Endian**: Stored as `52 4F`.

---

## Multimedia
1. **Audio**:
   - Conversion through **sampling**.
     - Sample rate: Frequency of measurements (e.g., 44.1kHz for CDs).
     - Precision: Number of levels (16-bit = -32,768 to 32,767).
   - CD audio:
     - **Stereo, 16-bit precision**:
       - Data for 3 minutes ≈ 32MB.

2. **Images**:
   - Types:
     - **Bitmap (Raster)**: Pixel grids, quality depends on resolution and colour depth.
     - **Vector**: Stores shapes and is resolution-independent.
   - **Compression**:
     - **GIF**: Reduces colour palette (256 colours).
     - **JPEG**: Lossy; uses mathematical algorithms.
     - **PNG**: Lossless compression.

3. **Movies**:
   - Use frame-based storage and compression:
     - **Keyframes**: For significant changes.
     - **Interleaved Frames**: For gradual changes.
   - Formats:
     - MPEG, MP4, H.264, H.265 (HEVC), MKV.

---

## Compression
1. **Lossy**:
   - Reduces file size by removing "unnecessary" data.
   - Examples: MP3, AAC, JPEG.
2. **Lossless**:
   - Retains all original data.
   - Examples: FLAC, ZIP, PNG.

---

## Key Concepts
1. **File Formats**:
   - Defined by data storage needs.
   - Examples:
     - `.3ds` for 3D models.
     - `.mp3` for audio.
     - `.gif` for images.
2. **Trade-Offs**:
   - Speed, size, and accuracy are often competing priorities.

---

## Summary
- **Data Storage**: Understanding formats helps in software development and data management.
- **Compression**: Balances file size and quality.
- **Explore**:
  - Practical applications of ASCII, Unicode, and multimedia compression.
- **Preparation**:
  - Next Week: Finite State Machines.
  - In-class test: 07-02-2025.