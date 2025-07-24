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
	char c;

	(void)arg;

	c = '%';

	return (write(1, &c, 1));
}

/**
*print_int - print an  interger
*@arg: the integer
*Return: write int
*/

int print_int(va_list arg)
{
	long int n;
	int i = 0, count = 0;
	char buffer[12];

	n = va_arg(arg, int);

	if (n == 0)
	{
		count += write(1, "0", 1);
	}

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	while (n > 0)
	{
		buffer[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}

	while (i--)
	{
		count += write(1, &buffer[i], 1);
	}

	return (count);
}
