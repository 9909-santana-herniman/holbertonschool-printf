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
/*
int main(void)

  just for testing

 {
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("Percent:[%%]\n");
	_printf("Let's print a sentence.\n");
	_printf("%c", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let's see if the cast is correclty done: %c. Did it work?\n", 48);
	_printf("%s", "This sentence is rerieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	 _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%\n");
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ",'.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	_printf(str);
	_printf("man gcc:\n%s", str);
	_printf(NULL);
	_printf("%c", '\0');
	_printf("%");
	_printf("%!\n");
	_printf("%K\n");

	return (0);
}
*/

int _printf(const char *format, ...)

{
	int length = 0;
	int index = 0;	
	va_list args; 
	va_start(args, format); 
	
	if (!format)
		exit(98);
		return (-1);
	for (index = 0; format[index] != '\0'; index++)
		
	{
		if (format[index] == '%') 
		{
			if (format[index + 1] == 'c')
				print_char(args, &length);

			else if (format[index + 1] == 's')
				print_string(args, &length);

			else if (format[index + 1] == 'd' || format[index + 1] == 'i')
				print_number(args, &length)
			
			else if (format[index + 1] == '%')
			{
				putchar('%');
				length++;
			}

			else if (format[index + 1] == '\0')
				continue;

			else
			{
				putchar('%');
				putchar(format[index + 1]);
				length += 2;
			}

		}

		else 

		{
			putchar(format[index]); 

			length++; 
		} 
		
	}
	if (length == 0)
		return (-1);
	va_end(args);
	return (length);

}
