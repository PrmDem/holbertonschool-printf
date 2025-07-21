#include "main.h"

/**
*_strlen - calculate the size of a string
*@s: the string
*Return: the size of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
che
