#include "main.h"

/**
*_strlen - calculate the size of a string
*@s: string to get size of
*Return: the size of the string as an int
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
