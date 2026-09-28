# Exercise 18: Simple Encryption (Caesar Cipher)
 
## Description
Implement a Caesar cipher with a **shift of 3** to encrypt the content of `plain.txt` and write the result to `encrypted.txt`.
 
- Only letters (`A-Z`, `a-z`) are shifted; all other characters are written unchanged.
- The shift wraps around the alphabet (`x` → `a`, `Y` → `B`).
- Uppercase stays uppercase, lowercase stays lowercase.
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `plain.txt`
- `encrypted.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Given (`plain.txt`)
```text
Name: Alice Johnson
Age: 30 years
```
 
### Expected content of `encrypted.txt`
```text
Qdph: Dolfh Mrkqvrq
Djh: 30 bhduv
```
