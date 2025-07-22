#include "main.h"

/**
* get_type - checks specifier in given string
* @format: string given as input
* @arg: value to replace specifier
*
* Return: number of written chars
* as per 'write' function
*/

int get_type(char *format, va_list arg)
{
	int index = 0;

	template types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"d", print_decimal},
		{'%', print_percent},
		{NULL, NULL}
	};

	while (types[index].str != NULL)
	{
		if (*format == *(types[index].str))
			return (types[index].f(arg));

		index++;
	}

	return (NULL);
}
