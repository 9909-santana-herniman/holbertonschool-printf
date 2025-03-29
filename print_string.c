#include "main.h"

/**
 * print_string - Prints a string to stdout
 * @str: String to print.
 * Return: The character count
 */

int print_string(char *str)
{
	int count = 0;

	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		count += _putchar(*str++);
	}
	return (count);
}
