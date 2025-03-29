#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h> /* for va_list and macros */
#include <unistd.h> /* for write function */
#include <stdlib.h>
#include <stddef.h>

/* Functions prototypes */
int _printf(const char *format, ...); /* substitue printf function */

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int print_number_helper(unsigned int num);
int _putchar(char c);

#endif
