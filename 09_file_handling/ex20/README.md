# Exercise 20: Write Student Record
 
## Description
Define a C `struct Student` containing `name` (string), `roll_number` (int) and `marks` (float). Read one student's data from the user (with `read(0, ...)` and your own parsing helpers), then write the **whole structure in binary form** to the file `students.dat` using a single `write(fd, &student, sizeof(struct Student))`.
 
> Why binary: text formatting of a `float` would require `printf`-style functions, which are forbidden. Writing the raw struct is the natural low-level approach with system calls.
 
Requirements:
- The name may contain spaces (read until newline).
- Marks are entered as a number, with or without a decimal part (`85` or `85.5`). Write your own `ft_atof`.
- `students.dat` must have a size of exactly `sizeof(struct Student)` bytes.
## Assignment File
- `solution.c`
## Expected Files
- `solution.c`
- `students.dat`
## Allowed Functions
- `open`, `read`, `write`, `close`
## Examples
### Given
```c
// Student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};
```
 
### Expected Output
```text
Enter Student Name: Jessa
Enter Roll Number: 25
Enter Marks: 85
Student record successfully written to students.dat.
```
