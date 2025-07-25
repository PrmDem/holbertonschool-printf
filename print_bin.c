#include "main.h"

/**
*print_bin - print an integer in binary
*@arg: the integer
*Return: write int
*/

int print_bin(va_list arg)
{
	unsigned long int n;
	int i = 0, count = 0;
	char buffer[64];

	n = va_arg(arg, unsigned int);

	if (n == 0)
		count += write(1, "0", 1);

	while (n > 0)
	{
		buffer[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}
