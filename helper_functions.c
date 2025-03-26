#include "main.h"

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
