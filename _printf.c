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
	int count = 0;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += (get_type(&format[i + 1], arg));
			i += 2;
		}
		count += write(1, &format[i], 1);
	}

	va_end(arg);
	return (count);
}
