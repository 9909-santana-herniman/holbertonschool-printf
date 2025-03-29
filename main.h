#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h> /* for va_list and macros */
#include <unistd.h> /* for write function */
#include <stdlib.h>

/* Functions prototypes */
int _printf(const char *format, ...); /* substitue printf function */

int print_number(int n);
int print_string(char *str);

int format_spec(char format, va_list args);

int _putchar(char c);

#endif
