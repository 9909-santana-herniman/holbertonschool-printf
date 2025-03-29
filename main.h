#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h> /* for va_list and macros */
#include <unistd.h> /* for write function */
#include <stdlib.h>

/* Main printf function */
int _printf(const char *format, ...); /* substitue printf function */

/* Helper functions */
void print_number(va_list args, int *count);
void print_string(va_list args, int *count);
void print_number(va_list args, int *count);
void print_percent(int *count);
void print_char(va_list args, int *count);

#endif
