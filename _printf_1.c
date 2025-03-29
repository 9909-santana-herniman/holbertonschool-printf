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
	len = format_specifiers(format, args);

	va_end(args);

	return (count);
}
