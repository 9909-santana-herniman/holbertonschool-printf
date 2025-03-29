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
	int len = 0; /* Keep track of printed characters */	
	va_list args; /* List of arguments */
       int i = 0;	

	if (!format) /* Check for NULL format string */
		return (-1);

	va_start(args, format); /* Start processing arguments */
	
	/* Loop through each character in the format string */
	while (format[i] != '\0')
	{
		/* If format specifier found */
		if (format[i] == '%' && format[i +1] != '\0')
		{
			i++; /* Skip '%' */
			switch (format[i]) /* Match the next character */
			{
				case 'c':
					len += print_char(args);
					break;
				case 's':
					len += print_string(args);
					break;
				case 'd':
				case 'i':
					len += print_number(args);
					break;
				case '%':
					len += _putchar('%');
					break;
				default:
					len += _putchar('%');
					len += _putchar(format[i]);
					break;
			}
		}
		else
		{
			len =+ _putchar(format[i]);
		}
	i++;
	}

	va_end(args);

	return (len);
}
