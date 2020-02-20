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
		if (c[current] >= 'a' && c[current] <= 'z')
			c[current] = c[current] - 32;
	}
	return (c);
}
