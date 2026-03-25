# ft_printf

> Because ft_putnbr and ft_putstr aren't enough.

[![norminette](https://img.shields.io/badge/norminette-100%25-brightgreen)](https://github.com/42School/norminette)
[![42](https://img.shields.io/badge/42-cursus-blue)](https://42.fr)

## 📖 Introduction

The ft_printf project at 42 is a rite of passage. You are tasked with recoding the standard libc `printf` function. This project teaches you about **variadic functions** in C (`stdarg.h`), how to parse complex strings, and how to manage a project that requires a high degree of extensibility.

> **Key takeaway:** A well-structured ft_printf makes future 42 projects much easier to debug.

---

## 🎯 Project Objectives

- Understand variadic functions and how to handle an unknown number of arguments
- Implement string parsing and formatting logic
- Manage memory efficiently without leaks
- Create a reusable library for future projects
- Follow the 42 Norm coding standards

---

## 🛠️ Technical Considerations

### Function Prototype
```c
int ft_printf(const char *format, ...);
```
## Allowed External Functions

| Function | Purpose |
|----------|---------|
| `malloc` | Dynamic memory allocation |
| `free` | Memory deallocation |
| `write` | Output to file descriptors |
| `va_start` | Start variadic argument iteration |
| `va_arg` | Fetch next variadic argument |
| `va_copy` | Copy variadic argument list |
| `va_end` | Cleanup variadic argument list |

## 📦 Supported Conversions

Your implementation must handle the following format specifiers:

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Prints a single character | `ft_printf("%c", 'A')` → `A` |
| `%s` | Prints a string | `ft_printf("%s", "Hello")` → `Hello` |
| `%p` | Prints a `void *` pointer in hexadecimal | `ft_printf("%p", ptr)` → `0x7fff...` |
| `%d` | Prints a decimal (base 10) number | `ft_printf("%d", -42)` → `-42` |
| `%i` | Prints an integer in base 10 | `ft_printf("%i", 42)` → `42` |
| `%u` | Prints an unsigned decimal (base 10) number | `ft_printf("%u", 42)` → `42` |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format | `ft_printf("%x", 255)` → `ff` |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format | `ft_printf("%X", 255)` → `FF` |
| `%%` | Prints a percent sign | `ft_printf("%%")` → `%` |

## 🚀 Usage

### 📦 Compilation

Your `Makefile` should produce `libftprintf.a`:

```bash
make        # Compiles the library
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Re-compiles the library
```

## 🚀 Usage
### 🛠️ Compilation
``` bash
make        # Compiles the library
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Re-compiles the library
```
## 💻 Integration
``` bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, the answer is %d.\n", "World", 42);
    return (0);
}
```
## 📥 Getting Started

### 🔧 Clone the Repository

To get a local copy of the project, run:

```bash
# Clone the repository
git clone https://github.com/masselgu/ft_printf.git

# Navigate to the project directory
cd ft_printf

# Build the library
make
```
