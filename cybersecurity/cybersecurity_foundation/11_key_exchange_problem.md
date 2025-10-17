# KEY EXCHANGE PROBLEM
02-12-24

---

## Content Overview
1. Introduction to Cryptography.
2. The Key Exchange Problem.
3. The Diffie-Hellman Key Exchange.
4. Attacks and Defenses.
5. Key Points to Remember.

---

## Cryptography
- **Purpose**:
  - Ensures confidentiality, authentication, integrity, and nonrepudiation.
- **Problem**:
  - Alice and Bob need to exchange messages securely over an insecure channel.
  - A man-in-the-middle (e.g., Tom) might intercept their communication.

### Normal Communication
- Without cryptography:
  - Messages can be intercepted and read during transit.
- With cryptography:
  - Messages are scrambled (ciphertext) and can only be understood by someone with the key.

---

## The Key Exchange Problem
- **Challenge**:
  - How do Alice and Bob agree on an encryption key without Tom intercepting it?
- **Solution**:
  - The **Diffie-Hellman Key Exchange**.

---

## Diffie-Hellman Key Exchange
- **Overview**:
  - Developed by Diffie, Hellman, and Merkle.
  - Allows secure key sharing over an insecure channel.
- **Process**:
  1. Agree on public values:
     - Prime number (`p`) and generator (`g`).
  2. Choose private numbers:
     - Alice: `a`, Bob: `b`.
  3. Exchange public numbers:
     - Alice: `A = g^a mod p`.
     - Bob: `B = g^b mod p`.
  4. Compute shared key (`K`):
     - Alice: `K = B^a mod p`.
     - Bob: `K = A^b mod p`.

---

## Real-World Example
- **Values**:
  - `p = 23`, `g = 5`, Alice’s private number `a = 6`, Bob’s private number `b = 15`.
- **Steps**:
  - Alice computes: `A = 5^6 mod 23 = 8`.
  - Bob computes: `B = 5^15 mod 23 = 19`.
  - Exchange `A` and `B`.
  - Compute shared key:
    - Alice: `K = 19^6 mod 23 = 2`.
    - Bob: `K = 8^15 mod 23 = 2`.

---

## Attacks on Diffie-Hellman
1. **Discrete Logarithm Problem**:
   - Solving `g^x mod p = A` for `x` is computationally hard with large primes.
2. **Brute Force**:
   - Testing all values for `x` is infeasible with large primes.
3. **Pre-Computations**:
   - Creating large tables of possible values is impractical for long keys.
4. **Mathematical Algorithms**:
   - Techniques like Baby-Step Giant-Step, Pollard’s Rho, and Number Field Sieve reduce complexity but require significant resources.

---

## Defenses Against Attacks
1. **Use Large Primes**:
   - 2048-bit or larger primes make attacks infeasible.
2. **Elliptic Curve Cryptography (ECC)**:
   - Provides equivalent security with smaller keys.
3. **Post-Quantum Cryptography**:
   - Research focuses on defending against quantum computers.

---

## Key Points to Remember
1. The shared key is never transmitted directly.
2. Both parties compute the shared key independently.
3. Even if public data is intercepted, the key cannot be derived without solving the Discrete Logarithm Problem.