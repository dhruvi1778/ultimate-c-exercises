# Exercise 19: Simple Decryption (Caesar Cipher)
 
## Description
Implement the matching decryption for the file `encrypted.txt` created in **Exercise 18**. Read the encrypted file, shift every letter back by 3 (with wrap-around), and write the original text to `decrypted.txt`.
 
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `encrypted.txt`
- `decrypted.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Given (`encrypted.txt`)
```text
Qdph: Dolfh Mrkqvrq
Djh: 30 bhduv
```
 
### Expected content of `decrypted.txt`
```text
Name: Alice Johnson
Age: 30 years
```
