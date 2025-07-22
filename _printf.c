#include "main.h"

/**
*_printf - print everything
*@format: the format to print
*Return: the write of the string
*/

int _printf(const char *format, ...)
{
	int i;
	va_list arg;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			get_type(&format[i + 1], arg);
		}
	}

	va_end(arg);
	return (write(1, format, i));
}
