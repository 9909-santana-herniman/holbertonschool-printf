#include "main.h"

/**
 * format_spec - Handles format specifiers
 * @format: The delimiter '%'.
 * @args: The arguments
 * Return: Character count printed.
 */

int format_spec(char format, va_list args)
{
	int count = 0;

	switch (format)
	{
		case 's':
			count += print_string(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += print_number(va_arg(args, int));
			break;
		case 'c':
			count += _putchar(va_arg(args, int));
		default:
			count += _putchar('%');
			count += _putchar(format);
			break;
	}
	return (count);
}
