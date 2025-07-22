#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
*struct type - the type of the char
*@str: the char
*@f: the function to use for the good type
*/

typedef struct type
{
	char *str;
	int (*f)(va_list arg);
} template;

int _printf(const char *format, ...);
int _strlen(char *s);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int get_type(char *format, va_list arg);

#endif
