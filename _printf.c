#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;

	va_start(args, *format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					n += handlers_c(args);
					break;
				case 's':
					n += handlers_s(args, n);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					break;
			}

		}
		else
		{
			n += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (n);

}
