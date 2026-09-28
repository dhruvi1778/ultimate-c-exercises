# Exercise 8: Display a Specific Line of a File
 
## Description
Prompt the user to enter a line number `N` (read it from stdin with `read(0, ...)` and convert it with your own `ft_atoi`). Then read `data.txt` (from Exercise 3) and display the content of the `N`th line.
 
If the file has fewer than `N` lines, print `Error: line N does not exist.` to stderr.
 
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
Enter the line number to display: 2
 
--- Line 2 ---
Age: 30 years
--------------
```

