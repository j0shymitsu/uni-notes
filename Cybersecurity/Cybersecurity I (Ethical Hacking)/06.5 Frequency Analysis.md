# FREQUENCY ANALYSIS
11-11-24

---

## Content Overview
1. Introduction to Frequency Analysis.
2. Caesar/Substitution Ciphers.
3. Monoalphabetic Substitution Cipher.
4. Frequency Analysis Techniques.
5. Decryption Process and Notes.

---

## Frequency Analysis
- **Definition**:
  - A cryptographic method to analyze character distributions in ciphertext.
  - Uses the frequency of characters in a language to decrypt text.
- **Purpose**:
  - Identify patterns to substitute characters and recover plaintext.

---

## Ciphertext
- **Definition**:
  - Result of encrypting plaintext using an encryption algorithm or cipher.
- **Caesar/Substitution Cipher**:
  - Shifts each letter by a set number (key) to generate ciphertext.
  - Example:
    - Plaintext: `a b c ... z`
    - Ciphertext (key=3): `x y z ... w`
- **Monoalphabetic Substitution**:
  - Replaces each letter in plaintext with a fixed random letter.
  - Ciphertext alphabet serves as the decryption key.

---

## Frequency Analysis
- **Challenges**:
  - Decrypting substitutions without knowing the key or plaintext alphabet.
- **Steps**:
  1. Count character occurrences in ciphertext.
  2. Compare with known letter frequencies in the plaintext language (e.g., English: `E`, `T`, `A`, `O`).
  3. Replace characters iteratively to reveal meaningful words.
- **Tool**:
  - Automate character frequency counting with tools like [dCode Frequency Analysis](https://www.dcode.fr/frequency-analysis).

---

## Decryption Process
1. **Initial Observations**:
   - Identify the most frequent characters in ciphertext.
   - Assume they correspond to the most common characters in the plaintext language.
2. **Iterative Substitution**:
   - Replace ciphertext characters with likely plaintext matches.
   - Use partial words to infer additional substitutions.
3. **Example**:
   - Ciphertext: `Jdcu cu q ujncge bx yvqcgjsoj kdczd dqu assg sgznlyjsw cgjb zcydsnjsoj.`
   - Decrypted Plaintext: `This is a string of plaintext which has been encrypted into ciphertext.`

---

## Decryption Notes
- **Steps Recap**:
  1. Perform frequency analysis on the ciphertext.
  2. Assume plaintext language and match most common characters.
  3. Replace characters based on observed patterns.
  4. Iterate until plaintext is fully decrypted.
- **Tips**:
  - Keep a record of substitutions.
  - Use tools or scripts for large ciphertexts.

---

## Alternative Techniques
- **Bigrams and Trigrams**:
  - Analyze character pairs (bigrams) and triples (trigrams) in ciphertext.
  - Compare their frequencies with common patterns in the plaintext language.
- **Resources**:
  - [Practical Cryptography: English Letter Frequencies](http://practicalcryptography.com/cryptanalysis/letter-frequencies-various-languages/english-letter-frequencies/)

---

## Key Takeaways
1. **Frequency Analysis**:
   - Effective for breaking substitution ciphers when plaintext language is known.
2. **Decryption Process**:
   - Iteratively replaces ciphertext characters with plaintext based on frequency patterns.
3. **Monoalphabetic Ciphers**:
   - Require a fixed key for decryption, increasing complexity compared to Caesar ciphers.