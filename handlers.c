#include "main.h"

/**
 * handle_specifier - Processes a single format specifier
 *
 * @format: format specifier to handle
 * @args: list of arguments for the specifier
 *
 * Return: number of characters printed for the specifier
 */

int handle_specifier(const char *format, va_list args)
{
	int ct = 0;

	if (!format)
		return (-1);

	switch (*format)
	{
		case 'c':
			ct += handlers_c(args);
			break;
		case 's':
			ct += handlers_s(args);
			break;
		case 'i':
		case 'd':
			ct += handlers_di(args);
			break;
		case '%':
			ct += _putchar('%');
			break;
		default:
			ct += _putchar('%');
			ct += _putchar(*format);
			break;
	}
	return (ct);
}

/**
 * handlers_c - handles the %c format specifier
 *
 * @args: list of variable arguments passed to _printf
 *
 * Return: number of characters printed
 */

int handlers_c(va_list args)
{
	int ct = 0;

	ct += _putchar(va_arg(args, int));

	return (ct);
}

/**
 * handlers_s - handles the %s format specifier
 *
 * @args: list of variable arguments passed to _printf
 * @n: count
 *
 * Return: number of characters printed
 */

int handlers_s(va_list args)
{
	char *sg = va_arg(args, char *);
	int ct = 0;

	if(!sg)
		sg = "(null)";

	while (*sg)
	{
	ct += _putchar(*sg);
	sg++;
	}
	return (ct);
}

/**
 * handlers_di - handles the conversion specifier 'd' and 'i'
 *
 * @args: variadic arguments list containing integers to print
 *
 * Return: number of characters printed
 */

int handlers_di(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	char buffer[20];
	int m = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	do

	{
		buffer[m++] = (num % 10) + '0';
		num /= 10;
	}

	while (num > 0);

	while (m--)
	{
		count += _putchar(buffer[m]);
	}
	return (count);
}
