*This project has been created as part of the 42 curriculum by rmandimb.*

# libft

## Description

libft is a custom C library that reimplements a subset of the standard C library
(libc), along with additional utility functions and linked list manipulation tools.
The purpose of this project is to develop a deep understanding of low-level
programming concepts such as memory management, pointer arithmetic, string
manipulation, and basic data structures.

In this version of the project, all functions including those formerly classified
as bonus are mandatory. The library is divided into three main parts:
- Libc reimplementations
- Additional utility functions
- Linked list functions

---

## Instructions

### Compilation

To compile the library, run:
```bash
make
```

This will generate a static library named `libft.a`.

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

### Usage

Include the header file in your source code:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc your_file.c -L. -lft
```

---

## Library Overview

### Part 1 – Libc Functions

#### ft_isalpha

Checks whether a character is an alphabetical letter (A–Z or a–z).

#### ft_isdigit

Checks whether a character is a digit (0–9).

#### ft_isalnum

Checks whether a character is alphanumeric (letter or digit).

#### ft_isascii

Checks whether a character belongs to the ASCII character set (0–127).

#### ft_isprint

Checks whether a character is printable, including space.

#### ft_strlen

Returns the length of a null-terminated string, excluding the terminating `\0`.

#### ft_memset

Fills a block of memory with a specified byte value and returns the original pointer.

#### ft_bzero

Sets a block of memory to zero. Equivalent to `ft_memset` with a value of 0.

#### ft_memcpy

Copies a block of memory from source to destination. Behavior is undefined if the
memory areas overlap.

#### ft_memmove

Copies a block of memory from source to destination while correctly handling
overlapping memory areas.

#### ft_strlcpy

Copies a string into a destination buffer of limited size, ensuring null-termination.
Returns the total length of the source string.

#### ft_strlcat

Appends a string to a destination buffer of limited size. Returns the total length
of the string it tried to create.

#### ft_toupper

Converts a lowercase letter to uppercase if applicable.

#### ft_tolower

Converts an uppercase letter to lowercase if applicable.

#### ft_strchr

Finds the first occurrence of a character in a string, including the terminating null
byte if searched.

#### ft_strrchr

Finds the last occurrence of a character in a string.

#### ft_strncmp

Compares two strings up to `n` characters.

#### ft_memchr

Searches for a byte value in a block of memory.

#### ft_memcmp

Compares two memory blocks byte by byte.

#### ft_strnstr

Searches for a substring within a string, limited to a maximum length.

#### ft_atoi

Converts a string to an integer, handling optional whitespace and sign.

#### ft_calloc

Allocates memory for an array and initializes all bytes to zero.

#### ft_strdup

Allocates memory and returns a duplicate of a string.

---

### Part 2 – Additional Functions

#### ft_substr

Allocates and returns a substring from a string, starting at a given index and limited
to a specified length. Returns an empty string if the start index exceeds the string
length.

#### ft_strjoin

Allocates and returns a new string resulting from the concatenation of two strings.

#### ft_strtrim

Allocates and returns a copy of a string with specified characters removed from the
beginning and end.

#### ft_split

Splits a string into an array of strings using a specified delimiter. The array is
null-terminated.

#### ft_itoa

Converts an integer into a newly allocated string representation.

#### ft_strmapi

Applies a function to each character of a string and returns a new string containing
the results.

#### ft_striteri

Applies a function to each character of a string, passing the index as an argument.
The string is modified in place.

#### ft_putchar_fd

Writes a character to a given file descriptor.

#### ft_putstr_fd

Writes a string to a given file descriptor.

#### ft_putendl_fd

Writes a string followed by a newline to a given file descriptor.

#### ft_putnbr_fd

Writes an integer to a given file descriptor.

---

### Part 3 – Linked List Functions

The linked list is based on the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### ft_lstnew

Creates a new list element initialized with the given content.

#### ft_lstadd_front

Adds an element at the beginning of a list.

#### ft_lstsize

Returns the number of elements in a list.

#### ft_lstlast

Returns the last element of a list.

#### ft_lstadd_back

Adds an element at the end of a list.

#### ft_lstdelone

Deletes a single list element using a provided function to free its content.

#### ft_lstclear

Deletes and frees all elements of a list.

#### ft_lstiter

Iterates over a list and applies a function to each element’s content.

#### ft_lstmap

Creates a new list by applying a function to each element of an existing list.
If allocation fails, all allocated elements are properly freed.

---

## Resources
- Youtube tutorial from Oceano https://youtube.com/@onaeco?si=F4BtfPAoRImIGMXe

- Guide from gitbook https://42-cursus.gitbook.io/guide

- Documentation from geeksforgeeks about c programming https://www.geeksforgeeks.org/c/c-programming-language/
### References

* The GNU C Library documentation
* Linux manual pages (`man memset`, `man malloc`, etc.)
* 42 subject documentation

### Use of AI

AI tools were used to:

* Clarify the expected behavior of standard C functions
* Identify edge cases and undefined behavior
* Improve the precision and structure of documentation
* To test all of the functions in a main.c

## Usage Example

```c
//main.c

#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello libft!");
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

## Technical Choices

- The library is written in pure C and follows the 42 coding standards.
- No external libraries are used; all functions are implemented from scratch.
- Memory management is handled explicitly, with careful use of `malloc`, `free`,
  and protection against common issues such as memory leaks and integer overflows.
- Functions manipulating memory operate on `unsigned char` to ensure correct
  byte-level behavior and portability.
- Defensive programming is applied by validating inputs (e.g., NULL pointers)
  whenever required by the function contract.
- The library is organized into logical groups (memory, strings, characters,
  allocation, file descriptors, and linked lists) to improve readability and reuse.

## Features

- Reimplementation of essential standard C library functions.
- Memory manipulation utilities (copying, moving, comparing, and setting memory).
- String handling functions for safe copying, concatenation, searching, and
  transformation.
- Character testing and conversion functions.
- Dynamic memory allocation helpers.
- Output functions supporting file descriptors.
- Bonus implementation of singly linked list utilities for data structure handling.
- Designed as a reusable foundation for future C projects.

## AUTHOR
rmandimb
Student at 42 shcool.
