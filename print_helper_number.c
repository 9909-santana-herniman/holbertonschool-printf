#include "main.h"

/**
 * print_number_helper - Helper function to print digits recursively.
 * @num: The number to print.
 * Return: The number of character printed.
 */

int print_number_helper(unsigned int num)
{
	int count = 0;

	if (num / 10)
	{
		count += print_number_helper(num / num);
	}
	count += _putchar((num % 10) + '0');

	return (count);
}
