#include "holberton.h"

/**
* _strchr - function that locates a character in a string
* @s:
* @c:
* Return:
*/

char *_strchr(char *s, char c)
{
	unsigned int current;

	for (current = 0; s[current] != '\0'; current++)
		;
	if (s[current] == c)
		return (&s[current]);
	else
		return (0);
}
