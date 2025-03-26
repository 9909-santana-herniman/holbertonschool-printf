#include "main.h"

void print_string(va_list args)

{
	char *string;
	int j;
	int length = 0;
	string = va_arg(args, char * );
	/* initializing string arg in list of args */
	if (!string)
	       string = ("null");

	for (j = 0; string[j] != '\0'; j++)
	/* now moving along the characters in string */

	{
		putchar(string[j]);
		/* printing each character */

		length++;

	}

	return (length);

}
