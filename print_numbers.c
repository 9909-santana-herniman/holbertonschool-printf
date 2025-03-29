#include "main.h"

/**
 * print_number - Prints an integer
 * @args: List of arguments.
 * @count: Pointer to character count.
 */

void print_number(va_list args, int *count)
{
        unsigned int num; /* Store absolute value */
        int n = va_arg(args, int); /* Extract signed integer */
	char buffer[20];
	int i = 0;

        /* Handle negative numbers */
        if (n < 0)
        {
                putchar('-');
		(*count)++;
                num = -n; /* Convert to positive */
        }
        else
        {
                num = n; /* Use original number */
        }
        
	/* Convert number to string in reverse */

	do 
	{
		buffer[i++] = (num %10) + '0';
		num /= 10;
	} while (num > 0);

	/* Print digits in correct order */
	while (i > 0)
	{
		putchar(buffer[i--]);
		(*count)++;
	}
}
