#include "main.h"

/**
 * print_char - Prints a single character.
 * @args: List of arguments.
 * Return: 1 since char is printed.
 */

int _print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Prints a string.
 * @args: List of arguments.
 * Return: Number of characters printed.
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if(!str) /* Handle NULL strings */
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: Unused list of arguments.
 * Return: Number of characters printed
 */

int print_percent(va_list args)
{
	(void)args; /* unused parameters */
	return (_putchar('%'));
}
