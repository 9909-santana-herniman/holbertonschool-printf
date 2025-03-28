#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct specif - specifiers
 * @ptr: pointer to specifiers
 * @f: functions for specifiers
 */
typedef struct specif
{
	char *ptr;
	int (*f)(va_list);
} op_t;


/* Functions to go here */
int _printf(const char *format, ...);
void print_number(int num);
int print_string(va_list args);
int print_char(va_list args);
int print_perc(va_list args);
int (*specif_func(const char *format))(va_list);

#endif
