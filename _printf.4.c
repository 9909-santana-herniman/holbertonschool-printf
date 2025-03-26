#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer recursively
 * @num: The integer to print
 */
void print_number(int num)
{
	unsigned int n;
	/* Handle negative numbers */
	if (num < 0)
	{
		putchar('-');
		n = -num;
	}
	else
	{	
		n = num;
	}
	/* Recursively print_number for all digits ex for last one */
	if (n / 10)
		print_number(n / 10);

	/* Print the last digit */
	putchar((n % 10) + '0');
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
	while (*format != '\0')
	{
		/* Check for format specifier */
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int n = va_arg(args, int); /* Get next integer argument */

			print_number(n);
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

	int main(void)
	{     
	/* For testing*/
	custom_printf("Positive: %d\n", 42);
	custom_printf("Negative: %i\n", -123);
	custom_printf("Zero: %d\n", 0);
	custom_printf("Large positive: %d\n", 2147483647);
	custom_printf("Large negative: %i\n", -2147483648);
	custom_printf("Multiple: %d %i %d\n", 10, 20, 30);
	custom_printf("No specifiers\n");

	return (0);
}
