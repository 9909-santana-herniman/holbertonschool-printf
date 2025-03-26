#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Functions to go here */
int _printf(const char *format, ...);
void print_number(int num);
int print_string(va_list args);
int print_char(va_list, int *length);

#endif
