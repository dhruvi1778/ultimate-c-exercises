# Exercise 14: Replace Word in a File
 
## Description
Read a text file and replace **every whole-word, case-sensitive occurrence** of a word with a new word, saving the result to `modified.txt`. Spaces, tabs and newlines must be preserved exactly as in the original.
 
The program receives three command-line arguments:
 
```text
./a.out <input_file> <old_word> <new_word>
```
 
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `sample.txt`
- `modified.txt`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Command
```text
./a.out sample.txt the a
```
 
### Given (`sample.txt`)
```text
The mouse that the cat hit that the dog bit that the fly landed on ran away
```
 
### Expected content of `modified.txt`
```text
The mouse that a cat hit that a dog bit that a fly landed on ran away
```
 
> Note: `The` (capital T) is not replaced, because the match is case-sensitive.
