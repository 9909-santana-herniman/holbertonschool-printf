#include <unistd.h>
#include <stdarg.h>

/**
 * print_number - Prints an integer recursively
 * @num: The integer to print
 */
void print_number(int num)
{
	char digit;

	/* Handle negative numbers */
	if (num < 0)
	{
		putchar('-');
		n = -num;
	}

	/* Recursively print_number for all digits ex for last one */
	if (num / 10)
		print_number(n / 10);

	/* Print the last digit */
	putchar((num % 10) + '0')
}

/**
 * custom_printf - Custom printf implementation for %d and %i specs
 * @format: Format string containing text and specs
 *
 * Return: Number of characters printed (excluding null byte)
 */
void custom_printf(const char *format, ...)
{
	va_list args;


	va_start(args, format); /* Initialize variable arguments list */

	/* Loop through each character in format string */
	while (*fomat)
	{
		/* Check for format specifier */
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int num = va_arg(args, int); /* Get next integer argument */

			print_number(num);
			format += 2; /* Skip specifier character */
		}
		else
		{
			/* Print non-specifier characters as-is */
			putchar(*format);
			format++;
		}

	}

	va_end(args); /* Clean up variable arguments list */

}
