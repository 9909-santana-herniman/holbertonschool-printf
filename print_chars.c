#include "main.h"

/**
 * print_char - Prints a single character.
 * @args: List of arguments.
 * @count: Pointer to character counter.
 */

void print_char(va_list args, int *count)
{
	char c = va_arg(args, int); /* Char promotes to int in variadics */
	putchar(c);
	(*count)++;
}
