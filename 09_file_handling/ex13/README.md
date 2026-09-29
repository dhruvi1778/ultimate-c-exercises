# Exercise 13: Search for a Word
 
## Description
Prompt the user to enter a filename and a target word (both read from stdin with `read(0, ...)`). Read the specified file and report how many times the target word appears.
 
Rules:
- Words are separated by spaces, tabs or newlines.
- The match is **exact and case-sensitive** (`Johnson` does not match `johnson` or `Johnsons`).
- Punctuation attached to a word is part of that word.
- If the file cannot be opened, print an error to stderr and return `1`.
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `data.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Expected Output
```text
Enter the filename: data.txt
Enter the word to search: Johnson
 
The word 'Johnson' appears 1 times in 'data.txt'.
```
