#include "main.h"

/**
 * print_number - Prints an integer
 * @args: List of arguments.
 * Return: Number of characters printed.
 */

int print_number(va_list args)
{
	int count = 0;
	unsigned int num; /* Holds the absolute value of num */
	int n = va_arg(args, int);

	/* Handle negative numbers */
	if (n < 0)
	{
		count += putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	/* Recursively process the digits  */
	if (num / 10)
	{
		count += print_number(n / 10);
	}

	/* Print the last digit */
	count =+ _putchar((num % 10) + '0');

	return (count);
}

/**
 * print_string - Prints a string.
 * @args: The list of arguments.
 * Return: Number of characters printed.
 */

int print_string(va_list args)

{
	int count = 0;
	char *str = va_arg(args, char *);

	/* If the string is NULL, print "(null)" */
	if (!str)
	{
		str = "(null)";
	}

	while (*str) /* Iterate through each character in the string */
	{
		_putchar(*str);
		count++; /* Print character */
		str++; /* Move to next character */
	}
	return (count);
}

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
 * print_percent - Prints a percent sign (%)
 * @args: Unused list of arguments.
 * Return: Number of characters printed.
 */

int print_percent(va_list args)
{
	(void)args; /* unused parameter */
	return (_putchar('%'));
}

/**
 * _putchar - Prints a character to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
