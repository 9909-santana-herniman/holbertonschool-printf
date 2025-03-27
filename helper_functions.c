#include "main.h"

/**
 * print_number - Prints an integer recursively
 * @num: The integer to print
 */

void print_number(int num)
{
	char digit;
	unsigned int n;

	/* Handle negative numbers */
	if (num < 0)
	{
		putchar('-');
		n = -num;
	}

	/* Recursively print_number for all digits ex for last one */
	if (num / 10)
	{
		print_number(n / 10);
	}

	/* Print the last digit */
	putchar((num % 10) + '0')
}

/**
 * print_string - prints string from list
 * @args: input arguments
 * Return: number of characters printed
 */

int print_string(va_list args)

{
	char *string;
	int j;
	int length = 0;

	string = va_arg(args, char *);
	/* initializing string arg in list of args */
	if (!string)
	{
		string = ("null");
	}

	for (j = 0; string[j] != '\0'; j++)
	/* now moving along the characters in string */

	{
		putchar(string[j]);
		/* printing each character */

		length++;

	}

	return (length);
}

/**
 * print_char - prints character from the list
 * of args
 * @args: input arguments
 * @length: the amount of characters printed
 * Return: length
 */

int print_char(va_list args, int *length)

{
	putchar(va_arg(args, int);

	(*length)++;

	return (length);

}
