#include "main.h"

/**
 * print_number - Prints an integer recursively
 * @num: The integer to print
 * Return: Number of characters printed.
 */

int  print_number(int n)
{
	int count = 0;
	unsigned int num; /* Holds the absolute value of num */

	/* Handle negative numbers */
	if (num < 0)
	{
		count += _putchar('-');
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
 * print_string - Prints string character by character.
 * @str: The input string to print.
 * Return: Number of characters printed
 */

int print_string(char *str)

{
	int count = 0;

	/* If the string is NULL, print "(null)" */
	if (!str)
	{
		str = "(null)";
	}

	whlie (*str) /* Iterate through each character in the string */
	{
		count += _putchar(*str); /* Print character */
		str++; /* Move to next character */
	}
	return (count);
}

/**
 * print_char - print single character.
 * @c: Character to print.
 * Return: 1 since char is printed.
 */

int print_char(c)

{
	/* Uses _putchar to print */
	return _putchar(c);

}
