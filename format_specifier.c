#include "main.h"

/**
 * format_specifiers - handles format specifiers
 * @format: specifier
 * @args: arguments
 * Return: Character count printed
 */
int format_specifiers(char format, va_list args)
{
	int count = 0;

	switch (format)
	{
	case 'c':
		count += print_char(va_arg(args, &length));
		break;
	case 's':
		count += print_string(va_arg(args, &length));
		break;
	case 'd':
	case 'i':
		count += print_number(va_arg(args, &length));
	break;
	case '%':
		count += putchar('%');
		break;
	default:
		count += putchar('%');
		count += putchar(format);
		break;
	}
	return (count);
}
