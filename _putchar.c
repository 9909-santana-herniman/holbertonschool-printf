#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character to stdout
 * @c: The character to print
 * Return: 1 on succes, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
