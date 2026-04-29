*This project has been created as part of the 42 curriculum by aelsafi.*

# libft

## Description
`libft` is a foundational C programming project. The objective is to write a custom, static C library containing re-implementations of standard `libc` functions, as well as a set of additional utility functions for string manipulation, memory management, and data structures. This library serves as a robust toolkit that will be continuously utilized and expanded upon in future C projects.

---

## Features

### Mandatory Part
The core of the library is divided into two main categories:

**1. Libc Functions:**
Standard C library functions written from scratch to match their original behaviors.
*   **Character classification & conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
*   **String manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
*   **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
*   **Conversion & Allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`

**2. Additional Utility Functions:**
Custom functions designed to handle common tasks not strictly found in `libc`.
*   **String generation/modification:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
*   **Function mapping/iteration:** `ft_strmapi`, `ft_striteri`
*   **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part
The bonus section introduces functions specifically designed to manage and manipulate singly linked lists, utilizing the `t_list` structure defined in `libft.h`.
*   `ft_lstnew`: Creates a new list node.
*   `ft_lstadd_front`: Adds a new node to the beginning of the list.
*   `ft_lstsize`: Returns the total number of nodes in the list.
*   `ft_lstlast`: Returns the final node of the list.
*   `ft_lstadd_back`: Adds a new node to the end of the list.
*   `ft_lstdelone`: Frees the memory of a specific node's content.
*   `ft_lstclear`: Deletes and frees the entire list.
*   `ft_lstiter`: Iterates through the list, applying a function to the content of each node.
*   `ft_lstmap`: Iterates through the list, applying a function to create an entirely new list.

---

## Instructions

### Compilation
The library is managed via the provided `Makefile`. It has been strictly formatted to ensure smooth compilation and specifically vetted to be free of invisible non-breaking spaces that frequently cause standard compilation failures.

Run the following rules from your terminal to compile:

*   `make` or `make all`: Compiles the mandatory functions and generates the static library `libft.a`.
*   `make bonus`: Compiles both the mandatory and bonus functions into `libft.a`.
*   `make clean`: Removes all compiled `.o` object files.
*   `make fclean`: Executes `clean` and also removes the `libft.a` binary file.
*   `make re`: Executes `fclean` followed by `make` to completely rebuild the library.

### Usage
To integrate this library into your own projects, include the header file in your C source files:

```c
#include "libft.h"
```

Then, when compiling your project files, link the static library:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

"this read me is not essential, it was added for educational purposes"