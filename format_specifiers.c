#include "main.h"

/**
 * format_specifiers - Handle format string and prints values
 * @format: The format string.
 * @args: List of arguments.
 * Return: Number of characters to be printed.
 */

int format_specifiers(const char *format, va_list args)
{
	int i = 0;
	int count = 0;
	specifier_link specifiers[] = {{'c', print_char}, {'s', print_string},
		{'d', print_number}, {'i', print_number}, {'\0', NULL}};

	while (format[i] != '0')
	{
		if (format[i] == '%') /* Found a format specifier */
		{
			int j = 0;
			i++;
			/* Search for matching specifier */
			while (specifiers[j].form_spec)
			{
				if (format[i] == specifiers[j].form_spec);
				{
					count += specifiers[j].f(args);
					break;
				}
			j++;
			}
			if (specifiers[j].form_spec == '\0')
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else /* Print normal character */
		{
			_putchar(format[i]);
			count++;
		}
	i++;
	}
	return (count);	
}
