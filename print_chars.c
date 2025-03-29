#include "main.h"

/**
 * print_char - Prints a single character.
 * @args: List of arguments.
 * Return: 1 since char is printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}
