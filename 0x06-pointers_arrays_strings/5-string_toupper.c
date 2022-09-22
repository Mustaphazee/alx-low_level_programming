#include "main.h"

/**
 * string_toupper - converting any string to upper case
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		    x[i] _= 32;
	}

	return (x);
}
