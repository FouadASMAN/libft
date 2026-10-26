# 🛠️ Libft Function Checklist & Mastery Tracker

This document tracks your progress through the **libft** project. Check off `[ ]` each function as you fully understand its internal mechanics, edge cases, and implementation details.

---

## 📌 Part 1: Libc Functions

### 1. Character Classification & Conversion
- [x] `int ft_isalpha(int c);` — Checks for an alphabetic character.
- [x] `int ft_isdigit(int c);` — Checks for a digit (0 through 9).
- [x] `int ft_isalnum(int c);` — Checks for an alphanumeric character (`ft_isalpha` || `ft_isdigit`).
- [x] `int ft_isascii(int c);` — Checks whether `c` fits into the ASCII character set (0 to 127).
- [x] `int ft_isprint(int c);` — Checks for any printable character including space (32 to 126).
- [x] `int ft_toupper(int c);` — Converts a lowercase letter to uppercase.
- [x] `int ft_tolower(int c);` — Converts an uppercase letter to lowercase.

### 2. Memory Manipulation
- [x] `void *ft_memset(void *s, int c, size_t n);` — Fills the first `n` bytes of memory with constant byte `c`.
- [x] `void ft_bzero(void *s, size_t n);` — Erases data in `n` bytes of memory by writing zeros (`\0`).
- [x] `void *ft_memcpy(void *dest, const void *src, size_t n);` — Copies `n` bytes from `src` to `dest` (non-overlapping).
- [x] `void *ft_memmove(void *dest, const void *src, size_t n);` — Safely copies `n` bytes handling overlapping memory regions.
- [x] `void *ft_memchr(const void *s, int c, size_t n);` — Scans memory block `s` for the first occurrence of byte `c`.
- [x] `int ft_memcmp(const void *s1, const void *s2, size_t n);` — Compares byte sequences `s1` and `s2` up to `n` bytes.

### 3. String Traversal & Inspection
- [x] `size_t ft_strlen(const char *s);` — Calculates the length of a string (excluding null-terminator).
- [x] `size_t ft_strlcpy(char *dst, const char *src, size_t size);` — Size-bounded string copy with null-termination guarantee.
- [x] `size_t ft_strlcat(char *dst, const char *src, size_t size);` — Size-bounded string concatenation.
- [x] `char *ft_strchr(const char *s, int c);` — Locates the first occurrence of character `c` in string `s`.
- [x] `char *ft_strrchr(const char *s, int c);` — Locates the last occurrence of character `c` in string `s`.
- [x] `int ft_strncmp(const char *s1, const char *s2, size_t n);` — Compares at most `n` characters of two strings.
- [x] `char *ft_strnstr(const char *big, const char *little, size_t len);` — Locates a substring in a string, where search is limited to `len` bytes.
- [x] `int ft_atoi(const char *nptr);` — Converts a string representation of an integer into an actual `int`.

### 4. Dynamic Memory Allocations
- [x] `void *ft_calloc(size_t nmemb, size_t size);` — Allocates memory for an array and initializes all bytes to zero.
- [x] `char *ft_strdup(const char *s);` — Duplicates a string by allocating dynamic memory with `malloc`.

---

## 📌 Part 2: Additional Functions

### 1. String Manipulation & Creation
- [ ] `char *ft_substr(char const *s, unsigned int start, size_t len);` — Extracts a substring from string `s`.
- [ ] `char *ft_strjoin(char const *s1, char const *s2);` — Concatenates two strings into a new heap-allocated string.
- [ ] `char *ft_strtrim(char const *s1, char const *set);` — Trims specified characters in `set` from beginning and end of `s1`.
- [ ] `char **ft_split(char const *s, char c);` — Splits string `s` into an array of strings using delimiter character `c`.
- [ ] `char *ft_itoa(int n);` — Converts an integer `n` into a null-terminated string representation.
- [ ] `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` — Applies function `f` to each character of `s` to create a new string.
- [ ] `void ft_striteri(char *s, void (*f)(unsigned int, char*));` — Applies function `f` in-place to each character of `s`.

### 2. File Descriptor Writers
- [ ] `void ft_putchar_fd(char c, int fd);` — Outputs character `c` to the given file descriptor.
- [ ] `void ft_putstr_fd(char *s, int fd);` — Outputs string `s` to the given file descriptor.
- [ ] `void ft_putendl_fd(char *s, int fd);` — Outputs string `s` followed by a newline `\n` to the given file descriptor.
- [ ] `void ft_putnbr_fd(int n, int fd);` — Outputs integer `n` to the given file descriptor.

---

## 📌 Part 3: Bonus Functions (Linked Lists)

### Structure Definition
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

### Node Operations
- [ ] `t_list *ft_lstnew(void *content);` — Allocates and initializes a new list node.
- [ ] `void ft_lstadd_front(t_list **lst, t_list *new);` — Adds node `new` at the beginning of the list.
- [ ] `int ft_lstsize(t_list *lst);` — Counts the number of nodes in a list.
- [ ] `t_list *ft_lstlast(t_list *lst);` — Returns the last node of the list.
- [ ] `void ft_lstadd_back(t_list **lst, t_list *new);` — Adds node `new` at the end of the list.
- [ ] `void ft_lstdelone(t_list *lst, void (*del)(void *));` — Frees memory of a node's content using `del`, then frees the node.
- [ ] `void ft_lstclear(t_list **lst, void (*del)(void *));` — Deletes and frees given node and all its successors.
- [ ] `void ft_lstiter(t_list *lst, void (*f)(void *));` — Iterates through the list and applies `f` to the content of each node.
- [ ] `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` — Iterates list, applies `f` to content, creates a new list.

---

## 📌 Build System & Metadata Requirements
- [ ] **Header file (`libft.h`):** Inclusion guards (`#ifndef LIBFT_H`), structs, includes, and prototypes.
- [ ] **Makefile:** Rules for `$(NAME)` (`libft.a`), `all`, `clean`, `fclean`, `re`, and `bonus`. No unnecessary relinking.
- [ ] **README.md:** Standard mandatory disclaimer format included on the first line.
