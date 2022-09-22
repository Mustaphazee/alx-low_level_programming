#include "main.h"

/**
 * string_toupper - chamges all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		    x[i] = x[i] - 32;
		int++;
	}
	return (x);
}
