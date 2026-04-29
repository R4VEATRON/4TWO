*This project has been created as part of the 42 curriculum by aelsafi.*

# ft_printf

## Description
`ft_printf` is a project that involves recoding the highly versatile `printf` function from the standard C library. The primary objective is to learn how to handle variadic arguments (using `stdarg.h`) in C while gaining a deeper understanding of string formatting, state machines, and precise output manipulation. This custom function, `ft_printf`, seamlessly integrates into future projects whenever formatted printing is required.

---

## Features

### Supported Conversions
The library successfully implements the following mandatory conversion specifiers, matching the exact behavior of the original `printf`:

*   **`%c`** : Prints a single character.
*   **`%s`** : Prints a string (as defined by the common C convention).
*   **`%p`** : Prints a `void *` pointer argument in hexadecimal format.
*   **`%d`** : Prints a decimal (base 10) number.
*   **`%i`** : Prints an integer in base 10.
*   **`%u`** : Prints an unsigned decimal (base 10) number.
*   **`%x`** : Prints a number in hexadecimal (base 16) lowercase format.
*   **`%X`** : Prints a number in hexadecimal (base 16) uppercase format.
*   **`%%`** : Prints a literal `%` sign.

---

## Instructions

### Compilation
The project is managed via the provided `Makefile`. It compiles the source files into a static library named `libftprintf.a`.

Run the following rules from your terminal to compile:

*   `make` or `make all`: Compiles the source code and generates the static library `libftprintf.a`.
*   `make clean`: Removes all compiled `.o` object files.
*   `make fclean`: Executes `clean` and also removes the `libftprintf.a` binary file.
*   `make re`: Executes `fclean` followed by `make` to completely rebuild the library.

### Usage
To integrate `ft_printf` into your own projects, include the header file in your C source files:

```c
#include "ft_printf.h"
```

Then, when compiling your project files, link the static library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```

Example usage within your code:

```c
#include "ft_printf.h"

int main(void)
{
    int count;
    
    count = ft_printf("Hello %s! The answer is %d.\n", "World", 42);
    ft_printf("Characters printed: %d\n", count);
    return (0);
}
```

---

## Resources
*   **`man 3 printf`**: The definitive guide for standard formatting behaviors and edge cases.
*   **`stdarg.h` Documentation**: Essential for understanding how to initialize (`va_start`), traverse (`va_arg`), and clean up (`va_end`) variadic parameter lists in C.

"this readme isn't essential and was made for educational purposes"