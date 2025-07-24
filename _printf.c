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
