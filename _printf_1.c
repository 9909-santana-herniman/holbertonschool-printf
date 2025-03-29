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

	if (!format) /* Check for NULL format string */
		return (-1);

	va_start(args, format); /* Start processing arguments */
	
	/* Loop through each character in the format string */
	while (*format)
	{
		if (*format == '%') /* Check for format specifier */
		{
			format++; /* Move to specifier character */
			if (*format == 'c') /* If specifier 'c' */
			{
				/* print char */
				len += _print_char(va_arg(args, int));
			}
			else if (*format == 's') /* If specifier 's'*/
			{
				len += print_string(va_arg(args, char *));
			}
			else if (*format == 'd' || *format == 'i')
			{
				len += print_number(va_arg(args, int));
			}
			else if (*format == '%')
			{
				len =+ putchar('%');
			}
			else /* Handle invalid specifiers */
			{
				len += putchar('%');
				len += putchar(*format);
			}
		}
		else /* Print normal characters */
		{
			len += putchar(*format);
		}
		
		format++; /* Move to next character */
	}

	va_end(args); /* Clean up argument list */
	return (len); /* Return the total number of characters printed */
}
