#include "main.h"

/**
 * _printf - small version of printf
 * handles conversions c, s, d, i and prints %
 * @format: Format string with optional specifiers.
 *
 * Return: number of printed characters
 * excluding '\0'
 */

int _printf(const char *format, ...)
{
	int count = 0; /* Keep track of printed characters */
	va_list args; /* List of arguments */	

	if (!format) /* Check for NULL format string */
	{
		return (-1);
	}

	va_start(args, format); /* Start processing arguments */
	
	/* Loop through each character in the format string */
	while (*format)
	{
		/* If format specifier found */
		if (*format == '%')
		{
			format++; /* Move past '%' */
		
			switch (*format)
			{
			case 'c':
				print_char(args, &count);
				break;
			case 's':
				print_string(args, &count);
				break;
			case 'd':
			case 'i':
				print_number(args, &count);
				break;
			case '%':
				print_percent(&count);
				break;
			default:
				putchar('%');
				putchar(*format);
				count += 2;
			}
		}
		else
		{
			putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
