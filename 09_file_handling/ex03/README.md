# Exercise 3: Append Data to a File
 
## Description
Open the existing file `data.txt` (created in Exercise 1) in **append mode** (`O_APPEND`) and add two new lines at the end: the date and a status message.
 
- The date is passed to the program as the **first command-line argument** (format `YYYY-MM-DD`), for example: `./a.out $(date +%F)`.
- If the argument is missing, print `Usage: ./a.out YYYY-MM-DD` to stderr and return `1`.
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `data.txt`
## Allowed Functions
- `open`, `write`, `close`
## Examples
### Command
```text
./a.out 2025-10-15
```
 
### Content of `data.txt` after running
```text
Name: Alice Johnson
Age: 30 years
Date Appended: 2025-10-15
Status: Successfully appended.
```
