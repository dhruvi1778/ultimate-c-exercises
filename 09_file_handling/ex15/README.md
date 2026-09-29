# Exercise 15: Reverse a File
 
## Description
Read a file and write its content **in reverse byte order** into a new file `reversed.txt`. You must use `lseek()` to start from the end of the file (`SEEK_END`) and move backwards, reading one byte at a time. The input filename is given as the first command-line argument.
 
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `data.txt`
- `reversed.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`, `lseek`
## Examples
### Given (`data.txt`)
```text
Hello 42
```
(the file ends with a newline)
 
### Expected content of `reversed.txt`
```text
 
24 olleH
```
(the first character of the file is the newline, then `24 olleH`)
 
---
