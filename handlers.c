#include "main.h"

int handlers_c(va_list args)
{
	char cr = va_arg(args, int);

	_putchar(cr);
	_putchar('\n');
	return (cr);
}

int handlers_s(va_list args, int n)
{
	char *sg = va_arg(args, char *);

	while (*sg != '\0')
	{
	n += _putchar(*sg);
	sg++;
	}
	_putchar('\n');
	return (n);
}
