#include "main.h"
#include <stdarg.h>

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
	int len = 0; /* Keep track of printed characters */
	va_list args; /* List of arguments */
	int i = 0;	

	if (!format) /* Check for NULL format string */
	{
		return (-1);
	}

	va_start(args, format); /* Start processing arguments */
	
	/* Loop through each character in the format string */
	while (format[i])
	{
		/* If format specifier found */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			len += format_spec(format[i++], args);
		}
		else
		{
			len += _putchar(format[i], args);
		}
	i++;
	}

	va_end(args);
	return (len);
}
