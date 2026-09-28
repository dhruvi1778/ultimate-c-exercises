<div align="center">

# Ultimate C Exercises

**400+ hands-on C exercises, from "Hello World" to pointers, linked lists, and function pointers.**

[![Stars](https://img.shields.io/github/stars/justshobee/ultimate-c-exercises?style=for-the-badge)](https://github.com/justshobee/ultimate-c-exercises/stargazers)
[![Exercises](https://img.shields.io/badge/Exercises-400%2B-brightgreen?style=for-the-badge)](#-topics-at-a-glance)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](#)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-blue?style=for-the-badge)](#-contributing)

[Quick Start](#-quick-start) · [Topics](#-topics-at-a-glance) · [Learning Path](#-learning-path) · [Study Tips](#-study-tips) · [Contributing](#-contributing)

</div>

---

## 📖 About

This repository is a structured collection of C programming exercises. Each topic lives in its own numbered folder, and difficulty increases as you move forward, so you can follow the folders in order like a course.

**Who is it for?**

| You are... | Start here |
|---|---|
| A complete beginner | `01_c_basics`, then follow the order |
| Comfortable with basics | Jump to `05_arrays` or `07_pointers` |
| Preparing for interviews / 42-style pools | Focus on `06_strings`, `07_pointers`, `11_linked_lists` |

---

## 🚀 Quick Start

### 1. Install a C compiler

| OS | Command |
|---|---|
| Ubuntu / Debian | `sudo apt-get install gcc` |
| Fedora | `sudo dnf install gcc` |
| macOS | `xcode-select --install` |
| Windows | Install [MinGW](https://www.mingw-w64.org/) or use [WSL](https://learn.microsoft.com/windows/wsl/) |

### 2. Clone the repo

```bash
git clone https://github.com/justshobee/ultimate-c-exercises.git
cd ultimate-c-exercises
```

### 3. Open an exercise, compile, run

```bash
cd 01_c_basics/ex01
gcc -Wall -Wextra -std=c99 solution.c -o solution
./solution
```

> 💡 Always compile with `-Wall -Wextra`. The warnings teach you a lot.

<details>
<summary><b>More compile options (click to expand)</b></summary>

```bash
# Clang instead of GCC
clang -Wall -Wextra solution.c -o solution

# Debug symbols (for gdb)
gcc -g -Wall -Wextra solution.c -o solution

# Memory error detection (great for pointers)
gcc -g -fsanitize=address solution.c -o solution
valgrind ./solution

# Multi-file project
gcc main.c utils.c -o program
```

</details>

---

## 🗂️ Topics at a Glance

| # | Folder | Topics | Exercises |
|:-:|---|---|:-:|
| 01 | [`01_c_basics`](./01_c_basics) | Syntax, `printf`/`scanf`, operators, if/else | 48 |
| 02 | [`02_variables_data_types`](./02_variables_data_types) | Types, `sizeof`, casting, scope | 21 |
| 03 | [`03_loops`](./03_loops) | `for`, `while`, `do-while`, nested loops, patterns | 28 |
| 04 | [`04_functions`](./04_functions) | Parameters, return values, recursion | 25 |
| 05 | [`05_arrays`](./05_arrays) | 1D/2D arrays, sorting, searching | 40 |
| 06 | [`06_strings`](./06_strings) | Char arrays, `<string.h>`, manipulation | 30 |
| 07 | [`07_pointers`](./07_pointers) | `&`, `*`, arithmetic, `malloc`/`free` | 99 |
| 08 | [`08_structs_unions`](./08_structs_unions) | `struct`, `union`, `typedef`, nested types | 22 |
| 09 | [`09_file_handling`](./09_file_handling) | Text/binary files, `fseek`, error checks | 21 |
| 10 | [`10_intermediate`](./10_intermediate) | Preprocessor, `argc/argv`, headers, bitwise, `enum` | 44 |
| 11 | [`11_linked_lists`](./11_linked_lists) | Nodes, insert/delete, traversal, reversal | XX |
| 12 | [`12_function_pointers`](./12_function_pointers) | Callbacks, function tables, `qsort`-style code | XX |
| | | **Total** | **400+** |

---

## 🧭 Learning Path

```
Basics ─▶ Variables ─▶ Loops ─▶ Functions ─▶ Arrays ─▶ Strings
                                                          │
   ┌──────────────────────────────────────────────────────┘
   ▼
Pointers ─▶ Structs/Unions ─▶ File Handling ─▶ Intermediate ─▶ Linked Lists ─▶ Function Pointers
```

<details>
<summary><b>01 · C Basics</b> — <i>1–2 weeks</i></summary>

Hello World, program structure, `printf()` / `scanf()`, comments, arithmetic/relational/logical operators, `if / else`.

**Best for:** absolute beginners.
</details>

<details>
<summary><b>02 · Variables & Data Types</b> — <i>1 week</i></summary>

Declaration and initialization, `int` / `float` / `double` / `char`, `sizeof`, type casting, variable scope.

**Best for:** understanding how data is stored in memory.
</details>

<details>
<summary><b>03 · Loops</b> — <i>1–2 weeks</i></summary>

`for`, `while`, `do-while`, `break` / `continue`, nested loops, pattern printing.

**Best for:** repetition and iteration, needed before arrays.
</details>

<details>
<summary><b>04 · Functions</b> — <i>1–2 weeks</i></summary>

Declaration vs definition, parameters, return types, scope and lifetime, recursion.

**Best for:** writing modular, reusable code.
</details>

<details>
<summary><b>05 · Arrays</b> — <i>2–3 weeks</i></summary>

1D and 2D arrays, initialization, passing arrays to functions, sorting and searching algorithms.

**Best for:** managing collections of data.
</details>

<details>
<summary><b>06 · Strings</b> — <i>2 weeks</i></summary>

Character arrays, `fgets()` / `puts()`, `strlen` / `strcpy` / `strcat` / `strcmp`, writing your own string functions.

**Best for:** text processing.

> ⚠️ Avoid `gets()`. It is unsafe and removed from the C11 standard. Use `fgets()`.
</details>

<details>
<summary><b>07 · Pointers</b> — <i>3–4 weeks</i></summary>

Address-of and dereference, pointer arithmetic, arrays and pointers, strings as pointers, pointers to pointers, dynamic memory (`malloc`, `calloc`, `realloc`, `free`), common pitfalls and debugging.

**Best for:** unlocking the real power of C. This is the biggest section, so take your time.
</details>

<details>
<summary><b>08 · Structs & Unions</b> — <i>2 weeks</i></summary>

Defining structs, accessing members, nested structs, arrays of structs, pointers to structs, unions vs structs, `typedef`.

**Best for:** building custom data types.
</details>

<details>
<summary><b>09 · File Handling</b> — <i>2 weeks</i></summary>

Modes (`r`, `w`, `a`, `rb`, `wb`), `fprintf` / `fscanf` / `fgets` / `fputs`, `fread` / `fwrite`, `feof` / `perror`, `fseek` / `ftell` / `rewind`.

**Best for:** saving data beyond program runtime.
</details>

<details>
<summary><b>10 · Intermediate Programming</b> — <i>2–3 weeks</i></summary>

`#define`, `#ifdef` / `#ifndef`, command-line arguments, multi-file projects and header files, bitwise operators (`& | ^ ~ << >>`), `enum`.

**Best for:** real-world project structure.
</details>

<details>
<summary><b>11 · Linked Lists</b></summary>

Node structures, insertion, deletion, traversal, searching, reversing, and memory management for dynamic lists.

**Best for:** first step into data structures. Requires solid pointers and structs.
</details>

<details>
<summary><b>12 · Function Pointers</b></summary>

Declaring and calling function pointers, callbacks, arrays of function pointers, passing functions as arguments.

**Best for:** flexible, generic C code.
</details>

---

## 📁 Project Structure

```
ultimate-c-exercises/
├── 01_c_basics/
├── 02_variables_data_types/
├── 03_loops/
├── 04_functions/
├── 05_arrays/
├── 06_strings/
├── 07_pointers/
├── 08_structs_unions/
├── 09_file_handling/
├── 10_intermediate/
├── 11_linked_lists/
├── 12_function_pointers/
└── README.md
```

Each exercise folder contains the `.c` source file(s) for that exercise.

---

## 🎯 Study Tips

- **Understand before moving on.** Know the "why", not just the syntax.
- **Type the code yourself.** No copy-paste; it builds muscle memory.
- **Practice daily.** 30–60 minutes beats a 5-hour weekend session.
- **Test edge cases.** Empty input, zero, negative numbers, very large values.
- **Debug systematically.** Trace with `printf()`, then use `gdb` or `valgrind`.
- **Read the compiler messages.** They are trying to help you.
- **Revisit old exercises.** Refactor them with what you know now.

---

## 🛠️ Troubleshooting

| Problem | Fix |
|---|---|
| `gcc: command not found` | Install a compiler (see [Quick Start](#-quick-start)) |
| `undefined reference to ...` | Compile **all** the `.c` files: `gcc main.c utils.c -o program` |
| `Segmentation fault` | Check pointers, array bounds, and uninitialized variables. Run with `valgrind` or `-fsanitize=address` |
| Weird output / garbage values | Initialize your variables and compile with `-Wall -Wextra` |

---

## ✅ Progress Tracker

Copy this into your own notes or fork and tick the boxes.

- [ ] 01 · C Basics
- [ ] 02 · Variables & Data Types
- [ ] 03 · Loops
- [ ] 04 · Functions
- [ ] 05 · Arrays
- [ ] 06 · Strings
- [ ] 07 · Pointers
- [ ] 08 · Structs & Unions
- [ ] 09 · File Handling
- [ ] 10 · Intermediate
- [ ] 11 · Linked Lists
- [ ] 12 · Function Pointers

---

## 🤝 Contributing

Contributions are welcome: new exercises, fixes, better explanations, or clearer examples.

1. **Fork** the repository
2. **Create a branch:** `git checkout -b feature/your-feature`
3. **Make your changes**
4. **Commit:** `git commit -m "feat: add exercise on <topic>"`
5. **Push:** `git push origin feature/your-feature`
6. **Open a Pull Request**

### Guidelines

- Put new exercises in the matching topic folder, using the next number (e.g. `ex25`).
- Write clean, commented code with consistent naming.
- Include a short problem statement and example input/output in the file header.
- Make sure it compiles without warnings using `gcc -Wall -Wextra -std=c99`.
- Test your exercise before submitting.

### Suggested exercise header

```c
/*
 * Exercise: <short title>
 * Topic:    <folder / concept>
 * Level:    Easy | Medium | Hard
 *
 * Task:
 *   <what the program must do>
 *
 * Example:
 *   Input:  5
 *   Output: 120
 */
```

---

## 💬 Support

- 🐛 **Bug or mistake?** [Open an issue](https://github.com/justshobee/ultimate-c-exercises/issues)
- 💡 **Idea or suggestion?** Open an issue or a discussion.

---

## 🙏 Acknowledgments

Thanks to the open-source community for tools like GCC and Clang, and to every contributor and learner who helps improve this repo.

---

<div align="center">

**If this repo helps you, please ⭐ star it!**

Made with dedication for C learners worldwide · by [justshobee](https://github.com/justshobee)

</div>
