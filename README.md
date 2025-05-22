# ft_printf

ft_printf is a C project from the Hive curriculum in which I reimplemented the core functionality of the standard `printf` function. This project demonstrates a deeper understanding of variadic functions, string parsing, and formatted output in C.

## 🚀 Project Overview

The goal of ft_printf is to create a custom version of the `printf` function with behavior as close as possible to the original. This project introduces key programming concepts such as:

- Variadic functions (`stdarg.h`)
- Parsing and processing format specifiers
- Outputting formatted data types

The final implementation must match the behavior of the original `printf` and handle various format specifiers reliably and efficiently.

## 📁 Project Scope

### ✅ Supported Format Specifiers

The custom `ft_printf` function handles the following conversions:

- `%c` – Character
- `%s` – String
- `%p` – Pointer address
- `%d` / `%i` – Signed decimal integer
- `%u` – Unsigned decimal integer
- `%x` / `%X` – Unsigned hexadecimal integer (lowercase/uppercase)
- `%%` – Literal percent sign

## 🔧 Compilation & Usage

The project includes a `Makefile` for easy compilation.

## 🧠 What I Learned

- Building a flexible formatting engine from scratch
- Handling different data types with variadic arguments
- Implementing string parsing and type conversion manually
- Managing edge cases and undefined behaviors in C
- Improving my understanding of standard output functions and how they work under the hood
