*This project has been created as part of the 42 curriculum by foasman.*

# Libft

## Description

Libft is the foundational project of the 1337 school core program. Its core purpose is to rewrite a collection of standard C library functions completely from scratch.

By implementing these low-level functions manually, this project builds a firm grasp of memory management, pointer logic, and efficient problem-solving in C. The final product is a custom static library (`libft.a`) designed to serve as a reliable toolkit for upcoming programming challenges.

## Library Overview

The codebase is structured into three distinct sections:

- **Part 1 — Libc Functions:** Custom equivalents of standard C library functions, handling character checks, string manipulation, and memory operations (e.g., `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_calloc`).
- **Part 2 — Additional Functions:** Specialized utilities that extend standard capabilities, enabling efficient string slicing, joining, splitting, and number-to-text conversions (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`).
- **Bonus — Linked Lists:** A complete data structure module for creating nodes, inserting elements, managing memory safely, and performing iterative or mapped operations on singly linked lists (`t_list`).

## Instructions

### Compilation

Navigate to the project root directory in your terminal and use the provided `Makefile`:

| Command | Description |
|:---|:---|
| `make` | Compiles the source files and creates the static library `libft.a`. |
| `make clean` | Removes all intermediate object files (`.o`). |
| `make fclean` | Removes object files and the `libft.a` archive. |
| `make re` | Performs a full clean and rebuilds the library from scratch. |

### Usage

To use the library in your code, include the header file at the top of your C source file:

```c
#include "libft.h"
```

If your source file (`main.c`), header (`libft.h`), and library (`libft.a`) reside in the same directory, compile and link your program using:

```bash
cc main.c libft.a -o program
./program
```

## Resources

### Learning Resources

- **Manual Pages (`man 3`):** Essential references for studying the behavior, parameters, and return values of standard library functions.
- **Documentation and Technical Articles:** C reference guides and programming tutorials for deepening your understanding of the language.
- **42 Peers:** Collaborative discussions, peer code reviews, and shared troubleshooting strategies.

### AI Usage

I used AI as an additional learning resource when I encountered difficulties that I could not resolve independently or with the help of my peers.

