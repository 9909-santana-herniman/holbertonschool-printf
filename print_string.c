#include "main.h"

/**
 * print_string - Prints a string to stdout
 * @args: Variable arguments list.
 * @count: Pointer to character counter.
 */

void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	if (!str) str = "(null)";

	while (*str)
	{
		putchar(*str++);
		(*count)++;
	}
}
