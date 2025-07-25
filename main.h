#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
*struct type - type associated to char
*@str: the char provided after %
*@f: the appropriate function to redirect to
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
int get_type(const char *format, va_list arg);
int print_int(va_list arg);
int print_hexa(va_list arg);
int print_hexa_low(va_list arg);
int print_octal(va_list arg);
int print_unsigned(va_list arg);
int print_bin(va_list arg);

#endif
