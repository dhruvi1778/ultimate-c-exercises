# Exercise 21: Determine File Size
 
## Description
Find and display the size of a given file in bytes. The filename is given as the first command-line argument. Use `lseek(fd, 0, SEEK_END)`, whose return value is the file size, and do **not** read the file content.
 
If the file cannot be opened, print an error to stderr and return `1`.
 
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `data.txt`
## Allowed Functions
- `open`, `lseek`, `write`, `close`
## Examples
### Command (using `data.txt` from Exercise 3)
```text
./a.out data.txt
```
 
### Expected Output
```text
The size of 'data.txt' is: 91 bytes
```
