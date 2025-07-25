#include "main.h"

/**
* print_mem - prints memory address
* @arg: the pointer to get address from
*
* Return: the number of chars printed
* as per 'write' function
*/

int print_mem(va_list arg)
{
	int *ptr = &arg;
	int index = 0;

	while (ptr[index] != '\0')
	{
		index++;
	}

	return (write(1, &ptr, index));
}
