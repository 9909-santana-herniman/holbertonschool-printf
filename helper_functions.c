#include "main.h"

/**
 * print_number - Prints an integer
 * @args: List of arguments.
 * Return: Number of characters printed.
 */
int print_number_helper(unsigned int num);
int print_number(va_list args)
{
	int count = 0;
	unsigned int num; /* Store absolute value */
	int n = va_arg(args, int); /* Extract signed integer */
	
	/* Handle negative numbers */
	if (n < 0)
	{
		count += _putchar('-');
		num = -n; /* Convert to positive */
	}
	else
	{
		num = n; /* Use original number */
	}
	/* Recursively print numbers (except last one) */
	if (num / 10)
	{
		/* Recurse with va_list */
		count += print_number_helper(num / 10);
	}

	/* Print the last digit */
	count += _putchar((num % 10) + '0');

	return (count);
}
/**
* print_number_helper - helper for recursion
* @num: number to print.
* Return: Number of characters printed.
*/
int print_number_helper(unsigned int num)
{
	int count = 0;

	if (num /10)
		count += print_number_helper(num / 10);

	count += _putchar((num % 10) + '0');
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
