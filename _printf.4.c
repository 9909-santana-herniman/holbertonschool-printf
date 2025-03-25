#include <unistd.h>
#include <stdarg.h>

/**
 * print_number - Prints an integer recursively
 * @n: The integer to print
 */
void print_number(int n)
{
	char digit;

	/* Handle negative numbers */
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	/* Recursively print higher-order digits */
	if (n / 10)
		print_number(n / 10);

	/* Convert last digit to ASCII and print */
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

/**
 * custom_printf - Custom printf implementation for %d and %i specifiers
 * @format: Format string containing text and specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int custom_printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format); /* Initialize variable arguments list */

	/* Process each character in format string */
	for (ptr = format; *ptr; ptr++)
	{
		/* Check for format specifier */
		if (*ptr == '%' && (*(ptr + 1) == 'd' || *(ptr + 1) == 'i'))
		{
			int num = va_arg(args, int); /* Get next integer argument */

			print_number(num);
			ptr++; /* Skip specifier character */
		}
		else
		{
			/* Print regular characters */
			write(1, ptr, 1);
		}
		count++;
	}

	va_end(args); /* Clean up variable arguments list */
	return (count);
}
