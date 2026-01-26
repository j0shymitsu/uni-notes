1. Rosetta Stone Method:
    - Write simple C programs and study the assembly:
    ```bash
    gcc -S program.c -o program.s
    objdump -d program
    ```
    - Start with something like:
    ```C
    int x = 5; return x;
    ```

2. Hands on Practice:
    - **Networking**: Use nmap, Wireshark, tcpdump on VMs
    - **Assembly**: Write programs in assembly!
    - **Syscalls**: Run ```bash strace ls``` to see syscalls in action
    - **GDB**: Step through code and watch registers change

3. Spaced Repition:
    - Anki flashcards for ports, registers, syscall order

4. Active Recall:
    - Test myself before looking at answers
    - Explain concepts as if teaching someone
    - 