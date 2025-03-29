#include "main.h"

/**
 * print_number - Prints an integer
 * @args: List of arguments.
 * Return: Number of characters printed.
 */

int print_number(va_list args)
{
        int count = 0;
        unsigned int num; /* Store absolute value */
        int n = va_arg(args, int); /* Extract signed integer */

        /* Handle negative numbers */
        if (n < 0)
        {
                count += _putchar('-');
                num = -n; /* Convert to positive */
        }
        else
        {
                num = n; /* Use original number */
        }
        /* Recursively print numbers (except last one) */
        if (num / 10)
        {
                /* Recurse with va_list */
                count += print_number_helper(num / 10);
        }

        /* Print the last digit */
        count += _putchar((num % 10) + '0');

        return (count);
}
