#include "main.h"

/**
 * _printf - small version of printf
 * handles conversions c, s, d, i and prints %
 * @format: character string composed of
 * zero or more directives
 *
 * Return: number of printed characters
 * excluding '\0'
 */

 int _printf(const char *format, ...);

int main(void) 
/* just for testing */

{
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
	return (0);
}

int _printf(const char *format, ...)

{
	int length = 0;
	int index = 0;	
	/* counts the number of printed characters */
	va_list args; 
	/* list of arguments for the _printf variadic function */
	va_start(args, format); 
	/* starting position */
	
	for (index = 0; format[index] != '\0'; index++)
	/* going through the format array */

	{
		if (format[index] == '%') 
		/* if we catch '%' */

		{
			index++; 
			/* keep moving to the next character */
			
			if (format[index] == '%')

			{
				putchar(format[index]);
				length++;
			}


			else if (format[index] == 's') 
			/* if we encounter 's' as in '%s' */

			{
				char *string;
				int j;
				string = va_arg(args, char * ); 
				/* initializing string arg in list of args */

				for (j = 0; string[j] != '\0'; j++) 
				/* now moving along the characters in string */

				{
					putchar(string[j]); 
					/* printing each character */

					length++; 
					/* counting printed out characters */

				}

			}
			else if (format[index] == 'c')

			{
				putchar(format[index]);
				length++;
			}

		}

		else 
		/* if no '%' encountered */

		{
			putchar(format[index]); 
			/* print the string thats there within " " */

			length++; 
			/* keep track of printed chars */

		}
		
		

	}

	va_end(args);

	return (length);

}
