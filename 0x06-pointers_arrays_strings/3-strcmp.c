#include "holberton.h"

/**
* _strcmp - function that compares two strings
* @s1: char
* @s2: char
*
*
*/
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && *s2 != '\0' && (res = (*s1 - *s2)) == 0)
	{
		s1++;
		s2++;
	}
	return (res);
}
