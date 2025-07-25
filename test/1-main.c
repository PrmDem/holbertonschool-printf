#include "main.h"
#include <limits.h>


int main(void)
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned hexadecimal:[%u]\n", ui, ui);
	printf("Unsigned hexadecimal:[%u] \n", ui, ui);
	_printf("zero: %u\n", 0);
	printf("zero: %u\n", 0);
	_printf("unsigned : %u\n", -2);
	printf("unsigned : %u\n", -2);
	_printf("unsigned 10 : %u\n", -10);
	printf("unsigned 10 : %u\n", -10);
	_printf("the min : %u\n", INT_MIN);
	printf("the min : %u\n", INT_MIN);
	return (0);
}
