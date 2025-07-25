#include "main.h"

/**
*_printf - prints input to standard output stream
* according to a format
*@format: the string to print
*Return: number of chars printed by 'write' function
*/

int _printf(const char *format, ...)
{
	int i;
	va_list arg;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += (get_type(&format[i + 1], arg));
			i += 2;
		}

		else
		{
			count += write(1, &format[i], 1);
			i++;
		}
	}

	va_end(arg);
	return (count);
}
