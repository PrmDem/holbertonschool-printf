#include "main.h"

/**
*print_hexa - print an integer in hexadecimal
*@arg: the integer
*Return: write int
*/

int print_hexa(va_list arg)
{
	long int n;
	int i = 0, count = 0;
	char buffer[12];

	n = va_arg(arg, int);

	if (n == 0)
		count += write(1, "0", 1);

	if (n < 0)
	{
		n = -n;
		n = 4294967296 - n;
	}

	while (n > 0)
	{
		if (n % 16 < 10)
			buffer[i] = (n % 16) + '0';
		else
			buffer[i] = ((n % 16) % 10) + 'A';


		n /= 16;
		i++;

	}
	while (i--)
		count += write(1, &buffer[i], 1);


	return (count);
}


/**
*print_hexa_low - print an interger in hexadecimal
in lowercase
*@arg: the integer
*Return: write int
*/

int print_hexa_low(va_list arg)
{
	long int n;
	int i = 0, count = 0;
	char buffer[12];

	n = va_arg(arg, int);

	if (n == 0)
		count += write(1, "0", 1);

	if (n < 0)
	{
		n = -n;
		n = 4294967296 - n;
	}

	while (n > 0)
	{
		if (n % 16 < 10)
			buffer[i] = (n % 16) + '0';
		else
			buffer[i] = ((n % 16) % 10) + 'a';


		n /= 16;
		i++;

	}
	while (i--)
		count += write(1, &buffer[i], 1);


	return (count);
}

/**
*print_octal - print an integer in octal
*@arg: the integer
*Return: write int
*/

int print_octal(va_list arg)
{
	long int n;
	int i = 0, count = 0;
	char buffer[12];

	n = va_arg(arg, int);

	if (n == 0)
		count += write(1, "0", 1);

	if (n < 0)
	{
		n = -n;
		n = 4294967296 - n;
	}

	while (n > 0)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}

/**
*print_unsigned - print an integer in usigned integer
*@arg: the integer
*Return: write int
*/

int print_unsigned(va_list arg)
{
	unsigned int n;
	int i = 0, count = 0;
	char buffer[12];

	n = va_arg(arg, int);

	if (n == 0)
		count += write(1, "0", 1);

	while (n > 0)
	{
		buffer[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}
