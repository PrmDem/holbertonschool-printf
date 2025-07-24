#include "main.h"

int main(void)
{
	int len, len2;
	char *str = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("The string is null : [%s]\n", str);
	printf("The string is null : [%s]\n", str);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("More percent : [%%%%%%%%%%]\n");
	printf("More percent : [%%%%%%%%%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("More unknow [%r%r%r]\n");
	printf("More unknow [%r%r%r]\n");
	_printf("Min_int : %d\n", -2147483648);
	printf("Min_int : %d\n", -2147483648);
	return (0);
}
