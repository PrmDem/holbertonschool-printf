#include "main.h"

/**
*print_char - print a character
*@arg: the character
*Return: the write of char
*/

int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (write(1, &c, 1));
}

/**
*print_string - print a string
*@arg: the string
*Return: the write of the string
*/

int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	return (write(1, str, _strlen(str)));
}

/**
*print_percent - print %
*@arg: the char %
*Return: write %
*/

int print_percent(va_list arg)
{
	arg = NULL;
	char c = '%';

	return (write(1, &c, 1));
}
