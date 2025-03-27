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
	
	if (!format)
		return (-1);
	
	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
		
	{
		if (format[index] == '%') 
		{
			if (format[index + 1] == '\0')
				return (-1);

			else if (format[index + 1] == '%')
			{
				putchar('%');
				length++;
				index++;
			}

			else if (specif_func(format[index + 1]) != NULL)
			{
				length += (specif_func(format[index + 1])(args);
				index++;
			}
			else
			{
				putchar(format[index]);
				length++;
			}

		}
		else

		{
			putchar(format[index]); 
			length++; 
		} 
		
	}
	va_end(args);
	return (length);

}

/**
 * specif_func - sorting specifiers and functions
 * @ch: character
 *
 * Return: 0
 */

int (*specif_func(const char ch))(va_list)
{
	op_t ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};

	int j;

	for (j = 0; ops[j].ptr != '\0'; j++)
	{
		if (ops[j].ptr == ch)
		{
			return (ops[j].f);
		}
	}
	return (0);
}


