#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int handlers_c(va_list args);
int handlers_s(va_list args, int n);
int _printf(const char *format, ...);

#endif
