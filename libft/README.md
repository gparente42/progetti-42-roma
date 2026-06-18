*This project has been created as part of the 42 curriculum by <giparent>.*

# libft

## Description
libft is a custom C library created as part of the 42 curriculum.
The goal is to re-implement a set of standard C library functions
from scratch, without using any external libraries. This project
builds a solid understanding of how fundamental C functions work
at a low level, and produces a reusable library for future 42 projects.

The library is divided into three parts:
- **Part 1**: Re-implementation of standard libc functions (string
manipulation, memory management, character classification)
- **Part 2**: Additional utility functions not present in libc
(substr, strjoin, split, itoa, etc.)
- **Part 3 (Bonus)**: Functions to manipulate linked lists

## Instructions

### Compilation
```bash
make        # compiles the mandatory functions
make bonus  # compiles mandatory + linked list functions
```

### Usage
Include the header and link the library in your project:
```c
#include "libft.h"
```
```bash
gcc your_file.c -L. -lft -o your_program
```

### Cleanup
```bash
make clean   # removes .o files
make fclean  # removes .o files and libft.a
make re      # recompiles everything from scratch
```

## Functions

### Part 1 - Libc functions
| Function | Description |
|---|---|
| ft_isalpha | checks if character is alphabetic |
| ft_isdigit | checks if character is a digit |
| ft_isalnum | checks if character is alphanumeric |
| ft_isascii | checks if character is ASCII |
| ft_isprint | checks if character is printable |
| ft_strlen | returns length of a string |
| ft_memset | fills memory with a constant byte |
| ft_bzero | zeros out memory |
| ft_memcpy | copies memory area |
| ft_memmove | copies memory area handling overlap |
| ft_memchr | searches memory for a character |
| ft_memcmp | compares memory areas |
| ft_strlcpy | copies string with size limit |
| ft_strlcat | concatenates string with size limit |
| ft_strchr | finds first occurrence of character |
| ft_strrchr | finds last occurrence of character |
| ft_strncmp | compares n characters of two strings |
| ft_strnstr | finds substring within n characters |
| ft_atoi | converts string to integer |
| ft_toupper | converts to uppercase |
| ft_tolower | converts to lowercase |
| ft_calloc | allocates and zeroes memory |
| ft_strdup | duplicates a string |

### Part 2 - Additional functions
| Function | Description |
|---|---|
| ft_substr | extracts a substring |
| ft_strjoin | concatenates two strings |
| ft_strtrim | trims characters from string edges |
| ft_split | splits string by delimiter |
| ft_itoa | converts integer to string |
| ft_strmapi | applies function to each character |
| ft_striteri | applies function to each character by address |
| ft_putchar_fd | writes character to file descriptor |
| ft_putstr_fd | writes string to file descriptor |
| ft_putendl_fd | writes string + newline to file descriptor |
| ft_putnbr_fd | writes integer to file descriptor |

### Part 3 - Bonus (Linked list)
| Function | Description |
|---|---|
| ft_lstnew | creates a new node |
| ft_lstadd_front | adds node at the beginning |
| ft_lstsize | counts nodes in the list |
| ft_lstlast | returns the last node |
| ft_lstadd_back | adds node at the end |
| ft_lstdelone | frees one node |
| ft_lstclear | frees the entire list |
| ft_lstiter | iterates and applies function |
| ft_lstmap | creates new list by applying function |

## Resources
- [42 Norm](https://github.com/42School/norminette) - coding standard used in this project
- [C Documentation](https://en.cppreference.com/w/c) - reference for original libc functions
- [man7.org](https://man7.org/linux/man-pages/) - Linux man pages for function specifications

### AI Usage
AI (Claude by Anthropic) was used to:
- Help understand the behavior of certain libc functions
- Verify edge cases in implementations
- Assist with debugging and norminette compliance
