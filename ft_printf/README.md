*This project has been created as part of the 42 curriculum by giparent.*

## Description
`ft_printf` is a custom implementation of the standard C library function `printf`. The main goal of this project is to learn how to handle variadic functions in C (functions that accept a variable number of arguments). The function mimics the original behavior of `printf`, processing a format string and printing types such as characters (`%c`), strings (`%s`), pointers (`%p`), decimals (`%d`/`%i`), unsigned integers (`%u`), and hexadecimals (`%x`/`%X`).

## Instructions

### Compilation
To compile the library, run the following command in the root directory:
```bash
make
```
This will generate the static library file `libftprintf.a`.

### Clean-up rules
* `make clean`: Removes all temporary object files (`.o`).
* `make fclean`: Removes object files and the compiled library (`libftprintf.a`).
* `make re`: Forcefully recompiles the entire project from scratch.

### Execution / Usage
To use this library in your own C project, include the header and compile it with the library file:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, 42! Numerical test: %d\n", 42);
    return (0);
}
```
Compile your code like this:
```bash
cc main.c libftprintf.a -o test_program
```

## Technical Choices, Algorithms and Data Structures
* **Data Structure:** The project uses the `va_list` structure provided by `<stdarg.h>` to retrieve a variable number of arguments. The format string is parsed as a character array using index-based traversal.
* **Algorithm Choice:** A modular approach was chosen. The main `ft_printf` function iterates through the format string; when it encounters a `%` character, it delegates to a dispatcher function (`handle_format`) that identifies the conversion specifier and calls the appropriate printing function (e.g., `print_hex`, `print_nbr`, `print_str`). Each printing function returns the number of characters written, and these counts are accumulated to produce the final return value. Recursive digit printing is used for numerical conversions (`%d`, `%u`, `%x`) to output digits in the correct left-to-right order. This approach avoids code duplication, keeps memory allocations at zero (all output goes directly through the `write` system call), and makes the codebase easily extensible for new format specifiers.

## Resources
* [man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html) — behavior reference for the original function
* [man 2 write](https://man7.org/linux/man-pages/man2/write.2.html) — the only authorized output function
* [man 3 stdarg](https://man7.org/linux/man-pages/man3/stdarg.3.html) — documentation for variadic macros

### AI Usage Disclosure
Generative AI (Claude/Anthropic) was used during this project for the following specific tasks:
1. **Conceptual Explanation:** Provided explanations of how variadic functions work in C, including the `va_list` mechanism and type promotion rules for arguments passed through `...`.
2. **Code Debugging:** Assisted in identifying syntax errors such as missing operators (`!=` vs `!`), mismatched braces in nested `if`/`else` blocks, and missing semicolons.
3. **Architecture Guidance:** Helped structure the project by suggesting the dispatcher pattern (`handle_format`) and the separation of printing functions across two files to comply with norminette's function-per-file limit.
4. **Defense Preparation:** Provided line-by-line explanations of the completed code to prepare for peer evaluation.
