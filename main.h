#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/* Functions prototypes */
int _printf(const char *format, ...);
int format_specifiers(const char *format, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int _putchar(char c);

/**
 * struct specifier - Struct to link format specifiers to functions.
 * @specifier - The format specifier.
 * @f: The corresponding function pointer.
 */

typedef struct specifier
{
	char form_spec;
	int (*f)(va_list);
}specifier_link;

#endif
