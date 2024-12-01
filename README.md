## What is `_printf`

The `_printf` function is a custom implementation that mimics the behavior of the standard C `printf` function. It allows you to print formatted output to the console, just like `printf` does, but with a few twists and turns under the hood to understand how things really work in C.

This is a great way to learn about variadic functions, format specifiers, and how C handles different types of data for printing.

## Features

- A simple, custom implementation of `printf`, called `_printf`.
- Handles a variety of format specifiers, like `%d`, `%s`, `%c`, and more.
- Works with integers, strings, and characters.
- Handles errors for unsupported specifiers.
- Can be easily integrated into your C projects for formatted output.

## How to Use

Using `_printf` is super simple! Just include the header file, call `_printf()` with your format string and arguments, and boom, you've got formatted output!

### Example Code

```c
#include "_printf.h"

int main() {
    int num = 42;
    char character = 'A';
    char *str = "Hello, world!";

    _printf("Number: %d\n", num);
    _printf("Character: %c\n", character);
    _printf("String: %s\n", str);

    return 0;
}
