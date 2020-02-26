#include "holberton.h"

/**
* wildcmp - write a function that compares two strings
* @s1: string1
* @s2: string2
* Return: returns 1 if identical
*/

int wildcmp(char *s1, char *s2)
{
	int current, current2;

	for (current = 0, current2 = 0; s1[current] != '\0'; current++)
	{
		if (s1[current] != s2[current2] && s2[current2] != '*')
			return (0);
		else if (s2[current2] == '*' && s2[current2 + 1] == s1[current + 1])
			current2++;
		else if (s2[current2] == s1[current])
			current2++;
	}
	if (s2[current2] != '*' && s2[current2] != '\0')
		return (0);
	return (1);
}

