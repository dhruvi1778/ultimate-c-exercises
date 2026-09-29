# Exercise 17: Tab to Spaces Conversion
 
## Description
Read a file `tabbed.txt` and replace every tab character (`'\t'`) with exactly **four space characters** (`"    "`), saving the result to `spaced.txt`. All other characters stay unchanged.
 
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `tabbed.txt`
- `spaced.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Given (`tabbed.txt`, `→` represents a tab character)
```text
Name:→Alice→Johnson
Age:→30
```
 
### Expected Output (console)
```text
Tabs replaced with 4 spaces. Saved to 'spaced.txt'.
```
 
### Expected content of `spaced.txt`
```text
Name:    Alice    Johnson
Age:    30
```
