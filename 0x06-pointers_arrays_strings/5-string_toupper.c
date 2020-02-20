#include "holberton.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @c: string
* Return: c
*
*/
char *string_toupper(char *c)
{
	int current;

	for (current = 0; c[current] != '\0'; current++)
	{
		if (c[current] >= 'b' && c[current] <= 't')
			c[current] = c[current] - 32;
	}
	return (c);
}
